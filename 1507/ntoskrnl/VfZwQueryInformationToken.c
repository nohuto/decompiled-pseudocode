/*
 * XREFs of VfZwQueryInformationToken @ 0x140757480
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  int v9; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, (int)retaddr);
    ViZwCheckVirtualAddress((int)ReturnLength, (int)retaddr);
  }
  return pXdvZwQueryInformationToken(
           TokenHandle,
           TokenInformationClass,
           TokenInformation,
           TokenInformationLength,
           ReturnLength);
}
