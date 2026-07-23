/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1403F4CE4
 * Callers:
 *     QueryFeatureOverride @ 0x1401B9A20 (QueryFeatureOverride.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140238EE8 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1404D23E8 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14053FC00 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 *     ExpValidateLocale @ 0x1406AC844 (ExpValidateLocale.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1406D1E34 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1406D1ECC (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x1406E613C (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E63BC (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407CD9B4 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x1403F4BEC (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(Value, Base, 0x21u, Stringa);
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
