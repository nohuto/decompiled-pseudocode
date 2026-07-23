/*
 * XREFs of ZwSetBootOptions @ 0x140181D90
 * Callers:
 *     BiSetBootOptions @ 0x140710AD0 (BiSetBootOptions.c)
 *     VfZwSetBootOptions @ 0x140757DB8 (VfZwSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
