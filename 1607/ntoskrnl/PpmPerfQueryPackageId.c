/*
 * XREFs of PpmPerfQueryPackageId @ 0x140204FC4
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(ULONG a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 24768);
}
