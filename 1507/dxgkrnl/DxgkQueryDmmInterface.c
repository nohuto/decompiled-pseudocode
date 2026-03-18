/*
 * XREFs of DxgkQueryDmmInterface @ 0x1C00AC588
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AAEC0 (DxgkUpdateGdiInfo.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0139878 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164464 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C0097090 (-QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z.c)
 */

__int64 __fastcall DxgkQueryDmmInterface(DXGADAPTER *this, __int64 a2, const struct _DXGDMM_INTERFACE **a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  VIDPN_MGR *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !a3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  *a3 = 0LL;
  if ( !this )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 0LL;
    goto LABEL_10;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v15);
  }
  v10 = *((_QWORD *)this + 247);
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = this;
LABEL_10:
    WdLogEvent5_WdError(v13);
    return 3223191554LL;
  }
  v11 = *(VIDPN_MGR **)(v10 + 88);
  if ( v11 )
  {
    VIDPN_MGR::QueryDxgDmmInterface(v11, a3, v8, v9);
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3223192385LL;
  }
}
