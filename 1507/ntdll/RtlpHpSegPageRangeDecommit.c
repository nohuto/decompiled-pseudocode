/*
 * XREFs of RtlpHpSegPageRangeDecommit @ 0x1800370E8
 * Callers:
 *     RtlpHpSegAlloc @ 0x180036200 (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180037080 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003795C (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlpHpSegUpdateCommit @ 0x1800371B0 (RtlpHpSegUpdateCommit.c)
 *     RtlpHpSegPageRangeCalcCommitRegion @ 0x180037210 (RtlpHpSegPageRangeCalcCommitRegion.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     RtlpLogHeapDecommit @ 0x1800EF828 (RtlpLogHeapDecommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeDecommit(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v6; // edi
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-10h] BYREF

  v6 = RtlpHpSegPageRangeCalcCommitRegion(a3, a4, 0, (unsigned int)&v9, (__int64)&v8);
  if ( v6 )
  {
    RegionSize = (unsigned int)(v8 << 12);
    BaseAddress = (PVOID)((v9 & 0xFFFFFFFFFFF00000uLL)
                        + ((unsigned int)((__int64)(v9 - (v9 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    RtlpHpSegUpdateCommit(a1, a2, v9, v8, -v6);
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(a1, BaseAddress, RegionSize, 13LL);
    }
  }
  return v6;
}
