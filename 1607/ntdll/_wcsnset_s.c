/*
 * XREFs of _wcsnset_s @ 0x1800984D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

errno_t __cdecl wcsnset_s(wchar_t *Destination, size_t SizeInWords, wchar_t Value, size_t MaxCount)
{
  wchar_t *v5; // rax

  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_18;
LABEL_6:
    if ( !SizeInWords )
      goto LABEL_18;
    v5 = Destination;
    if ( *Destination )
    {
      while ( MaxCount )
      {
        if ( --SizeInWords )
        {
          *v5 = Value;
          --MaxCount;
          if ( *++v5 )
            continue;
        }
        goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( MaxCount )
      {
LABEL_16:
        if ( SizeInWords )
          return 0;
        *Destination = 0;
        goto LABEL_18;
      }
    }
    while ( *v5 )
    {
      if ( !--SizeInWords )
        break;
      ++v5;
    }
    goto LABEL_16;
  }
  if ( Destination )
    goto LABEL_6;
  if ( !SizeInWords )
    return 0;
LABEL_18:
  invalid_parameter();
  return 22;
}
