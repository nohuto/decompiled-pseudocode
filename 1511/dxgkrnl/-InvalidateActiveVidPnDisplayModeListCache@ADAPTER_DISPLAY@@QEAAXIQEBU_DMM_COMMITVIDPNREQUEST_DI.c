/*
 * XREFs of ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C009AC9C
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00DCE0C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0130500 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0176C80 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     Template_pqcctttq @ 0x1C001C118 (Template_pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *const a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int i; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r9d
  unsigned __int8 v12; // r10
  bool v13; // dl
  bool v14; // cl
  int v15; // r11d
  char v16; // cl

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 12438LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DxgkLogCodePointPacket(0x1Cu, a2, 0, 0);
  if ( bTracingEnabled )
  {
    LOBYTE(v11) = 0;
    LOBYTE(v7) = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( a3 )
    {
      v16 = *((_BYTE *)a3 + 4);
      v15 = *((_DWORD *)a3 + 2);
      v13 = (v16 & 2) != 0;
      v12 = v16 & 1;
      v11 = (int)(*(_DWORD *)a3 << 28) >> 28;
      v7 = (unsigned int)((int)(*(_DWORD *)a3 << 24) >> 28);
      v14 = (v16 & 4) != 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pqcctttq(v13, v12, v7, this, a2, v11, v7, v12, v13, v14, v15);
  }
  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    if ( i != a2 )
    {
      v9 = 127LL * i;
      BYTE4(this[17][v9 + 122]) = 0;
      LODWORD(this[17][v9 + 124]) = -1;
      HIDWORD(this[17][v9 + 124]) = -1;
    }
  }
}
