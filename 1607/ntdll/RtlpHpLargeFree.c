/*
 * XREFs of RtlpHpLargeFree @ 0x18004F630
 * Callers:
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001C040 (RtlRbRemoveNode.c)
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 *     RtlSparseBitmapCtxClearBits @ 0x18004F750 (RtlSparseBitmapCtxClearBits.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18004F95C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockRelease @ 0x18004F994 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x18004F9B4 (RtlpHpLargeLockAcquire.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *Metadata; // rax
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a2;
  RtlpHpLargeLockAcquire(a1, a3);
  Metadata = (unsigned __int64 *)RtlpHpLargeAllocGetMetadata(a1);
  v6 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 56), Metadata);
    RtlpHpLargeLockRelease(a1, a3);
    RtlSparseBitmapCtxClearBits((unsigned int)&RtlpHpLargeAllocationBitmap, v9 >> 16, 1, 0, 0LL);
    v10 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -(__int64)(v6[4] >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)(v10 >> 12));
    RtlpHpMetadataFree(v6);
    v7 = v10;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(a1, v9);
  }
  else
  {
    RtlpHpLargeLockRelease(a1, a3);
    RtlpLogHeapFailure(8, a1, v9, 0, 0LL, 0LL);
    return 0LL;
  }
  return v7;
}
