/*
 * XREFs of ZwUnloadDriver @ 0x14015D830
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140496D14 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
