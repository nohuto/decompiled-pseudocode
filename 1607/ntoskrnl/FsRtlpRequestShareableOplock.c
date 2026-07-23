/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140077A14
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401B95D4 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpCallerIsAtomicRequestor @ 0x14007701C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400783A0 (FsRtlpOplockEnqueueRH.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A0D78 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401B944C (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404695E8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140469CE8 (FsRtlpOplockUpperLowerCompatible.c)
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
  unsigned int v12; // ebx
  __int64 Oplock; // rdi
  int v14; // r11d
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *i; // r14
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r14
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r10d
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rbx
  char v32; // al
  _QWORD *v33; // rbx
  char v34; // al
  PVOID *v35; // rbx
  _QWORD *v36; // rbx
  __int64 v37; // r13
  _QWORD *n; // r14
  char v39; // al
  int v40; // eax
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  char v46; // al
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  _QWORD *v51; // rbx
  _QWORD *j; // r13
  _QWORD *k; // rbx
  int v54; // eax
  __int64 *m; // rbx
  __int64 v56; // rdx
  _QWORD *v57; // rax
  _QWORD *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  char v61; // al
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  __int64 v66; // [rsp+60h] [rbp-48h]
  __int64 v67; // [rsp+68h] [rbp-40h]
  char v68; // [rsp+B0h] [rbp+8h]

  v12 = 0;
  FastMutex = 0LL;
  v68 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
    *a1 = Oplock;
  }
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v68 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v14 & 0x20000) != 0 )
    {
      v15 = P;
      FsRtlpOplockDequeueRH(P);
      v16 = v15[7];
      v17 = (_QWORD *)v15[8];
      if ( *(_QWORD **)(v16 + 8) != v15 + 7 || (_QWORD *)*v17 != v15 + 7 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v15[5] )
        FsRtlpClearOwner(Oplock, v15);
      ExFreePoolWithTag(v15, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_144;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v19 = i;
      v20 = *(_QWORD *)(i[2] + 184LL);
      if ( *(_BYTE *)v20 != 13 || *(_DWORD *)(v20 + 24) != 589844 || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v19);
      }
    }
    v21 = P;
    FsRtlpOplockDequeueRH(P);
    v22 = v21[7];
    v23 = (_QWORD *)v21[8];
    if ( *(_QWORD **)(v22 + 8) != v21 + 7 || (_QWORD *)*v23 != v21 + 7 )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v21[5] )
      FsRtlpClearOwner(Oplock, v21);
    ExFreePoolWithTag(v21, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, 1);
LABEL_145:
    LOBYTE(v26) = 0;
    goto LABEL_146;
  }
  if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
LABEL_37:
    if ( a4 == 0x10000 )
    {
      v12 = -1073739511;
      goto LABEL_146;
    }
