/*
 * XREFs of _wcsupr @ 0x140144618
 * Callers:
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x140540E38 (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406909CC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140691660 (BiUpdateObjectReferenceInEfiEntry.c)
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
