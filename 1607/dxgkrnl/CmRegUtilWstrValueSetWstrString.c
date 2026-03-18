/*
 * XREFs of CmRegUtilWstrValueSetWstrString @ 0x1C0191C94
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00ED8A4 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C000F72C (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C0191B70 (CmRegUtilUcValueSetUcString.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueSetWstrString(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS result; // eax
  const WCHAR *v4; // r10
  void *v5; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
  {
    result = WdmlibRtlInitUnicodeStringEx(&ValueName, v4);
    if ( result >= 0 )
      return CmRegUtilUcValueSetUcString(v5, &ValueName, &DestinationString.Length);
  }
  return result;
}
