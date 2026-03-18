/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x1C00D7F48
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00D7844 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00A1A14 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00D7DF0 (CmRegUtilUcValueSetUcString.c)
 */

__int64 __fastcall CmRegUtilWstrValueSetWstrString(void *KeyHandle, wchar_t *ValueName, wchar_t *ValueData)
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
