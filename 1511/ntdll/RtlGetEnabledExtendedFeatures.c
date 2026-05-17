/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x180082890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetEnabledExtendedFeatures(__int64 a1)
{
  return a1 & MEMORY[0x7FFE03D8];
}
