/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x1800039A8
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1800364A4 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeReserve @ 0x1800EEFF4 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 */

PVOID __fastcall RtlpHpSegSegmentAllocate(volatile signed __int64 *BaseAddress, int a2)
{
  __int64 v2; // rbx
  ULONG Protect; // eax
  NTSTATUS v6; // esi
  ULONG_PTR v7; // rdx
  unsigned __int64 v8; // rcx
  char *v9; // rsi
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rsi
  ULONG HeapProtection; // eax
  PVOID v15; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v16; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR v17[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  RegionSize = 0x200000LL;
  BaseAddressa = 0LL;
  v15 = 0LL;
  Protect = RtlpGetHeapProtection((PVOID)BaseAddress);
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
  if ( v6 < 0 )
  {
    BaseAddressa = 0LL;
  }
  else
  {
    v7 = RegionSize;
    v8 = ((unsigned __int64)BaseAddressa + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v9 = (char *)BaseAddressa + RegionSize;
    v15 = (PVOID)v8;
    v10 = v8 - (_QWORD)BaseAddressa;
    v16 = v8 - (_QWORD)BaseAddressa;
    if ( (PVOID)v8 != BaseAddressa )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &v16, 0x8000u);
      v8 = (unsigned __int64)v15;
      v7 = RegionSize;
      v10 = v16;
    }
    v11 = v7 - v10;
    v12 = (ULONG_PTR)&v9[-v8 - 0x100000];
    RegionSize = v11;
    v16 = v12;
    BaseAddressa = (PVOID)(v8 + 0x100000);
    if ( v12 )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &v16, 0x8000u);
      v8 = (unsigned __int64)v15;
      v11 = RegionSize;
      v12 = v16;
    }
    BaseAddressa = (PVOID)v8;
    RegionSize = v11 - v12;
    v17[0] = (unsigned int)(a2 << 12) + 0x2000LL;
    HeapProtection = RtlpGetHeapProtection((PVOID)BaseAddress);
    v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v15, 0LL, v17, 0x1000u, HeapProtection);
    if ( v6 < 0 )
      goto LABEL_16;
    _InterlockedExchangeAdd64(BaseAddress, RegionSize >> 12);
    _InterlockedExchangeAdd64(BaseAddress + 1, v17[0] >> 12);
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(BaseAddress, v15, v17[0], 12LL);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeReserve(BaseAddress, v15, 0x100000LL);
  }
  if ( v6 >= 0 )
    return v15;
LABEL_16:
  if ( BaseAddressa )
  {
    v16 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &v16, 0x8000u);
  }
  return (PVOID)v2;
}
