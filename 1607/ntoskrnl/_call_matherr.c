/*
 * XREFs of _call_matherr @ 0x140150F54
 * Callers:
 *     _handle_error @ 0x140151078 (_handle_error.c)
 *     _handle_errorf @ 0x1401511A0 (_handle_errorf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002DFC (xHalTimerWatchdogStop.c)
 *     _set_errno_from_matherr @ 0x140151840 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x140151884 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)xHalTimerWatchdogStop() )
    set_errno_from_matherr(a1);
  return a6;
}
