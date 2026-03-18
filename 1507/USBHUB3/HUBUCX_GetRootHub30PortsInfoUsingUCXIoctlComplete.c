/*
 * XREFs of HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C001D780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v7; // edx
  int v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < 0 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a4 + 2440),
      2u,
      3u,
      0x2Eu,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v9);
  }
  v7 = 2038;
  if ( v4 >= 0 )
    v7 = 2042;
  HUBSM_AddEvent(a4 + 1184, v7);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
