/*
 * XREFs of MiGatherPagefilePages @ 0x1401199B4
 * Callers:
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x14008E6FC (MiReleaseWriteInProgressCharges.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400B4370 (MiPageFileLargestBitmapsRun.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400B475C (MiInvalidatePageFileBitmapsCache.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiSetPageFileAllocationBits @ 0x140111E2C (MiSetPageFileAllocationBits.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MI_PAGEFILE_WRITE @ 0x140117344 (MI_PAGEFILE_WRITE.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14011A048 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14011A0F4 (MiUpdatePagefilePeakUsage.c)
 *     MiFillNoReservationCluster @ 0x140123C70 (MiFillNoReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 *     MiPageFileNoFreeSpace @ 0x1401EE9E8 (MiPageFileNoFreeSpace.c)
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
  __int64 v10; // rcx
  __int16 v11; // dx
  unsigned __int64 v12; // rsi
  unsigned int v13; // ecx
  ULONG v14; // eax
  ULONG v15; // ecx
  ULONG v16; // esi
  ULONG v17; // eax
  ULONG v18; // edi
  unsigned int v19; // r10d
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 *v22; // rcx
  ULONG v23; // r14d
  unsigned __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG v28; // eax
  __int64 *v29; // r14
  int v30; // edi
  int v31; // edi
  int v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 result; // rax
  NTSTATUS v40; // eax
  __int64 v41; // r15
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 *v44; // r15
  __int64 *v45; // r14
  __int64 v46; // rsi
  unsigned __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int8 CurrentIrql; // di
  ULONG v51; // [rsp+60h] [rbp-49h] BYREF
  ULONG v52; // [rsp+64h] [rbp-45h]
  int v53; // [rsp+68h] [rbp-41h]
  __int64 *v54; // [rsp+70h] [rbp-39h]
  __int64 *v55; // [rsp+78h] [rbp-31h]
  __int64 *v56; // [rsp+80h] [rbp-29h]
  unsigned __int64 v57; // [rsp+88h] [rbp-21h]
  __int64 v58; // [rsp+90h] [rbp-19h]
  struct _KTHREAD *v59; // [rsp+98h] [rbp-11h]
  __int64 v60; // [rsp+A0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-1h] BYREF
  ULONG v63; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v64; // [rsp+120h] [rbp+77h] BYREF
  ULONG v65; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0;
  v59 = CurrentThread;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 256);
  v58 = v7;
  if ( !*(_QWORD *)(v1 + 24) )
  {
    v43 = a1;
LABEL_74:
    MiPageFileNoFreeSpace(v1, v43, v2, v6);
    goto LABEL_49;
  }
  v8 = a1 + 208;
  v9 = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v10 = *(_WORD *)(v1 + 204) & 0xF;
  v60 = v8;
  v55 = (__int64 *)(v8 + 48);
  v11 = *(_WORD *)(v1 + 204);
  v12 = *(_QWORD *)(v7 + 40 * v10 + 2368);
  if ( *(_DWORD *)(v7 + 1064) )
    v5 = 4;
  if ( !_bittest16(&v11, 4u) && (v5 & 4) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 40LL * *(unsigned int *)(v7 + 1060) + 2368);
    if ( v9 )
    {
      v5 |= 2u;
LABEL_8:
      if ( v12 )
        goto LABEL_9;
      goto LABEL_58;
    }
  }
  if ( !*(_DWORD *)(v7 + 1056) )
  {
    v9 = *(_QWORD *)(v7 + 2304);
    goto LABEL_8;
  }
  v12 = 0LL;
LABEL_58:
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
     && (v9 >= (unsigned __int64)(unsigned int)dword_1403A9150 >> 2 || v9 >= v12)) )
  {
    v5 |= 2u;
  }
  if ( *(_DWORD *)(v7 + 908) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    v13 = 1;
    v64 = 1;
  }
  else
  {
    v13 = dword_1403A9150;
    v64 = dword_1403A9150;
    if ( (v5 & 2) != 0 && v9 < (unsigned int)dword_1403A9150 )
    {
      v13 = v9;
      v64 = v9;
    }
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v13 > 0x100 )
      v13 = 256;
    v64 = v13;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  v53 = (v5 >> 1) & 1;
  if ( !v53 )
  {
    v63 = v13;
    v14 = MiBuildReservationCluster(v55, v1, &v63, &v51);
    v15 = v63;
    v16 = v14;
    v65 = v14;
    v17 = v51;
    goto LABEL_22;
  }
  v65 = 0;
  MiFindPageFileWriteCluster(v1, &v65, &v64, 0LL);
  v2 = v64;
  if ( !v64 )
  {
    v43 = v4;
    goto LABEL_74;
  }
  v17 = MiFillNoReservationCluster(v7, v55);
  v16 = v65;
  v15 = v17;
  v63 = v17;
LABEL_22:
  if ( v15 )
  {
    v64 = v15;
    v18 = v15;
    v52 = v17 - 1;
    v51 = v17 - 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    if ( v53 )
    {
      MiFindPageFileWriteCluster(v1, &v65, &v64, 1LL);
      v18 = v64;
      v16 = v65;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v16, v63);
      v19 = -1;
      v57 = 0LL;
      v20 = 0LL;
      v54 = v55;
      v21 = (8 * (unsigned __int64)v63 + 7) >> 3;
      v22 = v55;
      if ( v55 > &v55[v63] )
        v21 = 0LL;
      if ( v21 )
      {
        v23 = v16;
        v24 = v21;
        do
        {
          if ( *v22 != qword_1403276C8
            || (v22 = v54, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
          {
            if ( v19 != -1 )
            {
              MiInvalidatePageFileBitmapsCache(v1, v19, v23 - v19, 0LL);
              v22 = v54;
              v20 = v57;
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
          v54 = v22;
          v57 = v20;
        }
        while ( v20 < v24 );
        v4 = a1;
        v7 = v58;
        CurrentThread = v59;
      }
    }
    if ( !v53 )
      *(_DWORD *)(v1 + 136) = v18 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
    MiUpdatePagefilePeakUsage(v1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v25, v26, v27);
    LOBYTE(v5) = v5 & 0xFE;
    if ( v18 != v63 )
    {
      v56 = &v55[v63];
      v44 = v56;
      v45 = &v55[v18];
      do
      {
        v46 = 48 * *v45 - 0x58000000000LL;
        v47 = (unsigned __int8)MiLockPageInline(v46);
        MiWriteCompletePfn(v46, 1LL, v48, v49);
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v47);
        ++v45;
      }
      while ( v45 < v44 );
      v18 = v64;
      v7 = v58;
      v52 = v64 - v63 + v51;
      v51 = v52;
      MiReleaseWriteInProgressCharges(v58, v63 - v64, 0);
      v16 = v65;
      v4 = a1;
    }
    v63 = v18;
    *(_DWORD *)(v4 + 248) = v18 << 12;
    *(_DWORD *)(v4 + 136) = v18 << 12;
    *(_DWORD *)(v4 + 140) = v52;
    v28 = 0;
    v29 = v55;
    v65 = 0;
    v52 = v16;
    do
    {
      if ( *v29 != qword_1403276C8 )
      {
        MiUpdatePfnBackingStore(48 * *v29 - 0x58000000000LL, v1, v16, 0LL);
        v28 = v65;
      }
      ++v28;
      ++v29;
      ++v16;
      v65 = v28;
      v64 = v28;
    }
    while ( v28 < v18 );
    v65 = v16;
    *(_WORD *)(v60 + 8) = 8 * (dword_1403A9150 + 6);
    *(_DWORD *)(a1 + 40) &= ~2u;
    v30 = *(_DWORD *)(a1 + 40) >> 2;
    *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
    v31 = v30 & 7;
    v32 = *(_DWORD *)(v7 + 772);
    v33 = *(_QWORD *)(v7 + 6464);
    if ( v32 )
    {
      if ( v33 >= 0x420 )
      {
        *(_DWORD *)(v7 + 772) = 0;
        goto LABEL_43;
      }
      *(_DWORD *)(v7 + 772) = v32 - 1;
    }
    else if ( v33 < 0xA0 )
    {
      *(_DWORD *)(v7 + 772) = 32;
    }
    else
    {
      if ( v33 >= 0x120 )
      {
LABEL_43:
        CurrentThread = v59;
        *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (4 * v31)) & 0x1C;
        if ( v31 < 2 )
        {
          --CurrentThread->SpecialApcDisable;
          ++*(_DWORD *)(v7 + 604);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MI_PAGEFILE_WRITE(a1, (_QWORD *)(a1 + 184), v31, ((unsigned __int8)~(_BYTE)v5 >> 1) & 1, -1);
        v34 = *(_DWORD *)(v7 + 760);
        if ( v34 == 512 )
          *(_QWORD *)(v7 + 752) -= *(_QWORD *)(v7 + 752) >> 9;
        else
          *(_DWORD *)(v7 + 760) = v34 + 1;
        *(_QWORD *)(v7 + 752) += v63;
        v35 = v52;
        *(_DWORD *)(a1 + 40) &= ~0x20u;
        *(_QWORD *)(a1 + 176) = (unsigned __int64)v35 << 12;
        if ( (v5 & 4) == 0 || (int)MiStoreWriteModifiedPages(a1) < 0 )
        {
          __incgsdword(0x2E2Cu);
          __addgsdword(0x2E28u, v63);
          MiMapPageFileHash(v1, a1 + 208, 0LL, v35, v63);
          v40 = IoAsynchronousPageWrite(
                  *(struct _FILE_OBJECT **)(v1 + 56),
                  (struct _MDL *)(a1 + 208),
                  (LARGE_INTEGER *)(a1 + 176),
                  (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
                  (void *)a1,
                  v31,
                  *(_DWORD *)(v1 + 200),
                  0,
                  0LL,
                  (struct _IO_STATUS_BLOCK *)(a1 + 16),
                  (IRP **)(a1 + 32));
          v36 = 3221225472LL;
          if ( (v40 & 0xC0000000) == 0xC0000000 )
          {
            *(_DWORD *)(a1 + 16) = v40;
            *(_QWORD *)(a1 + 24) = 0LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            MiWriteComplete(a1, (int *)(a1 + 16), 0);
            __writecr8(CurrentIrql);
          }
        }
        goto LABEL_49;
      }
      *(_DWORD *)(v7 + 772) = 8;
    }
    v31 = 4;
    goto LABEL_43;
  }
  --CurrentThread->SpecialApcDisable;
  v41 = v7 + 816;
  v42 = *(__int64 **)(v41 + 8);
  if ( *v42 != v41 )
    __fastfail(3u);
  *(_QWORD *)v4 = v41;
  *(_QWORD *)(v4 + 8) = v42;
  *v42 = v4;
  *(_QWORD *)(v41 + 8) = v4;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_49:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v36, v37, v38);
  return result;
}
