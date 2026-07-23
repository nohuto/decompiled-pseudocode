/*
 * XREFs of ZwQueryBootOptions @ 0x140152BA0
 * Callers:
 *     BiQueryBootOptions @ 0x140690EB4 (BiQueryBootOptions.c)
 *     VfZwQueryBootOptions @ 0x1406D3298 (VfZwQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
