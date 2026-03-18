/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x1C00BE538
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00BDD84 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C008EB74 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00BE3EC (CmRegUtilUcValueSetUcString.c)
 */

__int64 __fastcall CmRegUtilWstrValueSetWstrString(
        void *KeyHandle,
        unsigned __int16 *ValueName,
        unsigned __int16 *ValueData)
{
  __int64 result; // rax
  wchar_t *v4; // r10
  void *v5; // r9
  _UNICODE_STRING valueString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING unicodeStringValueName; // [rsp+30h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&valueString, ValueData);
  if ( (int)result >= 0 )
  {
    result = WdmlibRtlInitUnicodeStringEx(&unicodeStringValueName, v4);
    if ( (int)result >= 0 )
      return CmRegUtilUcValueSetUcString(v5, &unicodeStringValueName, &valueString);
  }
  return result;
}
