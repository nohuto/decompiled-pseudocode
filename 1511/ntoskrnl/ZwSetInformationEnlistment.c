/*
 * XREFs of ZwSetInformationEnlistment @ 0x1401535C0
 * Callers:
 *     VfZwSetInformationEnlistment @ 0x1406D4320 (VfZwSetInformationEnlistment.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&EnlistmentInformationClass, EnlistmentInformation);
}
