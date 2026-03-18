/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x1C00D7F18
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00D768C (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00A1A14 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetDword @ 0x1C00D7C5C (CmRegUtilUcValueGetDword.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueGetDword(
        void *KeyHandle,
        wchar_t *ValueName,
        unsigned int Value,
        unsigned int *a4)
{
  NTSTATUS result; // eax
  unsigned int v5; // r8d
  unsigned int *v6; // r9
  void *v7; // r10
  _UNICODE_STRING unicodeStringValueName; // [rsp+20h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringValueName, ValueName);
  if ( result >= 0 )
    return CmRegUtilUcValueGetDword(v7, &unicodeStringValueName, v5, v6);
  return result;
}
