/*
 * XREFs of ZwSetBootOptions @ 0x140153420
 * Callers:
 *     BiSetBootOptions @ 0x140690FB8 (BiSetBootOptions.c)
 *     VfZwSetBootOptions @ 0x1406D41F0 (VfZwSetBootOptions.c)
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
