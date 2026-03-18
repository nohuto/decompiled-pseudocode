/*
 * XREFs of VfZwLoadDriver @ 0x1406D2660
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwLoadDriver(UNICODE_STRING *a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString((int)a1, (int)retaddr);
  return pXdvZwLoadDriver(a1);
}
