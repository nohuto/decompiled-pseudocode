/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x140181570
 * Callers:
 *     VfZwQueryDriverEntryOrder @ 0x1407570AC (VfZwQueryDriverEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
