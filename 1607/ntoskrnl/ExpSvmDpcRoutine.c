/*
 * XREFs of ExpSvmDpcRoutine @ 0x14022F334
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ExpSvmDpcRoutine(__int64 a1, unsigned int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpSvmWorkQueues + 104LL * a2), HyperCriticalWorkQueue);
}
