/*
 * XREFs of CcSetDirtyInMask @ 0x1400B2DE0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E4134 (CcReleaseByteRangeFromWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1400F23A4 (CcMdlWriteComplete2.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400AFA68 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400B2C7C (CcChargeDirtyPages.c)
 *     CcFindBitmapRangeToDirty @ 0x1400B3278 (CcFindBitmapRangeToDirty.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     CcAllocateInitializeMbcb @ 0x1400E862C (CcAllocateInitializeMbcb.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // rsi
  signed __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v14; // r12
  __int64 v15; // rcx
  ULONG_PTR v16; // rbx
  unsigned __int8 v17; // di
  signed __int32 v18; // eax
  __int64 BitmapRangeToDirty; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  _DWORD *v22; // rdx
  int v23; // ebx
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v26; // rcx
  PVOID v27; // rax
  _OWORD *v28; // rbx
  _OWORD *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // rdx
  __int64 InitializeMbcb; // rax
  KIRQL v36; // al
  PVOID Entry; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+38h] [rbp-40h]
  KIRQL v39; // [rsp+90h] [rbp+18h]

  v4 = *a2;
  v38 = a3;
  Entry = 0LL;
  v7 = 0;
  v8 = v4 + a3 - 1LL;
  if ( ((v4 ^ v8) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC07uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v9 = v4 >> 12;
  v10 = v8 >> 12;
  if ( *(_QWORD *)(a1 + 32) / 4096LL <= v10 )
    KeBugCheckEx(0x34u, 0xC19uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v11 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
    {
      v27 = ExAllocateFromNPagedLookasideList(&CcBitmapLookasideList);
      if ( !v27 )
      {
        ++CcDbgNumberOfFailedBitmapAllocations;
        goto LABEL_62;
      }
      Entry = v27;
    }
    v12 = KeAbPreAcquire(a1 + 280, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
      ExpAcquireFastMutexContended(a1 + 280, v12);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = CurrentIrql;
    v14 = *(_QWORD *)(a1 + 160);
    if ( !v14 )
      break;
LABEL_10:
    if ( v9 == v10 && v9 == *(_QWORD *)(v14 + 40) )
      goto LABEL_12;
    if ( (unsigned __int64)v10 < 0x300 || *(_WORD *)v14 == 761 )
    {
      BitmapRangeToDirty = CcFindBitmapRangeToDirty(v14, v9, &Entry);
      v20 = BitmapRangeToDirty;
      if ( !BitmapRangeToDirty )
        goto LABEL_61;
      v21 = *(_QWORD *)(BitmapRangeToDirty + 16);
      if ( v9 < v21 + *(unsigned int *)(BitmapRangeToDirty + 24) )
        *(_DWORD *)(BitmapRangeToDirty + 24) = v9 - v21;
      if ( v10 > v21 + *(unsigned int *)(BitmapRangeToDirty + 28) )
        *(_DWORD *)(BitmapRangeToDirty + 28) = v10 - v21;
      v39 = KeAcquireQueuedSpinLock(5uLL);
      if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
      {
        CcScheduleLazyWriteScan(0, 0);
        CcInsertIntoDirtySharedCacheMapList(a1);
        *(_QWORD *)(v14 + 32) = v9;
      }
      v22 = (_DWORD *)(*(_QWORD *)(v20 + 40) + 4 * ((unsigned __int64)(unsigned int)(v9 - *(_DWORD *)(v20 + 16)) >> 5));
      v23 = 1 << (v9 & 0x1F);
      if ( v9 <= v10 )
      {
        v24 = v10 - v9 + 1;
        v9 = v10 + 1;
        do
        {
          if ( (*v22 & v23) == 0 )
          {
            *v22 |= v23;
            ++v7;
          }
          v23 *= 2;
          if ( !v23 )
          {
            ++v22;
            v23 = 1;
          }
          --v24;
        }
        while ( v24 );
      }
      CcChargeDirtyPages(a1, v14, v20, v7);
      KeReleaseQueuedSpinLock(5uLL, v39);
      if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v7 )
      {
        CurrentThread = a4;
        if ( !a4 )
        {
          CurrentThread = KeGetCurrentThread();
          a4 = CurrentThread;
        }
        v26 = CurrentThread->Process[2].ActiveProcessors.Bitmap[6];
        if ( v26 )
        {
          if ( v7 << 12 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8), v7 << 12);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 1uLL);
        }
      }
      if ( v23 )
      {
        *(_QWORD *)(v14 + 40) = v10;
LABEL_12:
        v15 = *a2 + v38;
        if ( v15 > *(_QWORD *)(a1 + 48) )
          *(_QWORD *)(a1 + 48) = v15;
LABEL_14:
        v16 = a1 + 280;
        v17 = *(_BYTE *)(a1 + 328);
        *(_QWORD *)(v16 + 8) = 0LL;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0);
        if ( v18 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v16, v18);
        __writecr8(v17);
        KeAbPostRelease(v16);
        goto LABEL_17;
      }
      v11 = 1;
    }
    else
    {
      v28 = Entry;
      memset(Entry, 0, 0x400uLL);
      if ( *(_DWORD *)(v14 + 80) )
      {
        v29 = *(_OWORD **)(v14 + 88);
        *v28 = *v29;
        v28[1] = v29[1];
        v28[2] = v29[2];
        v28[3] = v29[3];
        v28[4] = v29[4];
        v28[5] = v29[5];
        memset(*(void **)(v14 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v14 + 88) = v28;
      v30 = v14 + 16;
      v31 = *(__int64 **)(v14 + 24);
      v32 = v14 + 96;
      *(_QWORD *)(v14 + 96) = v14 + 16;
      *(_QWORD *)(v14 + 104) = v31;
      Entry = 0LL;
      if ( *v31 != v14 + 16 )
        __fastfail(3u);
      *v31 = v32;
      *(_QWORD *)(v14 + 24) = v32;
      v33 = v14 + 144;
      *(_QWORD *)(v14 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v14 + 120) = -1;
      v34 = *(__int64 **)(v14 + 24);
      *(_QWORD *)(v14 + 144) = v30;
      *(_QWORD *)(v14 + 152) = v34;
      if ( *v34 != v30 )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v14 + 24) = v33;
      *(_WORD *)v14 = 761;
      *(_QWORD *)(v14 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v14 + 168) = -1;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      v11 = 0;
    }
  }
  InitializeMbcb = CcAllocateInitializeMbcb();
  v14 = InitializeMbcb;
  if ( InitializeMbcb )
  {
    *(_QWORD *)(a1 + 160) = InitializeMbcb;
    goto LABEL_10;
  }
LABEL_61:
  v11 = 1;
LABEL_62:
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    v36 = KeAcquireQueuedSpinLock(5uLL);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    KeReleaseQueuedSpinLock(5uLL, v36);
  }
  if ( v11 )
    goto LABEL_14;
LABEL_17:
  if ( Entry )
    ExFreeToNPagedLookasideList(&CcBitmapLookasideList, Entry);
}
