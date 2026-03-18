/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x1401323C4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400F7358 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400FA708 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140324 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     LdrpGetParentLangId @ 0x140213C34 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14051B158 (LdrResSearchResource.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     RtlLCIDToCultureName @ 0x140688F04 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14013248C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140132510 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x14014DAA0 (bsearch.c)
 */

__int64 __fastcall DownLevelLangIDToLanguageName(__int16 a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bl
  const struct CultureDataType *v7; // rcx
  const unsigned __int16 *v8; // r8
  __int64 v9; // rbx
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( a3 < 0 || !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = (const struct CultureDataType *)bsearch(
                                         &Key,
                                         &off_140259340,
                                         0x1B3uLL,
                                         0x10uLL,
                                         (int (__cdecl *)(const void *, const void *))CompareLangIDs);
  if ( !v7 || (v5 & 2) == 0 && (unsigned int)IsNeutralLanguageItem(v7) )
    return 0LL;
  v8 = *(const unsigned __int16 **)v7;
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  if ( a2 && (int)StringCchCopyNW(a2, v4, v8, v9 + 1) < 0 )
    return 0LL;
  else
    return (unsigned int)(v9 + 1);
}
