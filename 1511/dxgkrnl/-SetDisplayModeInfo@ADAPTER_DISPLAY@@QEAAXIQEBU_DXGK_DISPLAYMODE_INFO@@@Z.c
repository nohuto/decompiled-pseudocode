/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0007710
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_pqqqqqqqqqqqq @ 0x1C001C428 (Template_pqqqqqqqqqqqq.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C015FB68 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  PERESOURCE *v7; // rax
  __int64 v8; // rdx
  PERESOURCE *v9; // rcx
  int v10; // eax
  PERESOURCE *v11; // rcx
  int v12; // eax
  DXGDODPRESENT *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v14 + 24) = 3652LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 26) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 3653LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = this[17];
  v8 = 127 * v4;
  *(_OWORD *)((char *)&v7[v8 + 112] + 4) = *(_OWORD *)a3;
  *(_OWORD *)((char *)&v7[v8 + 114] + 4) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)&v7[v8 + 116] + 4) = *((_OWORD *)a3 + 2);
  *(PERESOURCE *)((char *)&v7[v8 + 118] + 4) = (PERESOURCE)*((_QWORD *)a3 + 6);
  v9 = this[17];
  v10 = HIDWORD(v9[127 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v9[v8 + 79]) = *(_DWORD *)a3 + v10;
    v11 = this[17];
    v12 = *((_DWORD *)a3 + 1) + LODWORD(v11[v8 + 79]);
  }
  else
  {
    HIDWORD(v9[v8 + 79]) = *((_DWORD *)a3 + 1) + v10;
    v11 = this[17];
    v12 = *(_DWORD *)a3 + LODWORD(v11[v8 + 79]);
  }
  LODWORD(v11[v8 + 80]) = v12;
  v13 = (DXGDODPRESENT *)this[40];
  if ( v13 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v13, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)&this[17][v8 + 112] + 4));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
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
