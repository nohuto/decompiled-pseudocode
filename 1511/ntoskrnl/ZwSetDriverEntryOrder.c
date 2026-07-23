/*
 * XREFs of ZwSetDriverEntryOrder @ 0x140153500
 * Callers:
 *     VfZwSetDriverEntryOrder @ 0x1406D422C (VfZwSetDriverEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
