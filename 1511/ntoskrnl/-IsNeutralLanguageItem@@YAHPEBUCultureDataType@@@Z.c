/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1401277E0
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140127874 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14013B11C (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 4) == 117 && *(_WORD *)a1 != 127;
}
