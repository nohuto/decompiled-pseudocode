/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x1400CA474
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401AD32C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400C90E0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400C98A4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400CAEBC (FsRtlpOplockEnqueueRH.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1400CC14C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401AD1A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x14048F040 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x14048F084 (FsRtlpAllocateOplock.c)
 */

__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        char a6,
        char a7,
        unsigned int a8)
{
  unsigned int v11; // ebx
  char v12; // r13
  __int64 Oplock; // rdi
  int v14; // r11d
  _QWORD *i; // r14
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r10d
  int v23; // ecx
  int v24; // eax
  _QWORD *v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  char v28; // al
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // ecx
  _QWORD *v33; // rbx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 *jj; // rbx
  __int64 v39; // rdx
  int v40; // eax
  int v41; // eax
  __int64 *k; // rbx
  char v43; // al
  int v44; // eax
  _QWORD *v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 *j; // rbx
  char v51; // al
  _QWORD *m; // r14
  char v53; // al
  _QWORD *n; // r13
  _QWORD *ii; // rbx
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  __int64 v60; // [rsp+60h] [rbp-48h]
  __int64 v61; // [rsp+68h] [rbp-40h]
  char v62; // [rsp+B0h] [rbp+8h]

  v11 = 0;
  FastMutex = 0LL;
  v62 = 0;
  v12 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  if ( a4 != 0x10000 && !a7 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v62 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v14 & 0x20000) != 0 )
    {
      v47 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v48 = v47[7];
      v49 = (_QWORD *)v47[8];
      if ( *(_QWORD **)(v48 + 8) != v47 + 7 || (_QWORD *)*v49 != v47 + 7 )
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v47[5] )
        FsRtlpClearOwnerThread(Oplock, v47);
      ExFreePoolWithTag(v47, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_82;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v45 = i;
      v46 = *(_QWORD *)(i[2] + 184LL);
      if ( *(_BYTE *)v46 != 13 || *(_DWORD *)(v46 + 24) != 589844 || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v45);
      }
    }
    v16 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v17 = v16[7];
    v18 = (_QWORD *)v16[8];
    if ( *(_QWORD **)(v17 + 8) != v16 + 7 || (_QWORD *)*v18 != v16 + 7 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v16[5] )
      FsRtlpClearOwnerThread(Oplock, v16);
    ExFreePoolWithTag(v16, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v12 = 0;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    LOBYTE(v19) = 1;
    pIofCompleteRequest(a3, v19);
    goto LABEL_41;
  }
  if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
    goto LABEL_63;
  switch ( a4 )
  {
    case 0x10u:
      v31 = *(_DWORD *)(Oplock + 144);
      if ( (v31 & 1) == 0 )
      {
        v40 = v31 & 0x1F0FFDF;
        if ( v40 != 16 && v40 != 4096 && v40 != 4112 )
          goto LABEL_82;
      }
      break;
    case 0x1000u:
      break;
    case 0x3000u:
    case 0x10000u:
      if ( a7
        || (v23 = *(_DWORD *)(Oplock + 144), (v23 & 1) != 0)
        || (v44 = v23 & 0x1F0FFDF, (v23 & 0x1F0FFDF) == 0x3000)
        || v44 == 4096
        || v44 == 45056
        || v44 == 1060864
        || v44 == 8400896
        || (v23 & 0x10000) != 0 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) == (_BYTE)v22 )
        {
          if ( !a7 )
          {
            v24 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
            if ( v24 == 4096 || v24 == 45056 )
            {
              for ( j = *(__int64 **)(Oplock + 40); j != (__int64 *)(Oplock + 40); j = (__int64 *)*j )
              {
                v51 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(j[2] + 48), 0LL);
                LOBYTE(v22) = 0;
                if ( v51 )
                {
                  if ( a4 != 0x10000 )
                  {
                    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)j[1], 533, 0x3000u);
                    break;
                  }
LABEL_110:
                  v11 = -1073741597;
                  goto LABEL_151;
                }
              }
            }
            if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
            {
              for ( k = *(__int64 **)(Oplock + 56); k != (__int64 *)(Oplock + 56); k = (__int64 *)*k )
              {
                v43 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), k[3], 0LL);
                LOBYTE(v22) = 0;
                if ( v43 && !k[7] )
                {
                  if ( a4 == 0x10000 )
                    goto LABEL_110;
                  FsRtlpRemoveAndBreakRHIrp(*(_QWORD *)k[1], Oplock, 1, 533, 0x3000u, 0, 0, 0);
                  break;
                }
              }
            }
            v25 = (_QWORD *)(Oplock + 72);
            if ( (_QWORD *)*v25 != v25 )
            {
              for ( m = (_QWORD *)*v25; m != v25; m = (_QWORD *)*m )
              {
                v53 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0LL);
                LOBYTE(v22) = 0;
                if ( v53 )
                {
                  if ( a4 != 0x10000 )
                    goto LABEL_82;
                  v11 = -1073741598;
                  goto LABEL_151;
                }
              }
            }
          }
          *(_QWORD *)(*a5 + 32LL) = KeGetCurrentThread()->ApcState.Process;
          *(_QWORD *)(*a5 + 24LL) = *(_QWORD *)(a2 + 48);
          v26 = FsRtlpOplockEnqueueRH(Oplock + 56, *a5, v20, v21);
          v11 = v26;
          LOBYTE(v22) = 0;
          if ( v26 < 0 )
          {
            if ( a4 == 0x10000 )
              goto LABEL_151;
            *(_DWORD *)(a3 + 48) = v26;
            LOBYTE(v27) = 1;
            pIofCompleteRequest(a3, v27);
          }
          else
          {
            if ( a4 == 0x10000 )
            {
              v29 = (_QWORD *)(*a5 + 56LL);
              v30 = *(_QWORD *)(Oplock + 120);
              *v29 = v30;
              v29[1] = Oplock + 120;
              if ( *(_QWORD *)(v30 + 8) != Oplock + 120 )
                __fastfail(3u);
              *(_QWORD *)(v30 + 8) = v29;
              *(_QWORD *)(Oplock + 120) = v29;
              v11 = 0;
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              *(_QWORD *)(*a5 + 40LL) = CurrentThread;
              ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 40LL), 0x746C6644u);
              *(_QWORD *)(*a5 + 16LL) = a3;
              v60 = *(_QWORD *)(a3 + 184);
              *(_BYTE *)(v60 + 3) |= 1u;
              v11 = 259;
              *(_DWORD *)(a3 + 48) = 0;
              *(_QWORD *)(a3 + 56) = Oplock;
              if ( a6 )
                ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 24LL), 0x746C6644u);
              IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
              v28 = 0;
              if ( *(_BYTE *)(a3 + 68) )
              {
                if ( !a6 || !a7 )
                  v28 = 1;
                FsRtlpCancelOplockRHIrp(a3, 1, v28);
              }
              else
              {
                _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
                v11 = 259;
              }
            }
            *a5 = 0LL;
            FsRtlpComputeShareableOplockState(Oplock);
            if ( a4 == 0x10000 )
              *(_DWORD *)(Oplock + 144) |= 0x10000u;
          }
          goto LABEL_41;
        }
      }
