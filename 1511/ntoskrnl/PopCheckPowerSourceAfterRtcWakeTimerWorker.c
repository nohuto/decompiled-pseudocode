/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403B2740
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1404493B4 (PopFindPowerSettingConfiguration.c)
 *     NtInitiatePowerAction @ 0x1404F6BCC (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x1404F9FFC (PopCurrentPowerStatePrecise.c)
 *     PopOkayToQueueNextWorkItem @ 0x14054F718 (PopOkayToQueueNextWorkItem.c)
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
  PopOkayToQueueNextWorkItem(&unk_1402DD6E8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
