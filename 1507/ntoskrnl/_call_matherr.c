/*
 * XREFs of _call_matherr @ 0x140175C44
 * Callers:
 *     _handle_error @ 0x140175D68 (_handle_error.c)
 *     _handle_errorf @ 0x140175E90 (_handle_errorf.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x140176530 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x140176574 (_ctrlfp.c)
 *     xHalTimerWatchdogStop @ 0x14017DF20 (xHalTimerWatchdogStop.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, double a4, __int64 a5, double a6, __int64 a7)
{
  struct _KFLOATING_SAVE FloatSave; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  double v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  double v13; // [rsp+40h] [rbp-18h]

  FloatSave.Dummy = a1;
  v12 = a5;
  v13 = a6;
  v11 = a4;
  v10 = a3;
  ctrlfp(a7, 65472LL);
  if ( !xHalTimerWatchdogStop(&FloatSave) )
    set_errno_from_matherr(a1);
  return v13;
}
