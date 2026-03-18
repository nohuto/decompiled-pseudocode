/*
 * XREFs of HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C001DC90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBUCX_GetRootHubInfoUsingUCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v7; // edx
  int v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a4 + 136) = *(_WORD *)(a4 + 104);
    *(_WORD *)(a4 + 142) = *(_WORD *)(a4 + 106);
    *(_QWORD *)(a4 + 1048) = *(_QWORD *)(a4 + 112);
    *(_WORD *)(a4 + 2418) = *(_WORD *)(a4 + 108);
    *(_WORD *)(a4 + 2420) = *(_WORD *)(a4 + 110);
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a4 + 2464),
      2u,
      3u,
      0x25u,
      (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
      v9);
  }
  v7 = 2038;
  if ( v4 >= 0 )
    v7 = 2042;
  HUBSM_AddEvent(a4 + 1208, v7);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
