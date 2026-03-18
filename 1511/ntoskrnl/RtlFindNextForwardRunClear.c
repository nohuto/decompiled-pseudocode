/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1400223C0
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1403B00EC (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1403B23F8 (PopGetRemainingHibernateRangeDataSize.c)
 *     MiFindDriverNonPagedSections @ 0x1403CD5D0 (MiFindDriverNonPagedSections.c)
 *     HvpGenerateLogMetadata @ 0x1403ED830 (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1403ED8EC (HvpCountSetRangesInVector.c)
 *     MiDeleteLeakedSessionPool @ 0x1404F3AE0 (MiDeleteLeakedSessionPool.c)
 *     ViThunkSnapSharedExports @ 0x1406B22D8 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, FromIndex, 0xFFFFFFFFLL, StartingRunIndex);
}
