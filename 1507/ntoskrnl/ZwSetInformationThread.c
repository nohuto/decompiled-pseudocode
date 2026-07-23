/*
 * XREFs of ZwSetInformationThread @ 0x14017F190
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14006CAF0 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1405484C0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1405486E8 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1405538A8 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x14056DA44 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14056DA90 (BiAcquirePrivilege.c)
 *     VfZwSetInformationThread @ 0x1407580D0 (VfZwSetInformationThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
