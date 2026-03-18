/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x1406C604C
 * Callers:
 *     VerifierKeInitializeTimer @ 0x1406C6044 (VerifierKeInitializeTimer.c)
 * Callees:
 *     KeCheckForTimer @ 0x1401C3440 (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeTimerEx(struct _KTIMER *BugCheckParameter3, TIMER_TYPE Type)
{
  VfUtilSynchronizationObjectSanityChecks(BugCheckParameter3, 64LL);
  KeCheckForTimer((ULONG_PTR)BugCheckParameter3, 64LL);
  pXdvKeInitializeTimerEx(BugCheckParameter3, Type);
}
