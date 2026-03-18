/*
 * XREFs of sub_1C01563F0 @ 0x1C01563F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009E730 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall sub_1C01563F0(OUTPUTDUPL_MGR *this, __int64 a2)
{
  __int64 v3; // r8

  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
    this,
    *(_DWORD *)(a2 + 4),
    0LL,
    *(_DWORD *)(a2 + 8) == 0,
    0,
    *(_DWORD *)(a2 + 8) != 0 ? 9 : 0);
  OUTPUTDUPL_MGR::ProcessPendingDestroy((PERESOURCE *)this, 0LL, v3);
  return 0LL;
}
