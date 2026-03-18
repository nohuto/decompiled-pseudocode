/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x1401BEA2C
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401BE320 (HvlSvmFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401BEB1C (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401685A0 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFlushPasidAddressSpace(unsigned int a1, unsigned int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = __PAIR64__(a1, a2);
  return HvcallpExtendedFastHypercall(65696LL, v3, 16LL);
}
