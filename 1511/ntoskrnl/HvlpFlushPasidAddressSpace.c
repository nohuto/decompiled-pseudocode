/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x1401B20E0
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401B19D8 (HvlSvmFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401B21D0 (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14015D130 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFlushPasidAddressSpace(unsigned int a1, unsigned int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = __PAIR64__(a1, a2);
  return HvcallpExtendedFastHypercall(65696LL, v3, 16LL);
}
