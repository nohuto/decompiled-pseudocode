/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x1401129E8
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403DB598 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403DB694 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C30C (MiCleanPhysicalProcessPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
