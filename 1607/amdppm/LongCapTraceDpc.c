/*
 * XREFs of LongCapTraceDpc @ 0x1C0001E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 872, qword_1C00097A8, SystemArgument2);
}
