/*
 * XREFs of RtlFindFirstRunClear @ 0x14012EE78
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1403B00EC (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  return RtlFindNextForwardRunClearCapped((__int64)BitMapHeader, 0, 0xFFFFFFFF, StartingIndex);
}
