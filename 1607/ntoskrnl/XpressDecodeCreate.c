/*
 * XREFs of XpressDecodeCreate @ 0x14023E3CC
 * Callers:
 *     CMFReadCompressedSegment @ 0x1406B93D0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1406B87A4 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  if ( !CMFAllocFn )
    return 0LL;
  result = CMFAllocFn(0LL, 112LL);
  if ( !result )
    return 0LL;
  *(_DWORD *)(result + 104) = 903790814;
  return result;
}
