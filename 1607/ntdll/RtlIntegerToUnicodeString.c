/*
 * XREFs of RtlIntegerToUnicodeString @ 0x180011CA0
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x180011954 (RtlpComputeLangListCheckSum.c)
 *     QueryFeatureOverride @ 0x1800E2BB0 (QueryFeatureOverride.c)
 *     RtlConvertLCIDToString @ 0x1800E57F0 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlIntegerToChar @ 0x180011D30 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlIntegerToUnicodeString(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(a1, a2, 33LL, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
