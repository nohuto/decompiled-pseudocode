/*
 * XREFs of HvAddToLayoutStats @ 0x1404E91F0
 * Callers:
 *     HvCheckBin @ 0x14042EFC0 (HvCheckBin.c)
 *     HvCheckHive @ 0x140513594 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
