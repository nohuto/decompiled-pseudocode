/*
 * XREFs of NtQueryInformationEnlistment @ 0x180094C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 304;
  __asm { syscall; Low latency system call }
  return result;
}
