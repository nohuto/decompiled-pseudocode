/*
 * XREFs of FontAssocDefaultRoutine @ 0x140254250
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FontAssocDefaultRoutine(wchar_t *Str1, __int64 a2, char *a3)
{
  __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v7; // rbp

  v5 = *(_QWORD *)(W32GetSessionState((_DWORD)Str1, a2) + 96);
  if ( _wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( _wcsicmp(Str1, L"FontPackage") )
    {
      for ( i = 0; i < 7; ++i )
      {
        v7 = 664LL * i;
        if ( !_wcsicmp(Str1, (const wchar_t *)(v7 + v5 + 14296)) )
        {
          if ( *(_WORD *)a3 && (int)StringCchCopyW((char *)(v7 + v5 + 14346), 33LL, a3) >= 0 )
            *(_DWORD *)(v5 + v7 + 14288) = 1;
          return 0LL;
        }
      }
    }
    else
    {
      cCapString((unsigned __int16 *)(v5 + 19468), (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory((unsigned __int16 *)(v5 + 18948), a3);
  }
  return 0LL;
}
