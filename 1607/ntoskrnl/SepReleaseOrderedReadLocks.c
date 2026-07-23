/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x14007F858
 * Callers:
 *     NtCompareTokens @ 0x1404748F0 (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x1404755C4 (SepIsSiblingTokenByPointer.c)
 *     SeTokenCanImpersonate @ 0x1404F28B0 (SeTokenCanImpersonate.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
