/*
 * XREFs of ZwUnloadDriver @ 0x14015D2C0
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140496284 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
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
