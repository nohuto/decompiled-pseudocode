/*
 * XREFs of ZwSetInformationJobObject @ 0x140181F50
 * Callers:
 *     VfZwSetInformationJobObject @ 0x140757FBC (VfZwSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle, *(_QWORD *)&JobInformationClass, JobInformation);
}
