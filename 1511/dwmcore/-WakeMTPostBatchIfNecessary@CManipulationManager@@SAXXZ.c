/*
 * XREFs of ?WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ @ 0x180140100
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void CManipulationManager::WakeMTPostBatchIfNecessary(void)
{
  if ( dword_1801A3D40 )
    SetEvent(qword_1801A3ED0);
}
