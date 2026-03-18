/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C001ADC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0054070 (Controller_UpdateIdleTimeout.c)
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
         off_1C0045340);
  Controller_UpdateIdleTimeout(v2, 1LL);
  v4 = 1;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 64),
           2u,
           3u,
           0x1Cu,
           (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
           v4);
}
