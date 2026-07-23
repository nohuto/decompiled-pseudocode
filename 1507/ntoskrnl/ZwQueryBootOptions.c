/*
 * XREFs of ZwQueryBootOptions @ 0x140181510
 * Callers:
 *     BiQueryBootOptions @ 0x1407109CC (BiQueryBootOptions.c)
 *     VfZwQueryBootOptions @ 0x140756E60 (VfZwQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
