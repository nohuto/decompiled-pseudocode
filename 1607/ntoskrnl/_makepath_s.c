/*
 * XREFs of _makepath_s @ 0x140152524
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

errno_t __cdecl makepath_s(
        char *PathResult,
        size_t SizeInWords,
        const char *Drive,
        const char *Dir,
        const char *Filename,
        const char *Ext)
{
  __int64 v7; // r11
  char *v8; // r10
  char v9; // al
  char v10; // al
  const char *v11; // rcx
  const char *v12; // rcx
  errno_t v13; // ebx

  if ( !PathResult || !SizeInWords )
  {
    v13 = 22;
    goto LABEL_32;
  }
  v7 = 0LL;
  v8 = PathResult;
  if ( Drive && *Drive )
  {
    v7 = 2LL;
    if ( SizeInWords <= 2 )
      goto LABEL_29;
    *PathResult = *Drive;
    PathResult[1] = 58;
    v8 = PathResult + 2;
  }
  if ( Dir && *Dir )
  {
    while ( ++v7 < SizeInWords )
    {
      v9 = *Dir++;
      *v8++ = v9;
      if ( !*Dir )
      {
        v10 = *(Dir - 1);
        if ( v10 != 47 && v10 != 92 )
        {
          if ( ++v7 >= SizeInWords )
            goto LABEL_29;
          *v8++ = 92;
        }
        goto LABEL_15;
      }
    }
    goto LABEL_29;
  }
LABEL_15:
  v11 = Filename;
  if ( Filename )
  {
    while ( *v11 )
    {
      if ( ++v7 >= SizeInWords )
        goto LABEL_29;
      *v8++ = *v11++;
    }
  }
  v12 = Ext;
  if ( !Ext || !*Ext )
  {
LABEL_28:
    if ( v7 + 1 <= SizeInWords )
    {
      *v8 = 0;
      return 0;
    }
    goto LABEL_29;
  }
  if ( *Ext == 46 )
    goto LABEL_27;
  if ( ++v7 < SizeInWords )
  {
    *v8++ = 46;
LABEL_27:
    while ( *v12 )
    {
      if ( ++v7 >= SizeInWords )
        goto LABEL_29;
      *v8++ = *v12++;
    }
    goto LABEL_28;
  }
LABEL_29:
  *PathResult = 0;
  v13 = 34;
LABEL_32:
  xHalFreeMessageTarget();
  return v13;
}
