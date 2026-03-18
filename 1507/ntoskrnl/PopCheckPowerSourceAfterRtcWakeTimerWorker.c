/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14040397C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 *     NtInitiatePowerAction @ 0x140565308 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x14056C204 (PopCurrentPowerStatePrecise.c)
 *     PopOkayToQueueNextWorkItem @ 0x1405C74C4 (PopOkayToQueueNextWorkItem.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int64 v0; // r9
  __int64 v1; // rax
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 PowerSettingConfiguration; // rax
  int v5; // ebx
  __int64 v6; // rax
  unsigned __int8 v7; // di
  signed __int32 v8; // eax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(v10);
    if ( !v10[0] )
    {
      v1 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v0);
      v2 = v1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v1);
      if ( v2 )
        *(_BYTE *)(v2 + 26) |= 1u;
      qword_14032EFE8 = (__int64)KeGetCurrentThread();
      dword_14032F010 = CurrentIrql;
      PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_ALLOW_RTC_WAKE, 0xFFFFFFFFLL);
      v5 = 0;
      if ( PowerSettingConfiguration )
      {
        v6 = *(_QWORD *)(PowerSettingConfiguration + 72);
        if ( v6 )
        {
          if ( *(_DWORD *)(v6 + 4) >= 4u )
            v5 = *(_DWORD *)(v6 + 12);
        }
      }
      qword_14032EFE8 = 0LL;
      v7 = dword_14032F010;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
      if ( v8 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v8);
      __writecr8(v7);
      KeAbPostRelease((ULONG_PTR)&PopSettingLock);
      if ( !v5 )
        NtInitiatePowerAction(SystemAction, MinSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem(&unk_14032DA48);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
