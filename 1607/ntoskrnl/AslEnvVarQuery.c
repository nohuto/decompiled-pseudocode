/*
 * XREFs of AslEnvVarQuery @ 0x1406C69CC
 * Callers:
 *     SdbpGetProcessHistory @ 0x1406C4148 (SdbpGetProcessHistory.c)
 *     AslEnvExpandStrings @ 0x1406C6480 (AslEnvExpandStrings.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        const wchar_t *a2,
        size_t a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v7; // rbx
  WCHAR *v9; // rcx
  unsigned int v11; // edi
  size_t v13; // r8
  _BYTE *v14; // rdx
  unsigned __int64 v15; // rcx
  size_t v16; // rbx
  WCHAR *v18; // r12
  WCHAR *v19; // r15
  WCHAR v20; // bp
  WCHAR v21; // bx
  WCHAR v22; // ax
  WCHAR v23; // ax
  int v24; // r8d
  WCHAR v25; // ax
  WCHAR *v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // [rsp+50h] [rbp+8h]

  v7 = -1LL;
  v9 = (WCHAR *)&a2[a3];
  v29 = (unsigned __int64)v9;
  v11 = 0;
  v13 = -1LL;
  do
    ++v13;
  while ( aSystemroot_6[v13] );
  if ( a3 < v13 )
  {
LABEL_16:
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v18 = a1;
      v19 = (WCHAR *)a2;
      if ( a2 < v9 )
      {
        do
        {
          v20 = *a1;
          if ( !*a1 )
            break;
          v21 = RtlUpcaseUnicodeChar(*v19);
          v22 = RtlUpcaseUnicodeChar(v20);
          v9 = (WCHAR *)v29;
          if ( v22 != v21 )
            break;
          ++a1;
          ++v19;
        }
        while ( (unsigned __int64)v19 < v29 );
      }
      if ( v19 == v9 && (v23 = *a1, *a1 == 61) )
      {
        v24 = 1;
      }
      else
      {
        v25 = *a1;
        v24 = 0;
        if ( !*a1 )
          goto LABEL_37;
        do
        {
          if ( v25 == 61 && a1 != v18 )
            break;
          v25 = *++a1;
        }
        while ( *a1 );
        v23 = *a1;
        if ( !*a1 )
          goto LABEL_37;
      }
      v26 = a1;
      if ( v23 )
      {
        v27 = 0LL;
        do
        {
          if ( (__int64)(v27 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++a1;
          v27 += 2LL;
        }
        while ( *a1 );
        v9 = (WCHAR *)v29;
      }
      if ( v24 )
      {
        v14 = v26 + 1;
        v28 = ((char *)a1 - v14) >> 1;
        if ( v28 < a5 )
        {
          v16 = v28;
          *a6 = v28;
          goto LABEL_14;
        }
        if ( a4 && a5 )
          *a4 = 0;
        v15 = v28 + 1;
        goto LABEL_12;
      }
LABEL_37:
      ++a1;
    }
  }
  if ( wcsnicmp(a2, L"systemroot", v13) )
  {
    v9 = (WCHAR *)v29;
    goto LABEL_16;
  }
  v14 = (_BYTE *)0xFFFFF78000000030LL;
  do
    ++v7;
  while ( *(_WORD *)(2 * v7 - 0x87FFFFFFFD0LL) );
  if ( v7 < a5 )
  {
    *a6 = v7;
    v16 = v7;
LABEL_14:
    memmove(a4, v14, v16 * 2);
    a4[v16] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v15 = v7 + 1;
LABEL_12:
    v11 = -1073741789;
    *a6 = v15;
  }
  return v11;
}
