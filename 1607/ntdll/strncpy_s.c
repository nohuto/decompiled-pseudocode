/*
 * XREFs of strncpy_s @ 0x1800A2130
 * Callers:
 *     _splitpath_helper @ 0x180097B00 (_splitpath_helper.c)
 *     _splitpath_s @ 0x1800A1530 (_splitpath_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  errno_t v5; // ebx
  char *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  if ( MaxCount )
  {
    if ( !Destination )
    {
LABEL_27:
      invalid_parameter();
      return 22;
    }
  }
  else if ( !Destination )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_27;
  }
  if ( !SizeInBytes )
    goto LABEL_27;
  if ( !MaxCount )
  {
    *Destination = 0;
    return 0;
  }
  if ( Source )
  {
    v6 = Destination;
    v7 = SizeInBytes;
    if ( MaxCount == -1LL )
    {
      v8 = Destination - Source;
      do
      {
        v9 = *Source;
        Source[v8] = *Source;
        ++Source;
        if ( !v9 )
          break;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = Source - Destination;
      do
      {
        v11 = v6[v10];
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v6 = 0;
    }
    if ( v7 )
      return 0;
    if ( MaxCount == -1LL )
    {
      Destination[SizeInBytes - 1] = 0;
      return 80;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  *Destination = 0;
  invalid_parameter();
  return v5;
}
