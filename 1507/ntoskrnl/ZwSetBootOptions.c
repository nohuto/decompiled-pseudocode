/*
 * XREFs of ZwSetBootOptions @ 0x140181D90
 * Callers:
 *     BiSetBootOptions @ 0x140710AD0 (BiSetBootOptions.c)
 *     VfZwSetBootOptions @ 0x140757DB8 (VfZwSetBootOptions.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions, *(_QWORD *)&FieldsToChange, v2);
}
