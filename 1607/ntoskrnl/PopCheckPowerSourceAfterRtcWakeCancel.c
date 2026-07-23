/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeCancel @ 0x1401270D4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeCancel()
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  result = KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, &Timeout);
  if ( result )
  {
    if ( KeCancelTimer2((__int64)&PopCheckPowerSourceAfterRtcWakeTimer) )
      return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
    else
      return KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, 0LL);
  }
  return result;
}
