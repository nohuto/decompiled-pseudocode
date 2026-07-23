/*
 * XREFs of ZwQueryInformationEnlistment @ 0x140152C80
 * Callers:
 *     VfZwQueryInformationEnlistment @ 0x1406D3640 (VfZwQueryInformationEnlistment.c)
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
