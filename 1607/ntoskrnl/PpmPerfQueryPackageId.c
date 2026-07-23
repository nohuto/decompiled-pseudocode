/*
 * XREFs of PpmPerfQueryPackageId @ 0x140204DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 24768);
}
