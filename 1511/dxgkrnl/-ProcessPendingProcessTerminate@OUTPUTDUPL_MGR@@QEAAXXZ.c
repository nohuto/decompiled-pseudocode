/*
 * XREFs of ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009E6E0
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C00BBBD0 (OutputDuplProcessTerminate.c)
 *     sub_1C00C67F0 @ 0x1C00C67F0 (sub_1C00C67F0.c)
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(OUTPUTDUPL_MGR *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 13); ++i )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, i, 0LL, 1, 0, 3);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, 0LL);
}
