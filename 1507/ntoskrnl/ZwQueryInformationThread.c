/*
 * XREFs of ZwQueryInformationThread @ 0x14017F490
 * Callers:
 *     VfZwQueryInformationThread @ 0x140757400 (VfZwQueryInformationThread.c)
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
