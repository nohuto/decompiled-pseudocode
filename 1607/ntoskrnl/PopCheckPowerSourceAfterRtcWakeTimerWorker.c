/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F853C (PopFindPowerSettingConfiguration.c)
 *     NtInitiatePowerAction @ 0x140530B04 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x140547C2C (PopCurrentPowerStatePrecise.c)
 *     PopOkayToQueueNextWorkItem @ 0x140581AC8 (PopOkayToQueueNextWorkItem.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int64 PowerSettingConfiguration; // rax
  int v1; // ebx
  __int64 v2; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(v4);
    if ( !v4[0] )
    {
      ExAcquireFastMutex(&PopSettingLock);
      PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_ALLOW_RTC_WAKE, 0xFFFFFFFFLL);
      v1 = 0;
      if ( PowerSettingConfiguration )
      {
        v2 = *(_QWORD *)(PowerSettingConfiguration + 72);
        if ( v2 )
        {
          if ( *(_DWORD *)(v2 + 4) >= 4u )
            v1 = *(_DWORD *)(v2 + 12);
        }
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      if ( !v1 )
        NtInitiatePowerAction(SystemAction, MinSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem(&unk_140302C68);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
