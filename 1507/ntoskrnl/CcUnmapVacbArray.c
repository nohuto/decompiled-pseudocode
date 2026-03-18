/*
 * XREFs of CcUnmapVacbArray @ 0x140086690
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     CcUnmapAndPurge @ 0x1400865D8 (CcUnmapAndPurge.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x14012F268 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcSetPrivateWriteFile @ 0x1401DDBC0 (CcSetPrivateWriteFile.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     CcSetVacbLargeOffset @ 0x140078680 (CcSetVacbLargeOffset.c)
 *     CcGetVacbLargeOffset @ 0x1400855D0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x140086BB4 (CcSetVacbInFreeList.c)
 *     MmPropagateDirtyBitsToPfn @ 0x140086C80 (MmPropagateDirtyBitsToPfn.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, char a5)
{
  char v5; // r14
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  signed __int64 v9; // rdi
  signed __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r14
  char v15; // di
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // rtt
  int v20; // ecx
  __int64 v21; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  __int64 v24; // rtt
  int v25; // esi
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rsi
  KIRQL v29; // r12
  volatile signed __int64 **v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  ULONG_PTR v33; // rbp
  unsigned __int8 v34; // bl
  unsigned __int32 v35; // eax
  __int64 v36; // rsi
  unsigned __int8 CurrentIrql; // r13
  int v38; // eax
  unsigned __int8 v39; // r12
  unsigned __int32 v40; // eax
  __int64 v41; // rsi
  unsigned __int8 v42; // r12
  void *v43; // r14
  signed __int64 v44; // rax
  signed __int64 v45; // rcx
  __int64 v46; // rtt
  unsigned __int8 v47; // r13
  unsigned __int32 v48; // eax
  __int64 v49; // r9
  __int64 v50; // rsi
  unsigned __int8 v51; // r13
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rsi
  signed __int32 v55[8]; // [rsp+0h] [rbp-68h] BYREF
  int v56; // [rsp+30h] [rbp-38h]
  int v57; // [rsp+34h] [rbp-34h]
  signed __int64 v58; // [rsp+38h] [rbp-30h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v60; // [rsp+70h] [rbp+8h]

  v60 = 1;
  v5 = a4;
  v7 = 0;
  v58 = 0LL;
  v8 = 0;
  v57 = 0;
  v56 = 0;
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v32 = *a2;
    v10 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v58 = v10;
    v7 = v10;
    if ( a3 )
      v9 = v32 + a3;
    else
      v9 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v57 = 1;
    v36 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, a4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
      ExpAcquireFastMutexContended(a1 + 280);
    if ( v36 )
      *(_BYTE *)(v36 + 26) |= 1u;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    v38 = CurrentIrql;
    v8 = v56;
    *(_DWORD *)(a1 + 328) = v38;
  }
  v11 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, a4);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 104, v11, a1 + 104);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 336) = v9;
    v8 = 1;
    v56 = 1;
  }
  if ( v10 >= v9 )
  {
LABEL_18:
    v15 = 1;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( v10 >= v13 )
      goto LABEL_16;
    v14 = v13 > 0x2000000
        ? CcGetVacbLargeOffset(a1, v10)
        : *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)v7 >> 18));
    if ( !v14 )
      goto LABEL_16;
    if ( *(_WORD *)(v14 + 16) )
      break;
    v60 = 1;
    if ( v13 > 0x2000000 )
      CcSetVacbLargeOffset(a1, v10, 0LL, 0LL);
    else
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)v7 >> 18)) = 0LL;
    v20 = v8 | 2;
    v8 &= ~2u;
    if ( CcNumberOfFreeHighPriorityVacbs < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v8 = v20;
    v21 = *(_QWORD *)v14;
    v56 = v8;
    MmPropagateDirtyBitsToPfn(v21);
    _m_prefetchw((const void *)(a1 + 104));
    v22 = *(_QWORD *)(a1 + 104);
    if ( (v22 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v23 = v22 - 16;
    else
      v23 = 0LL;
    if ( (v22 & 2) != 0
      || (v24 = *(_QWORD *)(a1 + 104),
          v24 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v23, v22)) )
    {
      ExfReleasePushLock(a1 + 104);
    }
    KeAbPostRelease(a1 + 104);
    v25 = v57;
    if ( v57 )
    {
      *(_QWORD *)(a1 + 288) = 0LL;
      v39 = *(_BYTE *)(a1 + 328);
      v40 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
      if ( v40 )
        ExpReleaseFastMutexContended(a1 + 280, v40);
      __writecr8(v39);
      KeAbPostRelease(a1 + 280);
      v25 = v57;
    }
    if ( *(_WORD *)(v14 + 16) )
      KeBugCheckEx(0x34u, 0xC7BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    CcUnmapVacb(v14, a1, v8);
    if ( v25 )
    {
      v41 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, v26);
      v42 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
        ExpAcquireFastMutexContended(a1 + 280);
      if ( v41 )
        *(_BYTE *)(v41 + 26) |= 1u;
      *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 328) = v42;
      v8 = v56;
    }
    v27 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, v26);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 104, v27, a1 + 104);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v29 = KeAcquireQueuedSpinLock(4uLL);
    *(_QWORD *)(v14 + 8) = 0LL;
    CcSetVacbInFreeList(v14, (v8 & 2) != 0);
    v30 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v30, retaddr);
      goto LABEL_44;
    }
    _m_prefetchw(v30);
    v31 = (__int64)*v30;
    if ( *v30 )
      goto LABEL_69;
    if ( v30 != (volatile signed __int64 **)_InterlockedCompareExchange64(v30[1], 0LL, (signed __int64)v30) )
    {
      v31 = KxWaitForLockChainValid((__int64 *)v30);
LABEL_69:
      *v30 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
    }
LABEL_44:
    __writecr8(v29);
LABEL_16:
    v10 += 0x40000LL;
    v58 = v10;
    v7 = v10;
LABEL_17:
    if ( v10 >= v9 )
      goto LABEL_18;
  }
  if ( a5 )
  {
    v43 = *(void **)(a1 + 184);
    if ( v43 )
    {
      if ( v60 )
      {
        KeResetEvent(*(PRKEVENT *)(a1 + 184));
        _InterlockedOr(v55, 0);
        v60 = 0;
      }
      else
      {
        _m_prefetchw((const void *)(a1 + 104));
        v44 = *(_QWORD *)(a1 + 104);
        if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v45 = 0LL;
        else
          v45 = v44 - 16;
        if ( (v44 & 2) != 0
          || (v46 = *(_QWORD *)(a1 + 104),
              v46 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v45, v44)) )
        {
          ExfReleasePushLock(a1 + 104);
        }
        KeAbPostRelease(a1 + 104);
        if ( v57 )
        {
          v47 = *(_BYTE *)(a1 + 328);
          *(_QWORD *)(a1 + 288) = 0LL;
          v48 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
          if ( v48 )
            ExpReleaseFastMutexContended(a1 + 280, v48);
          __writecr8(v47);
          KeAbPostRelease(a1 + 280);
          v8 = v56;
        }
        KeWaitForSingleObject(v43, Executive, 0, 0, 0LL);
        v60 = 1;
        if ( v57 )
        {
          v50 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, v49);
          v51 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
            ExpAcquireFastMutexContended(a1 + 280);
          if ( v50 )
            *(_BYTE *)(v50 + 26) |= 1u;
          *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
          v52 = v51;
          v8 = v56;
          *(_DWORD *)(a1 + 328) = v52;
        }
        v53 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, v49);
        v54 = v53;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
          ExfAcquirePushLockExclusiveEx(a1 + 104, v53, a1 + 104);
        if ( v54 )
          *(_BYTE *)(v54 + 26) |= 1u;
      }
    }
    else
    {
      v60 = 0;
      *(_WORD *)(a1 + 344) = 0;
      *(_DWORD *)(a1 + 348) = 0;
      *(_BYTE *)(a1 + 346) = 6;
      *(_QWORD *)(a1 + 360) = a1 + 352;
      *(_QWORD *)(a1 + 352) = a1 + 352;
      _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
    }
    goto LABEL_17;
  }
  v15 = 0;
LABEL_19:
  _m_prefetchw((const void *)(a1 + 104));
  v16 = *(_QWORD *)(a1 + 104);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v17 = v16 - 16;
  else
    v17 = 0LL;
  if ( (v16 & 2) != 0
    || (v18 = *(_QWORD *)(a1 + 104),
        v18 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v17, v16)) )
  {
    ExfReleasePushLock(a1 + 104);
  }
  KeAbPostRelease(a1 + 104);
  if ( v57 )
  {
    v33 = a1 + 280;
    *(_QWORD *)(v33 + 8) = 0LL;
    v34 = *(_BYTE *)(v33 + 48);
    v35 = _InterlockedCompareExchange((volatile signed __int32 *)v33, 1, 0);
    if ( v35 )
      ExpReleaseFastMutexContended(v33, v35);
    __writecr8(v34);
    KeAbPostRelease(v33);
  }
  return v15;
}
