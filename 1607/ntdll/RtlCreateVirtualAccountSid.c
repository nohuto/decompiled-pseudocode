/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x180008FD0
 * Callers:
 *     <none>
 * Callees:
 *     A_SHAFinal @ 0x18000A340 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000A4C0 (A_SHAUpdate.c)
 *     RtlLengthRequiredSid @ 0x18000BB00 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x18000D5E0 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x180011E20 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateVirtualAccountSid(PUNICODE_STRING Name, ULONG BaseSubAuthority, PSID Sid, PULONG SidLength)
{
  ULONG v8; // eax
  bool v9; // cf
  NTSTATUS result; // eax
  int v11; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v13[64]; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+74h] [rbp-5h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+84h] [rbp+Bh]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+94h] [rbp+1Bh]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int v25; // [rsp+A0h] [rbp+27h]

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
    v19 = 0;
    v20 = 0;
    v14 = 1732584193;
    v15 = -271733879;
    v16 = -1732584194;
    v17 = 271733878;
    v18 = -1009589776;
    A_SHAUpdate(v13, DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v13);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v11 = v21;
    *((_DWORD *)Sid + 2) = BaseSubAuthority;
    *((_DWORD *)Sid + 3) = v11;
    *((_DWORD *)Sid + 4) = v22;
    *((_DWORD *)Sid + 5) = v23;
    *((_DWORD *)Sid + 6) = v24;
    *((_DWORD *)Sid + 7) = v25;
    return 0;
  }
  return result;
}
