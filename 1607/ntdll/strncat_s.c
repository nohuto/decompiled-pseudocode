/*
 * XREFs of strncat_s @ 0x1800A2030
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 */

errno_t __cdecl strncat_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  rsize_t v4; // r11
  char *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  v4 = SizeInBytes;
  v5 = Destination;
  if ( MaxCount )
  {
    if ( !Destination )
    {
LABEL_10:
      invalid_parameter();
      return 22;
    }
  }
  else if ( !Destination )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_10;
  }
  if ( !SizeInBytes )
    goto LABEL_10;
  if ( MaxCount && !Source )
  {
    *Destination = 0;
    goto LABEL_10;
  }
  do
  {
    if ( !*Destination )
      break;
    ++Destination;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  if ( SizeInBytes )
  {
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
        --SizeInBytes;
      }
      while ( SizeInBytes );
    }
    else
    {
      if ( !MaxCount )
        goto LABEL_26;
      v10 = Source - Destination;
      do
      {
        v11 = Destination[v10];
        *Destination++ = v11;
        if ( !v11 )
          break;
        if ( !--SizeInBytes )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
LABEL_26:
        *Destination = 0;
    }
    if ( SizeInBytes )
      return 0;
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
  }
  else
  {
    v7 = 22;
  }
  *v5 = 0;
  invalid_parameter();
  return v7;
}
