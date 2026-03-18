/*
 * XREFs of XpressDecodeClose @ 0x14023E4B4
 * Callers:
 *     CMFReadCompressedSegment @ 0x1406B9298 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x1404F1544 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *Buffer)
{
  if ( CMFFreeFn && Buffer && Buffer[26] == 903790814 )
  {
    Buffer[26] = 0;
    CMFFreeFn(0LL, Buffer);
  }
}
