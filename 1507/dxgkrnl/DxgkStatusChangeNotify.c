/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C00ACF40
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000A398 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00BCB0C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 * Callees:
 *     Template_qp @ 0x1C000A3C0 (Template_qp.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
    Template_qp(v6, v5, v7, *a1);
  v9 = *a1;
  if ( *a1 == 1 )
  {
    v14 = WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
    *(_QWORD *)(v14 + 24) = CurrentProcessSessionId;
    WdLogEvent5_WdEvent(v14);
    v11 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
    return ZwUpdateWnfStateData(v11, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  }
  if ( v9 <= 1 )
    goto LABEL_11;
  if ( v9 <= 6 )
    return 0LL;
  if ( v9 != 7 )
  {
    if ( v9 > 10 )
    {
      if ( v9 == 11 )
        goto LABEL_9;
LABEL_11:
      v13 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      *(_QWORD *)(v13 + 24) = *a1;
      WdLogEvent5_WdAssertion(v13);
      return 3221225659LL;
    }
    return 0LL;
  }
LABEL_9:
  v10 = WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  *(_QWORD *)(v10 + 24) = CurrentProcessSessionId;
  WdLogEvent5_WdEvent(v10);
  v11 = &WNF_DX_MODE_CHANGE_NOTIFICATION;
  return ZwUpdateWnfStateData(v11, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
