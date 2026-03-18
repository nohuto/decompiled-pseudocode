/*
 * XREFs of AdtpBuildReplacementString @ 0x14068D4C8
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     AdtpBuildRegistryValueString @ 0x14068C194 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1403E126C (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall AdtpBuildReplacementString(ULONG a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // edi
  UNICODE_STRING Source; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF

  Source.Buffer = (wchar_t *)&v6;
  *(_DWORD *)&Source.Length = 1310720;
  v3 = RtlIntegerToUnicodeString(a1, 0xAu, &Source);
  if ( v3 >= 0 )
  {
    if ( a2->Length )
      RtlAppendUnicodeToString(a2, L", ");
    RtlAppendUnicodeToString(a2, L"%%");
    RtlAppendUnicodeStringToString(a2, &Source);
  }
  return (unsigned int)v3;
}
