/*
 * XREFs of ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C000E398
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00CDBEC (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00CFF38 (DmmGetMostImportantActiveVidPnPathTargetsFromSource.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateVidPnTargetList(ADAPTER_DISPLAY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rsi

  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v3 = 1008LL * i;
    if ( (int)DmmGetMostImportantActiveVidPnPathTargetsFromSource(
                *((_QWORD *)this + 2),
                0LL,
                i,
                v3 + *((_QWORD *)this + 14) + 956LL) < 0 )
      *(_DWORD *)(*((_QWORD *)this + 14) + v3 + 956) = -1;
  }
}
