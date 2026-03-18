/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00070B8
 * Callers:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C008DB7C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     DmmGetNextVideoPresentTarget @ 0x1C0097DEC (DmmGetNextVideoPresentTarget.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     DmmSetTargetForcableState @ 0x1C00DBE40 (DmmSetTargetForcableState.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00DC0FC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z.c)
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DE6A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01773C0 (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01774C4 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C017BFB0 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  for ( result = *v2 - 8LL; result; result = v5 == a1 + 24 ? 0LL : v5 - 8 )
  {
    if ( *(_DWORD *)(result + 24) == a2 )
      break;
    v5 = *(_QWORD *)(result + 8);
  }
  return result;
}
