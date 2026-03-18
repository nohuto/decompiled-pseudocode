/*
 * XREFs of KdpSearchPhysicalPageRange @ 0x1406F5A74
 * Callers:
 *     KdpSysCheckLowMemory @ 0x1406F5B04 (KdpSysCheckLowMemory.c)
 * Callees:
 *     KdpSearchPhysicalPage @ 0x1406F5878 (KdpSearchPhysicalPage.c)
 */

__int64 __fastcall KdpSearchPhysicalPageRange(int a1)
{
  __int64 result; // rax
  char v2; // di
  unsigned __int64 i; // rbx

  result = (unsigned int)KdpSearchInProgress;
  v2 = 0;
  if ( KdpSearchInProgress )
  {
    if ( KdpSearchEndPageFrame == KdpSearchStartPageFrame )
    {
      ++KdpSearchEndPageFrame;
      v2 = 1;
    }
    for ( i = KdpSearchStartPageFrame; i < KdpSearchEndPageFrame; ++i )
      KdpSearchPhysicalPage(i, KdpSearchAddressRangeStart, KdpSearchAddressRangeEnd, v2, a1);
    return 1LL;
  }
  return result;
}
