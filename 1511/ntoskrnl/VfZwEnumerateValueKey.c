/*
 * XREFs of VfZwEnumerateValueKey @ 0x1406D23BC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG a5,
        PULONG ResultLength)
{
  int v10; // r9d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v10, (int)retaddr);
    ViZwCheckVirtualAddress((int)ResultLength, (int)retaddr);
  }
  return pXdvZwEnumerateValueKey(KeyHandle, Index, KeyValueInformationClass, KeyValueInformation, a5, ResultLength);
}
