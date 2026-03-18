/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1404493B4
 * Callers:
 *     PopGetPowerSettingValue @ 0x1400F0410 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x140136C9C (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403B2740 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x14045429C (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x140454584 (PopGetSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1404568F0 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     PopGetListHead @ 0x140449434 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1404494A4 (PopStateIsSessionSpecific.c)
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
