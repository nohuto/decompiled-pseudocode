/*
 * XREFs of LongCapTraceDpc @ 0x1C0001600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 856, qword_1C0009750, SystemArgument2);
}
