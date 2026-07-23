/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x140152C00
 * Callers:
 *     VfZwQueryDriverEntryOrder @ 0x1406D34E4 (VfZwQueryDriverEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
