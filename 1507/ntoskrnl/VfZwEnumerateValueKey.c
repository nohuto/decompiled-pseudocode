/*
 * XREFs of VfZwEnumerateValueKey @ 0x140755F84
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
