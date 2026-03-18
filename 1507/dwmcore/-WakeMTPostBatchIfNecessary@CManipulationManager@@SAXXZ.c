/*
 * XREFs of ?WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ @ 0x18012C468
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void CManipulationManager::WakeMTPostBatchIfNecessary(void)
{
  if ( dword_180195D50 )
    SetEvent(qword_180195EC8);
}
