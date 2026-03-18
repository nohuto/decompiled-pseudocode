/*
 * XREFs of VfZwSetValueKey @ 0x140758314
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
