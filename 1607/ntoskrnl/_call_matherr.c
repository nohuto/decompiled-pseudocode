/*
 * XREFs of _call_matherr @ 0x14015150C
 * Callers:
 *     _handle_error @ 0x140151630 (_handle_error.c)
 *     _handle_errorf @ 0x140151758 (_handle_errorf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     _set_errno_from_matherr @ 0x140151DF8 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x140151E3C (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)xHalTimerWatchdogStop() )
    set_errno_from_matherr(a1);
  return a6;
}
