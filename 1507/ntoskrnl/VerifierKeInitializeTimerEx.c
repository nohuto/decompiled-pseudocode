/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140748358
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140748350 (VerifierKeInitializeTimer.c)
 * Callees:
 *     KeCheckForTimer @ 0x1401FF398 (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeTimerEx(struct _KTIMER *BugCheckParameter3, TIMER_TYPE Type)
{
  VfUtilSynchronizationObjectSanityChecks((char *)BugCheckParameter3, 64LL);
  KeCheckForTimer((ULONG_PTR)BugCheckParameter3, 64LL);
  pXdvKeInitializeTimerEx(BugCheckParameter3, Type);
}
