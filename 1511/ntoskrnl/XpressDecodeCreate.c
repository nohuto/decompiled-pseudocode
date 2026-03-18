/*
 * XREFs of XpressDecodeCreate @ 0x140222A48
 * Callers:
 *     CMFReadCompressedSegment @ 0x140676858 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140675D10 (CMFAllocFn.c)
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
