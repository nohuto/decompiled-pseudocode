/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1404FE908
 * Callers:
 *     QueryFeatureOverride @ 0x1402330DC (QueryFeatureOverride.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14026DE14 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x14055BB08 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x14057D9B0 (pIoQueryDeviceDescription.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     ExpValidateLocale @ 0x1406EF500 (ExpValidateLocale.c)
 *     AdtpBuildReplacementString @ 0x14070CFE0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14070D078 (AdtpBuildUserAccountControlString.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407F8760 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1404FEDE4 (RtlIntegerToChar.c)
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
