/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C0015050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_UpdateIdleTimeout @ 0x1C004F268 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3048))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v2 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         v1,
         off_1C00400B8);
  Controller_UpdateIdleTimeout(v2, 1LL);
  v4 = 1;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(v2 + 64),
           2u,
           3u,
           0x1Cu,
           (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
           v4);
}
