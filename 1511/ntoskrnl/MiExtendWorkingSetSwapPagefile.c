/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x14062ACF8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1401E1508 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x1401DCCB8 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, a3, 0) == 0 ? 0xC0000099 : 0;
}
