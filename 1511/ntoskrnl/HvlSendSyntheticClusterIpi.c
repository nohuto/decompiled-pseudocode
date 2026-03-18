/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x1401B1190
 * Callers:
 *     <none>
 * Callees:
 *     HvlpAffinityToVirtualAffinity @ 0x1401AE7F8 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401AE904 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 HvlSendSyntheticClusterIpi()
{
  __int64 v0; // r8
  unsigned int v1; // r9d
  unsigned __int64 v3; // rax
  __int64 v4; // r9

  if ( HvlpUseExtendedProcessorSetHypercalls() )
  {
    if ( (((unsigned int)HvlpFlags >> 9) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(v0, v1);
    else
      return HvlpFastSendSyntheticClusterIpiEx(v0, v1);
  }
  else
  {
    v3 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(v0 + 8));
    return (unsigned __int16)HvcallCodeVa(65547LL, v4, v3) != 0 ? 0xC0000001 : 0;
  }
}
