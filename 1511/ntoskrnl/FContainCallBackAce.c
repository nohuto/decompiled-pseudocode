/*
 * XREFs of FContainCallBackAce @ 0x140683FDC
 * Callers:
 *     LocalGetAceCount @ 0x14068584C (LocalGetAceCount.c)
 *     LocalGetSDDLDeliminator @ 0x140686834 (LocalGetSDDLDeliminator.c)
 * Callees:
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 */

__int64 __fastcall FContainCallBackAce(wchar_t *Str1)
{
  unsigned int v1; // edi
  const wchar_t *i; // rbx
  unsigned __int64 v4; // rbp
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = 0;
  for ( i = Str1; *i; ++i )
  {
    v4 = (unsigned __int64)(i - 1);
    if ( !i[1] )
      break;
    if ( !wcsnicmp(i, L"XA", 2uLL)
      || !wcsnicmp(i, L"XD", 2uLL)
      || !wcsnicmp(i, L"RA", 2uLL)
      || !wcsnicmp(i, L"SP", 2uLL)
      || !wcsnicmp(i, L"XU", 2uLL)
      || !wcsnicmp(i, L"ZA", 2uLL) )
    {
      v5 = 1;
      if ( v4 >= (unsigned __int64)Str1 )
      {
        v6 = 1LL;
        do
        {
          if ( i[-v6] != 32 )
            break;
          v6 = ++v5;
        }
        while ( &i[-v5] >= Str1 );
      }
      if ( i[-v5] == 40 )
      {
        LODWORD(v7) = 2;
        if ( *(_WORD *)(v4 + 6) == 32 )
        {
          do
            v7 = (unsigned int)(v7 + 1);
          while ( i[v7] == 32 );
        }
        if ( i[(unsigned int)v7] == 59 )
          return 1;
      }
    }
  }
  return v1;
}
