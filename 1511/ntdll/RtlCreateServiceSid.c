/*
 * XREFs of RtlCreateServiceSid @ 0x180062A60
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8110 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x1800106F0 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 *     A_SHAFinal @ 0x180063010 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x180063190 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v6; // eax
  bool v7; // cf
  NTSTATUS result; // eax
  int v9; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v11[64]; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+74h] [rbp+Bh]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  int v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+84h] [rbp+1Bh]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+94h] [rbp+2Bh]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  int v23; // [rsp+A0h] [rbp+37h]

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
    v17 = 0;
    v18 = 0;
    v12 = 1732584193;
    v13 = -271733879;
    v14 = -1732584194;
    v15 = 271733878;
    v16 = -1009589776;
    A_SHAUpdate(v11, DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v11);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(ServiceSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v9 = v19;
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v9;
    *((_DWORD *)ServiceSid + 4) = v20;
    *((_DWORD *)ServiceSid + 5) = v21;
    *((_DWORD *)ServiceSid + 6) = v22;
    *((_DWORD *)ServiceSid + 7) = v23;
    return 0;
  }
  return result;
}
