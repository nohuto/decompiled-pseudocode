/*
 * XREFs of ZwQueryBootOptions @ 0x14015C260
 * Callers:
 *     BiQueryBootOptions @ 0x1406D567C (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions, BootOptionsLength, v2);
}
