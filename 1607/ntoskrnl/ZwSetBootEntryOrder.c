/*
 * XREFs of ZwSetBootEntryOrder @ 0x14015CB00
 * Callers:
 *     BiSetBootEntryOrder @ 0x1406D5730 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Ids, Count, v2);
}
