/*
 * XREFs of ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140036CBC
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140035890 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400373C8 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140037764 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140037E60 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140037EEC (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 */

__int64 __fastcall ATL::CRegParser::NextToken(ATL::CRegParser *this, unsigned __int16 *a2)
{
  const WCHAR *v4; // rcx
  unsigned __int16 *v5; // rbp
  LPWSTR v6; // rax
  char *v7; // rsi
  LPWSTR v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  char *v12; // rsi
  unsigned int v13; // eax
  LPWSTR v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx

  ATL::CRegParser::SkipWhiteSpace(this);
  v4 = *(const WCHAR **)this;
  if ( **(_WORD **)this )
  {
    v5 = a2 + 4096;
    if ( *v4 == 39 )
    {
      v6 = CharNextW(v4);
      for ( *(_QWORD *)this = v6;
            *v6 && (**(_WORD **)this != 39 || *CharNextW(*(LPCWSTR *)this) == 39);
            v6 = *(LPWSTR *)this )
      {
        if ( **(_WORD **)this == 39 )
          *(_QWORD *)this = CharNextW(*(LPCWSTR *)this);
        v7 = *(char **)this;
        v8 = CharNextW(*(LPCWSTR *)this);
        *(_QWORD *)this = v8;
        v9 = ((char *)v8 - v7) >> 1;
        if ( &a2[v9 + 1] >= v5 )
          return 2147614729LL;
        if ( (int)v9 > 0 )
        {
          v10 = v7 - (char *)a2;
          v11 = (unsigned int)v9;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v10);
            ++a2;
            --v11;
          }
          while ( v11 );
        }
      }
      if ( **(_WORD **)this && a2 < v5 )
      {
        *a2 = 0;
        *(_QWORD *)this = CharNextW(*(LPCWSTR *)this);
        return 0LL;
      }
    }
    else
    {
      do
      {
        v12 = *(char **)this;
        v13 = **(unsigned __int16 **)this;
        if ( v13 >= 9 && (**(unsigned __int16 **)this <= 0xAu || v13 == 13 || v13 == 32) )
          break;
        v14 = CharNextW(*(LPCWSTR *)this);
        *(_QWORD *)this = v14;
        v15 = ((char *)v14 - v12) >> 1;
        if ( &a2[v15 + 1] >= v5 )
          return 2147614729LL;
        if ( (int)v15 > 0 )
        {
          v16 = v12 - (char *)a2;
          v17 = (unsigned int)v15;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v16);
            ++a2;
            --v17;
          }
          while ( v17 );
        }
      }
      while ( **(_WORD **)this );
      if ( a2 < v5 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
  }
  return 2147614729LL;
}
