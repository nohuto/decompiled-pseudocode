/*
 * XREFs of ZwLoadDriver @ 0x14015BBA0
 * Callers:
 *     KsepLoadShimProvider @ 0x1401DCA88 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140496284 (EtwpUpdateFileInfoDriverState.c)
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
