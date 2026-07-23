/*
 * XREFs of ZwCreateEnlistment @ 0x1401519E0
 * Callers:
 *     VfZwCreateEnlistment @ 0x1406D1A7C (VfZwCreateEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE ResourceManagerHandle,
        HANDLE TransactionHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        NOTIFICATION_MASK NotificationMask,
        PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
