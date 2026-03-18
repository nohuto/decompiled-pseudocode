/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C001E9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00523B8 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0043340);
  Controller_UpdateIdleTimeout(v2, 1LL);
  v4 = 1;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 64),
           2u,
           3u,
           0x1Cu,
           (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
           v4);
}
