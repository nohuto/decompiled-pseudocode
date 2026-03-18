/*
 * XREFs of _handle_errorf @ 0x140175E90
 * Callers:
 *     sqrtf @ 0x140173144 (sqrtf.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _call_matherr @ 0x140175C44 (_call_matherr.c)
 *     _exception_enabled @ 0x140175CAC (_exception_enabled.c)
 *     _raise_excf @ 0x140176504 (_raise_excf.c)
 *     _set_errno_from_matherr @ 0x140176530 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x140176574 (_ctrlfp.c)
 */

float __fastcall handle_errorf(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        float a7,
        float a8,
        int a9)
{
  BOOL v13; // eax
  float v14; // xmm6_4
  __int64 v16; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v17; // [rsp+50h] [rbp-99h] BYREF
  int v18; // [rsp+58h] [rbp-91h]
  _DWORD v19[16]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp-41h]

  v17 = ctrlfp(8064LL, 65472LL);
  v18 = a3;
  LODWORD(v16) = a3;
  v13 = exception_enabled(a5, v17);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      *(float *)&v19[12] = a8;
      v20 = v20 & 0xFFFFFFE0 | 1;
    }
    raise_excf((unsigned int)v19, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)&v16);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, COERCE__INT64(v14), *(float *)&v16, v17);
  set_errno_from_matherr(a4);
  ctrlfp(v17, 65472LL);
  return *(float *)&v16;
}
