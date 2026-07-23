/*
 * XREFs of MiWriteDemandZeroPte @ 0x14007BD20
 * Callers:
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14046C9F0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiWriteDemandZeroPte(__int64 *BugCheckParameter4, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 DemandZeroPte; // rbx
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rdi
  KIRQL v8; // al
  KIRQL v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx

  DemandZeroPte = MiMakeDemandZeroPte(4LL, a2, a3, a4);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  MiMakeSystemAddressValid((ULONG_PTR)BugCheckParameter4, 0LL, 0, v8, 1);
  *BugCheckParameter4 = DemandZeroPte;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v10) )
    MiWritePteShadow(v12, DemandZeroPte);
  LOBYTE(v11) = v9;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v11);
}
