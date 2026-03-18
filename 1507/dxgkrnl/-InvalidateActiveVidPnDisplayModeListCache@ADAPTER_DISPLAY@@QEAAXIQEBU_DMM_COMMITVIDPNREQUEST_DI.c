/*
 * XREFs of ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00CF958
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CD444 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0129E70 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     Template_pqcctttq @ 0x1C001B740 (Template_pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int i; // edx
  __int64 v12; // rax
  int v13; // r9d
  unsigned __int8 v14; // r10
  bool v15; // dl
  bool v16; // cl
  int v17; // r11d
  char v18; // cl

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = 12077LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DxgkLogCodePointPacket(0x1Cu, a2, 0, 0);
  if ( bTracingEnabled )
  {
    LOBYTE(v13) = 0;
    LOBYTE(v10) = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( a3 )
    {
      v18 = *((_BYTE *)a3 + 4);
      v17 = *((_DWORD *)a3 + 2);
      v15 = (v18 & 2) != 0;
      v14 = v18 & 1;
      v13 = (int)(*(_DWORD *)a3 << 28) >> 28;
      v10 = (unsigned int)((int)(*(_DWORD *)a3 << 24) >> 28);
      v16 = (v18 & 4) != 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pqcctttq(v15, v14, v10, this, a2, v13, v10, v14, v15, v16, v17);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( i != a2 )
      BYTE4(this[14][126 * i + 122]) = 0;
  }
}
