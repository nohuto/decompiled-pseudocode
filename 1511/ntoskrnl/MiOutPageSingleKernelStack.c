/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1400052A8
 * Callers:
 *     <none>
 * Callees:
 *     MiOutSwapKernelStackPage @ 0x140004EB0 (MiOutSwapKernelStackPage.c)
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r13
  __int64 v6; // r13
  _QWORD *v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  volatile LONG *v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 v17; // r12
  unsigned __int64 *i; // rsi
  unsigned __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // r14
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  KIRQL v28; // [rsp+80h] [rbp+8h]
  unsigned __int64 v29; // [rsp+88h] [rbp+10h] BYREF
  __int64 v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v30 = a3;
  v5 = a2[2] - 8LL;
  v29 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v7 = (_QWORD *)v6;
  v31 = v6 << 25 >> 16;
  v8 = ((__int64)(v29 - v6) >> 3) + 1;
  v28 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  v9 = *(_QWORD *)(a1 + 544);
  v10 = MiPartitionIdToPointer(*(unsigned __int16 *)(v9 + 1460));
  v11 = 0LL;
  v26 = v10;
  if ( *(_QWORD *)(v9 + 1512) > 2uLL )
  {
    v12 = (volatile LONG *)(v10 + 1056);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 1056));
    if ( *(_QWORD *)(v9 + 1512) <= 2uLL )
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    else
      v11 = *(_QWORD *)(v9 + 1512);
  }
  v13 = v29;
  do
  {
    v29 = MI_READ_PTE_LOCK_FREE(v7);
    v14 = v29;
    v15 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v29) - 0x58000000000LL;
    if ( v11 )
      MiOutSwapKernelStackPage(v11, (__int64)v7);
    v16 = v14 & 0xFFFFFFFFFFFFF01EuLL | 0xBE0;
    v29 = v16;
    *v7 = v16;
    if ( (unsigned int)MiPteInShadowRange(v7) )
      MiWritePteShadow(v7, v16);
    MiLockAndDecrementShareCount(v15, 0LL);
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v13 );
  v17 = v31;
  if ( v11 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 1056));
  for ( i = (unsigned __int64 *)(v6 - 8); i != (unsigned __int64 *)v27 && (*(_BYTE *)i & 1) != 0; --i )
  {
    v29 = MI_READ_PTE_LOCK_FREE(i);
    v19 = v29;
    v20 = MI_GET_PFN_FROM_PTE(&v29);
    v21 = 48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v20);
    if ( *(_WORD *)(v20 + 32) == 1 )
    {
      *i = 992LL;
      if ( (unsigned int)MiPteInShadowRange(i) )
        MiWritePteShadow(i, 992LL);
      *(_QWORD *)(v20 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v20 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    }
    else
    {
      v22 = v19 & 0xFFFFFFFFFFFFF01EuLL | 0xBE0;
      v29 = v22;
      *i = v22;
      if ( (unsigned int)MiPteInShadowRange(i) )
        MiWritePteShadow(i, v22);
    }
    v23 = MiDecrementShareCount(v20);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 != 3 )
    {
      MiLockPageAtDpcInline(v21);
      MiDecrementShareCount(v21);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    ++v8;
    v17 -= 4096LL;
  }
  MiInsertTbFlushEntry(v30, v17, v8, 0LL);
  LOBYTE(v24) = v28;
  return MiUnlockWorkingSetExclusive(&dword_1402FFA80, v24);
}
