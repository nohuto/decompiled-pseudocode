/*
 * XREFs of RtlGetNtProductType @ 0x18002CD30
 * Callers:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18002AEC8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x18002B7E0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18002EE40 (RtlGetVersion.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18005DA28 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E5370 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD70 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800EF810 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlpSiloGetNtProductType @ 0x1800EF9C4 (RtlpSiloGetNtProductType.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN result; // al

  if ( !RtlGetCurrentServiceSessionId() )
  {
    if ( MEMORY[0x7FFE0268] )
    {
      *NtProductType = MEMORY[0x7FFE0264];
      return 1;
    }
    if ( (int)RtlpGetNtProductTypeFromRegistry(NtProductType) >= 0 )
      return 1;
    result = 0;
LABEL_9:
    *NtProductType = NtProductWinNt;
    return result;
  }
  result = RtlpSiloGetNtProductType(NtProductType);
  if ( !result )
    goto LABEL_9;
  return result;
}
