/*
 * XREFs of SHA256Final @ 0x18000A214
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18000C620 (RtlDeriveCapabilitySidsFromName.c)
 * Callees:
 *     SHA256Update @ 0x180009644 (SHA256Update.c)
 *     DWORDToBigEndian @ 0x18000A450 (DWORDToBigEndian.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall SHA256Final(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v5; // rdi
  int v6; // edx
  __int64 result; // rax
  _DWORD v8[4]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v9[5]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1[9];
  v5 = 64 - (v2 & 0x3F);
  if ( (unsigned int)v5 <= 8 )
    v5 = (unsigned int)(v5 + 64);
  memset(v9, 0, (unsigned int)(v5 - 8));
  v6 = (v2 >> 29) | (8 * a1[8]);
  LOBYTE(v9[0]) = 0x80;
  v8[0] = v6;
  v8[1] = 8 * v2;
  DWORDToBigEndian((char *)&v8[2] + v5, v8, 2LL);
  SHA256Update((__int64)a1, v9, v5);
  DWORDToBigEndian(a2, a1, 8LL);
  a1[8] = 0;
  a1[9] = 0;
  result = 0LL;
  *a1 = 1779033703;
  a1[1] = -1150833019;
  a1[2] = 1013904242;
  a1[3] = -1521486534;
  a1[4] = 1359893119;
  a1[5] = -1694144372;
  a1[6] = 528734635;
  a1[7] = 1541459225;
  memset(a1 + 10, 0, 0x40uLL);
  return result;
}
