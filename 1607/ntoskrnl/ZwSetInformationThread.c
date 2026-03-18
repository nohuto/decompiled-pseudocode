/*
 * XREFs of ZwSetInformationThread @ 0x140159E20
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400F93E4 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1404DBF50 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1404DC178 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1404E5400 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x14053BD20 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053BD6C (BiAcquirePrivilege.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&ThreadInformationClass, ThreadInformation);
}
