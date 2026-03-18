/*
 * XREFs of MiDeleteKernelStackPages @ 0x1400E1D60
 * Callers:
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDeleteKernelStackPages(_QWORD *a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  KIRQL v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  KIRQL v20; // [rsp+68h] [rbp+10h]

  v3 = a1;
  v5 = (unsigned __int64)&a1[a2];
  v20 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  v8 = v20;
  if ( (unsigned __int64)v3 < v5 )
  {
    while ( 1 )
    {
      v19 = MI_READ_PTE_LOCK_FREE(v3);
      v9 = v19;
      if ( (v19 & 1) == 0 )
        goto LABEL_10;
      v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v19) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v10, v11, v12);
      if ( v9 == MI_READ_PTE_LOCK_FREE(v3) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_11:
      if ( (unsigned __int64)v3 >= v5 )
      {
        v8 = v20;
        goto LABEL_13;
      }
    }
    *v3 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v3) )
      MiWritePteShadow(v3, 0LL);
    *(_QWORD *)(v10 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v13 = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
    v14 = v13 & 0xFFFFFFFFFLL;
    if ( (unsigned int)MiDecrementShareCount(v10) == 3 )
      ++a3[1];
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++a3[3];
    ++*a3;
    v17 = 48 * v14 - 0x58000000000LL;
    MiLockPageAtDpcInline(v17, v15, v16);
    MiDecrementShareCount(v17);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_10:
    ++v3;
    goto LABEL_11;
  }
LABEL_13:
  LOBYTE(v6) = v8;
  return MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v6, v7);
}
