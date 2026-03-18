/*
 * XREFs of VmpProcessMemoryRangeCompareGpn @ 0x14025BBA8
 * Callers:
 *     VmpInsertMemoryRange @ 0x14025B908 (VmpInsertMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14025BC74 (VmpRemoveMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessMemoryRangeCompareGpn(_QWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_QWORD *)(a2 + 32) )
    return (unsigned int)-(*a1 < *(_QWORD *)(a2 + 24));
  else
    return 1LL;
}
