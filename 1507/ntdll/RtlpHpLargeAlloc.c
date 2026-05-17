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
  unsigned __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0LL;
  v18 = 0LL;
  v9 = (void *)RtlpHpMetadataAlloc(40LL, 0LL);
  v10 = (unsigned __int64)v9;
  if ( !v9 )
  {
LABEL_19:
    if ( v18 )
    {
      RtlpSparseBitmapCtxUpdateBitRanges((__int64)&RtlpHpLargeAllocationBitmap, v18 >> 16, 1uLL, 0LL, 0LL, 0);
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
        (int)RtlpSparseBitmapCtxUpdateBitRanges((__int64)&RtlpHpLargeAllocationBitmap, v18 >> 16, 1uLL, 0LL, 0LL, 1) < 0) )
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
