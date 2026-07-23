/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x1401BD9BC
 * Callers:
 *     <none>
 * Callees:
 *     HvlpAffinityToVirtualAffinity @ 0x1401BFDD0 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401BFEDC (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v5; // rax
  __int64 v6; // r9

  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a1, (unsigned int)a2) )
  {
    if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(v2, v3);
    else
      return HvlpFastSendSyntheticClusterIpiEx(v2, v3);
  }
  else
  {
    v5 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(v2 + 8));
    return (unsigned __int16)HvcallCodeVa(65547LL, v6, v5) != 0 ? 0xC0000001 : 0;
  }
}
