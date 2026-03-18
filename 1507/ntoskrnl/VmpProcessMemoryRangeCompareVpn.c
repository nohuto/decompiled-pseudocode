/*
 * XREFs of VmpProcessMemoryRangeCompareVpn @ 0x14025BBE0
 * Callers:
 *     VmpFlushTb @ 0x14025B680 (VmpFlushTb.c)
 *     VmpInsertMemoryRange @ 0x14025B908 (VmpInsertMemoryRange.c)
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
