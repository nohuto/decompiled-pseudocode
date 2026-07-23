/*
 * XREFs of RtlpHpLargeAlloc @ 0x1800586E4
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x180054E7C (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpHpMetadataFree @ 0x1800586CC (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockRelease @ 0x180058904 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x180058924 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataAlloc @ 0x180058944 (RtlpHpMetadataAlloc.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpHeapLogRangeReserve @ 0x1800EEFF4 (RtlpHeapLogRangeReserve.c)
 */

PVOID __fastcall RtlpHpLargeAlloc(_DWORD *BaseAddress, __int16 a2, ULONG_PTR a3, unsigned int a4)
{
  PVOID v4; // rsi
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rdi
  ULONG Protect; // eax
  ULONG HeapProtection; // eax
  BOOLEAN v13; // r8
  _RTL_BALANCED_NODE *v14; // rdx
  _RTL_BALANCED_NODE *v15; // rax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0LL;
  BaseAddressa = 0LL;
  v9 = (_RTL_BALANCED_NODE *)RtlpHpMetadataAlloc(0x28uLL);
  v10 = v9;
  if ( !v9 )
  {
LABEL_19:
    if ( BaseAddressa )
    {
      RtlpSparseBitmapCtxUpdateBitRanges(
        (__int64)&RtlpHpLargeAllocationBitmap,
        (unsigned __int64)BaseAddressa >> 16,
        1uLL,
        0LL,
        0LL,
        0);
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
    }
    return v4;
  }
  memset(v9, 0, 0x28uLL);
  RegionSize = a3 + 4096;
  if ( a3 + 4096 < a3 )
    goto LABEL_17;
  Protect = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
  {
    BaseAddressa = 0LL;
    goto LABEL_17;
  }
  RegionSize = a3;
  HeapProtection = RtlpGetHeapProtection(BaseAddress, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, HeapProtection) < 0
    || (v10[1].Children[0] = (_RTL_BALANCED_NODE *)BaseAddressa,
        v10[1].Children[1] = (_RTL_BALANCED_NODE *)(RegionSize ^ ((unsigned __int16)RegionSize ^ (unsigned __int16)v10[1].Children[1]) & 0xFFF),
        LOWORD(v10[1].Children[0]) = RegionSize - a2,
        (int)RtlpSparseBitmapCtxUpdateBitRanges(
               (__int64)&RtlpHpLargeAllocationBitmap,
               (unsigned __int64)BaseAddressa >> 16,
               1uLL,
               0LL,
               0LL,
               1) < 0) )
  {
LABEL_17:
    if ( v10 )
      RtlpHpMetadataFree((unsigned __int64)v10);
    goto LABEL_19;
  }
  RtlpHpLargeLockAcquire(BaseAddress, a4);
  v13 = 0;
  v14 = (_RTL_BALANCED_NODE *)*((_QWORD *)BaseAddress + 7);
  if ( !v14 )
    goto LABEL_11;
  while ( (unsigned __int64)BaseAddressa >= ((unsigned __int64)v14[1].Children[0] & 0xFFFFFFFFFFFF0000uLL) )
  {
    v15 = v14->Children[1];
    if ( !v15 )
    {
      v13 = 1;
      goto LABEL_11;
    }
LABEL_9:
    v14 = v15;
  }
  v15 = v14->Children[0];
  if ( v14->Children[0] )
    goto LABEL_9;
  v13 = 0;
LABEL_11:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(BaseAddress + 14), v14, v13, v10);
  RtlpHpLargeLockRelease(BaseAddress, a4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 9, (RegionSize >> 12) + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 10, RegionSize >> 12);
  v4 = BaseAddressa;
  v10 = 0LL;
  BaseAddressa = 0LL;
  if ( MEMORY[0x7FFE0388] )
  {
    RtlpHeapLogRangeReserve(BaseAddress, v4, RegionSize + 4096);
    goto LABEL_17;
  }
  return v4;
}
