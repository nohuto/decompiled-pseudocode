/*
 * XREFs of ?CompareUnicodeStrings@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEBG_K01_N@Z @ 0x1C001FE1C
 * Callers:
 *     ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C00206CC (-ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::CompareUnicodeStrings(
        const WCHAR *this,
        const unsigned __int16 *a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        char a5,
        bool a6)
{
  return RtlCompareUnicodeStrings(this, (int)a2, a3, (int)a4, 1u);
}
