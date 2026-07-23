/*
 * XREFs of XpressDecodeClose @ 0x14023E398
 * Callers:
 *     CMFReadCompressedSegment @ 0x1406B93D0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x1404D3638 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *a1)
{
  if ( CMFFreeFn && a1 && a1[26] == 903790814 )
  {
    a1[26] = 0;
    CMFFreeFn(0LL, a1);
  }
}
