/*
 * XREFs of _wcsupr @ 0x140172698
 * Callers:
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x1405B6BFC (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407104E4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140711178 (BiUpdateObjectReferenceInEfiEntry.c)
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
