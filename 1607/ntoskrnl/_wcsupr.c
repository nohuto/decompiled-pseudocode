/*
 * XREFs of _wcsupr @ 0x14014DA38
 * Callers:
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x140571EAC (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D518C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5E64 (BiUpdateObjectReferenceInEfiEntry.c)
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
