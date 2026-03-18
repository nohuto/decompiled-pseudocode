/*
 * XREFs of HUBFDO_GetDeviceCapabilities @ 0x1C000A508
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0063160 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBFDO_GetDeviceCapabilities(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v5; // r14
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v10[9]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v11[2]; // [rsp+98h] [rbp+1Fh] BYREF

  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v5,
         &v8);
  if ( v6 >= 0 )
  {
    v9[2] = 0LL;
    v9[0] = 24LL;
    v9[1] = 3221225659LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
      WdfDriverGlobals,
      v8,
      v9);
    memset(a2, 0, 0x40uLL);
    *a2 = 65600;
    a2[2] = -1;
    a2[3] = -1;
    memset(v10, 0, sizeof(v10));
    LOWORD(v10[0]) = 2331;
    v10[1] = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v8,
      v10);
    v11[1] = 0LL;
    v11[0] = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v8,
            v5,
            v11) )
      WPP_RECORDER_SF_(a3, 2u, 5u, 0xAu, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v8);
  }
  if ( v8 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v6;
}
