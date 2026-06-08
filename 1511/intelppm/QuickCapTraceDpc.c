/*
 * XREFs of QuickCapTraceDpc @ 0x1C0004920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        PVOID *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, (__int64)(DeferredContext + 88), (__int64)&PPM_ETW_QUICK_CAP_INFO);
}
