/*
 * XREFs of RtlpHpLargeFree @ 0x1800585DC
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x180054E7C (RtlpSparseBitmapCtxUpdateBitRanges.c)
 *     RtlpHpMetadataFree @ 0x1800586CC (RtlpHpMetadataFree.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800588CC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockRelease @ 0x180058904 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x180058924 (RtlpHpLargeLockAcquire.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800EEF6C (RtlpHeapLogRangeRelease.c)
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
