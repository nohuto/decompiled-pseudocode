/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x1C00E5CDC
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00E5B50 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C000FC04 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetDword @ 0x1C00E5D04 (CmRegUtilUcValueGetDword.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueGetDword(__int64 a1, const WCHAR *a2)
{
  NTSTATUS result; // eax
  __int64 v3; // r10
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilUcValueGetDword(v3, &DestinationString);
  return result;
}
