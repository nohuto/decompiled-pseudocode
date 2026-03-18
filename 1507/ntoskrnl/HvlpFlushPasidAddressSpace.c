/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x1401EBCF4
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401EAFA0 (HvlSvmFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401EC12C (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFlushPasidAddressSpace(unsigned int a1, unsigned int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = __PAIR64__(a1, a2);
  return HvlpExtendedFastHypercall(65696LL, v3, 16LL);
}
