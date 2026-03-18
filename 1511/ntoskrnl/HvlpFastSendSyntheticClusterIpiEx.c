/*
 * XREFs of HvlpFastSendSyntheticClusterIpiEx @ 0x1401B204C
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401B1190 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14015D130 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401AE6F0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpFastSendSyntheticClusterIpiEx(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v5[13]; // [rsp+38h] [rbp-80h] BYREF

  v4 = a2;
  v2 = HvlpAffinityToHvProcessorSet(a1, v5, 0x58u);
  return (unsigned __int16)HvcallpExtendedFastHypercall(
                             ((v2 + 7) << 14) & 0x3FE0000 | 0x10015LL,
                             &v4,
                             (unsigned int)(v2 + 24)) != 0
       ? 0xC0000001
       : 0;
}
