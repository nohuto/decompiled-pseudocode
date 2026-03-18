/*
 * XREFs of HvlpFastSendSyntheticClusterIpiEx @ 0x1401BE998
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401BDAD8 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401685A0 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401BFDE4 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpFastSendSyntheticClusterIpiEx(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v5[104]; // [rsp+38h] [rbp-80h] BYREF

  v4 = a2;
  v2 = HvlpAffinityToHvProcessorSet(a1, v5, 88LL);
  return (unsigned __int16)HvcallpExtendedFastHypercall(
                             ((v2 + 7) << 14) & 0x3FE0000 | 0x10015LL,
                             &v4,
                             (unsigned int)(v2 + 24)) != 0
       ? 0xC0000001
       : 0;
}
