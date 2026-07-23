/*
 * XREFs of CcUnmapVacbArray @ 0x140017B40
 * Callers:
 *     CcUnmapFileOffsetFromSystemCache @ 0x1400146A8 (CcUnmapFileOffsetFromSystemCache.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     CcSetFileSizesEx @ 0x140072FCC (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     CcSetPrivateWriteFile @ 0x1401B22F0 (CcSetPrivateWriteFile.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     CcGetVacbLargeOffset @ 0x140017DC8 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x140017E34 (CcSetVacbInFreeList.c)
 *     SetVacb @ 0x14001817C (SetVacb.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140018490 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140018534 (CcAcquireBcbLockAndVacbLock.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcUnmapVacb @ 0x14042A530 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5)
{
  signed __int64 v5; // rdi
  char v6; // r13
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
  KIRQL v19; // r12
  signed __int64 v20; // rax
  __int64 v21; // rtt
  void *v23; // r15
  signed __int32 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  int v25; // [rsp+30h] [rbp-38h]
  unsigned int v26; // [rsp+34h] [rbp-34h]
  signed __int64 v27; // [rsp+38h] [rbp-30h]
  char v28; // [rsp+70h] [rbp+8h]

  v5 = 0LL;
  v6 = 1;
  v27 = 0LL;
  v26 = 0;
  v25 = 0;
  v28 = 1;
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v9 = *a2;
    v10 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v27 = v10;
    if ( a3 )
      v11 = v9 + a3;
    else
      v11 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 32);
    v10 = v27;
  }
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v26 = 1;
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  }
  v12 = KeAbPreAcquire(a1 + 104);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 104, v12, a1 + 104);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( a4 )
  {
    v14 = 1;
    *(_QWORD *)(a1 + 336) = v11;
    v25 = 1;
  }
  else
  {
    v14 = v25;
  }
  if ( v10 < v11 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      if ( v10 >= v15 )
        goto LABEL_18;
      v16 = v15 > 0x2000000
          ? CcGetVacbLargeOffset(a1, v10)
          : *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v27 >> 18));
      if ( !v16 )
        goto LABEL_18;
      if ( !*(_WORD *)(v16 + 16) )
        break;
      if ( !a5 )
      {
        v6 = 0;
        goto LABEL_28;
      }
      v23 = *(void **)(a1 + 184);
      if ( v23 )
      {
        if ( v28 )
        {
          KeResetEvent(*(PRKEVENT *)(a1 + 184));
          _InterlockedOr(v24, 0);
          v28 = 0;
        }
        else
        {
          CcReleaseBcbLockAndVacbLock(v26, a1);
          KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
          v28 = 1;
          CcAcquireBcbLockAndVacbLock(v26, a1);
        }
      }
      else
      {
        v28 = 0;
        *(_WORD *)(a1 + 344) = 0;
        *(_BYTE *)(a1 + 346) = 6;
        *(_DWORD *)(a1 + 348) = 0;
        *(_QWORD *)(a1 + 360) = a1 + 352;
        *(_QWORD *)(a1 + 352) = a1 + 352;
        _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
      }
LABEL_19:
      if ( v10 >= v11 )
        goto LABEL_28;
      v14 = v25;
    }
    v28 = 1;
    SetVacb(a1, v10, 0LL, 0LL);
    v17 = v14 | 2;
    v18 = v14 & 0xFFFFFFFD;
    if ( CcNumberOfFreeHighPriorityVacbs < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v18 = v17;
    v25 = v18;
    CcUnmapVacb(v16, a1, v18);
    v19 = KeAcquireQueuedSpinLock(4uLL);
    *(_QWORD *)(v16 + 8) = 0LL;
    CcSetVacbInFreeList(v16, (v25 & 2) != 0);
    KeReleaseQueuedSpinLock(4uLL, v19);
LABEL_18:
    v10 += 0x40000LL;
    v27 = v10;
    goto LABEL_19;
  }
LABEL_28:
  _m_prefetchw((const void *)(a1 + 104));
  v20 = *(_QWORD *)(a1 + 104);
  if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v5 = v20 - 16;
  if ( (v20 & 2) != 0
    || (v21 = *(_QWORD *)(a1 + 104), v21 != _InterlockedCompareExchange64(
                                              (volatile signed __int64 *)(a1 + 104),
                                              v5,
                                              v20)) )
  {
    ExfReleasePushLock(a1 + 104);
  }
  KeAbPostRelease(a1 + 104);
  if ( v26 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return v6;
}
