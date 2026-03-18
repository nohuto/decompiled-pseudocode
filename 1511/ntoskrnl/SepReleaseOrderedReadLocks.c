/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140004154
 * Callers:
 *     NtCompareTokens @ 0x1403BE070 (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x1403C34C0 (SepIsSiblingTokenByPointer.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
