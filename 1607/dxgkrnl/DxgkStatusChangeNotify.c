/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C00728B0
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00013E0 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00E216C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 * Callees:
 *     Template_qp @ 0x1C0001408 (Template_qp.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    Template_qp(v3, v2, v4, *a1);
  v5 = *a1;
  if ( *a1 == 1 )
  {
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = CurrentProcessSessionId;
    WdLogEvent5_WdEvent(v10);
    v7 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
    return ZwUpdateWnfStateData(v7, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  }
  if ( v5 <= 1 )
    goto LABEL_11;
  if ( v5 <= 6 )
    return 0LL;
  if ( v5 != 7 )
  {
    if ( v5 > 10 )
    {
      if ( v5 == 11 )
        goto LABEL_9;
LABEL_11:
      v9 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v9 + 24) = *a1;
      WdLogEvent5_WdAssertion(v9);
      return 3221225659LL;
    }
    return 0LL;
  }
LABEL_9:
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = CurrentProcessSessionId;
  WdLogEvent5_WdEvent(v6);
  v7 = &WNF_DX_MODE_CHANGE_NOTIFICATION;
  return ZwUpdateWnfStateData(v7, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
