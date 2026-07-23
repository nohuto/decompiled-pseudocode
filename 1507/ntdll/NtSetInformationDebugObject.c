/*
 * XREFs of NtSetInformationDebugObject @ 0x180095090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationDebugObject(
        HANDLE DebugObjectHandle,
        DEBUGOBJECTINFOCLASS DebugObjectInformationClass,
        PVOID DebugInformation,
        ULONG DebugInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 377;
  __asm { syscall; Low latency system call }
  return result;
}
