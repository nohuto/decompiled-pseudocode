/*
 * XREFs of ZwAddDriverEntry @ 0x14017FD10
 * Callers:
 *     VfZwAddDriverEntry @ 0x140754CB4 (VfZwAddDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
