/*
 * XREFs of FsRtlRemoveDotsFromPath @ 0x14054AC30
 * Callers:
 *     IopReplaceSymlinkPath @ 0x140624B4C (IopReplaceSymlinkPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveDotsFromPath(PWSTR OriginalString, USHORT PathLength, USHORT *NewLength)
{
  unsigned __int16 v3; // r10
  __int16 v5; // r9
  unsigned __int16 v6; // ax
  int v7; // r11d
  WCHAR v9; // cx
  int v10; // ebx
  bool v11; // sf
  __int64 v12; // rcx
  WCHAR *v13; // rdi

  v3 = PathLength >> 1;
  v5 = 0;
  if ( PathLength >> 1 == 3 )
  {
    if ( *OriginalString == 92 && OriginalString[1] == 46 && OriginalString[2] == 46 )
      return -1073741192;
  }
  else
  {
    if ( v3 == 2 )
    {
      if ( *OriginalString == 46 && OriginalString[1] == 46 )
        return -1073741192;
      goto LABEL_5;
    }
    if ( v3 <= 2u )
      goto LABEL_5;
  }
  if ( *OriginalString == 46 && OriginalString[1] == 46 && OriginalString[2] == 92 )
    return -1073741192;
LABEL_5:
  v6 = 0;
  if ( v3 )
  {
    while ( v6 )
    {
      v7 = v3 - 1;
      if ( v6 < v7 && OriginalString[v6] == 92 && OriginalString[v6 + 1] == 92 )
        goto LABEL_12;
      if ( OriginalString[v6] != 46 )
        break;
      if ( v6 == v7 )
      {
        if ( OriginalString[v6 - 1] == 92 )
        {
          if ( v5 > 1 )
            --v5;
          goto LABEL_12;
        }
        goto LABEL_20;
      }
      v9 = OriginalString[v6 + 1];
      if ( v9 == 92 )
      {
        if ( OriginalString[v6 - 1] == 92 )
        {
          ++v6;
          goto LABEL_12;
        }
LABEL_20:
        OriginalString[v5] = 46;
LABEL_11:
        ++v5;
        goto LABEL_12;
      }
      if ( v9 != 46 )
        goto LABEL_20;
      if ( OriginalString[v6 - 1] != 92 )
        goto LABEL_20;
      v10 = v3 - 2;
      if ( v6 != v10 && OriginalString[v6 + 2] != 92 )
        goto LABEL_20;
      v5 -= 2;
      v11 = v5 < 0;
      if ( v5 > 0 )
      {
        do
        {
          if ( OriginalString[v5] == 92 )
            break;
          --v5;
        }
        while ( v5 > 0 );
        v11 = v5 < 0;
      }
      if ( v11 || OriginalString[v5] != 92 )
        return -1073741192;
      if ( !v5 )
        v5 = v6 == v10;
      ++v6;
LABEL_12:
      if ( ++v6 >= v3 )
        goto LABEL_13;
    }
    OriginalString[v5] = OriginalString[v6];
    goto LABEL_11;
  }
LABEL_13:
  *NewLength = 2 * v5;
  if ( v5 < (int)v3 )
  {
    v12 = (__int16)(v3 - v5);
    v13 = &OriginalString[v5];
    while ( v12 )
    {
      *v13++ = 0;
      --v12;
    }
  }
  return 0;
}
