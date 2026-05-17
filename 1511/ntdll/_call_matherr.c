/*
 * XREFs of _call_matherr @ 0x18009D504
 * Callers:
 *     _handle_error @ 0x18009D630 (_handle_error.c)
 * Callees:
 *     WinSqmCheckEscalationSetString @ 0x1800823D0 (WinSqmCheckEscalationSetString.c)
 *     _set_errno_from_matherr @ 0x18009E398 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x18009E684 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)WinSqmCheckEscalationSetString() )
    set_errno_from_matherr(a1);
  return a6;
}
