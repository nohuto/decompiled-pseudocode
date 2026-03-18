/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C00063C4
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_pqqqqqqqqqqqq @ 0x1C001EFAC (Template_pqqqqqqqqqqqq.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0185184 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  DXGADAPTER *v9; // rcx
  int v10; // eax
  DXGADAPTER *v11; // rcx
  int v12; // eax
  DXGDODPRESENT *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v14 + 24) = 3833LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 3834LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = this[14];
  v8 = 1016 * v4;
  *(_OWORD *)((char *)v7 + v8 + 908) = *(_OWORD *)a3;
  *(_OWORD *)((char *)v7 + v8 + 924) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)v7 + v8 + 940) = *((_OWORD *)a3 + 2);
  *(_QWORD *)((char *)v7 + v8 + 956) = *((_QWORD *)a3 + 6);
  v9 = this[14];
  v10 = *((_DWORD *)v9 + 254 * v4 + 157);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)((char *)v9 + v8 + 636) = *(_DWORD *)a3 + v10;
    v11 = this[14];
    v12 = *((_DWORD *)a3 + 1) + *(_DWORD *)((char *)v11 + v8 + 632);
  }
  else
  {
    *(_DWORD *)((char *)v9 + v8 + 636) = *((_DWORD *)a3 + 1) + v10;
    v11 = this[14];
    v12 = *(_DWORD *)a3 + *(_DWORD *)((char *)v11 + v8 + 632);
  }
  *(_DWORD *)((char *)v11 + v8 + 640) = v12;
  v13 = this[32];
  if ( v13 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v13, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)this[14] + v8 + 908));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      Template_pqqqqqqqqqqqq(
        *((_DWORD *)a3 + 12),
        *((_DWORD *)a3 + 11),
        *((_DWORD *)a3 + 8),
        (_DWORD)this,
        v4,
        *(_DWORD *)a3,
        *((_DWORD *)a3 + 1),
        *((_DWORD *)a3 + 2),
        *((_DWORD *)a3 + 4),
        *((_DWORD *)a3 + 5),
        *((_DWORD *)a3 + 6),
        *((_DWORD *)a3 + 7),
        *((_DWORD *)a3 + 8),
        *((_BYTE *)a3 + 36) & 1,
        *((_DWORD *)a3 + 11),
        *((_DWORD *)a3 + 12));
  }
}
