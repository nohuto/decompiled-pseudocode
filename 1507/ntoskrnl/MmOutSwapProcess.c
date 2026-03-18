/*
 * XREFs of MmOutSwapProcess @ 0x14011029C
 * Callers:
 *     KiOutSwapProcesses @ 0x1401100B8 (KiOutSwapProcesses.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     KeFlushProcessTb @ 0x1400EF5C4 (KeFlushProcessTb.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeWaitForAllContextSwaps @ 0x1401FFAE8 (KeWaitForAllContextSwaps.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

void __fastcall MmOutSwapProcess(ULONG_PTR a1)
{
  char v2; // al
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 *v10; // r14
  __int64 TransitionPte; // rbx
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r14
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int16 v18; // [rsp+30h] [rbp-30h] BYREF
  char v19; // [rsp+32h] [rbp-2Eh]
  int v20; // [rsp+34h] [rbp-2Ch]
  _QWORD v21[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v24; // [rsp+A8h] [rbp+48h] BYREF

  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x40u);
  if ( (*(_BYTE *)(a1 + 1491) & 0xC0) == 0x40 )
    MiReleaseOutSwappedProcessCommit(a1);
  if ( *(_QWORD *)(a1 + 1392) == 5LL && (*(_BYTE *)(a1 + 1491) & 8) == 0 )
  {
    v18 = 263;
    v21[1] = v21;
    v19 = 6;
    v21[0] = v21;
    v20 = 0;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    while ( 1 )
    {
      v2 = *(_BYTE *)(a1 + 1489);
      if ( (v2 & 6) == 0 && (v2 & 0xF0) == 0 )
        break;
      if ( (v2 & 0xF0) != 0 )
        goto LABEL_33;
      *(_QWORD *)(a1 + 1280) = &v18;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeWaitForGate(&v18, 18LL);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      *(_QWORD *)(a1 + 1280) = 0LL;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x80u);
    v3 = (_QWORD *)(a1 + 1296);
    v4 = *(_QWORD *)(a1 + 1296);
    v5 = *(_QWORD **)(a1 + 1304);
    if ( *(_QWORD *)(v4 + 8) != a1 + 1296 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v6 = *(_QWORD **)(a1 + 1288);
    if ( v6 )
    {
      MiEmptyPageAccessLog(v6);
      *(_QWORD *)(a1 + 1288) = 0LL;
    }
    KeWaitForAllContextSwaps(a1);
    KeFlushProcessTb(*(_QWORD *)(a1 + 40));
    if ( *(_QWORD *)(a1 + 1520) )
      KeFlushProcessTb(*(_QWORD *)(a1 + 632));
    v7 = *(_QWORD *)(a1 + 864);
    v24 = 17;
    do
    {
      v8 = v7;
      v9 = 48 * v7 - 0x58000000000LL;
      v7 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL;
      v10 = (__int64 *)(MiMapPageInHyperSpaceWorker(v7, &v24) + 8LL * ((*(_DWORD *)(v9 + 8) >> 3) & 0x1FF));
      TransitionPte = MiMakeTransitionPte(v8, 4LL);
      *v10 = TransitionPte;
      if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v10, TransitionPte);
      MiUnmapPageInHyperSpaceWorker((__int64)v10, v24);
    }
    while ( v7 != v8 );
    v12 = *(_QWORD *)(a1 + 864);
    do
    {
      v13 = v12;
      v14 = 48 * v12 - 0x58000000000LL;
      v12 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL;
      MiLockAndDecrementShareCount(v14, 0);
    }
    while ( v12 != v13 );
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    *(_QWORD *)(v14 + 8) = a1 + 1088;
    *(_QWORD *)(a1 + 1088) = TransitionPte;
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 1376) = 0LL;
    *(_QWORD *)(a1 + 1384) = 0LL;
    *(_QWORD *)(a1 + 1392) = 0LL;
    *(_QWORD *)(a1 + 1400) = 0LL;
    if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v14 + 0x58000000000LL) / 48,
        *(_BYTE *)(v14 + 34) & 7,
        *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v16 = *(_QWORD *)(v14 + 24);
    v17 = (v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v14 + 24) = v16 ^ (v17 ^ v16) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v16 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v14, v17);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_33:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
