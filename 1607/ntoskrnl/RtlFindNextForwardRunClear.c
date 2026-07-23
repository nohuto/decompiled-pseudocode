/*
 * XREFs of RtlFindNextForwardRunClear @ 0x140082884
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1403DF0DC (PopGetRemainingHibernateRangeDataSize.c)
 *     MiFindDriverNonPagedSections @ 0x14047D9A0 (MiFindDriverNonPagedSections.c)
 *     HvpGenerateLogMetadata @ 0x14048060C (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1404806C8 (HvpCountSetRangesInVector.c)
 *     MiDeleteLeakedSessionPool @ 0x1405323F8 (MiDeleteLeakedSessionPool.c)
 *     ViThunkSnapSharedExports @ 0x1406FDF64 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped((__int64)BitMapHeader, FromIndex, 0xFFFFFFFF, StartingRunIndex);
}
