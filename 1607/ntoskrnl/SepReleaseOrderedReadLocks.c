/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x14007F7D8
 * Callers:
 *     NtCompareTokens @ 0x140475A20 (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x1404766F4 (SepIsSiblingTokenByPointer.c)
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
