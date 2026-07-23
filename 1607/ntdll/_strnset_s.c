/*
 * XREFs of _strnset_s @ 0x1800A17D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

errno_t __cdecl strnset_s(char *String, size_t SizeInBytes, int Value, size_t MaxCount)
{
  char *v5; // rax

  if ( MaxCount )
  {
    if ( !String )
      goto LABEL_18;
LABEL_6:
    if ( !SizeInBytes )
      goto LABEL_18;
    v5 = String;
    if ( *String )
    {
      while ( MaxCount )
      {
        if ( --SizeInBytes )
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
        if ( SizeInBytes )
          return 0;
        *String = 0;
        goto LABEL_18;
      }
    }
    while ( *v5 )
    {
      if ( !--SizeInBytes )
        break;
      ++v5;
    }
    goto LABEL_16;
  }
  if ( String )
    goto LABEL_6;
  if ( !SizeInBytes )
    return 0;
LABEL_18:
  invalid_parameter();
  return 22;
}
