/*
 * XREFs of LongCapTraceDpc @ 0x1C00046F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 864, qword_1C000DD70, SystemArgument2);
}
