/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x14023D080
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 */

_BOOL8 PopCheckPowerSourceAfterRtcWakeSet()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted);
  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2(
           (__int64)&PopCheckPowerSourceAfterRtcWakeTimer,
           -10000000LL * (unsigned int)PopCheckPowerSourceAfterRtcWakeTime,
           0LL,
           (__int64)v1);
}
