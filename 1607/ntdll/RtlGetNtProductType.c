/*
 * XREFs of RtlGetNtProductType @ 0x18002CD40
 * Callers:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18002AED8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x18002B7F0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18002EE50 (RtlGetVersion.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18005DA38 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E52B0 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD80 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800EF810 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlpSiloGetNtProductType @ 0x1800EF9C4 (RtlpSiloGetNtProductType.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char result; // al

  if ( !(unsigned int)RtlGetCurrentServiceSessionId() )
  {
    if ( MEMORY[0x7FFE0268] )
    {
      *a1 = MEMORY[0x7FFE0264];
      return 1;
    }
    if ( (int)RtlpGetNtProductTypeFromRegistry(a1) >= 0 )
      return 1;
    result = 0;
LABEL_9:
    *a1 = 1;
    return result;
  }
  result = RtlpSiloGetNtProductType(a1);
  if ( !result )
    goto LABEL_9;
  return result;
}
