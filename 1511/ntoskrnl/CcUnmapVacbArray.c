/*
 * XREFs of CcUnmapVacbArray @ 0x1400B1DF0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x1400E85AC (CcUnmapFileOffsetFromSystemCache.c)
 *     CcSetPrivateWriteFile @ 0x1401A96C8 (CcSetPrivateWriteFile.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     SetVacb @ 0x1400B1DAC (SetVacb.c)
 *     CcGetVacbLargeOffset @ 0x1400B2174 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400B21E0 (CcSetVacbInFreeList.c)
 *     MmPropagateDirtyBitsToPfn @ 0x1400B22A0 (MmPropagateDirtyBitsToPfn.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400E10E8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400E115C (CcAcquireBcbLockAndVacbLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x14047B6A0 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5)
{
  signed __int64 v5; // rdi
  unsigned int v8; // r13d
  __int64 v9; // rax
  signed __int64 v10; // rbx
  signed __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r15
  int v17; // ecx
  unsigned int v18; // r12d
  __int64 v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rtt
  __int64 v23; // rax
  __int64 v24; // r13
  KIRQL v25; // r12
  char v26; // bl
  signed __int64 v27; // rax
  __int64 v28; // rtt
  void *v30; // r15
  signed __int32 v31[8]; // [rsp+0h] [rbp-68h] BYREF
  int v32; // [rsp+30h] [rbp-38h]
  unsigned int v33; // [rsp+34h] [rbp-34h]
  signed __int64 v34; // [rsp+38h] [rbp-30h]
  char v35; // [rsp+70h] [rbp+8h]

  v5 = 0LL;
  v35 = 1;
  v34 = 0LL;
  v8 = 0;
  v32 = 0;
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v9 = *a2;
    v10 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v34 = v10;
    if ( a3 )
      v11 = v9 + a3;
    else
      v11 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 32);
    v10 = v34;
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v8 = 1;
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  }
  v12 = KeAbPreAcquire(a1 + 104, 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v12, a1 + 104);
  v33 = v8;
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( a4 )
  {
    v14 = 1;
    *(_QWORD *)(a1 + 336) = v11;
    v32 = 1;
  }
  else
  {
    v14 = v32;
  }
  if ( v10 >= v11 )
  {
LABEL_40:
    v26 = 1;
    goto LABEL_41;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( v10 >= v15 )
      goto LABEL_19;
    v16 = v15 > 0x2000000
        ? CcGetVacbLargeOffset(a1, v10)
        : *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v34 >> 18));
    if ( !v16 )
      goto LABEL_19;
    if ( !*(_WORD *)(v16 + 16) )
    {
      v35 = 1;
      SetVacb(a1, v10, 0LL);
      v17 = v14 | 2;
      v18 = v14 & 0xFFFFFFFD;
      if ( CcNumberOfFreeHighPriorityVacbs < (unsigned int)CcMinimumFreeHighPriorityVacbs )
        v18 = v17;
      v19 = *(_QWORD *)v16;
      v32 = v18;
      MmPropagateDirtyBitsToPfn(v19);
      _m_prefetchw((const void *)(a1 + 104));
      v20 = *(_QWORD *)(a1 + 104);
      if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v21 = v20 - 16;
      else
        v21 = 0LL;
      if ( (v20 & 2) != 0
        || (v22 = *(_QWORD *)(a1 + 104),
            v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v21, v20)) )
      {
        ExfReleasePushLock((_QWORD *)(a1 + 104));
      }
      KeAbPostRelease(a1 + 104);
      if ( v8 )
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      if ( *(_WORD *)(v16 + 16) )
        KeBugCheckEx(0x34u, 0xC7BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      CcUnmapVacb(v16, a1, v18);
      if ( v8 )
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
      v23 = KeAbPreAcquire(a1 + 104, 0LL, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v23, a1 + 104);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      v25 = KeAcquireQueuedSpinLock(4uLL);
      *(_QWORD *)(v16 + 8) = 0LL;
      CcSetVacbInFreeList(v16, (v32 & 2) != 0);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 8);
      __writecr8(v25);
LABEL_19:
      v10 += 0x40000LL;
      v34 = v10;
      goto LABEL_20;
    }
    if ( !a5 )
      break;
    v30 = *(void **)(a1 + 184);
    if ( v30 )
    {
      if ( v35 )
      {
        KeResetEvent(*(PRKEVENT *)(a1 + 184));
        _InterlockedOr(v31, 0);
        v35 = 0;
      }
      else
      {
        CcReleaseBcbLockAndVacbLock(v8, a1);
        KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
        v35 = 1;
        CcAcquireBcbLockAndVacbLock(v8, a1);
      }
    }
    else
    {
      v35 = 0;
      *(_WORD *)(a1 + 344) = 0;
      *(_BYTE *)(a1 + 346) = 6;
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 360) = a1 + 352;
      *(_QWORD *)(a1 + 352) = a1 + 352;
      _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
    }
LABEL_20:
    if ( v10 >= v11 )
      goto LABEL_40;
    v8 = v33;
    v14 = v32;
  }
  v26 = 0;
LABEL_41:
  _m_prefetchw((const void *)(a1 + 104));
  v27 = *(_QWORD *)(a1 + 104);
  if ( (v27 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v27 - 16;
  if ( (v27 & 2) != 0
    || (v28 = *(_QWORD *)(a1 + 104), v28 != _InterlockedCompareExchange64(
                                              (volatile signed __int64 *)(a1 + 104),
                                              v5,
                                              v27)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 + 104));
  }
  KeAbPostRelease(a1 + 104);
  if ( v33 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return v26;
}
