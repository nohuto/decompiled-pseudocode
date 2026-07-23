/*
 * XREFs of ZwAddDriverEntry @ 0x140151340
 * Callers:
 *     VfZwAddDriverEntry @ 0x1406D10EC (VfZwAddDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
