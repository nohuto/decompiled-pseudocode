/*
 * XREFs of ZwSetBootEntryOrder @ 0x14015D070
 * Callers:
 *     BiSetBootEntryOrder @ 0x1406D5868 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
