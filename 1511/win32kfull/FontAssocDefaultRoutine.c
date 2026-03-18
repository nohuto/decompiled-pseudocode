/*
 * XREFs of FontAssocDefaultRoutine @ 0x1C028A870
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0018720 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     cCapString @ 0x1C0018B2C (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
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
      cCapString((WCHAR *)&word_1C0323630, (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory(&gawcSystemDBCSFontPath, (const unsigned __int16 *)a3);
  }
  return 0LL;
}
