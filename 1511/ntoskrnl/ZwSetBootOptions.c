/*
 * XREFs of ZwSetBootOptions @ 0x140153420
 * Callers:
 *     BiSetBootOptions @ 0x140690FB8 (BiSetBootOptions.c)
 *     VfZwSetBootOptions @ 0x1406D41F0 (VfZwSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
