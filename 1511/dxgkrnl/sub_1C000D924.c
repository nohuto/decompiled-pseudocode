/*
 * XREFs of sub_1C000D924 @ 0x1C000D924
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C000D924(PERESOURCE *a1)
{
  ExReleaseResourceLite(*a1);
  KeLeaveCriticalRegion();
}
