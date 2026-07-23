/*
 * XREFs of RtlpHpLargeFree @ 0x18005A4D4
 * Callers:
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x18003FEB0 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpHpMetadataFree @ 0x18005A5C4 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockRelease @ 0x18005A5F4 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18005A7FC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x18005A834 (RtlpHpLargeLockAcquire.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F0EC4 (RtlpHeapLogRangeRelease.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(__int64 a1, void *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *Metadata; // rax
  _RTL_BALANCED_NODE *v6; // rsi
  ULONG_PTR v7; // rdi
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a2;
  RtlpHpLargeLockAcquire(a1, a3);
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, BaseAddress);
  v6 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), Metadata);
    RtlpHpLargeLockRelease(a1, a3);
    RtlpSparseBitmapCtxUpdateBitRanges(
      (__int64)&RtlpHpLargeAllocationBitmap,
      (unsigned __int64)BaseAddress >> 16,
      1uLL,
      0LL,
      0LL,
      0);
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -((unsigned __int64)v6[1].Children[1] >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)(RegionSize >> 12));
    RtlpHpMetadataFree(v6);
    v7 = RegionSize;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(a1, BaseAddress, RegionSize);
  }
  else
  {
    RtlpHpLargeLockRelease(a1, a3);
    RtlpLogHeapFailure(8, a1, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    return 0LL;
  }
  return v7;
}
