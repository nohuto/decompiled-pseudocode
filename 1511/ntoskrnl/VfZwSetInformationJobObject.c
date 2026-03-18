/*
 * XREFs of VfZwSetInformationJobObject @ 0x1406D43F4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        void *a3,
        ULONG JobInformationLength)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  return pXdvZwSetInformationJobObject(JobHandle, JobInformationClass, a3, JobInformationLength);
}
