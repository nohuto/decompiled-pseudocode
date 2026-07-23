/*
 * XREFs of ZwSetInformationEnlistment @ 0x140181F30
 * Callers:
 *     VfZwSetInformationEnlistment @ 0x140757EE8 (VfZwSetInformationEnlistment.c)
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
