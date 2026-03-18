/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x14013B11C
 * Callers:
 *     LdrpGetParentLangId @ 0x1401F9908 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x140464D10 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x14053A358 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x140647DA0 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1401277E0 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x140144680 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  int *v3; // rax
  const struct CultureDataType *v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = (int *)bsearch(a1, &off_14023F7B0, 0x19CuLL, 0x10uLL, CompareLangName)) != 0LL
    && ((v4 = (const struct CultureDataType *)((char *)&unk_140241170 + 24 * v3[2]), (v2 & 2) != 0)
     || !IsNeutralLanguageItem(v4)) )
  {
    return *(unsigned __int16 *)v4;
  }
  else
  {
    return 0LL;
  }
}
