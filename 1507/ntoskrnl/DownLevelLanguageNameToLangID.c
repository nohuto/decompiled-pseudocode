/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x14015EA78
 * Callers:
 *     LdrpGetParentLangId @ 0x14024895C (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14046391C (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x14059284C (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1406CAE84 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x14014FCCC (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x140172700 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  int *v3; // rax
  const struct CultureDataType *v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = (int *)bsearch(a1, &off_14028B8C0, 0x19CuLL, 0x10uLL, CompareLangName)) != 0LL
    && ((v4 = (const struct CultureDataType *)((char *)&unk_14028D280 + 24 * v3[2]), (v2 & 2) != 0)
     || !IsNeutralLanguageItem(v4)) )
  {
    return *(unsigned __int16 *)v4;
  }
  else
  {
    return 0LL;
  }
}
