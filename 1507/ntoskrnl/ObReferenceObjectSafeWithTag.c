/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14004FCE0
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14009D7A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiViewMayContainPage @ 0x1400FA970 (MiViewMayContainPage.c)
 *     MiSelectSessionAttachProcess @ 0x1400FD6CC (MiSelectSessionAttachProcess.c)
 *     KiMonitorCacheErrata @ 0x14020A054 (KiMonitorCacheErrata.c)
 *     MiCapturePfnVm @ 0x140227228 (MiCapturePfnVm.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14024457C (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspGetPreviousProcessThread @ 0x14041CE2C (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     PspGetNextJobProcess @ 0x1404F60B8 (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x140506758 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1405069DC (PspGetNextChildJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x140507354 (PspEnforceLimitsProcessCallback.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x14058A288 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406C42F8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406C4860 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
