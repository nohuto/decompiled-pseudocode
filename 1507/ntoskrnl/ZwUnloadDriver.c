/*
 * XREFs of ZwUnloadDriver @ 0x140182510
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14054AE18 (EtwpUpdateFileInfoDriverState.c)
 *     VfZwUnloadDriver @ 0x140758490 (VfZwUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1, v2);
}
