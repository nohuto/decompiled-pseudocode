/*
 * XREFs of ZwUnloadDriver @ 0x140153BA0
 * Callers:
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1404B86A4 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     VfZwUnloadDriver @ 0x1406D48C8 (VfZwUnloadDriver.c)
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
