/*
 * XREFs of RtlFindFirstRunClear @ 0x140247454
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1404006D8 (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  return RtlFindNextForwardRunClearCapped((__int64)BitMapHeader, 0, 0xFFFFFFFF, StartingIndex);
}
