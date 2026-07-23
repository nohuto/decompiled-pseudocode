/*
 * XREFs of ZwCreateProcessEx @ 0x180093DD0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        ULONG Reserved)
{
  NTSTATUS result; // eax

  result = 77;
  __asm { syscall; Low latency system call }
  return result;
}
