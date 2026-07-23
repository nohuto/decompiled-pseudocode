/*
 * XREFs of LdrpUnmapCMFSegment @ 0x1800CBD4C
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpCMFAddToStanbyQueue @ 0x1800CB2F8 (LdrpCMFAddToStanbyQueue.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800CBD7C (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     ResCRuntimeUnmapSegment @ 0x1800F7A10 (ResCRuntimeUnmapSegment.c)
 */

bool __fastcall LdrpUnmapCMFSegment(__int64 a1)
{
  return (char *)ResRuntimeView - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
      && (unsigned int)ResCRuntimeUnmapSegment(a1, (unsigned int)a1) != 0;
}
