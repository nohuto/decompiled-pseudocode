/*
 * XREFs of VfFaultsInitPhase0 @ 0x1406C4BA0
 * Callers:
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ViFaultsAddAllApps @ 0x1406C5074 (ViFaultsAddAllApps.c)
 *     ViFaultsAddAllTags @ 0x1406C5120 (ViFaultsAddAllTags.c)
 */

__int64 VfFaultsInitPhase0()
{
  __int64 v0; // rax
  KIRQL v1; // al
  KIRQL v2; // al
  __int64 result; // rax

  ViFaultInjectionLock = 0LL;
  v0 = (unsigned int)ViFaultTracesLength;
  ViRequiredTimeSinceBootInMsecs = 60000LL * (unsigned int)VfFaultInjectionBootMinutes;
  if ( (unsigned int)ViFaultTracesLength > 0x101000 )
  {
    v0 = 1052672LL;
    ViFaultTracesLength = 1052672;
  }
  ViFaultTraces = (__int64)ExAllocatePoolWithTagPriority(NonPagedPoolNx, 72 * v0, 0x74746C46u, HighPoolPriority);
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViHaveFaultTags = 0;
  ViFaultLockOwner = 0LL;
  qword_1402DB258 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v1);
  if ( (unsigned int)(VerifierFaultTagsBufferSize - 2) <= 0xFE )
    ViFaultsAddAllTags(&VerifierFaultTagsBuffer, ((unsigned __int64)(unsigned int)VerifierFaultTagsBufferSize - 2) >> 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViFaultLockOwner = 0LL;
  qword_1402DB238 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  result = (unsigned int)(VerifierFaultApplicationsBufferSize - 2);
  if ( (unsigned int)result <= 0xFE )
    result = ViFaultsAddAllApps(
               &VerifierFaultApplicationsBuffer,
               ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  ViFaultsInitialized = 1;
  return result;
}
