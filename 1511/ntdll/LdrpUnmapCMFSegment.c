/*
 * XREFs of LdrpUnmapCMFSegment @ 0x1800D4588
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpCMFAddToStanbyQueue @ 0x1800D3CC8 (LdrpCMFAddToStanbyQueue.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800D45B8 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     ResCRuntimeUnmapSegment @ 0x1800F75A0 (ResCRuntimeUnmapSegment.c)
 */

bool __fastcall LdrpUnmapCMFSegment(__int64 a1)
{
  return (char *)ResRuntimeView - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
      && (unsigned int)ResCRuntimeUnmapSegment(a1, (unsigned int)a1) != 0;
}
