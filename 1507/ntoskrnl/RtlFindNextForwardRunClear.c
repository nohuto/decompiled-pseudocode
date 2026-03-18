/*
 * XREFs of RtlFindNextForwardRunClear @ 0x140063958
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1404006D8 (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140403634 (PopGetRemainingHibernateRangeDataSize.c)
 *     HvpCountSetRangesInVector @ 0x1404A21F4 (HvpCountSetRangesInVector.c)
 *     HvpGenerateLogMetadata @ 0x1404A2778 (HvpGenerateLogMetadata.c)
 *     MiDeleteLeakedSessionPool @ 0x140567DC0 (MiDeleteLeakedSessionPool.c)
 *     MiFindDriverNonPagedSections @ 0x14057531C (MiFindDriverNonPagedSections.c)
 *     ViThunkSnapSharedExports @ 0x140732320 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, FromIndex, 0xFFFFFFFFLL, StartingRunIndex);
}
