/*
 * XREFs of HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x1C001FFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < 0 )
  {
    v8 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a4 + 2488),
      2u,
      3u,
      0x28u,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
      v8);
  }
  HUBSM_AddEvent(a4 + 1232, ((v4 >> 31) & 0xFFFFFFFC) + 2042);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
