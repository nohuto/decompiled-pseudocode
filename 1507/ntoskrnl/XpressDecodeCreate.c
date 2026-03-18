/*
 * XREFs of XpressDecodeCreate @ 0x140272920
 * Callers:
 *     CMFReadCompressedSegment @ 0x1406FB028 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1406FA4E0 (CMFAllocFn.c)
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
