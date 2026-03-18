/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x14014D2A0
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403FF9B0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403FFB28 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
