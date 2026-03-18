/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C0054070
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C001ADC0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C004C028 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004EB04 (Controller_ConfigureS0IdleSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *); // rax
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+28h] [rbp-40h]
  _DWORD v10[10]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x24uLL);
  v4 = *a1;
  v10[0] = 36;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368);
  v10[5] = 2;
  v10[6] = 2;
  v10[8] = 2;
  v10[1] = 2;
  v10[2] = 5;
  v10[4] = 2;
  v10[3] = a2;
  v10[7] = 2;
  v6 = v5(WdfDriverGlobals, v4, v10);
  if ( v6 >= 0 )
  {
    *((_DWORD *)a1 + 98) = a2;
    v9 = a2;
    return WPP_RECORDER_SF_d(a1[8], 4u, 3u, 0x1Eu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v9);
  }
  else
  {
    v8 = v6;
    result = WPP_RECORDER_SF_d(a1[8], 4u, 3u, 0x1Du, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v8);
    *((_DWORD *)a1 + 88) = 2;
  }
  return result;
}
