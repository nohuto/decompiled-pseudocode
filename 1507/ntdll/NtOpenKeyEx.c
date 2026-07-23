/*
 * XREFs of NtOpenKeyEx @ 0x1800949C0
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800BB2B0 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800BD000 (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 268;
  __asm { syscall; Low latency system call }
  return result;
}
