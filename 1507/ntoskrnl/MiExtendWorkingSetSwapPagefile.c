/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x1406A93C8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x140221B0C (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, a3, 0) == 0 ? 0xC0000099 : 0;
}
