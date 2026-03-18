/*
 * XREFs of ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0087708
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0149BE0 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C01A0534 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     Template_pqcctttq @ 0x1C001EED4 (Template_pqcctttq.c)
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
    *(_QWORD *)(v10 + 24) = 2198LL;
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
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqcctttq(v13, v12, v7, this, a2, v11, v7, v12, v13, v14, v15);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( i != a2 )
    {
      v9 = 127LL * i;
      BYTE4(this[14][v9 + 123]) = 0;
      LODWORD(this[14][v9 + 125]) = -1;
      HIDWORD(this[14][v9 + 125]) = -1;
    }
  }
}
