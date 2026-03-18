/*
 * XREFs of ObpProcessRemoveObjectDpcWorker @ 0x1401FEA4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ObpProcessRemoveObjectDpcWorker()
{
  ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
}
