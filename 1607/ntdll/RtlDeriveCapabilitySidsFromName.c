/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18000C620
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DA00 (RtlCapabilityCheck.c)
 * Callees:
 *     SHA256Update @ 0x180009644 (SHA256Update.c)
 *     SHA256Final @ 0x18000A214 (SHA256Final.c)
 *     RtlInitializeSid @ 0x18000D5E0 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x180011E20 (RtlUpcaseUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x18001A1C0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // edi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v13[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v14; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v15; // [rsp+B0h] [rbp+27h]

  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  memset(CapabilitySid, 0, 0x30uLL);
  memset(CapabilityGroupSid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    v13[8] = 0;
    v13[9] = 0;
    v13[0] = 1779033703;
    v13[1] = -1150833019;
    v13[2] = 1013904242;
    v13[3] = -1521486534;
    v13[4] = 1359893119;
    v13[5] = -1694144372;
    v13[6] = 528734635;
    v13[7] = 1541459225;
    SHA256Update((__int64)v13, (_OWORD *)DestinationString.Buffer, DestinationString.Length);
    SHA256Final(v13, (__int64)&v14);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v14;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    v8 = v15;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v8;
    v9 = 0;
    while ( !RtlEqualUnicodeString(&DestinationString, (PUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames + v9, 0) )
    {
      if ( ++v9 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v9 + 1;
LABEL_8:
    RtlFreeAnsiString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v10 = v14;
      *((_DWORD *)CapabilitySid + 2) = 3;
      v11 = v15;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v10;
      *((_OWORD *)CapabilitySid + 2) = v11;
    }
    return 0;
  }
  return result;
}
