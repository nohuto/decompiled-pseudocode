/*
 * XREFs of AslPathClean @ 0x1406C5FDC
 * Callers:
 *     SdbpResolveMatchingFile @ 0x1406C3BA4 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall AslPathClean(const wchar_t *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // edi
  wchar_t *v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  wchar_t v11; // dx
  wchar_t v12; // dx
  unsigned __int64 v13; // r9
  wchar_t v14; // dx
  wchar_t v15; // r8
  __int16 v16; // ax
  __int16 v17; // ax

  v3 = -1LL;
  v5 = 0;
  do
    ++v3;
  while ( Src[v3] );
  if ( a3 >= v3 + 1 )
  {
    v7 = wcschr(Src, 0x3Au);
    if ( v7 )
      goto LABEL_10;
    v8 = 4LL;
    if ( !wcsncmp(Src, L"\\??\\", 4uLL) )
      goto LABEL_12;
    if ( !wcsncmp(Src, L"\\\\", 2uLL) )
    {
      v8 = 2LL;
      goto LABEL_12;
    }
    v7 = wcschr(Src, 0x5Cu);
    if ( v7 )
LABEL_10:
      v8 = ((unsigned __int64)((char *)v7 - (char *)Src) >> 1) + 1;
    else
      v8 = 1LL;
LABEL_12:
    memmove(a2, Src, 2 * v8);
    v9 = v8;
    v10 = v8;
    if ( v8 >= v3 )
    {
LABEL_46:
      *((_WORD *)a2 + v9) = 0;
      return v5;
    }
    while ( 1 )
    {
      v11 = Src[v10];
      if ( v11 == 92 || v11 == 47 )
      {
        if ( !v9 || *((_WORD *)a2 + v9 - 1) != 92 )
          *((_WORD *)a2 + v9++) = 92;
        goto LABEL_45;
      }
      if ( v11 != 46 )
      {
        if ( v10 < v3 )
        {
          do
          {
            v12 = Src[v10];
            if ( v12 == 92 )
              break;
            if ( v12 == 47 )
              break;
            *((_WORD *)a2 + v9) = v12;
            ++v10;
            ++v9;
          }
          while ( v10 < v3 );
          if ( v10 < v3 && v9 >= 2 && *((_WORD *)a2 + v9 - 1) == 46 && *((_WORD *)a2 + v9 - 2) != 46 )
            --v9;
        }
        --v10;
        goto LABEL_45;
      }
      v13 = v10 + 1;
      if ( v10 + 1 == v3 )
        goto LABEL_46;
      v14 = Src[v10 + 1];
      if ( v14 != 92 && v14 != 47 )
      {
        if ( v14 != 46 )
          goto LABEL_45;
        if ( v10 + 2 != v3 )
        {
          v15 = Src[v10 + 2];
          if ( v15 != 92 && v15 != 47 )
            goto LABEL_45;
        }
        if ( v9 < v8 )
          goto LABEL_40;
        do
        {
          v16 = *((_WORD *)a2 + v9);
          *((_WORD *)a2 + v9) = 0;
          if ( v16 == 92 )
            break;
          --v9;
        }
        while ( v9 >= v8 );
        if ( v9 < v8 )
          goto LABEL_40;
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
LABEL_40:
          ++v9;
      }
      v10 = v13;
LABEL_45:
      if ( ++v10 >= v3 )
        goto LABEL_46;
    }
  }
  return (unsigned int)-1073741789;
}
