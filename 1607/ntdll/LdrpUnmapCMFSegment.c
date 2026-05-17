/*
 * XREFs of LdrpUnmapCMFSegment @ 0x1800DC948
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpCMFAddToStanbyQueue @ 0x1800DBF68 (LdrpCMFAddToStanbyQueue.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800DC978 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     ResCRuntimeUnmapSegment @ 0x1800FF6FC (ResCRuntimeUnmapSegment.c)
 */

bool __fastcall LdrpUnmapCMFSegment(__int64 a1)
{
  return (unsigned __int64)(ResRuntimeView - 1) <= 0xFFFFFFFFFFFFFFFDuLL
      && (unsigned int)ResCRuntimeUnmapSegment(a1, (unsigned int)a1) != 0;
}
