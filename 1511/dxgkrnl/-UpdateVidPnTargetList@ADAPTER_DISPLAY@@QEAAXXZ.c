/*
 * XREFs of ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0007CB4
 * Callers:
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FD54 (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00C4C40 (DmmGetMostImportantActiveVidPnPathTargetsFromSource.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateVidPnTargetList(ADAPTER_DISPLAY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rsi

  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v3 = 1016LL * i;
    if ( (int)DmmGetMostImportantActiveVidPnPathTargetsFromSource(
                *((_QWORD *)this + 2),
                0LL,
                i,
                v3 + *((_QWORD *)this + 17) + 956LL) < 0 )
      *(_DWORD *)(*((_QWORD *)this + 17) + v3 + 956) = -1;
  }
}
