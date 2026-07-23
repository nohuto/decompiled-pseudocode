/*
 * XREFs of CmpLazyCommitDpcRoutine @ 0x1401B503C
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 */

void CmpLazyCommitDpcRoutine()
{
  if ( CmpLazyCommitWorkItemActive )
    ExQueueWorkItem(&CmpLazyCommitWorkItem, DelayedWorkQueue);
}
