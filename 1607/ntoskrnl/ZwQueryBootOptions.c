/*
 * XREFs of ZwQueryBootOptions @ 0x14015C7D0
 * Callers:
 *     BiQueryBootOptions @ 0x1406D57B4 (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
