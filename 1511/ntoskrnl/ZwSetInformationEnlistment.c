/*
 * XREFs of ZwSetInformationEnlistment @ 0x1401535C0
 * Callers:
 *     VfZwSetInformationEnlistment @ 0x1406D4320 (VfZwSetInformationEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
