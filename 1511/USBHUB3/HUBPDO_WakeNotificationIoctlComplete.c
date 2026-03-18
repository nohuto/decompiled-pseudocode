/*
 * XREFs of HUBPDO_WakeNotificationIoctlComplete @ 0x1C0014D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_CompleteWaitWake @ 0x1C0014CA4 (HUBPDO_CompleteWaitWake.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_WakeNotificationIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  struct _KEVENT *v7; // rax
  int v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  HUBPDO_CompleteWaitWake(a4);
  v7 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           a1,
                           off_1C00571C0);
  KeSetEvent(v7 + 1, 0, 0);
  v9 = v4;
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
           4u,
           5u,
           0x75u,
           (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
           v9);
}
