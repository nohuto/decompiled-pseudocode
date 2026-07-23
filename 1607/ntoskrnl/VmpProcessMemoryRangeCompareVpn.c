/*
 * XREFs of VmpProcessMemoryRangeCompareVpn @ 0x140224358
 * Callers:
 *     VmpFlushTbVaRange @ 0x140223EEC (VmpFlushTbVaRange.c)
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
