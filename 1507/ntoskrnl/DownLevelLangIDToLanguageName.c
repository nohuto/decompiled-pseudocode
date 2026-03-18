/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x14014FD60
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14002A0FC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x14002AB60 (LdrpResSearchResourceMappedFile.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14015E3E4 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     LdrpGetParentLangId @ 0x14024895C (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14046391C (LdrResSearchResource.c)
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     RtlLCIDToCultureName @ 0x1406CC9C0 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014FCCC (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14014FCDC (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140172700 (bsearch.c)
 */

__int64 __fastcall DownLevelLangIDToLanguageName(__int16 a1, char *a2, int a3, int a4)
{
  __int64 v4; // rsi
  char v5; // bl
  void *v7; // rcx
  char *v8; // r8
  __int64 v9; // rbx
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( a3 < 0 || !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = bsearch(&Key, &unk_14028D280, 0x19CuLL, 0x18uLL, CompareLangIDs);
  if ( !v7 || (v5 & 2) == 0 && IsNeutralLanguageItem((const struct CultureDataType *)v7) )
    return 0LL;
  v8 = (char *)*((_QWORD *)v7 + 1);
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&v8[2 * v9] );
  if ( a2 && (int)StringCchCopyNW(a2, v4, v8, v9 + 1) < 0 )
    return 0LL;
  else
    return (unsigned int)(v9 + 1);
}
