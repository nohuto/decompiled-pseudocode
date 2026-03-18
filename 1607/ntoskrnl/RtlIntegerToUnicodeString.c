/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1403F5E20
 * Callers:
 *     QueryFeatureOverride @ 0x1401B8A54 (QueryFeatureOverride.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402390BC (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1404F02F4 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14053F6C0 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x14056FBF0 (AdtpObjsInitialize.c)
 *     ExpValidateLocale @ 0x1406AC70C (ExpValidateLocale.c)
 *     AdtpBuildAccessesString @ 0x1406D1680 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1406D1CFC (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1406D1D94 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x1406E6004 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E6284 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407CD9B4 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x1403F5D28 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
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
