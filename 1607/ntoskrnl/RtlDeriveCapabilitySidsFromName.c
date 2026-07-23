/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x140136CB0
 * Callers:
 *     RtlCapabilityCheck @ 0x140683788 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x14078FC70 (SepVariableInitialization.c)
 * Callees:
 *     SymCryptSha256 @ 0x140136DE8 (SymCryptSha256.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
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
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]

  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  memset(CapabilitySid, 0, 0x30uLL);
  memset(CapabilityGroupSid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v13);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v13;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    v8 = v14;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v8;
    v9 = 0;
    while ( !RtlEqualUnicodeString(
               &DestinationString,
               (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * v9],
               0) )
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
      v10 = v13;
      *((_DWORD *)CapabilitySid + 2) = 3;
      v11 = v14;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v10;
      *((_OWORD *)CapabilitySid + 2) = v11;
    }
    return 0;
  }
  return result;
}
