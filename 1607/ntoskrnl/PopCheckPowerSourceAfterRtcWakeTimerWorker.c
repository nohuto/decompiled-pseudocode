/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F73FC (PopFindPowerSettingConfiguration.c)
 *     NtInitiatePowerAction @ 0x140531044 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x14054816C (PopCurrentPowerStatePrecise.c)
 *     PopOkayToQueueNextWorkItem @ 0x140581F78 (PopOkayToQueueNextWorkItem.c)
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
  PopOkayToQueueNextWorkItem(&unk_140302CC8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
