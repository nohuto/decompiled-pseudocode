/*
 * XREFs of HvAddToLayoutStats @ 0x14054D974
 * Callers:
 *     HvCheckHive @ 0x1404A0AF0 (HvCheckHive.c)
 *     HvCheckBin @ 0x1404B86C0 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
