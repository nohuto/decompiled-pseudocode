/*
 * XREFs of AdtpFormatPrefix @ 0x1402390BC
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238CF4 (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1403F5E20 (RtlIntegerToUnicodeString.c)
 */

int __fastcall AdtpFormatPrefix(PUNICODE_STRING Destination, ULONG Value, char a3)
{
  int result; // eax
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF

  String.Buffer = (wchar_t *)&v8;
  *(_DWORD *)&String.Length = 1310720;
  RtlAppendUnicodeToString(Destination, L"%%");
  result = RtlIntegerToUnicodeString(Value, 0xAu, &String);
  if ( result >= 0 )
  {
    result = RtlAppendUnicodeStringToString(Destination, &String);
    if ( a3 == 1 )
      return RtlAppendUnicodeToString(Destination, L"\t");
  }
  return result;
}
