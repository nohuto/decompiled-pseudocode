/*
 * XREFs of ?WakeMTPostBatchIfNecessary@CManipulationManager@@SAXXZ @ 0x18016B59C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void CManipulationManager::WakeMTPostBatchIfNecessary(void)
{
  if ( dword_1801EFFE0 )
    SetEvent(hEvent);
}
