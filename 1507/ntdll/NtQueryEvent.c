/*
 * XREFs of NtQueryEvent @ 0x180093E60
 * Callers:
 *     PsspDumpObject_Event @ 0x180082CC0 (PsspDumpObject_Event.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 86;
  __asm { syscall; Low latency system call }
  return result;
}
