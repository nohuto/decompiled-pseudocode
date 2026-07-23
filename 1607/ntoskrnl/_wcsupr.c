/*
 * XREFs of _wcsupr @ 0x14014DFA8
 * Callers:
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x1405723EC (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D52C4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5F9C (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsupr(wchar_t *String)
{
  wchar_t *i; // rdx

  for ( i = String; *i; ++i )
  {
    if ( (unsigned __int16)(*i - 97) <= 0x19u )
      *i -= 32;
  }
  return String;
}
