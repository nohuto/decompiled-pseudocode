/*
 * XREFs of ObpProcessRemoveObjectDpcWorker @ 0x1401FE878
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ObpProcessRemoveObjectDpcWorker()
{
  ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
}
