/*
 * XREFs of ZwLoadDriver @ 0x140180E90
 * Callers:
 *     IoEnableIoQos @ 0x1401F8FC0 (IoEnableIoQos.c)
 *     KsepLoadShimProvider @ 0x14020C168 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14054AE18 (EtwpUpdateFileInfoDriverState.c)
 *     VfZwLoadDriver @ 0x140756228 (VfZwLoadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1, v2);
}
