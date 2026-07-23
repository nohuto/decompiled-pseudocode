/*
 * XREFs of ZwLoadDriver @ 0x140152500
 * Callers:
 *     IoEnableIoQos @ 0x1401BD738 (IoEnableIoQos.c)
 *     KsepLoadShimProvider @ 0x1401CCE04 (KsepLoadShimProvider.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1404B86A4 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     VfZwLoadDriver @ 0x1406D2660 (VfZwLoadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
