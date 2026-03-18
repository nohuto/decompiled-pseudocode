/*
 * XREFs of ViExCheckAPCsDisabled @ 0x140751FC4
 * Callers:
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140751A9C (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x140751BB8 (VerifierExReleaseFastMutexUnsafe.c)
 *     VerifierExReleaseFastMutexUnsafeNoReboot @ 0x140751C04 (VerifierExReleaseFastMutexUnsafeNoReboot.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x140751C98 (VerifierExfAcquirePushLockExclusive.c)
 *     VerifierExfAcquirePushLockShared @ 0x140751CCC (VerifierExfAcquirePushLockShared.c)
 *     VerifierExfReleasePushLock @ 0x140751D00 (VerifierExfReleasePushLock.c)
 *     VerifierExfReleasePushLockShared @ 0x140751D34 (VerifierExfReleasePushLockShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x140751D68 (VerifierExfTryAcquirePushLockShared.c)
 *     VerifierExfTryToWakePushLock @ 0x140751D9C (VerifierExfTryToWakePushLock.c)
 *     ViExReleaseFastMutexCommon @ 0x140752028 (ViExReleaseFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
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
