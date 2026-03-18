/*
 * XREFs of XpressDecodeCreate @ 0x14023E4E8
 * Callers:
 *     CMFReadCompressedSegment @ 0x1406B9298 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1406B866C (CMFAllocFn.c)
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
