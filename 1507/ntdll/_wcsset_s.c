/*
 * XREFs of _wcsset_s @ 0x1800859F0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180083FB8 (_invalid_parameter.c)
 */

errno_t __cdecl wcsset_s(wchar_t *Destination, size_t SizeInWords, wchar_t Value)
{
  wchar_t *i; // rax

  if ( !Destination || !SizeInWords )
    goto LABEL_8;
  for ( i = Destination; *i; ++i )
  {
    if ( !--SizeInWords )
      break;
    *i = Value;
  }
  if ( !SizeInWords )
  {
    *Destination = 0;
LABEL_8:
    invalid_parameter();
    return 22;
  }
  return 0;
}
