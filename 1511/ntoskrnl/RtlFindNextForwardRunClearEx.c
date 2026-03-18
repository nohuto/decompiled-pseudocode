/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x1401187A4
 * Callers:
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403AF490 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403AF608 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
