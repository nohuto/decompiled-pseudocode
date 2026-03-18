/*
 * XREFs of ZwQueryInformationThread @ 0x140150AC0
 * Callers:
 *     VfZwQueryInformationThread @ 0x1406D3838 (VfZwQueryInformationThread.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&ThreadInformationClass, ThreadInformation);
}
