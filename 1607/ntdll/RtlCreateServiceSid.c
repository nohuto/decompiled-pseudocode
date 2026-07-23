/*
 * XREFs of RtlCreateServiceSid @ 0x18000B8D0
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF4F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     A_SHAFinal @ 0x18000A340 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000A4C0 (A_SHAUpdate.c)
 *     RtlLengthRequiredSid @ 0x18000BB00 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x18000D5E0 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x180011E20 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v6; // eax
  bool v7; // cf
  NTSTATUS result; // eax
  int v9; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v11[24]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v12[6]; // [rsp+90h] [rbp+27h] BYREF

  if ( !ServiceName || !ServiceSidLength )
    return -1073741811;
  v6 = RtlLengthRequiredSid(6u);
  v7 = *ServiceSidLength < v6;
  *ServiceSidLength = v6;
  if ( v7 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, ServiceName, 1u);
  if ( result >= 0 )
  {
    v11[21] = 0;
    v11[22] = 0;
    v11[16] = 1732584193;
    v11[17] = -271733879;
    v11[18] = -1732584194;
    v11[19] = 271733878;
    v11[20] = -1009589776;
    A_SHAUpdate((__int64)v11, (char *)DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v11, (__int64)v12);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(ServiceSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v9 = v12[0];
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v9;
    *((_DWORD *)ServiceSid + 4) = v12[1];
    *((_DWORD *)ServiceSid + 5) = v12[2];
    *((_DWORD *)ServiceSid + 6) = v12[3];
    *((_DWORD *)ServiceSid + 7) = v12[4];
    return 0;
  }
  return result;
}
