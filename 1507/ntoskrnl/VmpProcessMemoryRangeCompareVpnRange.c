/*
 * XREFs of VmpProcessMemoryRangeCompareVpnRange @ 0x14025BBF8
 * Callers:
 *     VmpInsertMemoryRange @ 0x14025B908 (VmpInsertMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessMemoryRangeCompareVpnRange(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 72) >= *(_QWORD *)(a2 + 64) )
    return *(_QWORD *)(a1 + 64) > *(_QWORD *)(a2 + 72);
  else
    return 0xFFFFFFFFLL;
}
