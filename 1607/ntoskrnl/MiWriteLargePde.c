/*
 * XREFs of MiWriteLargePde @ 0x1401F5DD4
 * Callers:
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiWriteLargePde(__int64 a1, ULONG_PTR a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  MiMakeSystemAddressValid(a2, 0LL, a4, v8, 1);
  v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v10);
  *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiIncreaseUsedPtesCount(v10, 1LL);
  *(_QWORD *)a2 = a3;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(v12, v11);
  LOBYTE(v11) = v9;
  return MiUnlockWorkingSetExclusive(v4, v11);
}
