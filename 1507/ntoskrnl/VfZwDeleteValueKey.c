/*
 * XREFs of VfZwDeleteValueKey @ 0x140755C2C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwDeleteValueKey(HANDLE KeyHandle, UNICODE_STRING *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString((int)a2, (int)retaddr);
  return pXdvZwDeleteValueKey(KeyHandle, a2);
}
