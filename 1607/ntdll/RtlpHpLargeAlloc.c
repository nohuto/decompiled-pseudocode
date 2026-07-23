/*
 * XREFs of RtlpHpLargeAlloc @ 0x18004F76C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800431B8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC10 (RtlRbInsertNodeEx.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlSparseBitmapCtxClearBits @ 0x18004F740 (RtlSparseBitmapCtxClearBits.c)
 *     RtlpHpLargeLockRelease @ 0x18004F984 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x18004F9A4 (RtlpHpLargeLockAcquire.c)
 *     RtlSparseBitmapCtxSetBits @ 0x18004F9D0 (RtlSparseBitmapCtxSetBits.c)
 *     RtlpHpMetadataAlloc @ 0x180050754 (RtlpHpMetadataAlloc.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapLogRangeReserve @ 0x1800F7F14 (RtlpHeapLogRangeReserve.c)
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
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+38h] [rbp-8h] BYREF

  v4 = 0LL;
  BaseAddressa = 0LL;
  v9 = (_RTL_BALANCED_NODE *)RtlpHpMetadataAlloc(0x28uLL);
  v10 = v9;
  if ( !v9 )
  {
LABEL_19:
    if ( BaseAddressa )
    {
      RtlSparseBitmapCtxClearBits((int)&RtlpHpLargeAllocationBitmap, (unsigned __int64)BaseAddressa >> 16, 1, 0, 0LL);
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
        (int)RtlSparseBitmapCtxSetBits(
               (unsigned int)&RtlpHpLargeAllocationBitmap,
               (unsigned __int64)BaseAddressa >> 16,
               1,
               0,
               0LL) < 0) )
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
