/*
 * XREFs of ZwSetSystemInformation @ 0x14015D4D0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140220B74 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x140697094 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1406971A0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x140697378 (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x1407BB31C (KitpInitAitSampleRate.c)
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
