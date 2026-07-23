/*
 * XREFs of ZwSetInformationJobObject @ 0x1401535E0
 * Callers:
 *     VfZwSetInformationJobObject @ 0x1406D43F4 (VfZwSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
