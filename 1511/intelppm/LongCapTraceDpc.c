/*
 * XREFs of LongCapTraceDpc @ 0x1C0004880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 856, qword_1C000E0B0, SystemArgument2);
}
