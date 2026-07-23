/*
 * XREFs of ZwQueryInformationEnlistment @ 0x1401815F0
 * Callers:
 *     VfZwQueryInformationEnlistment @ 0x140757208 (VfZwQueryInformationEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
