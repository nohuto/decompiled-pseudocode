/*
 * XREFs of HvlpFastFlushPasidAddressList @ 0x1401BE7DC
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401BE204 (HvlSvmFlushPasid.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 *     HvlpCopyFlushVaList @ 0x1401C14B4 (HvlpCopyFlushVaList.c)
 */

__int64 __fastcall HvlpFastFlushPasidAddressList(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int16 v4; // di
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-98h]
  _QWORD v8[2]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v9[96]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v5 = 8 * a3 + 16;
  v8[0] = __PAIR64__(a1, a2);
  v8[1] = 0LL;
  HvlpCopyFlushVaList(a3, a4, 0LL, v9);
  LODWORD(v7) = 65697;
  HIDWORD(v7) = v4 & 0xFFF;
  return HvcallpExtendedFastHypercall(v7, v8, v5);
}
