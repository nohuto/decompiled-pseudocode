/*
 * XREFs of MiPerformCombineScan @ 0x14012A464
 * Callers:
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 * Callees:
 *     MiComputeHash64 @ 0x1401321E0 (MiComputeHash64.c)
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  unsigned int v3; // r11d
  __int64 v5; // [rsp+20h] [rbp-18h]

  v5 = MiComputeHash64((__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16);
  *v2 = v5;
  return v3;
}
