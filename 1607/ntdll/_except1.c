/*
 * XREFs of _except1 @ 0x18009F140
 * Callers:
 *     fabs @ 0x180099F50 (fabs.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _errcode @ 0x18009F0F4 (_errcode.c)
 *     _handle_exc @ 0x18009F238 (_handle_exc.c)
 *     _raise_exc_ex @ 0x18009F538 (_raise_exc_ex.c)
 *     _set_errno_from_matherr @ 0x18009F7B4 (_set_errno_from_matherr.c)
 *     _umatherr @ 0x18009F7E8 (_umatherr.c)
 *     _ctrlfp @ 0x18009FAA0 (_ctrlfp.c)
 */

double __fastcall except1(__int64 a1, int a2, double a3, double a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r9d
  double result; // xmm0_8
  double v12; // [rsp+48h] [rbp-61h] BYREF
  double v13; // [rsp+50h] [rbp-59h] BYREF
  char v14; // [rsp+58h] [rbp-51h] BYREF
  int v15; // [rsp+98h] [rbp-11h]

  v5 = a5;
  v13 = a3;
  v12 = a4;
  v7 = a1;
  if ( !(unsigned int)handle_exc(a1, &v12, a5) )
  {
    v15 &= ~1u;
    raise_exc_ex((unsigned int)&v14, (unsigned int)&a5, v7, a2, (__int64)&v13, (__int64)&v12, 0);
    v5 = a5;
  }
  v8 = errcode(v7);
  if ( matherr_flag || !v8 )
  {
    set_errno_from_matherr(v8);
    ctrlfp(v5, 65472LL);
    return v12;
  }
  else
  {
    result = v12;
    umatherr(v8, a2, v9, v10, *(__int64 *)&v12, v5);
  }
  return result;
}
