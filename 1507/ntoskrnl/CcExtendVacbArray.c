/*
 * XREFs of CcExtendVacbArray @ 0x140078038
 * Callers:
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcFreeUnusedVacbLevels @ 0x140078A30 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x140078A84 (CcAllocateVacbLevels.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CcCalculateVacbLevelLockCount @ 0x140139B5C (CcCalculateVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r12d
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // r14d
  unsigned int v9; // r14d
  __int64 v10; // r9
  void *v11; // r13
  signed __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  char *v15; // r15
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  __int64 v19; // r8
  unsigned int v21; // r14d
  int v22; // ecx
  unsigned int v23; // r15d
  __int64 v24; // r15
  unsigned __int8 v25; // r12
  __int64 v26; // rax
  char *v27; // rcx
  char **i; // rdx
  unsigned __int8 v29; // r14
  unsigned __int32 v30; // eax
  char *v31; // r8
  char *v32; // r8
  __int64 v33; // rdx
  char **v34; // r9
  char **v35; // rdx
  char *v36; // r8
  KIRQL v37; // al
  __int64 v38; // r9
  signed __int64 *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  _QWORD *v43; // r13
  _QWORD *v44; // rsi
  _QWORD *v45; // rcx
  void **v46; // rax
  __int64 v47; // rax
  signed __int64 v48; // rax
  signed __int64 v49; // rcx
  signed __int64 v50; // rtt
  __int64 v51; // rbx
  unsigned __int8 CurrentIrql; // r12
  int v53; // eax
  _QWORD *v54; // rsi
  _QWORD *v55; // rcx
  void **v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  unsigned __int8 v59; // si
  unsigned __int32 v60; // eax
  unsigned int v61; // [rsp+30h] [rbp-30h]
  char *PoolWithTag; // [rsp+38h] [rbp-28h]
  void *v63[3]; // [rsp+40h] [rbp-20h] BYREF
  int v64; // [rsp+58h] [rbp-8h]
  __int64 v65; // [rsp+A8h] [rbp+48h]
  BOOL v66; // [rsp+B0h] [rbp+50h]
  int v67; // [rsp+B8h] [rbp+58h]

  v65 = a2;
  v2 = 0;
  v4 = 0;
  v66 = 0;
  v67 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v2 = a2 > 0x200000;
    v66 = v2;
  }
  v63[2] = 0LL;
  v64 = 0;
  v63[1] = v63;
  v63[0] = v63;
  v5 = *(_QWORD *)(a1 + 32);
  if ( a2 <= v5 )
    goto LABEL_39;
  if ( v5 >= 0x2000000 )
    goto LABEL_38;
  v6 = a2;
  if ( a2 >= 0x2000000 )
  {
    v4 = 1;
    v6 = 0x2000000LL;
    v67 = 1;
  }
  if ( HIDWORD(v6) )
  {
    v7 = -1;
  }
  else if ( (unsigned int)v6 <= 0x100000 )
  {
    v7 = 32;
  }
  else
  {
    v7 = 8 * ((unsigned int)v6 >> 18);
  }
  v61 = v7;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v9 = -1;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 32);
    if ( v8 > 0x100000 )
      v9 = 8 * (v8 >> 18);
    else
      v9 = 32;
  }
  if ( v7 <= v9 )
  {
LABEL_37:
    *(_QWORD *)(a1 + 32) = v6;
LABEL_38:
    v19 = *(_QWORD *)(a1 + 32);
    if ( a2 <= v19 )
    {
LABEL_39:
      CcFreeUnusedVacbLevels(v63);
      return 0LL;
    }
    v21 = 1;
    v22 = 25;
    if ( v19 > 0x2000000 )
    {
      do
      {
        v22 += 7;
        ++v21;
      }
      while ( v19 > 1LL << v22 );
    }
    v23 = v21;
    if ( !((a2 - 1) >> v22) )
      goto LABEL_46;
    do
    {
      v22 += 7;
      ++v23;
    }
    while ( (a2 - 1) >> v22 );
    if ( v23 <= v21 )
    {
LABEL_46:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_39;
    }
    v37 = KeAcquireQueuedSpinLock(4uLL);
    if ( v23 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v23 + 1;
    KeReleaseQueuedSpinLock(4uLL, v37);
    if ( (unsigned __int8)CcAllocateVacbLevels(v23 - v21, 0LL, v63) )
    {
      if ( v2 )
      {
        v51 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, v38);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
          ExpAcquireFastMutexContended(a1 + 280);
        if ( v51 )
          *(_BYTE *)(v51 + 26) |= 1u;
        *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
        v53 = CurrentIrql;
        v2 = v66;
        *(_DWORD *)(a1 + 328) = v53;
      }
      v39 = (signed __int64 *)(a1 + 104);
      v40 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, v38);
      v41 = v40;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx(a1 + 104, v40, a1 + 104);
      if ( v41 )
        *(_BYTE *)(v41 + 26) |= 1u;
      if ( v21 == 1 )
      {
        CcCalculateVacbLevelLockCount(a1, *(_QWORD *)(a1 + 88));
        v42 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
      }
      else
      {
        v42 = 0LL;
      }
      v43 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)((char *)v43 + v42 + 1024) )
      {
        do
        {
          v44 = v63[0];
          ++v21;
          if ( v63[0] == v63 )
            KeBugCheckEx(0x34u, 0x10E6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          v45 = *(_QWORD **)v63[0];
          v46 = (void **)*((_QWORD *)v63[0] + 1);
          if ( *(void **)(*(_QWORD *)v63[0] + 8LL) != v63[0] || *v46 != v63[0] )
            __fastfail(3u);
          *v46 = v45;
          v45[1] = v46;
          --v64;
          memset(v44, 0, 0x408uLL);
          *v44 = 0LL;
          *v44 = *(_QWORD *)(a1 + 88);
          if ( v21 )
            v47 = 0LL;
          else
            v47 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
          ++*(_DWORD *)((char *)v44 + v47 + 1024);
          *(_QWORD *)(a1 + 88) = v44;
        }
        while ( v23 > v21 );
      }
      else if ( v21 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v54 = v63[0];
        if ( v63[0] == v63 )
          KeBugCheckEx(0x34u, 0x10E6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v55 = *(_QWORD **)v63[0];
        v56 = (void **)*((_QWORD *)v63[0] + 1);
        if ( *(void **)(*(_QWORD *)v63[0] + 8LL) != v63[0] || *v56 != v63[0] )
          __fastfail(3u);
        *v56 = v55;
        v55[1] = v56;
        --v64;
        memset(v54, 0, 0x408uLL);
        *v54 = 0LL;
        *(_QWORD *)(a1 + 88) = v54;
        v57 = v43[128];
        v58 = (_QWORD *)v43[255];
        *(_QWORD *)(v57 + 8) = v58;
        *v58 = v57;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v43);
      }
      *(_QWORD *)(a1 + 32) = v65;
      _m_prefetchw(v39);
      v48 = *v39;
      if ( (*v39 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v49 = v48 - 16;
      else
        v49 = 0LL;
      if ( (v48 & 2) != 0 || (v50 = *v39, v50 != _InterlockedCompareExchange64(v39, v49, v48)) )
        ExfReleasePushLock(a1 + 104);
      KeAbPostRelease(a1 + 104);
      if ( v2 )
      {
        *(_QWORD *)(a1 + 288) = 0LL;
        v59 = *(_BYTE *)(a1 + 328);
        v60 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
        if ( v60 )
          ExpReleaseFastMutexContended(a1 + 280, v60);
        __writecr8(v59);
        KeAbPostRelease(a1 + 280);
      }
      a2 = v65;
      goto LABEL_46;
    }
    return 3221225626LL;
  }
  if ( v2 )
    v7 += (v7 + 15) & 0xFFFFFFF0;
  if ( v4 )
    v7 += 8;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x70566343u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v2 )
    {
      v24 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, v10);
      v25 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 280), 0) )
        ExpAcquireFastMutexContended(a1 + 280);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 328) = v25;
      v11 = PoolWithTag;
    }
    v12 = (signed __int64 *)(a1 + 104);
    v13 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, v10);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 104, v13, a1 + 104);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = *(char **)(a1 + 88);
    if ( v15 )
      memmove(v11, *(const void **)(a1 + 88), v9);
    else
      v9 = 0;
    memset(&PoolWithTag[v9], 0, v61 - v9);
    if ( v67 )
      *(_QWORD *)&PoolWithTag[v7 - 8] = 0LL;
    if ( v66 )
    {
      v26 = 0LL;
      v27 = &PoolWithTag[v61];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v15 )
      {
        v32 = &v15[v9];
        do
        {
          v33 = *(_QWORD *)v32;
          v34 = (char **)*((_QWORD *)v32 + 1);
          if ( *(char **)(*(_QWORD *)v32 + 8LL) != v32 || *v34 != v32 )
            __fastfail(3u);
          *v34 = (char *)v33;
          *(_QWORD *)(v33 + 8) = v34;
          *(_QWORD *)v27 = v33;
          *((_QWORD *)v27 + 1) = v34;
          if ( *v34 != (char *)v33 )
            __fastfail(3u);
          *v34 = v27;
          v26 += 0x80000LL;
          *(_QWORD *)(v33 + 8) = v27;
          v32 += 16;
          v27 += 16;
        }
        while ( v26 < *(_QWORD *)(a1 + 32) );
      }
      else
      {
        for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
        {
          while ( v26 <= (__int64)*(i - 1) )
          {
            v31 = *i;
            *(_QWORD *)v27 = *i;
            *((_QWORD *)v27 + 1) = i;
            if ( *((char ***)v31 + 1) != i )
              __fastfail(3u);
            *((_QWORD *)v31 + 1) = v27;
            v26 += 0x80000LL;
            *i = v27;
            v27 += 16;
          }
        }
      }
      if ( v26 < v6 )
      {
        v35 = (char **)(a1 + 16);
        do
        {
          v36 = *v35;
          *(_QWORD *)v27 = *v35;
          *((_QWORD *)v27 + 1) = v35;
          if ( *((char ***)v36 + 1) != v35 )
            __fastfail(3u);
          *((_QWORD *)v36 + 1) = v27;
          v26 += 0x80000LL;
          *v35 = v27;
          v27 += 16;
        }
        while ( v26 < v6 );
      }
    }
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v6;
    _m_prefetchw(v12);
    v16 = *v12;
    if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v17 = v16 - 16;
    else
      v17 = 0LL;
    if ( (v16 & 2) != 0 || (v18 = *v12, v18 != _InterlockedCompareExchange64(v12, v17, v16)) )
      ExfReleasePushLock(a1 + 104);
    KeAbPostRelease(a1 + 104);
    v2 = v66;
    if ( v66 )
    {
      *(_QWORD *)(a1 + 288) = 0LL;
      v29 = *(_BYTE *)(a1 + 328);
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), 1, 0);
      if ( v30 )
        ExpReleaseFastMutexContended(a1 + 280, v30);
      __writecr8(v29);
      KeAbPostRelease(a1 + 280);
    }
    if ( v15 != (char *)(a1 + 56) && v15 )
      ExFreePoolWithTag(v15, 0);
    a2 = v65;
    goto LABEL_37;
  }
  return 3221225626LL;
}
