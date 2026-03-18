/*
 * XREFs of XpressDecodeClose @ 0x1402728EC
 * Callers:
 *     CMFReadCompressedSegment @ 0x1406FB028 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x14055D258 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *Buffer)
{
  if ( CMFFreeFn && Buffer && Buffer[26] == 903790814 )
  {
    Buffer[26] = 0;
    CMFFreeFn(0LL, Buffer);
  }
}
