/*
 * XREFs of EtwpCompressionDpc @ 0x14022A5CC
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1400ED78C (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, unsigned int *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a2 + 113) + 8LL * *a2 + 400), 1u);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 228), DelayedWorkQueue);
}
