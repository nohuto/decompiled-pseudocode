/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x1800704D4
 * Callers:
 *     RtlpHpSegAlloc @ 0x180036200 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegUpdateCommit @ 0x1800371B0 (RtlpHpSegUpdateCommit.c)
 *     RtlpHpSegPageRangeCalcCommitRegion @ 0x180037210 (RtlpHpSegPageRangeCalcCommitRegion.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 */

NTSTATUS __fastcall RtlpHpSegPageRangeCommit(_DWORD *BaseAddress, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // edi
  ULONG Protect; // eax
  NTSTATUS result; // eax
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-18h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-10h] BYREF

  v6 = RtlpHpSegPageRangeCalcCommitRegion(a3, a4, 1, &v10, &v9);
  if ( v6 )
  {
    BaseAddressa = (PVOID)((v10 & 0xFFFFFFFFFFF00000uLL)
                         + ((unsigned int)((__int64)(v10 - (v10 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
    RegionSize = v9 << 12;
    Protect = RtlpGetHeapProtection(BaseAddress, 1);
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
    if ( result < 0 )
      return result;
    RtlpHpSegUpdateCommit((__int64)BaseAddress, a2, v10, v9, v6);
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 10LL);
    }
  }
  return 0;
}
