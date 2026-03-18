/*
 * XREFs of VmpProcessMemoryRangeCompareVpn @ 0x14020C9C8
 * Callers:
 *     VmpFlushTb @ 0x14020C4C4 (VmpFlushTb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessMemoryRangeCompareVpn(_QWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_QWORD *)(a2 + 72) )
    return (unsigned int)-(*a1 < *(_QWORD *)(a2 + 64));
  else
    return 1LL;
}
