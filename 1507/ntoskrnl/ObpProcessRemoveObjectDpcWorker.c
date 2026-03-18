/*
 * XREFs of ObpProcessRemoveObjectDpcWorker @ 0x140233024
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ObpProcessRemoveObjectDpcWorker()
{
  ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
}
