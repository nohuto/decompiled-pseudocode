/*
 * XREFs of ZwSetSystemInformation @ 0x1401821B0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140257BBC (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1406DA108 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1406DA214 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1406DA3E0 (SmStoreResize.c)
 *     VfZwSetSystemInformation @ 0x1407581D4 (VfZwSetSystemInformation.c)
 *     KitpInitAitSampleRate @ 0x1407E659C (KitpInitAitSampleRate.c)
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
