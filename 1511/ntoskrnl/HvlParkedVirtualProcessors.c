/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1401B2898
 * Callers:
 *     PpmParkReportMask @ 0x140074F28 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     HvlpAffinityToVirtualAffinity @ 0x1401AE7F8 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401AE904 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

char HvlParkedVirtualProcessors()
{
  char result; // al
  unsigned __int64 v1; // rbx

  result = HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls();
    v1 = 0LL;
    if ( !result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
        v1 = HvlpAffinityToVirtualAffinity(qword_1402D18A8);
      return HvcallCodeVa(65545LL, v1, 0LL);
    }
  }
  return result;
}
