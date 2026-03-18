/*
 * XREFs of MiPerformCombineScan @ 0x14022AED0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiComputeHash64 @ 0x140163B48 (MiComputeHash64.c)
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // r11
  unsigned __int64 v4; // [rsp+20h] [rbp-18h]

  v4 = MiComputeHash64((__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16);
  *v2 = v4;
  return 1LL;
}
