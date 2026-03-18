/*
 * XREFs of VfZwUnloadDriver @ 0x1406D48C8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwUnloadDriver(UNICODE_STRING *a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckUnicodeString((int)a1, (int)retaddr);
  return pXdvZwUnloadDriver(a1);
}
