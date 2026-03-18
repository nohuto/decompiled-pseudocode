/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x140127020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & MEMORY[0xFFFFF780000003D8];
}
