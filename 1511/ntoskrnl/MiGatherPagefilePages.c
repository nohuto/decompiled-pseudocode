/*
 * XREFs of MiGatherPagefilePages @ 0x14010AF5C
 * Callers:
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400306A4 (MiReleaseWriteInProgressCharges.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400F5160 (MiPageFileLargestBitmapsRun.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F5258 (MiInvalidatePageFileBitmapsCache.c)
 *     MiFillNoReservationCluster @ 0x140108078 (MiFillNoReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x1401084F0 (MiFindPageFileWriteCluster.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     MiSetPageFileAllocationBits @ 0x140109328 (MiSetPageFileAllocationBits.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MI_PAGEFILE_WRITE @ 0x140109AB4 (MI_PAGEFILE_WRITE.c)
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14010B604 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14010B6D0 (MiUpdatePagefilePeakUsage.c)
 *     MiPageFileNoFreeSpace @ 0x1401DCEA8 (MiPageFileNoFreeSpace.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int16 v10; // cx
  __int16 v11; // dx
  unsigned __int64 v12; // rsi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  ULONG v16; // esi
  ULONG v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // r10d
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  ULONG v23; // r14d
  unsigned __int64 v24; // r15
  unsigned int v25; // eax
  _QWORD *v26; // r14
  int v27; // edi
  int v28; // edi
  int v29; // ecx
  unsigned __int64 v30; // rax
  int v31; // eax
  __int64 result; // rax
  NTSTATUS v33; // eax
  __int64 v34; // r15
  __int64 *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r15
  _QWORD *v38; // r14
  __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int8 CurrentIrql; // di
  ULONG v44; // [rsp+50h] [rbp-49h]
  unsigned int v45; // [rsp+50h] [rbp-49h]
  ULONG v46; // [rsp+54h] [rbp-45h] BYREF
  _QWORD *v47; // [rsp+58h] [rbp-41h]
  _QWORD *v48; // [rsp+60h] [rbp-39h]
  int v49; // [rsp+68h] [rbp-31h]
  _QWORD *v50; // [rsp+70h] [rbp-29h]
  unsigned __int64 v51; // [rsp+78h] [rbp-21h]
  __int64 v52; // [rsp+80h] [rbp-19h]
  struct _KTHREAD *v53; // [rsp+88h] [rbp-11h]
  __int64 v54; // [rsp+90h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-1h] BYREF
  ULONG v57; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v58; // [rsp+110h] [rbp+77h] BYREF
  ULONG v59; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0;
  v53 = CurrentThread;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 256);
  v52 = v7;
  if ( !*(_QWORD *)(v1 + 24) )
  {
    v36 = a1;
LABEL_75:
    MiPageFileNoFreeSpace(v1, v36, v2, v6);
    goto LABEL_49;
  }
  v8 = a1 + 208;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  v9 = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v10 = *(_WORD *)(v1 + 204);
  v54 = v8;
  v48 = (_QWORD *)(v8 + 48);
  if ( *(_DWORD *)(v7 + 1080) )
    v5 = 4;
  v11 = *(_WORD *)(v1 + 204);
  v12 = *(_QWORD *)(v7 + 40 * ((v10 & 0xF) + 56LL));
  if ( (v11 & 0x10) == 0 && (v5 & 4) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 40 * (*(unsigned int *)(v7 + 1076) + 56LL));
    if ( v9 )
    {
      v5 |= 2u;
LABEL_8:
      if ( v12 )
        goto LABEL_9;
      goto LABEL_60;
    }
  }
  if ( !*(_DWORD *)(v7 + 1072) )
  {
    v9 = *(_QWORD *)(v7 + 2176);
    goto LABEL_8;
  }
  v12 = 0LL;
LABEL_60:
  if ( !v9 || (v11 & 0x10) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    *(_BYTE *)(v1 + 206) |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)v4 = 2575857425LL;
    goto LABEL_49;
  }
LABEL_9:
  if ( (v5 & 2) == 0
    && v9
    && (v11 & 0x10) == 0
    && (!v12
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v9 >= (unsigned __int64)(unsigned int)dword_140381108 >> 2 || v9 >= v12)) )
  {
    v5 |= 2u;
  }
  if ( *(_DWORD *)(v7 + 916) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    v13 = 1;
    v58 = 1;
  }
  else
  {
    v13 = dword_140381108;
    v58 = dword_140381108;
    if ( (v5 & 2) != 0 && v9 < (unsigned int)dword_140381108 )
    {
      v13 = v9;
      v58 = v9;
    }
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v13 > 0x100 )
      v13 = 256;
    v58 = v13;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  v49 = (v5 >> 1) & 1;
  if ( !v49 )
  {
    v57 = v13;
    v14 = MiBuildReservationCluster(v48, v1, &v57, &v46);
    v15 = v57;
    v16 = v14;
    v59 = v14;
    v17 = v46;
    goto LABEL_22;
  }
  v59 = 0;
  MiFindPageFileWriteCluster((int *)v1, &v59, &v58, 0);
  v2 = v58;
  if ( !v58 )
  {
    v36 = v4;
    goto LABEL_75;
  }
  v17 = MiFillNoReservationCluster(v7, v48, v58);
  v16 = v59;
  v15 = v17;
  v57 = v17;
LABEL_22:
  if ( v15 )
  {
    v58 = v15;
    v18 = v15;
    v44 = v17 - 1;
    v46 = v17 - 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    if ( v49 )
    {
      MiFindPageFileWriteCluster((int *)v1, &v59, &v58, 1);
      v18 = v58;
      v16 = v59;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v16, v57);
      v19 = -1;
      v51 = 0LL;
      v20 = 0LL;
      v47 = v48;
      v21 = (8 * (unsigned __int64)v57 + 7) >> 3;
      v22 = v48;
      if ( v48 > &v48[v57] )
        v21 = 0LL;
      if ( v21 )
      {
        v23 = v16;
        v24 = v21;
        do
        {
          if ( *v22 != qword_1402FF238
            || (v22 = v47, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
          {
            if ( v19 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v19, v23 - v19, 0LL);
              v22 = v47;
              v20 = v51;
              v19 = -1;
            }
          }
          else if ( v19 == -1 )
          {
            v19 = v23;
          }
          ++v22;
          ++v20;
          ++v23;
          v47 = v22;
          v51 = v20;
        }
        while ( v20 < v24 );
        v4 = a1;
        v7 = v52;
        CurrentThread = v53;
      }
    }
    if ( !v49 )
      *(_DWORD *)(v1 + 136) = v18 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    MiUpdatePagefilePeakUsage(v1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    LOBYTE(v5) = v5 & 0xFE;
    if ( v18 != v57 )
    {
      v50 = &v48[v57];
      v37 = v50;
      v38 = &v48[v18];
      do
      {
        v39 = 48LL * *v38 - 0x58000000000LL;
        v40 = (unsigned __int8)MiLockPageInline(v39);
        MiWriteCompletePfn(v39, 1uLL, v41, v42);
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v40);
        ++v38;
      }
      while ( v38 < v37 );
      v18 = v58;
      v7 = v52;
      v44 = v58 - v57 + v46;
      v46 = v44;
      MiReleaseWriteInProgressCharges(v52, v57 - v58, 0);
      v16 = v59;
      v4 = a1;
    }
    v57 = v18;
    *(_DWORD *)(v4 + 248) = v18 << 12;
    *(_DWORD *)(v4 + 136) = v18 << 12;
    *(_DWORD *)(v4 + 140) = v44;
    v25 = 0;
    v26 = v48;
    v59 = 0;
    v45 = v16;
    do
    {
      if ( *v26 != qword_1402FF238 )
      {
        MiUpdatePfnBackingStore(48LL * *v26 - 0x58000000000LL, v1, v16, 0LL);
        v25 = v59;
      }
      ++v25;
      ++v26;
      ++v16;
      v59 = v25;
      v58 = v25;
    }
    while ( v25 < v18 );
    v59 = v16;
    *(_WORD *)(v54 + 8) = 8 * (dword_140381108 + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v27 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v28 = v27 & 7;
    v29 = *(_DWORD *)(v7 + 780);
    v30 = *(_QWORD *)(v7 + 5888);
    if ( v29 )
    {
      if ( v30 >= 0x420 )
      {
        *(_DWORD *)(v7 + 780) = 0;
        goto LABEL_43;
      }
      *(_DWORD *)(v7 + 780) = v29 - 1;
    }
    else if ( v30 < 0xA0 )
    {
      *(_DWORD *)(v7 + 780) = 32;
    }
    else
    {
      if ( v30 >= 0x120 )
      {
LABEL_43:
        CurrentThread = v53;
        *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (4 * v28)) & 0x1C;
        if ( v28 < 2 )
        {
          --CurrentThread->SpecialApcDisable;
          ++*(_DWORD *)(v7 + 612);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MI_PAGEFILE_WRITE(a1, (_QWORD *)(a1 + 184), v28, ((unsigned __int8)~(_BYTE)v5 >> 1) & 1, -1);
        v31 = *(_DWORD *)(v7 + 768);
        if ( v31 == 512 )
          *(_QWORD *)(v7 + 760) -= *(_QWORD *)(v7 + 760) >> 9;
        else
          *(_DWORD *)(v7 + 768) = v31 + 1;
        *(_QWORD *)(v7 + 760) += v57;
        *(_DWORD *)(a1 + 40) &= ~0x20u;
        *(_QWORD *)(a1 + 176) = (unsigned __int64)v45 << 12;
        if ( (v5 & 4) == 0 || (int)MiStoreWriteModifiedPages(a1) < 0 )
        {
          __incgsdword(0x2E2Cu);
          __addgsdword(0x2E28u, v57);
          MiMapPageFileHash(v1, a1 + 208, 0LL, v45, v57);
          v33 = IoAsynchronousPageWrite(
                  *(struct _FILE_OBJECT **)(v1 + 56),
                  (struct _MDL *)(a1 + 208),
                  (LARGE_INTEGER *)(a1 + 176),
                  (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
                  (void *)a1,
                  v28,
                  *(_DWORD *)(v1 + 200),
                  0,
                  (struct _IO_STATUS_BLOCK *)(a1 + 16),
                  (IRP **)(a1 + 32));
          if ( (v33 & 0xC0000000) == 0xC0000000 )
          {
            *(_DWORD *)(a1 + 16) = v33;
            *(_QWORD *)(a1 + 24) = 0LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            MiWriteComplete(a1, (int *)(a1 + 16), 0);
            __writecr8(CurrentIrql);
          }
        }
        goto LABEL_49;
      }
      *(_DWORD *)(v7 + 780) = 8;
    }
    v28 = 4;
    goto LABEL_43;
  }
  --CurrentThread->SpecialApcDisable;
  v34 = v7 + 824;
  v35 = *(__int64 **)(v34 + 8);
  *(_QWORD *)v4 = v34;
  *(_QWORD *)(v4 + 8) = v35;
  if ( *v35 != v34 )
    __fastfail(3u);
  *v35 = v4;
  *(_QWORD *)(v34 + 8) = v4;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_49:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return result;
}
