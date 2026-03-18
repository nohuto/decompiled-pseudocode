/*
 * XREFs of ObpProcessRemoveObjectDpcWorker @ 0x1401E6190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ObpProcessRemoveObjectDpcWorker()
{
  ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
}
