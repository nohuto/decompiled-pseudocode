/*
 * XREFs of HvlpFastFlushPasidAddressList @ 0x1401EBC58
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401EAFA0 (HvlSvmFlushPasid.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall HvlpFastFlushPasidAddressList(unsigned int a1, unsigned int a2, unsigned int a3, const void *a4)
{
  __int64 v6; // [rsp+28h] [rbp-31h]
  _QWORD v7[2]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v8[96]; // [rsp+40h] [rbp-19h] BYREF

  v7[0] = __PAIR64__(a1, a2);
  v7[1] = 0LL;
  memmove(v8, a4, 8LL * a3);
  HIDWORD(v6) = a3 & 0xFFF;
  LODWORD(v6) = 65697;
  return HvlpExtendedFastHypercall(v6, v7, 8 * a3 + 16);
}
