/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x1401EE9C8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 */

_BOOL8 PopCheckPowerSourceAfterRtcWakeSet()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted);
  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2(
           PopCheckPowerSourceAfterRtcWakeTimer,
           -10000000LL * (unsigned int)PopCheckPowerSourceAfterRtcWakeTime,
           0LL,
           (__int64)v1);
}
