/*
 * XREFs of VfZwDeleteValueKey @ 0x1406D2064
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwDeleteValueKey(HANDLE KeyHandle, UNICODE_STRING *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString((int)a2, (int)retaddr);
  return pXdvZwDeleteValueKey(KeyHandle, a2);
}
