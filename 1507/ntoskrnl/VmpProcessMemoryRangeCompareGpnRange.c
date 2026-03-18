/*
 * XREFs of VmpProcessMemoryRangeCompareGpnRange @ 0x14025BBC0
 * Callers:
 *     VmpInsertMemoryRange @ 0x14025B908 (VmpInsertMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessMemoryRangeCompareGpnRange(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 56) >= *(_QWORD *)(a2 + 24) )
    return *(_QWORD *)(a1 + 48) > *(_QWORD *)(a2 + 32);
  else
    return 0xFFFFFFFFLL;
}
