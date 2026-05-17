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
