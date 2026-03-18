/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x140042340
 * Callers:
 *     MiViewMayContainPage @ 0x140008570 (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140083BF0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiSelectSessionAttachProcess @ 0x140091AC8 (MiSelectSessionAttachProcess.c)
 *     MiCapturePfnVm @ 0x14012896C (MiCapturePfnVm.c)
 *     KiMonitorCacheErrata @ 0x1401CA6B4 (KiMonitorCacheErrata.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1401F597C (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspGetNextJobProcess @ 0x1403E8CB8 (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x1403E9A68 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1403EB804 (PspGetNextChildJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x1403EC768 (PspEnforceLimitsProcessCallback.c)
 *     PspGetPreviousProcessThread @ 0x1403F29CC (PspGetPreviousProcessThread.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x1404BF63C (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140641D50 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406422E4 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
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
