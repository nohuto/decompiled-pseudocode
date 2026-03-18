/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14006ADC0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006BBA8 (KiAbProcessThreadLocks.c)
 *     MiSelectSessionAttachProcess @ 0x140076748 (MiSelectSessionAttachProcess.c)
 *     MiViewMayContainPage @ 0x14008F754 (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F87A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     KiMonitorCacheErrata @ 0x1401D8F18 (KiMonitorCacheErrata.c)
 *     MiCapturePfnVm @ 0x1401F7D38 (MiCapturePfnVm.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14020F880 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     PspGetNextJobProcess @ 0x14045816C (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x140468500 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1404687F4 (PspGetNextChildJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x1404695D4 (PspEnforceLimitsProcessCallback.c)
 *     ExpGetNextCallback @ 0x1404EC350 (ExpGetNextCallback.c)
 *     PsGetNextProcess @ 0x140508FFC (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x140509940 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x140510350 (PsGetNextProcessThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140680194 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406806F4 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
