/*
 * XREFs of ZwQueryInformationThread @ 0x140150AC0
 * Callers:
 *     VfZwQueryInformationThread @ 0x1406D3838 (VfZwQueryInformationThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
