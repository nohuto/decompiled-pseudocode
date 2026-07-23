/*
 * XREFs of LdrpUnmapCMFSegment @ 0x1800DCA08
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpCMFAddToStanbyQueue @ 0x1800DC028 (LdrpCMFAddToStanbyQueue.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800DCA38 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     ResCRuntimeUnmapSegment @ 0x1800FF6FC (ResCRuntimeUnmapSegment.c)
 */

bool __fastcall LdrpUnmapCMFSegment(__int64 a1)
{
  return (char *)ResRuntimeView - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
      && (unsigned int)ResCRuntimeUnmapSegment(a1, (unsigned int)a1) != 0;
}
