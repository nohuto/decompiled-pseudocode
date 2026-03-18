/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x140500508
 * Callers:
 *     PopGetPowerSettingValue @ 0x14012BFE4 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x14015F24C (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14040397C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E4240 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404E98A4 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x1404E9C8C (PopGetSettingValue.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 * Callees:
 *     PopGetListHead @ 0x140500588 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1405005F8 (PopStateIsSessionSpecific.c)
 */

_QWORD *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  _QWORD *ListHead; // rbx
  _QWORD *j; // rdx
  __int64 v6; // rcx
  _QWORD *i; // rcx

  ListHead = (_QWORD *)PopGetListHead(a1);
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
  {
    for ( i = (_QWORD *)*ListHead; i != ListHead; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i + 12) == a2 && (*((_DWORD *)i + 13) & 4) == 0 )
        return i;
    }
  }
  else
  {
    for ( j = (_QWORD *)*ListHead; j != ListHead; j = (_QWORD *)*j )
    {
      v6 = j[4] - *a1;
      if ( !v6 )
        v6 = j[5] - a1[1];
      if ( !v6 )
        return j;
    }
  }
  return 0LL;
}
