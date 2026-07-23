/*
 * XREFs of ViExCheckAPCsDisabled @ 0x14071A64C
 * Callers:
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x14071A1C4 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x14071A298 (VerifierExReleaseFastMutexUnsafe.c)
 *     VerifierExReleaseFastMutexUnsafeNoReboot @ 0x14071A2E4 (VerifierExReleaseFastMutexUnsafeNoReboot.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x14071A378 (VerifierExfAcquirePushLockExclusive.c)
 *     VerifierExfAcquirePushLockShared @ 0x14071A3AC (VerifierExfAcquirePushLockShared.c)
 *     VerifierExfReleasePushLock @ 0x14071A3E0 (VerifierExfReleasePushLock.c)
 *     VerifierExfReleasePushLockShared @ 0x14071A414 (VerifierExfReleasePushLockShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x14071A448 (VerifierExfTryAcquirePushLockShared.c)
 *     VerifierExfTryToWakePushLock @ 0x14071A47C (VerifierExfTryToWakePushLock.c)
 *     ViExReleaseFastMutexCommon @ 0x14071A6B0 (ViExReleaseFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
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
