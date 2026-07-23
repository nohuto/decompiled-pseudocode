/*
 * XREFs of ZwModifyDriverEntry @ 0x1401526E0
 * Callers:
 *     VfZwModifyDriverEntry @ 0x1406D27DC (VfZwModifyDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
