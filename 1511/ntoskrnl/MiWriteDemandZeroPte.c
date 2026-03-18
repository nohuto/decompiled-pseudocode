/*
 * XREFs of MiWriteDemandZeroPte @ 0x1400BAC24
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140462F18 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiWriteDemandZeroPte(_QWORD *BugCheckParameter1)
{
  _KPROCESS *Process; // rsi
  KIRQL v3; // bp
  __int64 v4; // rdx
  __int64 v5; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  MiMakeSystemAddressValid((__int64)BugCheckParameter1, 0LL, 0LL, v3, 1);
  *BugCheckParameter1 = 128LL;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter1) )
    MiWritePteShadow(BugCheckParameter1, 128LL);
  LOBYTE(v4) = v3;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v4, v5);
}
