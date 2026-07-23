/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14006A940
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 *     MiSelectSessionAttachProcess @ 0x1400767C8 (MiSelectSessionAttachProcess.c)
 *     MiViewMayContainPage @ 0x14008EEB4 (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F65E0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     KiMonitorCacheErrata @ 0x1401D8D44 (KiMonitorCacheErrata.c)
 *     MiCapturePfnVm @ 0x1401F7B64 (MiCapturePfnVm.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14020F6AC (PspJobCycleTimeNotificationDpcRoutine.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     PspGetNextJob @ 0x1404673D0 (PspGetNextJob.c)
 *     PspGetNextChildJob @ 0x1404676C4 (PspGetNextChildJob.c)
 *     PspEnforceLimitsProcessCallback @ 0x1404684A4 (PspEnforceLimitsProcessCallback.c)
 *     ExpGetNextCallback @ 0x1404CE3D8 (ExpGetNextCallback.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x1404EC8D0 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140680278 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1406807D8 (PspQueryProcessInterferenceCountCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
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
