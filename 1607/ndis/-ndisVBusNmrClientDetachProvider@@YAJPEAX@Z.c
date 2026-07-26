/*
 * XREFs of ?ndisVBusNmrClientDetachProvider@@YAJPEAX@Z @ 0x1C006FE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisVBusNmrClientDetachProvider(void *a1)
{
  ExQueueWorkItem(&WorkItem, NormalWorkQueue);
  return 259LL;
}
