/*
 * XREFs of _handle_errorf @ 0x140151758
 * Callers:
 *     sqrtf @ 0x14014EAB4 (sqrtf.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _call_matherr @ 0x14015150C (_call_matherr.c)
 *     _exception_enabled @ 0x140151574 (_exception_enabled.c)
 *     _raise_excf @ 0x140151DCC (_raise_excf.c)
 *     _set_errno_from_matherr @ 0x140151DF8 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x140151E3C (_ctrlfp.c)
 */

float __fastcall handle_errorf(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        float a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // r9
  float v15; // xmm6_4
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-99h] BYREF
  int v19; // [rsp+58h] [rbp-91h]
  _DWORD v20[16]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp-41h]

  v18 = ctrlfp(8064LL, 65472LL);
  v19 = a3;
  LODWORD(v17) = a3;
  v13 = exception_enabled(a5, v18);
  v15 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      *(float *)&v20[12] = a8;
      v21 = v21 & 0xFFFFFFE0 | 1;
    }
    raise_excf((unsigned int)v20, (unsigned int)&v18, a5, a2, (__int64)&a7, (__int64)&v17);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, v14, COERCE__INT64(v15), *(float *)&v17, v18);
  set_errno_from_matherr(a4);
  ctrlfp(v18, 65472LL);
  return *(float *)&v17;
}
