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

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *Metadata; // rax
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  RtlpHpLargeLockAcquire(a1, a3);
  Metadata = (unsigned __int64 *)RtlpHpLargeAllocGetMetadata(a1, v9);
  v6 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 56), Metadata);
    RtlpHpLargeLockRelease(a1, a3);
    RtlpSparseBitmapCtxUpdateBitRanges((__int64)&RtlpHpLargeAllocationBitmap, v9 >> 16, 1uLL, 0LL, 0LL, 0);
    v10 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -(__int64)(v6[4] >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)(v10 >> 12));
    RtlpHpMetadataFree(v6);
    v7 = v10;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(a1, v9, v10);
  }
  else
  {
    RtlpHpLargeLockRelease(a1, a3);
    RtlpLogHeapFailure(8, a1, v9, 0, 0LL, 0LL);
    return 0LL;
  }
  return v7;
}
