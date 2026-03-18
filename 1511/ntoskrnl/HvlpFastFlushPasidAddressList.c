/*
 * XREFs of HvlpFastFlushPasidAddressList @ 0x1401B1FAC
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401B19D8 (HvlSvmFlushPasid.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14015D130 (HvcallpExtendedFastHypercall.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall HvlpFastFlushPasidAddressList(unsigned int a1, unsigned int a2, unsigned int a3, const void *a4)
{
  __int16 v4; // di
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-98h]
  _QWORD v8[2]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v9[96]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v8[0] = __PAIR64__(a1, a2);
  v5 = 8 * a3 + 16;
  v8[1] = 0LL;
  memmove(v9, a4, 8LL * a3);
  LODWORD(v7) = 65697;
  HIDWORD(v7) = v4 & 0xFFF;
  return HvcallpExtendedFastHypercall(v7, v8, v5);
}
