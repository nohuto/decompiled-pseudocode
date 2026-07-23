/*
 * XREFs of MiMarkKernelStack @ 0x140001D14
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140001B34 (MiAllocateKernelStackPages.c)
 *     MiMarkBootKernelStack @ 0x14078E4F0 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkKernelStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v5);
      v6 = v9;
      v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v7);
      if ( v6 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v8 = *(_QWORD *)(v7 + 40);
        *(_QWORD *)(v7 + 16) |= 0x3E0uLL;
        *(_QWORD *)v7 = a3;
        *(_QWORD *)(v7 + 40) = v8 & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
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
