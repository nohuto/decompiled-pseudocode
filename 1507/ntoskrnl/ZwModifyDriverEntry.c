/*
 * XREFs of ZwModifyDriverEntry @ 0x140181050
 * Callers:
 *     VfZwModifyDriverEntry @ 0x1407563A4 (VfZwModifyDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
