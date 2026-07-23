/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1403F73FC
 * Callers:
 *     PopGetPowerSettingValue @ 0x14000851C (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x14013A0EC (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     PopGetSettingValue @ 0x140501400 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140502D2C (PopGetSettingNotificationName.c)
 * Callees:
 *     PopGetListHead @ 0x1403F747C (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1403F74EC (PopStateIsSessionSpecific.c)
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
