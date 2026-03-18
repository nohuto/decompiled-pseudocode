/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000ADEC
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_pqqqqqqqqqqqq @ 0x1C001BA50 (Template_pqqqqqqqqqqqq.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C015B874 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rsi
  PERESOURCE *v6; // rax
  __int64 v7; // rdx
  PERESOURCE *v8; // rcx
  int v9; // eax
  PERESOURCE *v10; // rcx
  int v11; // eax
  DXGDODPRESENT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v13 + 24) = 3513LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v14 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v14 + 24) = 3514LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v6 = this[14];
  v7 = 126 * v4;
  *(_OWORD *)((char *)&v6[v7 + 112] + 4) = *(_OWORD *)a3;
  *(_OWORD *)((char *)&v6[v7 + 114] + 4) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)&v6[v7 + 116] + 4) = *((_OWORD *)a3 + 2);
  *(PERESOURCE *)((char *)&v6[v7 + 118] + 4) = (PERESOURCE)*((_QWORD *)a3 + 6);
  v8 = this[14];
  v9 = HIDWORD(v8[126 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v8[v7 + 79]) = *(_DWORD *)a3 + v9;
    v10 = this[14];
    v11 = *((_DWORD *)a3 + 1) + LODWORD(v10[v7 + 79]);
  }
  else
  {
    HIDWORD(v8[v7 + 79]) = *((_DWORD *)a3 + 1) + v9;
    v10 = this[14];
    v11 = *(_DWORD *)a3 + LODWORD(v10[v7 + 79]);
  }
  LODWORD(v10[v7 + 80]) = v11;
  v12 = (DXGDODPRESENT *)this[31];
  if ( v12 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v12, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)&this[14][v7 + 112] + 4));
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
