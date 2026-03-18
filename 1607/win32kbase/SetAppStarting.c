/*
 * XREFs of SetAppStarting @ 0x1C00123C0
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00124D8 (xxxInitProcessInfo.c)
 * Callees:
 *     IsSetRITTimerSupported_0 @ 0x1C0001F90 (IsSetRITTimerSupported_0.c)
 *     SetRITTimer_0 @ 0x1C0001F98 (SetRITTimer_0.c)
 */

DRIVER_CONTROL *__fastcall SetAppStarting(__int64 a1)
{
  DRIVER_CONTROL *result; // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  result = (DRIVER_CONTROL *)gppiStarting;
  *(_QWORD *)(a1 + 336) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    result = (DRIVER_CONTROL *)IsSetRITTimerSupported_0();
    if ( (int)result < 0 )
    {
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
    }
    else
    {
      result = (DRIVER_CONTROL *)SetRITTimer_0();
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = result;
    }
  }
  return result;
}
