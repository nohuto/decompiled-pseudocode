/*
 * XREFs of PopInitializePowerSettings @ 0x140770F9C
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *PopInitializePowerSettings()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  PVOID *result; // rax

  v0 = &PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  PopSettingLock.Count = 1;
  PopPendingPowerSettingUpdateLock = 0LL;
  PopSettingLock.Owner = 0LL;
  PopSettingLock.Contention = 0;
  PopSettingLock.Event.Header.SignalState = 0;
  PopSettingLock.Event.Header.WaitListHead.Blink = &PopSettingLock.Event.Header.WaitListHead;
  PopSettingLock.Event.Header.WaitListHead.Flink = &PopSettingLock.Event.Header.WaitListHead;
  qword_1402DE958 = (__int64)&PopRegisteredPowerSettingCallbacks;
  PopRegisteredPowerSettingCallbacks = (__int64)&PopRegisteredPowerSettingCallbacks;
  result = &PopPowerSettings;
  qword_1402DE948 = (__int64)&PopPowerSettings;
  PopPowerSettings = &PopPowerSettings;
  LOWORD(PopSettingLock.Event.Header.Lock) = 1;
  PopSettingLock.Event.Header.Size = 6;
  return result;
}
