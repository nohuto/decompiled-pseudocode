/*
 * XREFs of ZwOpenTransaction @ 0x1401529E0
 * Callers:
 *     CmpRmUnDoPhase @ 0x1405E6328 (CmpRmUnDoPhase.c)
 *     VfZwOpenTransaction @ 0x1406D2F1C (VfZwOpenTransaction.c)
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
