/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeCancel @ 0x140147F78
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
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
