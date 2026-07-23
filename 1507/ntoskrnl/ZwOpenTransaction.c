/*
 * XREFs of ZwOpenTransaction @ 0x140181350
 * Callers:
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
 *     VfZwOpenTransaction @ 0x140756AE4 (VfZwOpenTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
