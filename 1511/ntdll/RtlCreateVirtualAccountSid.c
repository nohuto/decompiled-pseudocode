/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x180065190
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x1800106F0 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 *     A_SHAFinal @ 0x180063010 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x180063190 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateVirtualAccountSid(PUNICODE_STRING Name, ULONG BaseSubAuthority, PSID Sid, PULONG SidLength)
{
  ULONG v8; // eax
  bool v9; // cf
  NTSTATUS result; // eax
  int v11; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-59h] BYREF
  _DWORD v13[24]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v14[6]; // [rsp+90h] [rbp+17h] BYREF

  if ( !Name || !SidLength || BaseSubAuthority - 80 > 0x1F )
    return -1073741811;
  v8 = RtlLengthRequiredSid(6u);
  v9 = *SidLength < v8;
  *SidLength = v8;
  if ( v9 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, Name, 1u);
  if ( result >= 0 )
  {
    v13[21] = 0;
    v13[22] = 0;
    v13[16] = 1732584193;
    v13[17] = -271733879;
    v13[18] = -1732584194;
    v13[19] = 271733878;
    v13[20] = -1009589776;
    A_SHAUpdate((__int64)v13, (char *)DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v13, (__int64)v14);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v11 = v14[0];
    *((_DWORD *)Sid + 2) = BaseSubAuthority;
    *((_DWORD *)Sid + 3) = v11;
    *((_DWORD *)Sid + 4) = v14[1];
    *((_DWORD *)Sid + 5) = v14[2];
    *((_DWORD *)Sid + 6) = v14[3];
    *((_DWORD *)Sid + 7) = v14[4];
    return 0;
  }
  return result;
}