LABEL_144:
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, 1);
    v12 = -1073741598;
    goto LABEL_145;
  }
  if ( a4 == 16 )
  {
    v47 = *(_DWORD *)(Oplock + 144);
    if ( (v47 & 1) == 0 )
    {
      v48 = v47 & 0x1F0FFDF;
      if ( v48 != 16 && v48 != 4096 && v48 != 4112 )
        goto LABEL_144;
    }
    goto LABEL_101;
  }
  if ( a4 == 4096 )
  {
LABEL_101:
    if ( !a7 )
    {
      v49 = *(_DWORD *)(Oplock + 144);
      if ( (v49 & 1) == 0 )
      {
        v50 = v49 & 0x1F0FFDF;
        if ( (v49 & 0x1F0FFDF) != 0x10
          && v50 != 4096
          && v50 != 4112
          && v50 != 12288
          && v50 != 45056
          && v50 != 1060864
          && v50 != 8400896
          && (v49 & 0x10000) == 0 )
        {
          goto LABEL_144;
        }
      }
      v51 = (_QWORD *)(Oplock + 56);
      if ( (_QWORD *)*v51 != v51 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        for ( j = (_QWORD *)*v51; j != v51; j = (_QWORD *)*j )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0LL) )
            goto LABEL_144;
        }
        for ( k = *(_QWORD **)(Oplock + 72); k != (_QWORD *)(Oplock + 72); k = (_QWORD *)*k )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), k[3], 0LL) )
            goto LABEL_144;
        }
        v26 = 0;
      }
      v54 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v54 == 16 || v54 == 4096 || v54 == 4112 || v54 == 45056 )
      {
        for ( m = *(__int64 **)(Oplock + 40); m != (__int64 *)(Oplock + 40); m = (__int64 *)*m )
        {
          v56 = m[2];
          if ( (*(_DWORD *)(v56 + 24) == 590400 || *(_QWORD *)(v56 + 48) != *(_QWORD *)(a2 + 48))
            && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v56 + 48), 0LL) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)m[1], 533LL, a4 & 0x7000);
            break;
          }
        }
        v26 = 0;
      }
    }
    v67 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v67 + 3) |= 1u;
    *(_DWORD *)(a3 + 48) = v26;
    v57 = (_QWORD *)(a3 + 168);
    v58 = (_QWORD *)(Oplock + 40);
    v59 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v59 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v57 = v59;
    *(_QWORD *)(a3 + 176) = v58;
    *(_QWORD *)(v59 + 8) = v57;
    *v58 = v57;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v60) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v60);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v61 = 1;
    v12 = 259;
    LOBYTE(v26) = 0;
    goto LABEL_143;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
  {
    v61 = 0;
LABEL_143:
    if ( v61 )
      goto LABEL_146;
    goto LABEL_144;
  }
  if ( !a7 )
  {
    v27 = *(_DWORD *)(Oplock + 144);
    if ( (v27 & 1) == 0 )
    {
      v28 = v27 & 0x1F0FFDF;
      if ( (v27 & 0x1F0FFDF) != 0x1000
        && v28 != 12288
        && v28 != 45056
        && v28 != 1060864
        && v28 != 8400896
        && (v27 & 0x10000) == 0 )
      {
        goto LABEL_37;
      }
    }
  }
  v29 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) != (_BYTE)v26 )
    goto LABEL_37;
  if ( a7 )
  {
    v37 = a2;
  }
  else
  {
    v30 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v30 == 4096 || v30 == 45056 )
    {
      v31 = *(__int64 **)(Oplock + 40);
      while ( v31 != (__int64 *)(Oplock + 40) )
      {
        v32 = FsRtlpOplockKeysEqual(*(_QWORD *)(v29 + 48), *(_QWORD *)(v31[2] + 48), 0LL);
        LOBYTE(v26) = 0;
        if ( v32 )
        {
          if ( a4 == 0x10000 )
          {
LABEL_59:
            v12 = -1073741597;
            goto LABEL_146;
          }
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)v31[1], 533LL, 12288LL);
          v29 = a2;
          break;
        }
        v31 = (__int64 *)*v31;
        v29 = a2;
      }
    }
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      v33 = *(_QWORD **)(Oplock + 56);
      while ( v33 != (_QWORD *)(Oplock + 56) )
      {
        v34 = FsRtlpOplockKeysEqual(*(_QWORD *)(v29 + 48), v33[3], 0LL);
        LOBYTE(v26) = 0;
        if ( v34 && !v33[7] )
        {
          if ( a4 == 0x10000 )
            goto LABEL_59;
          v35 = (PVOID *)v33[1];
          if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails) )
            FsRtlpRemoveAndCompleteRHIrp(*v35, 0, 0, 0);
          else
            FsRtlpRemoveAndBreakRHIrp(*v35, Oplock, 1, 533, 0x3000u, 0, 0, 0);
          break;
        }
        v33 = (_QWORD *)*v33;
        v29 = a2;
      }
    }
    v36 = (_QWORD *)(Oplock + 72);
    v37 = a2;
    if ( (_QWORD *)*v36 != v36 )
    {
      for ( n = (_QWORD *)*v36; n != v36; n = (_QWORD *)*n )
      {
        v39 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), n[3], 0LL);
        LOBYTE(v26) = 0;
        if ( v39 )
        {
          if ( a4 != 0x10000 )
            goto LABEL_144;
          v12 = -1073741598;
          goto LABEL_146;
        }
      }
    }
  }
  *(_QWORD *)(*a5 + 32LL) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(*a5 + 24LL) = *(_QWORD *)(v37 + 48);
  v40 = FsRtlpOplockEnqueueRH(Oplock + 56, *a5, v24, v25);
  v12 = v40;
  LOBYTE(v26) = 0;
  if ( v40 >= 0 )
  {
    if ( a4 == 0x10000 )
    {
      v41 = (_QWORD *)(*a5 + 56LL);
      v42 = (_QWORD *)(Oplock + 120);
      v43 = *(_QWORD *)(Oplock + 120);
      if ( *(_QWORD *)(v43 + 8) != Oplock + 120 )
        __fastfail(3u);
      *v41 = v43;
      v41[1] = v42;
      *(_QWORD *)(v43 + 8) = v41;
      *v42 = v41;
      v12 = 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(*a5 + 40LL) = CurrentThread;
      ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 40LL), 0x746C6644u);
      *(_QWORD *)(*a5 + 16LL) = a3;
      v66 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v66 + 3) |= 1u;
      v12 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 24LL), 0x746C6644u);
      IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
      v46 = 0;
      if ( *(_BYTE *)(a3 + 68) )
      {
        if ( !a6 || !a7 )
          v46 = 1;
        LOBYTE(v45) = v46;
        LOBYTE(v44) = 1;
        FsRtlpCancelOplockRHIrp(a3, v44, v45);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v12 = 259;
      }
    }
    *a5 = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a4 == 0x10000 )
      *(_DWORD *)(Oplock + 144) |= 0x10000u;
    goto LABEL_145;
  }
  if ( a4 != 0x10000 )
  {
    *(_DWORD *)(a3 + 48) = v40;
    pIofCompleteRequest((PIRP)a3, 1);
    goto LABEL_145;
  }
LABEL_146:
  if ( v68 != (_BYTE)v26 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}
