/*
 * XREFs of ZwSetDriverEntryOrder @ 0x140181E70
 * Callers:
 *     VfZwSetDriverEntryOrder @ 0x140757DF4 (VfZwSetDriverEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
