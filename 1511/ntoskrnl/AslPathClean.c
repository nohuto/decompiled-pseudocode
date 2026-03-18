/*
 * XREFs of AslPathClean @ 0x140536240
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140535724 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     wcsncmp @ 0x140145C64 (wcsncmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall AslPathClean(wchar_t *Str, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // edi
  wchar_t *v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rax
  wchar_t v11; // dx
  wchar_t v12; // dx
  unsigned __int64 v14; // r9
  wchar_t v15; // dx
  wchar_t v16; // r8
  __int16 v17; // ax
  __int16 v18; // ax

  v3 = -1LL;
  v5 = 0;
  do
    ++v3;
  while ( Str[v3] );
  if ( a3 < v3 + 1 )
    return (unsigned int)-1073741789;
  v7 = wcschr(Str, 0x3Au);
  if ( !v7 )
  {
    v8 = 4LL;
    if ( !wcsncmp(Str, L"\\??\\", 4uLL) )
      goto LABEL_6;
    if ( !wcsncmp(Str, L"\\\\", 2uLL) )
    {
      v8 = 2LL;
      goto LABEL_6;
    }
    v7 = wcschr(Str, 0x5Cu);
    if ( !v7 )
    {
      v8 = 1LL;
      goto LABEL_6;
    }
  }
  v8 = ((unsigned __int64)((char *)v7 - (char *)Str) >> 1) + 1;
LABEL_6:
  memmove(a2, Str, 2 * v8);
  v9 = v8;
  for ( i = v8; i < v3; ++i )
  {
    v11 = Str[i];
    if ( v11 == 92 || v11 == 47 )
    {
      if ( !v9 || *((_WORD *)a2 + v9 - 1) != 92 )
        *((_WORD *)a2 + v9++) = 92;
      continue;
    }
    if ( v11 != 46 )
    {
      if ( i < v3 )
      {
        do
        {
          v12 = Str[i];
          if ( v12 == 92 )
            break;
          if ( v12 == 47 )
            break;
          *((_WORD *)a2 + v9) = v12;
          ++i;
          ++v9;
        }
        while ( i < v3 );
        if ( i < v3 && v9 >= 2 && *((_WORD *)a2 + v9 - 1) == 46 && *((_WORD *)a2 + v9 - 2) != 46 )
          --v9;
      }
      --i;
      continue;
    }
    v14 = i + 1;
    if ( i + 1 == v3 )
      break;
    v15 = Str[i + 1];
    if ( v15 != 92 && v15 != 47 )
    {
      if ( v15 != 46 )
        continue;
      if ( i + 2 != v3 )
      {
        v16 = Str[i + 2];
        if ( v16 != 92 && v16 != 47 )
          continue;
      }
      if ( v9 < v8 )
        goto LABEL_46;
      do
      {
        v17 = *((_WORD *)a2 + v9);
        *((_WORD *)a2 + v9) = 0;
        if ( v17 == 92 )
          break;
        --v9;
      }
      while ( v9 >= v8 );
      if ( v9 < v8 )
        goto LABEL_46;
      do
      {
        v18 = *((_WORD *)a2 + v9);
        *((_WORD *)a2 + v9) = 0;
        if ( v18 == 92 )
          break;
        --v9;
      }
      while ( v9 >= v8 );
      if ( v9 < v8 )
LABEL_46:
        ++v9;
    }
    i = v14;
  }
  *((_WORD *)a2 + v9) = 0;
  return v5;
}
