/*
 * XREFs of ZwSetInformationThread @ 0x1401507C0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400C66BC (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1404B404C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1404B4274 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1404BB858 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x1404FB4AC (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1404FB4F8 (BiAcquirePrivilege.c)
 *     VfZwSetInformationThread @ 0x1406D4508 (VfZwSetInformationThread.c)
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
