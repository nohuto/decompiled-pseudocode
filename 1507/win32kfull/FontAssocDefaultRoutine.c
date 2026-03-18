/*
 * XREFs of FontAssocDefaultRoutine @ 0x1C028A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0031DE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C0033368 (cCapString.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C013F73C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 */

__int64 __fastcall FontAssocDefaultRoutine(wchar_t *Str1, __int64 a2, char *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rbx

  if ( _wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( _wcsicmp(Str1, L"FontPackage") )
    {
      v5 = 0;
      while ( _wcsicmp(Str1, &aFontpackagedon[332 * v5]) )
      {
        if ( ++v5 >= 7 )
          return 0LL;
      }
      if ( *(_WORD *)a3 )
      {
        v6 = 664LL * v5;
        if ( (int)StringCchCopyW((char *)&FontAssocDefaultTable + v6 + 58, 33LL, a3) >= 0 )
          *(_DWORD *)((char *)&FontAssocDefaultTable + v6) = 1;
      }
    }
    else
    {
      cCapString(word_1C0323E00, (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory(&gawcSystemDBCSFontPath, (WCHAR *)a3);
  }
  return 0LL;
}
