/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1400757B4
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiGetWorkingSetSwapSupport @ 0x140075EDC (MiGetWorkingSetSwapSupport.c)
 *     MiOutSwapKernelStackPage @ 0x1400B5674 (MiOutSwapKernelStackPage.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // r14
  unsigned int v9; // r13d
  __int64 DemandZeroPte; // rbx
  int v11; // edx
  LONG *SharedVm; // rdi
  KIRQL v13; // al
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 WorkingSetSwapSupport; // rsi
  __int64 v17; // rdx
  volatile LONG *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  __int64 v23; // r15
  __int64 TransitionPte; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 *i; // rsi
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  int *v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  __int64 *v42; // [rsp+30h] [rbp-58h]
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-50h]
  KIRQL v44; // [rsp+90h] [rbp+8h]
  __int64 v45; // [rsp+98h] [rbp+10h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+18h]
  __int64 v47; // [rsp+A8h] [rbp+20h]

  v46 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v45 = v5;
  v41 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (a2[1] >> 9) & 0x7FFFFFFFF8LL;
  v47 = v41 << 25 >> 16;
  v8 = (_QWORD *)v41;
  v42 = (__int64 *)(v7 - 0x98000000008LL);
  v9 = ((__int64)(v5 - v41) >> 3) + 1;
  DemandZeroPte = MiMakeDemandZeroPte(31LL, 1LL, v5, 0xFFFFF68000000000uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v11);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v13 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v44 = v13;
  *(_QWORD *)(a2[2] - 8LL) = a1;
  v14 = *(_QWORD *)(a1 + 544);
  v15 = v14 + 1280;
  v40 = MiPartitionIdToPointer(*(_WORD *)(v14 + 1444));
  WorkingSetSwapSupport = 0LL;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v15, v40) > 2 )
  {
    v18 = (volatile LONG *)(v17 + 1048);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v17 + 1048));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v15, v19) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v21, v20);
  }
  v22 = v45;
  do
  {
    v45 = MI_READ_PTE_LOCK_FREE(v8);
    v23 = MI_GET_PAGE_FRAME_FROM_PTE(&v45);
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v8);
    TransitionPte = MiMakeTransitionPte(v23, 31LL);
    v45 = TransitionPte;
    *v8 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v8, TransitionPte) )
      MiWritePteShadow(v26, v25);
    MiLockAndDecrementShareCount(48 * v23 - 0x58000000000LL, 0LL);
    ++v8;
  }
  while ( (unsigned __int64)v8 <= v22 );
  v27 = v47;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel(v40 + 262);
  for ( i = (__int64 *)(v41 - 8); i != v42 && (*(_BYTE *)i & 1) != 0; --i )
  {
    v45 = MI_READ_PTE_LOCK_FREE(i);
    v29 = MI_GET_PAGE_FRAME_FROM_PTE(&v45);
    v30 = 48 * v29 - 0x58000000000LL;
    v31 = 48 * (*(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v30);
    if ( *(_WORD *)(v30 + 32) == 1 )
    {
      *i = DemandZeroPte;
      if ( (unsigned int)MiPteInShadowRange(i, v32) )
        MiWritePteShadow(v36, DemandZeroPte);
      *(_QWORD *)(v30 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v30 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    }
    else
    {
      v33 = MiMakeTransitionPte(v29, 31LL);
      v45 = v33;
      *i = v33;
      if ( (unsigned int)MiPteInShadowRange(i, v33) )
        MiWritePteShadow(v35, v34);
    }
    v37 = MiDecrementShareCount(v30);
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v37 != 3 )
    {
      MiLockPageAtDpcInline(v31);
      MiDecrementShareCount(v31);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    ++v9;
    v27 -= 4096LL;
  }
  MiInsertTbFlushEntry(v46, v27, v9);
  LOBYTE(v38) = v44;
  return MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v38);
}
