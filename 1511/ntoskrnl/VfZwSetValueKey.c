/*
 * XREFs of VfZwSetValueKey @ 0x1406D474C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetValueKey(
        HANDLE KeyHandle,
        UNICODE_STRING *a2,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG a6)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)Data, (int)retaddr);
  }
  return pXdvZwSetValueKey(KeyHandle, a2, TitleIndex, Type, Data, a6);
}
