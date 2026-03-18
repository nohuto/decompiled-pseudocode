/*
 * XREFs of VfZwQueryInformationJobObject @ 0x1406D3738
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  int v9; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, (int)retaddr);
    ViZwCheckVirtualAddress((int)ReturnLength, (int)retaddr);
  }
  return pXdvZwQueryInformationJobObject(
           JobHandle,
           JobInformationClass,
           JobInformation,
           JobInformationLength,
           ReturnLength);
}
