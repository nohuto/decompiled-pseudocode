/*
 * XREFs of strncat_s @ 0x140153274
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

errno_t __cdecl strncat_s(char *a1, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  char *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  char v9; // al
  signed __int64 v10; // r8
  char v11; // al

  v4 = SizeInBytes;
  v5 = a1;
  if ( MaxCount )
  {
    if ( !a1 )
    {
LABEL_10:
      xHalFreeMessageTarget();
      return 22;
    }
  }
  else if ( !a1 )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_10;
  }
  if ( !SizeInBytes )
    goto LABEL_10;
  if ( MaxCount && !Src )
  {
    *a1 = 0;
    goto LABEL_10;
  }
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  if ( SizeInBytes )
  {
    if ( MaxCount == -1LL )
    {
      v8 = a1 - Src;
      do
      {
        v9 = *Src;
        Src[v8] = *Src;
        ++Src;
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
      v10 = Src - a1;
      do
      {
        v11 = a1[v10];
        *a1++ = v11;
        if ( !v11 )
          break;
        if ( !--SizeInBytes )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
LABEL_26:
        *a1 = 0;
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
  xHalFreeMessageTarget();
  return v7;
}
