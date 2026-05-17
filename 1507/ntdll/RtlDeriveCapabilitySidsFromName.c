/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x180050F90
 * Callers:
 *     RtlCapabilityCheck @ 0x18004A7A0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x180050AE0 (RtlUpcaseUnicodeString.c)
 *     SHA256Final @ 0x180050E6C (SHA256Final.c)
 *     SHA256Update @ 0x180051240 (SHA256Update.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // edi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v13[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v14; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v15; // [rsp+B0h] [rbp+27h]

  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  memset((void *)a3, 0, 0x30uLL);
  memset((void *)a2, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
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
    SHA256Update(v13, UnicodeString.Buffer, UnicodeString.Length);
    SHA256Final(v13, &v14);
    RtlInitializeSid(a2, (__int64)&RtlpNtAuthority, 9u);
    v7 = v14;
    *(_DWORD *)(a2 + 8) = 32;
    v8 = v15;
    *(_OWORD *)(a2 + 12) = v7;
    *(_OWORD *)(a2 + 28) = v8;
    v9 = 0;
    while ( !RtlEqualUnicodeString(
               &UnicodeString.Length,
               (unsigned __int16 *)&RtlpLegacyApplicationCapabilityNames + 8 * v9,
               0) )
    {
      if ( ++v9 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(a3, (__int64)&RtlpAppPackageAuthority, 2u);
    *(_DWORD *)(a3 + 8) = 3;
    *(_DWORD *)(a3 + 12) = v9 + 1;
LABEL_8:
    RtlFreeAnsiString(&UnicodeString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(a3, (__int64)&RtlpAppPackageAuthority, 0xAu);
      v10 = v14;
      *(_DWORD *)(a3 + 8) = 3;
      v11 = v15;
      *(_DWORD *)(a3 + 12) = 1024;
      *(_OWORD *)(a3 + 16) = v10;
      *(_OWORD *)(a3 + 32) = v11;
    }
    return 0LL;
  }
  return result;
}
