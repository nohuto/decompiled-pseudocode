/*
 * XREFs of XpressDecodeClose @ 0x140222A14
 * Callers:
 *     CMFReadCompressedSegment @ 0x140676858 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x1404C6970 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *a1)
{
  if ( CMFFreeFn && a1 && a1[26] == 903790814 )
  {
    a1[26] = 0;
    CMFFreeFn(0LL, a1);
  }
}
