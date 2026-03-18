/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x140136740
 * Callers:
 *     RtlCapabilityCheck @ 0x1406836A4 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x14078FC70 (SepVariableInitialization.c)
 * Callees:
 *     SymCryptSha256 @ 0x140136878 (SymCryptSha256.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x140479578 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x140514D50 (RtlUpcaseUnicodeString.c)
 */

NTSTATUS __fastcall RtlDeriveCapabilitySidsFromName(PCUNICODE_STRING SourceString, char *Sid, PSID a3)
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

  if ( !SourceString || !Sid || !a3 )
    __fastfail(5u);
  memset(a3, 0, 0x30uLL);
  memset(Sid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, SourceString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v13);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v13;
    *((_DWORD *)Sid + 2) = 32;
    v8 = v14;
    *(_OWORD *)(Sid + 12) = v7;
    *(_OWORD *)(Sid + 28) = v8;
    v9 = 0;
    while ( !RtlEqualUnicodeString(
               &DestinationString,
               (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * v9],
               0) )
    {
      if ( ++v9 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)a3 + 2) = 3;
    *((_DWORD *)a3 + 3) = v9 + 1;
LABEL_8:
    RtlFreeAnsiString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v10 = v13;
      *((_DWORD *)a3 + 2) = 3;
      v11 = v14;
      *((_DWORD *)a3 + 3) = 1024;
      *((_OWORD *)a3 + 1) = v10;
      *((_OWORD *)a3 + 2) = v11;
    }
    return 0;
  }
  return result;
}
