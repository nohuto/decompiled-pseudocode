/*
 * XREFs of ZwSetSystemInformation @ 0x14015CF60
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140220D48 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x140696FB0 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1406970BC (SmStoreDelete.c)
 *     SmStoreResize @ 0x140697294 (SmStoreResize.c)
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
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass, SystemInformation, SystemInformationLength);
}
