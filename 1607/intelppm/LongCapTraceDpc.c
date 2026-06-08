/*
 * XREFs of LongCapTraceDpc @ 0x1C0005D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 872, qword_1C000F0F8, SystemArgument2);
}
