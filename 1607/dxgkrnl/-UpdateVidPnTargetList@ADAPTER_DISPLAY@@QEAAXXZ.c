/*
 * XREFs of ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0006984
 * Callers:
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084E18 (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00D9878 (DmmGetMostImportantActiveVidPnPathTargetsFromSource.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateVidPnTargetList(ADAPTER_DISPLAY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rsi

  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v3 = 1016LL * i;
    if ( (int)DmmGetMostImportantActiveVidPnPathTargetsFromSource(
                *((_QWORD *)this + 2),
                0LL,
                i,
                v3 + *((_QWORD *)this + 14) + 964LL) < 0 )
      *(_DWORD *)(*((_QWORD *)this + 14) + v3 + 964) = -1;
  }
}
