/*
 * XREFs of RtlFindNextForwardRunClear @ 0x140084724
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1403DF0DC (PopGetRemainingHibernateRangeDataSize.c)
 *     MiFindDriverNonPagedSections @ 0x14047EC4C (MiFindDriverNonPagedSections.c)
 *     HvpGenerateLogMetadata @ 0x1404818B8 (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x140481974 (HvpCountSetRangesInVector.c)
 *     MiDeleteLeakedSessionPool @ 0x140531EB8 (MiDeleteLeakedSessionPool.c)
 *     ViThunkSnapSharedExports @ 0x1406FDF64 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped((__int64)BitMapHeader, FromIndex, 0xFFFFFFFF, StartingRunIndex);
}
