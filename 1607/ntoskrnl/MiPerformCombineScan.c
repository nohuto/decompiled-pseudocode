/*
 * XREFs of MiPerformCombineScan @ 0x1401F9F98
 * Callers:
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiComputeHash64 @ 0x1400B0EC4 (MiComputeHash64.c)
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rdx
  BOOL v4; // eax
  unsigned __int64 *v6; // r11
  unsigned int v7; // edx
  unsigned __int64 v8; // [rsp+20h] [rbp-18h]

  v2 = (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16;
  v4 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL) | 0x8000000000000000uLL;
    if ( v3 <= 0xFFFFF6BFFFFFFF78uLL && v3 >= 0xFFFFF68000000000uLL )
      v4 = 1;
  }
  if ( v4 && (unsigned __int64)(*(_QWORD *)v2 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  v8 = MiComputeHash64(v2);
  *v6 = v8;
  return v7;
}
