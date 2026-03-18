/*
 * XREFs of _handle_error @ 0x140175D68
 * Callers:
 *     sqrt @ 0x14017303C (sqrt.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _call_matherr @ 0x140175C44 (_call_matherr.c)
 *     _exception_enabled @ 0x140175CAC (_exception_enabled.c)
 *     _raise_exc @ 0x140176254 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x140176530 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x140176574 (_ctrlfp.c)
 */

double __fastcall handle_error(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        __int64 a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // xmm6_8
  __int64 v16; // [rsp+48h] [rbp-A1h] BYREF
  double v17[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v18[8]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp-41h]

  v16 = ctrlfp(8064LL, 65472LL);
  *(_QWORD *)&v17[1] = a3;
  *(_QWORD *)&v17[0] = a3;
  v13 = exception_enabled(a5, v16);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      v18[6] = a8;
      v19 = v19 & 0xFFFFFFE0 | 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v16, a5, a2, (__int64)&a7, (__int64)v17);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v17[0], v16);
  set_errno_from_matherr(a4);
  ctrlfp(v16, 65472LL);
  return v17[0];
}
