/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x140127874
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14009B520 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DD8F4 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14013AA88 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     LdrpGetParentLangId @ 0x1401F9908 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x140464D10 (LdrResSearchResource.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     RtlLCIDToCultureName @ 0x14064993C (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1401277E0 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1401277F0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140144680 (bsearch.c)
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
  v7 = bsearch(&Key, &unk_140241170, 0x19CuLL, 0x18uLL, (int (__cdecl *)(const void *, const void *))CompareLangIDs);
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
