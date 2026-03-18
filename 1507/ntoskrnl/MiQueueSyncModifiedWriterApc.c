/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x140222054
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140220C9C (MiAttemptPageFileReduction.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 856), 3, (__int64)PopPoCoalescinCallback, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
