/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C005F980
 * Callers:
 *     bAddFlEntry @ 0x1C00608E8 (bAddFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C00BC9A0 (vInitFontsDirectoryNameInformation.c)
 *     bAddAllFlEntry @ 0x1C01082A8 (bAddAllFlEntry.c)
 *     FontAssocDefaultRoutine @ 0x1C02891C0 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C028937C (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0289B84 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C005FA64 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00604D0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     cCapString @ 0x1C00607F4 (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 *v6; // rbx
  unsigned int v7; // edi
  wchar_t *v9; // rax
  _WORD *v10; // rdx
  __int64 v11; // r8
  unsigned __int16 *v12; // [rsp+58h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v12, 0x208u);
  v6 = v12;
  if ( v12 )
  {
    if ( wcschr(a2, 0x5Cu) )
    {
      cCapString(a1, a2, 260LL);
      v9 = wcsstr(a1, L"%SYSTEMROOT%");
      if ( v9 )
      {
        *v9 = 92;
        v10 = v9 + 12;
        v11 = -1LL;
        do
          ++v11;
        while ( v10[v11] );
        memmove(v9 + 11, v10, 2 * v11 + 2);
        goto LABEL_8;
      }
      if ( a1[1] != 58
        || a1[2] != 92
        || (int)StringCchCopyW(v6, 0x104uLL, a1) >= 0
        && (int)StringCchCopyW(a1, 0x104uLL, L"\\??\\") >= 0
        && (int)StringCchCatW(a1, v4, v6) >= 0 )
      {
        goto LABEL_8;
      }
    }
    else if ( (int)StringCchCopyW(v6, 0x104uLL, L"\\??\\") >= 0
           && (int)StringCchCatW(v6, v4, (const unsigned __int16 *)0xFFFFF78000000030LL) >= 0
           && (int)StringCchCatW(v6, v4, L"\\fonts\\") >= 0
           && (int)StringCchCatW(v6, v4, a2) >= 0 )
    {
      cCapString(a1, v6, 260LL);
LABEL_8:
      v7 = 1;
      goto LABEL_9;
    }
  }
  v7 = 0;
LABEL_9:
  if ( v6 )
    Win32FreePool(v6, v4, v5);
  return v7;
}
