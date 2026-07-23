/*
 * XREFs of ZwSetSystemInformation @ 0x140153840
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140208928 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x140657D10 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x140657E1C (SmStoreDelete.c)
 *     SmStoreResize @ 0x140657FE8 (SmStoreResize.c)
 *     VfZwSetSystemInformation @ 0x1406D460C (VfZwSetSystemInformation.c)
 *     KitpInitAitSampleRate @ 0x14077066C (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        SIZE_T SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
