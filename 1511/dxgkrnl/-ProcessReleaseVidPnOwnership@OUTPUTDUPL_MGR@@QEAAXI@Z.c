/*
 * XREFs of ?ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C009ECFC
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0007B24 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessReleaseVidPnOwnership(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a2, 0LL, 0, 0, 1);
}
