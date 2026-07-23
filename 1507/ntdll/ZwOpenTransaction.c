/*
 * XREFs of ZwOpenTransaction @ 0x180094AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  NTSTATUS result; // eax

  result = 283;
  __asm { syscall; Low latency system call }
  return result;
}
