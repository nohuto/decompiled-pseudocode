/*
 * XREFs of MmOutSwapProcess @ 0x1400328BC
 * Callers:
 *     KiOutSwapProcesses @ 0x14003272C (KiOutSwapProcesses.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     KeFlushProcessTb @ 0x140005994 (KeFlushProcessTb.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MmOutSwapProcess(ULONG_PTR a1)
{
  char v2; // al
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r14
  __int16 v16; // [rsp+20h] [rbp-30h] BYREF
  char v17; // [rsp+22h] [rbp-2Eh]
  int v18; // [rsp+24h] [rbp-2Ch]
  _QWORD v19[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+98h] [rbp+48h] BYREF
  int v23; // [rsp+A0h] [rbp+50h] BYREF

  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x40u);
  if ( (*(_BYTE *)(a1 + 1499) & 0xC0) == 0x40 )
    MiReleaseOutSwappedProcessCommit(a1);
  if ( *(_QWORD *)(a1 + 1400) == 5LL && (*(_BYTE *)(a1 + 1499) & 8) == 0 )
  {
    v16 = 263;
    v19[1] = v19;
    v17 = 6;
    v19[0] = v19;
    v18 = 0;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    while ( 1 )
    {
      v2 = *(_BYTE *)(a1 + 1497);
      if ( (v2 & 6) == 0 && (v2 & 0xF0) == 0 )
        break;
      if ( (v2 & 0xF0) != 0 )
        goto LABEL_26;
      *(_QWORD *)(a1 + 1288) = &v16;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeWaitForGate(&v16, 18LL);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      *(_QWORD *)(a1 + 1288) = 0LL;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x80u);
    v3 = (_QWORD *)(a1 + 1304);
    v4 = *(_QWORD *)(a1 + 1304);
    v5 = *(_QWORD **)(a1 + 1312);
    if ( *(_QWORD *)(v4 + 8) != a1 + 1304 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v6 = *(void **)(a1 + 1296);
    if ( v6 )
    {
      MiEmptyPageAccessLog(v6);
      *(_QWORD *)(a1 + 1296) = 0LL;
    }
    v23 = 0;
    while ( !(unsigned int)KeIsEmptyAffinityEx(a1 + 272) )
      KeYieldProcessorEx(&v23);
    KeFlushProcessTb(*(_QWORD *)(a1 + 40));
    if ( *(_QWORD *)(a1 + 1528) )
      KeFlushProcessTb(*(_QWORD *)(a1 + 632));
    v7 = *(_QWORD *)(a1 + 864);
    v22 = 17;
    do
    {
      v8 = v7;
      v9 = 48 * v7 - 0x58000000000LL;
      v7 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL;
      v10 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v7, &v22, 0x80000000LL)
                               + 8LL * ((*(_DWORD *)(v9 + 8) >> 3) & 0x1FF));
      v11 = MI_READ_PTE_LOCK_FREE(v10) & 0xFFFFFFFFFFFFF01EuLL | 0x880;
      *v10 = v11;
      if ( (unsigned int)MiPteInShadowRange(v10) )
        MiWritePteShadow(v10, v11);
      LOBYTE(v12) = v22;
      MiUnmapPageInHyperSpaceWorker(v10, v12, 0x80000000LL);
    }
    while ( v7 != v8 );
    v13 = *(_QWORD *)(a1 + 864);
    do
    {
      v14 = v13;
      v15 = 48 * v13 - 0x58000000000LL;
      v13 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFLL;
      MiLockAndDecrementShareCount(v15, 0);
    }
    while ( v13 != v14 );
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    MiLockPageAtDpcInline(v15);
    *(_QWORD *)(v15 + 8) = a1 + 1088;
    *(_QWORD *)(a1 + 1088) = v11;
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 1384) = 0LL;
    *(_QWORD *)(a1 + 1392) = 0LL;
    *(_QWORD *)(a1 + 1400) = 0LL;
    *(_QWORD *)(a1 + 1408) = 0LL;
    MiDecrementShareCount(v15);
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_26:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
