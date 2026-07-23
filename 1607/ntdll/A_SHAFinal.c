/*
 * XREFs of A_SHAFinal @ 0x18000A340
 * Callers:
 *     RtlCreateVirtualAccountSid @ 0x180008FD0 (RtlCreateVirtualAccountSid.c)
 *     RtlCreateServiceSid @ 0x18000B8D0 (RtlCreateServiceSid.c)
 * Callees:
 *     DWORDToBigEndian @ 0x18000A450 (DWORDToBigEndian.c)
 *     A_SHAUpdate @ 0x18000A4C0 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void *__fastcall A_SHAFinal(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  int v6; // ecx
  void *result; // rax
  _DWORD v8[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v9[80]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1[22];
  v5 = 64 - (v2 & 0x3F);
  if ( (unsigned int)v5 <= 8 )
    v5 = (unsigned int)(v5 + 64);
  memset(v9, 0, (unsigned int)(v5 - 8));
  v6 = (v2 >> 29) | (8 * a1[21]);
  v9[0] = 0x80;
  v8[0] = v6;
  v8[1] = 8 * v2;
  DWORDToBigEndian((char *)&v8[2] + v5, v8, 2LL);
  A_SHAUpdate(a1, v9, (unsigned int)v5);
  DWORDToBigEndian(a2, a1 + 16, 5LL);
  result = memset(a1, 0, 0x40uLL);
  a1[21] = 0;
  a1[22] = 0;
  a1[16] = 1732584193;
  a1[17] = -271733879;
  a1[18] = -1732584194;
  a1[19] = 271733878;
  a1[20] = -1009589776;
  return result;
}
