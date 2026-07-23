/*
 * XREFs of ZwSetInformationJobObject @ 0x140181F50
 * Callers:
 *     VfZwSetInformationJobObject @ 0x140757FBC (VfZwSetInformationJobObject.c)
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
