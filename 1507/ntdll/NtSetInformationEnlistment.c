/*
 * XREFs of NtSetInformationEnlistment @ 0x1800950A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  NTSTATUS result; // eax

  result = 378;
  __asm { syscall; Low latency system call }
  return result;
}
