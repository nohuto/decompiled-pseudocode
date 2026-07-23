/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x140132414
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & MEMORY[0xFFFFF780000003D8];
}
