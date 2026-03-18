/*
 * XREFs of MiMarkKernelStack @ 0x1400DFD18
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     MiMarkBootKernelStack @ 0x140763814 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkKernelStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    do
    {
      v11 = MI_READ_PTE_LOCK_FREE(v5);
      v6 = v11;
      v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v11) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v7, v8, v9);
      if ( v6 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v10 = *(_QWORD *)(v7 + 40);
        *(_QWORD *)(v7 + 16) |= 0x3E0uLL;
        *(_QWORD *)v7 = a3;
        *(_QWORD *)(v7 + 40) = v10 & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
        *(_BYTE *)(v7 + 35) = *(_BYTE *)(v7 + 35) & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v5 += 8LL;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    while ( v5 < a2 );
  }
}
