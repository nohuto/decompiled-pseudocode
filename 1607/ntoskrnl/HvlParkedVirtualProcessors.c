/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1401BF0CC
 * Callers:
 *     PpmParkReportMask @ 0x1400D315C (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     HvlpAffinityToVirtualAffinity @ 0x1401BFDD0 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401BFEDC (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlParkedVirtualProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx

  result = (unsigned int)HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3, a4);
    v5 = 0LL;
    if ( !(_BYTE)result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
        v5 = HvlpAffinityToVirtualAffinity(qword_1402F8928);
      return HvcallCodeVa(65545LL, v5, 0LL);
    }
  }
  return result;
}
