/*
 * XREFs of RtlpHpLargeFree @ 0x18004F620
 * Callers:
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001C030 (RtlRbRemoveNode.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlSparseBitmapCtxClearBits @ 0x18004F740 (RtlSparseBitmapCtxClearBits.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F94C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockRelease @ 0x18004F984 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x18004F9A4 (RtlpHpLargeLockAcquire.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(__int64 a1, void *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *Metadata; // rax
  _RTL_BALANCED_NODE *v6; // rsi
  ULONG_PTR v7; // rdi
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+20h] BYREF

  BaseAddress = a2;
  RtlpHpLargeLockAcquire(a1, a3);
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1);
  v6 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), Metadata);
    RtlpHpLargeLockRelease(a1, a3);
    RtlSparseBitmapCtxClearBits(
      (unsigned int)&RtlpHpLargeAllocationBitmap,
      (unsigned __int64)BaseAddress >> 16,
      1,
      0,
      0LL);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -((unsigned __int64)v6[1].Children[1] >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)(RegionSize >> 12));
    RtlpHpMetadataFree(v6);
    v7 = RegionSize;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(a1, BaseAddress);
  }
  else
  {
    RtlpHpLargeLockRelease(a1, a3);
    RtlpLogHeapFailure(8, a1, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    return 0LL;
  }
  return v7;
}
