/*
 * XREFs of RtlpHpLargeAlloc @ 0x18004F77C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800431C8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC20 (RtlRbInsertNodeEx.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 *     RtlSparseBitmapCtxClearBits @ 0x18004F750 (RtlSparseBitmapCtxClearBits.c)
 *     RtlpHpLargeLockRelease @ 0x18004F994 (RtlpHpLargeLockRelease.c)
 *     RtlpHpLargeLockAcquire @ 0x18004F9B4 (RtlpHpLargeLockAcquire.c)
 *     RtlSparseBitmapCtxSetBits @ 0x18004F9E0 (RtlSparseBitmapCtxSetBits.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapLogRangeReserve @ 0x1800F7F14 (RtlpHeapLogRangeReserve.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  void *v9; // rax
  unsigned __int64 v10; // rdi
  int HeapProtection; // eax
  int v12; // eax
  bool v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-8h] BYREF

  v4 = 0LL;
  v18 = 0LL;
  v9 = (void *)RtlpHpMetadataAlloc(40LL, 0LL);
  v10 = (unsigned __int64)v9;
  if ( !v9 )
  {
LABEL_19:
    if ( v18 )
    {
      RtlSparseBitmapCtxClearBits((int)&RtlpHpLargeAllocationBitmap, v18 >> 16, 1, 0, 0LL);
      v17 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v18, &v17, 0x8000LL);
    }
    return v4;
  }
  memset(v9, 0, 0x28uLL);
  v17 = a3 + 4096;
  if ( a3 + 4096 < a3 )
    goto LABEL_17;
  HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v17, 0x2000, HeapProtection) < 0 )
  {
    v18 = 0LL;
    goto LABEL_17;
  }
  v17 = a3;
  v12 = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v17, 4096, v12) < 0
    || (*(_QWORD *)(v10 + 24) = v18,
        *(_QWORD *)(v10 + 32) = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)*(_QWORD *)(v10 + 32)) & 0xFFF,
        *(_WORD *)(v10 + 24) = v17 - a2,
        (int)RtlSparseBitmapCtxSetBits((unsigned int)&RtlpHpLargeAllocationBitmap, v18 >> 16, 1, 0, 0LL) < 0) )
  {
LABEL_17:
    if ( v10 )
      RtlpHpMetadataFree(v10);
    goto LABEL_19;
  }
  RtlpHpLargeLockAcquire(a1, a4);
  v13 = 0;
  v14 = *(_QWORD **)(a1 + 56);
  if ( !v14 )
    goto LABEL_11;
  while ( v18 >= (v14[3] & 0xFFFFFFFFFFFF0000uLL) )
  {
    v15 = (_QWORD *)v14[1];
    if ( !v15 )
    {
      v13 = 1;
      goto LABEL_11;
    }
LABEL_9:
    v14 = v15;
  }
  v15 = (_QWORD *)*v14;
  if ( *v14 )
    goto LABEL_9;
  v13 = 0;
LABEL_11:
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v14, v13, v10);
  RtlpHpLargeLockRelease(a1, a4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), (v17 >> 12) + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v17 >> 12);
  v4 = v18;
  v10 = 0LL;
  v18 = 0LL;
  if ( MEMORY[0x7FFE0388] )
  {
    RtlpHeapLogRangeReserve(a1, v4, v17 + 4096);
    goto LABEL_17;
  }
  return v4;
}
