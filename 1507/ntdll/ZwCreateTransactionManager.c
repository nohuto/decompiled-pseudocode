/*
 * XREFs of ZwCreateTransactionManager @ 0x180094490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        ULONG CreateOptions,
        ULONG CommitStrength)
{
  NTSTATUS result; // eax

  result = 185;
  __asm { syscall; Low latency system call }
  return result;
}
