/*
 * XREFs of ZwSetInformationThread @ 0x14015A390
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400F7224 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1404BF554 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1404BF77C (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1404C801C (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
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
