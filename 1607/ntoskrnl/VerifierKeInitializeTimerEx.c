/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x14071209C
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140712094 (VerifierKeInitializeTimer.c)
 * Callees:
 *     KeCheckForTimer @ 0x1401D346C (KeCheckForTimer.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks((void *)BugCheckParameter3, 64LL);
  KeCheckForTimer(BugCheckParameter3, 64LL);
  return pXdvKeInitializeTimerEx(BugCheckParameter3, a2);
}
