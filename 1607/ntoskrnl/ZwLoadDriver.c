/*
 * XREFs of ZwLoadDriver @ 0x14015C110
 * Callers:
 *     KsepLoadShimProvider @ 0x1401DC8B4 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140496D14 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
