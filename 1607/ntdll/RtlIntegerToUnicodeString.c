/*
 * XREFs of RtlIntegerToUnicodeString @ 0x180011C90
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x180011944 (RtlpComputeLangListCheckSum.c)
 *     QueryFeatureOverride @ 0x1800E2C74 (QueryFeatureOverride.c)
 *     RtlConvertLCIDToString @ 0x1800E58B0 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlIntegerToChar @ 0x180011D20 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182D0 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
