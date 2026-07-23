/*
 * XREFs of HvAddToLayoutStats @ 0x1404CB2E0
 * Callers:
 *     HvCheckBin @ 0x14042DE90 (HvCheckBin.c)
 *     HvCheckHive @ 0x1404F6984 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
