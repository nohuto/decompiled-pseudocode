/*
 * XREFs of ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C013F73C
 * Callers:
 *     bAddAllFlEntry @ 0x1C013DE28 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x1C013F410 (bAddFlEntry.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C01552B0 (vInitFontsDirectoryNameInformation.c)
 *     FontAssocDefaultRoutine @ 0x1C028A7A0 (FontAssocDefaultRoutine.c)
 *     GreEudcLoadLinkW @ 0x1C028A9D4 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C028B194 (bDeleteFlEntry.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0031DE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     cCapString @ 0x1C0033368 (cCapString.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C013F820 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C013F8A4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall bAppendSysDirectory(unsigned __int16 *a1, WCHAR *a2)
{
  unsigned __int16 *v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned int v8; // edi
  wchar_t *v10; // rax
  _WORD *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int16 *v14; // [rsp+58h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v14, 0x208u);
  v4 = v14;
  if ( v14 )
  {
    if ( wcschr(a2, 0x5Cu) )
    {
      cCapString(a1, a2, 260);
      v10 = wcsstr(a1, L"%SYSTEMROOT%");
      if ( v10 )
      {
        *v10 = 92;
        v11 = v10 + 12;
        v12 = -1LL;
        do
          ++v12;
        while ( v11[v12] );
        memmove(v10 + 11, v11, 2 * v12 + 2);
        goto LABEL_8;
      }
      if ( a1[1] != 58
        || a1[2] != 92
        || (int)StringCchCopyW((char *)v4, 260LL, (char *)a1) >= 0
        && (int)StringCchCopyW((char *)a1, 260LL, (char *)L"\\??\\") >= 0
        && (int)StringCchCatW(a1, v13, v4) >= 0 )
      {
        goto LABEL_8;
      }
    }
    else if ( (int)StringCchCopyW((char *)v4, 260LL, (char *)L"\\??\\") >= 0
           && (int)StringCchCatW(v4, v5, (const unsigned __int16 *)0xFFFFF78000000030LL) >= 0
           && (int)StringCchCatW(v4, v6, L"\\fonts\\") >= 0
           && (int)StringCchCatW(v4, v7, a2) >= 0 )
    {
      cCapString(a1, v4, 260);
LABEL_8:
      v8 = 1;
      goto LABEL_9;
    }
  }
  v8 = 0;
LABEL_9:
  if ( v4 )
    Win32FreePool(v4);
  return v8;
}
