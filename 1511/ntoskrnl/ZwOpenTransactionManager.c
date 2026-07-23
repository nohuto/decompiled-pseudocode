/*
 * XREFs of ZwOpenTransactionManager @ 0x140152A00
 * Callers:
 *     VfZwOpenTransactionManager @ 0x1406D2FA0 (VfZwOpenTransactionManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
