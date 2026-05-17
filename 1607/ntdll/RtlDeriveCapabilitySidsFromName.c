/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18000C630
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DA10 (RtlCapabilityCheck.c)
 * Callees:
 *     SHA256Update @ 0x180009654 (SHA256Update.c)
 *     SHA256Final @ 0x18000A224 (SHA256Final.c)
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x180011E30 (RtlUpcaseUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x18001A1D0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // r8
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v17[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v18; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v19; // [rsp+B0h] [rbp+27h]

  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  memset((void *)a3, 0, 0x30uLL);
  memset((void *)a2, 0, 0x2CuLL);
  LOBYTE(v6) = 1;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, v6);
  if ( (int)result >= 0 )
  {
    v17[8] = 0;
    v17[9] = 0;
    v17[0] = 1779033703;
    v17[1] = -1150833019;
    v17[2] = 1013904242;
    v17[3] = -1521486534;
    v17[4] = 1359893119;
    v17[5] = -1694144372;
    v17[6] = 528734635;
    v17[7] = 1541459225;
    SHA256Update((__int64)v17, (_OWORD *)UnicodeString.Buffer, UnicodeString.Length);
    SHA256Final(v17, (__int64)&v18);
    LOBYTE(v8) = 9;
    RtlInitializeSid(a2, &RtlpNtAuthority, v8);
    v9 = v18;
    *(_DWORD *)(a2 + 8) = 32;
    v10 = v19;
    *(_OWORD *)(a2 + 12) = v9;
    *(_OWORD *)(a2 + 28) = v10;
    v11 = 0;
    while ( !(unsigned __int8)RtlEqualUnicodeString(
                                &UnicodeString,
                                (char *)&RtlpLegacyApplicationCapabilityNames + 16 * v11,
                                0LL) )
    {
      if ( ++v11 >= 0xC )
        goto LABEL_8;
    }
    LOBYTE(v12) = 2;
    RtlInitializeSid(a3, &RtlpAppPackageAuthority, v12);
    *(_DWORD *)(a3 + 8) = 3;
    *(_DWORD *)(a3 + 12) = v11 + 1;
LABEL_8:
    RtlFreeAnsiString(&UnicodeString);
    if ( v11 == 12 )
    {
      LOBYTE(v13) = 10;
      RtlInitializeSid(a3, &RtlpAppPackageAuthority, v13);
      v14 = v18;
      *(_DWORD *)(a3 + 8) = 3;
      v15 = v19;
      *(_DWORD *)(a3 + 12) = 1024;
      *(_OWORD *)(a3 + 16) = v14;
      *(_OWORD *)(a3 + 32) = v15;
    }
    return 0LL;
  }
  return result;
}
