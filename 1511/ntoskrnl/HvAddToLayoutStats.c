/*
 * XREFs of HvAddToLayoutStats @ 0x1404B5E50
 * Callers:
 *     HvCheckHive @ 0x1403D0558 (HvCheckHive.c)
 *     HvCheckBin @ 0x140416190 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
