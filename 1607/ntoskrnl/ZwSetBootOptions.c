/*
 * XREFs of ZwSetBootOptions @ 0x14015D090
 * Callers:
 *     BiSetBootOptions @ 0x1406D58BC (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
