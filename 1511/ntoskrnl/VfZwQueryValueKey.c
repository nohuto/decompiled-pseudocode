/*
 * XREFs of VfZwQueryValueKey @ 0x1406D3DDC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryValueKey(
        HANDLE KeyHandle,
        UNICODE_STRING *a2,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        void *a4,
        ULONG a5,
        PULONG ResultLength)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)ResultLength, (int)retaddr);
  }
  return pXdvZwQueryValueKey(KeyHandle, a2, KeyValueInformationClass, a4, a5, ResultLength);
}
