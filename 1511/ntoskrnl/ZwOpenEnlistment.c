/*
 * XREFs of ZwOpenEnlistment @ 0x140152780
 * Callers:
 *     CmpRecoverEnlistment @ 0x1405E5AF8 (CmpRecoverEnlistment.c)
 *     VfZwOpenEnlistment @ 0x1406D2944 (VfZwOpenEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
