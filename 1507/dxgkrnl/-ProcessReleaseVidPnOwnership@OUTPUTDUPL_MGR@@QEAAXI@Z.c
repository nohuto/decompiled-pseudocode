/*
 * XREFs of ?ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C00B4678
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C000AEE4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessReleaseVidPnOwnership(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a2, 0LL, 0, 0, 1);
}