LABEL_63:
      if ( a4 == 0x10000 )
      {
        v11 = -1073739511;
        goto LABEL_151;
      }
      goto LABEL_82;
    default:
      goto LABEL_61;
  }
  if ( a7 )
  {
LABEL_55:
    v61 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v61 + 3) |= 1u;
    *(_DWORD *)(a3 + 48) = v22;
    v35 = a3 + 168;
    v36 = *(_QWORD *)(Oplock + 40);
    *(_QWORD *)(a3 + 168) = v36;
    *(_QWORD *)(a3 + 176) = Oplock + 40;
    if ( *(_QWORD *)(v36 + 8) != Oplock + 40 )
      __fastfail(3u);
    *(_QWORD *)(v36 + 8) = v35;
    *(_QWORD *)(Oplock + 40) = v35;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v37) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v37);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v12 = 1;
    v11 = 259;
    LOBYTE(v22) = 0;
LABEL_61:
    if ( v12 )
      goto LABEL_151;
    goto LABEL_82;
  }
  v32 = *(_DWORD *)(Oplock + 144);
  if ( (v32 & 1) != 0
    || (v41 = v32 & 0x1F0FFDF, (v32 & 0x1F0FFDF) == 0x10)
    || v41 == 4096
    || v41 == 4112
    || v41 == 12288
    || v41 == 45056
    || v41 == 1060864
    || v41 == 8400896
    || (v32 & 0x10000) != 0 )
  {
    v33 = (_QWORD *)(Oplock + 56);
    if ( (_QWORD *)*v33 != v33 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      for ( n = (_QWORD *)*v33; n != v33; n = (_QWORD *)*n )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), n[3], 0LL) )
          goto LABEL_82;
      }
      for ( ii = *(_QWORD **)(Oplock + 72); ii != (_QWORD *)(Oplock + 72); ii = (_QWORD *)*ii )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), ii[3], 0LL) )
          goto LABEL_82;
      }
      v22 = 0;
    }
    v34 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v34 == 16 || v34 == 4096 || v34 == 4112 || v34 == 45056 )
    {
      for ( jj = *(__int64 **)(Oplock + 40); jj != (__int64 *)(Oplock + 40); jj = (__int64 *)*jj )
      {
        v39 = jj[2];
        if ( (*(_DWORD *)(v39 + 24) == 590400 || *(_QWORD *)(v39 + 48) != *(_QWORD *)(a2 + 48))
          && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v39 + 48), 0LL) )
        {
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)jj[1], 533, a4 & 0x7000);
          break;
        }
      }
      v22 = 0;
    }
    goto LABEL_55;
  }
LABEL_82:
  *(_DWORD *)(a3 + 48) = -1073741598;
  LOBYTE(v19) = 1;
  pIofCompleteRequest(a3, v19);
  v11 = -1073741598;
LABEL_41:
  LOBYTE(v22) = 0;
LABEL_151:
  if ( v62 != (_BYTE)v22 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v11;
}
