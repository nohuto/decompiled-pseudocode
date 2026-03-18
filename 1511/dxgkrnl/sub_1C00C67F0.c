/*
 * XREFs of sub_1C00C67F0 @ 0x1C00C67F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009E6E0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

__int64 __fastcall sub_1C00C67F0(struct OUTPUTDUPL_MGR *a1, void *a2)
{
  OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(a1);
  return 0LL;
}
