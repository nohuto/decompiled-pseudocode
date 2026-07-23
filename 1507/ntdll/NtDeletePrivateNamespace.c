/*
 * XREFs of NtDeletePrivateNamespace @ 0x180094570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  NTSTATUS result; // eax

  result = 199;
  __asm { syscall; Low latency system call }
  return result;
}
