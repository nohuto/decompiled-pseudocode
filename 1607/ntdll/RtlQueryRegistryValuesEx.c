/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1800579D0
 * Callers:
 *     QueryFeatureOverride @ 0x1800E2BB0 (QueryFeatureOverride.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1800579F4 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(int a1, int a2, int a3, int a4, __int64 a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 1);
}
