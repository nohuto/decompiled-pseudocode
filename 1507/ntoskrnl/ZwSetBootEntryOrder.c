/*
 * XREFs of ZwSetBootEntryOrder @ 0x140181D70
 * Callers:
 *     BiSetBootEntryOrder @ 0x140710A7C (BiSetBootEntryOrder.c)
 *     VfZwSetBootEntryOrder @ 0x140757D7C (VfZwSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
