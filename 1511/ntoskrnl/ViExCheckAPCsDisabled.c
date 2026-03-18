/*
 * XREFs of ViExCheckAPCsDisabled @ 0x1406CE594
 * Callers:
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1406CE10C (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x1406CE1E0 (VerifierExReleaseFastMutexUnsafe.c)
 *     VerifierExReleaseFastMutexUnsafeNoReboot @ 0x1406CE22C (VerifierExReleaseFastMutexUnsafeNoReboot.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x1406CE2C0 (VerifierExfAcquirePushLockExclusive.c)
 *     VerifierExfAcquirePushLockShared @ 0x1406CE2F4 (VerifierExfAcquirePushLockShared.c)
 *     VerifierExfReleasePushLock @ 0x1406CE328 (VerifierExfReleasePushLock.c)
 *     VerifierExfReleasePushLockShared @ 0x1406CE35C (VerifierExfReleasePushLockShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x1406CE390 (VerifierExfTryAcquirePushLockShared.c)
 *     VerifierExfTryToWakePushLock @ 0x1406CE3C4 (VerifierExfTryToWakePushLock.c)
 *     ViExReleaseFastMutexCommon @ 0x1406CE5F8 (ViExReleaseFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCsDisabled(unsigned int a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    VerifierBugCheckIfAppropriate(0xC4u, a1, CurrentIrql, KeGetCurrentThread()->CombinedApcDisable, a2);
  }
  return CurrentIrql;
}
