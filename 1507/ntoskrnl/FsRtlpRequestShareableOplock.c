/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140073144
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E3578 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x140070F7C (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockEnqueueRH @ 0x140073C48 (FsRtlpOplockEnqueueRH.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140073E58 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140073E88 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400746BC (FsRtlpCancelOplockRHIrp.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E327C (FsRtlpCancelReadOnlyOplockIrp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404A60B8 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1404A64EC (FsRtlpAllocateOplock.c)
 */

__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        char a6,
        char a7,
        unsigned int a8)
{
  unsigned int v8; // r12d
  __int64 v10; // r15
  unsigned int v12; // ebx
  __int64 Oplock; // rdi
  volatile signed __int32 *v14; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r11d
  _QWORD *v20; // rax
  _QWORD *v21; // r15
  _QWORD *v22; // r15
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v31; // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  char v35; // al
  _QWORD *v36; // rax
  __int64 v37; // rdx
  int v38; // eax
  int v39; // ecx
  _QWORD *v40; // rbx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 *m; // rbx
  __int64 v46; // rdx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 *v50; // rbx
  char v51; // al
  _QWORD *i; // r15
  char v53; // al
  _QWORD *v54; // rcx
  _QWORD *v55; // rbx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 *v58; // rbx
  char v59; // al
  _QWORD *j; // r13
  _QWORD *k; // rbx
  char v62; // al
  volatile signed __int32 *v63; // rbx
  unsigned __int32 v64; // eax
  unsigned int v66; // [rsp+44h] [rbp-64h]
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v69; // [rsp+58h] [rbp-50h]
  __int64 v70; // [rsp+60h] [rbp-48h]
  __int64 v71; // [rsp+68h] [rbp-40h]
  char v72; // [rsp+B0h] [rbp+8h]

  v8 = a4;
  v10 = a2;
  v12 = 0;
  v66 = 0;
  BugCheckParameter2 = 0LL;
  v72 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1);
    *a1 = Oplock;
  }
  if ( v8 != 0x10000 && !a7 )
  {
    v14 = *(volatile signed __int32 **)(Oplock + 152);
    BugCheckParameter2 = (ULONG_PTR)v14;
    CurrentThread = KeGetCurrentThread();
    v16 = KeAbPreAcquire((ULONG_PTR)v14, 0LL, 0LL, a4);
    if ( !_interlockedbittestandreset(v14, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)v14);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(_QWORD *)(BugCheckParameter2 + 8) = CurrentThread;
    v72 = 1;
    v12 = 0;
    v10 = a2;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v10 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v10 + 48), &P) )
  {
    if ( (v19 & 0x20000) != 0 )
    {
      v55 = P;
      FsRtlpOplockDequeueRH((__int64)P, v17, v18);
      v56 = v55[7];
      v57 = (_QWORD *)v55[8];
      if ( *(_QWORD **)(v56 + 8) != v55 + 7 || (_QWORD *)*v57 != v55 + 7 )
        __fastfail(3u);
      *v57 = v56;
      *(_QWORD *)(v56 + 8) = v57;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v55[5] )
        FsRtlpClearOwnerThread(Oplock, (__int64)v55);
      ExFreePoolWithTag(v55, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_156;
    }
    v20 = (_QWORD *)(Oplock + 88);
    v21 = *(_QWORD **)(Oplock + 88);
    while ( v21 != v20 )
    {
      v54 = v21;
      v17 = *(_QWORD *)(v21[2] + 184LL);
      if ( *(_BYTE *)v17 != 13 || *(_DWORD *)(v17 + 24) != 589844 || v8 != 12288 )
      {
        v21 = (_QWORD *)v21[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v54);
      }
      v21 = (_QWORD *)*v21;
      v20 = (_QWORD *)(Oplock + 88);
    }
    v22 = P;
    FsRtlpOplockDequeueRH((__int64)P, v17, v18);
    v23 = v22[7];
    v24 = (_QWORD *)v22[8];
    if ( *(_QWORD **)(v23 + 8) != v22 + 7 || (_QWORD *)*v24 != v22 + 7 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v22[5] )
      FsRtlpClearOwnerThread(Oplock, (__int64)v22);
    ExFreePoolWithTag(v22, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v8, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, 1);
LABEL_45:
    v27 = 0LL;
    goto LABEL_157;
  }
  if ( a7 || (*(_DWORD *)(Oplock + 144) & 0x40) == 0 )
  {
    switch ( v8 )
    {
      case 0x10u:
        v38 = *(_DWORD *)(Oplock + 144);
        if ( (v38 & 1) == 0 )
        {
          v47 = v38 & 0x1F0FFDF;
          if ( v47 != 16 && v47 != 4096 && v47 != 4112 )
            goto LABEL_156;
        }
        break;
      case 0x1000u:
        break;
      case 0x3000u:
      case 0x10000u:
        if ( a7
          || (v28 = *(_DWORD *)(Oplock + 144), (v28 & 1) != 0)
          || (v49 = v28 & 0x1F0FFDF, (v28 & 0x1F0FFDF) == 0x3000)
          || v49 == 8400896
          || v49 == 4096
          || v49 == 45056
          || v49 == 1060864
          || (v28 & 0x10000) != 0 )
        {
          v29 = a2;
          if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) == (_BYTE)v27 )
          {
            if ( !a7 )
            {
              v30 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
              if ( v30 == 4096 || v30 == 45056 )
              {
                v58 = *(__int64 **)(Oplock + 40);
                while ( v58 != (__int64 *)(Oplock + 40) )
                {
                  v59 = FsRtlpOplockKeysEqual(*(_QWORD *)(v29 + 48), *(_QWORD *)(v58[2] + 48), 0);
                  v27 = 0LL;
                  if ( v59 )
                  {
                    if ( v8 != 0x10000 )
                    {
                      FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)v58[1], 533LL, 12288LL);
                      v29 = a2;
                      break;
                    }
LABEL_119:
                    v12 = -1073741597;
                    goto LABEL_69;
                  }
                  v58 = (__int64 *)*v58;
                  v29 = a2;
                }
              }
              if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
              {
                v50 = *(__int64 **)(Oplock + 56);
                while ( v50 != (__int64 *)(Oplock + 56) )
                {
                  v51 = FsRtlpOplockKeysEqual(*(_QWORD *)(v29 + 48), v50[3], 0);
                  v27 = 0LL;
                  if ( v51 && !v50[7] )
                  {
                    if ( v8 == 0x10000 )
                      goto LABEL_119;
                    FsRtlpRemoveAndBreakRHIrp(*(_QWORD *)v50[1], Oplock, 1, 533, 0x3000u, 0, 0, 0);
                    break;
                  }
                  v50 = (__int64 *)*v50;
                  v29 = a2;
                }
              }
              v31 = (_QWORD *)(Oplock + 72);
              if ( (_QWORD *)*v31 != v31 )
              {
                for ( i = (_QWORD *)*v31; i != v31; i = (_QWORD *)*i )
                {
                  v53 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), i[3], 0);
                  v27 = 0LL;
                  if ( v53 )
                  {
                    if ( v8 != 0x10000 )
                      goto LABEL_156;
                    v12 = -1073741598;
                    goto LABEL_69;
                  }
                }
              }
            }
            *(_QWORD *)(*a5 + 32LL) = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(*a5 + 24LL) = *(_QWORD *)(a2 + 48);
            v32 = FsRtlpOplockEnqueueRH(Oplock + 56, *a5, v25, v26);
            v12 = v32;
            v66 = v32;
            v27 = 0LL;
            if ( v32 < 0 )
            {
              if ( v8 == 0x10000 )
                goto LABEL_157;
              *(_DWORD *)(a3 + 48) = v32;
              pIofCompleteRequest((PIRP)a3, 1);
            }
            else
            {
              if ( v8 == 0x10000 )
              {
                v36 = (_QWORD *)(*a5 + 56LL);
                v37 = *(_QWORD *)(Oplock + 120);
                *v36 = v37;
                v36[1] = Oplock + 120;
                if ( *(_QWORD *)(v37 + 8) != Oplock + 120 )
                  __fastfail(3u);
                *(_QWORD *)(v37 + 8) = v36;
                *(_QWORD *)(Oplock + 120) = v36;
                v12 = 0;
                v66 = 0;
              }
              else
              {
                v69 = KeGetCurrentThread();
                *(_QWORD *)(*a5 + 40LL) = v69;
                ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 40LL), 0x746C6644u);
                *(_QWORD *)(*a5 + 16LL) = a3;
                v70 = *(_QWORD *)(a3 + 184);
                *(_BYTE *)(v70 + 3) |= 1u;
                v12 = 259;
                v66 = 259;
                *(_DWORD *)(a3 + 48) = 0;
                *(_QWORD *)(a3 + 56) = Oplock;
                if ( a6 )
                  ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 24LL), 0x746C6644u);
                IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
                v35 = 0;
                if ( *(_BYTE *)(a3 + 68) )
                {
                  if ( !a6 || !a7 )
                    v35 = 1;
                  LOBYTE(v34) = v35;
                  LOBYTE(v33) = 1;
                  FsRtlpCancelOplockRHIrp(a3, v33, v34);
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
              if ( v8 == 0x10000 )
                *(_DWORD *)(Oplock + 144) |= 0x10000u;
            }
            goto LABEL_45;
          }
        }
        goto LABEL_67;
      default:
        v62 = 0;
        goto LABEL_65;
    }
    if ( !a7 )
    {
      v39 = *(_DWORD *)(Oplock + 144);
      if ( (v39 & 1) == 0 )
      {
        v48 = v39 & 0x1F0FFDF;
        if ( (v39 & 0x1F0FFDF) != 0x10
          && v48 != 4096
          && v48 != 4112
          && v48 != 12288
          && v48 != 45056
          && v48 != 1060864
          && v48 != 8400896
          && (v39 & 0x10000) == 0 )
        {
          goto LABEL_156;
        }
      }
      v40 = (_QWORD *)(Oplock + 56);
      if ( (_QWORD *)*v40 != v40 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        for ( j = (_QWORD *)*v40; j != v40; j = (_QWORD *)*j )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0) )
            goto LABEL_156;
        }
        for ( k = *(_QWORD **)(Oplock + 72); k != (_QWORD *)(Oplock + 72); k = (_QWORD *)*k )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), k[3], 0) )
            goto LABEL_156;
        }
        LODWORD(v27) = 0;
      }
      v41 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v41 == 16 || v41 == 4096 || v41 == 4112 || v41 == 45056 )
      {
        for ( m = *(__int64 **)(Oplock + 40); m != (__int64 *)(Oplock + 40); m = (__int64 *)*m )
        {
          v46 = m[2];
          if ( (*(_DWORD *)(v46 + 24) == 590400 || *(_QWORD *)(v46 + 48) != *(_QWORD *)(a2 + 48))
            && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v46 + 48), 0) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)m[1], 533LL, v8 & 0x7000);
            break;
          }
        }
        LODWORD(v27) = 0;
      }
    }
    v71 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v71 + 3) |= 1u;
    *(_DWORD *)(a3 + 48) = v27;
    v42 = a3 + 168;
    v43 = *(_QWORD *)(Oplock + 40);
    *(_QWORD *)(a3 + 168) = v43;
    *(_QWORD *)(a3 + 176) = Oplock + 40;
    if ( *(_QWORD *)(v43 + 8) != Oplock + 40 )
      __fastfail(3u);
    *(_QWORD *)(v43 + 8) = v42;
    *(_QWORD *)(Oplock + 40) = v42;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v44) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v44);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v62 = 1;
    v12 = 259;
    v66 = 259;
    v27 = 0LL;
LABEL_65:
    if ( v62 )
      goto LABEL_157;
    goto LABEL_156;
  }
LABEL_67:
  if ( v8 != 0x10000 )
  {
LABEL_156:
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, 1);
    v12 = -1073741598;
    v66 = -1073741598;
    goto LABEL_45;
  }
  v12 = -1073739511;
LABEL_69:
  v66 = v12;
LABEL_157:
  if ( v72 != (_BYTE)v27 && v8 != 0x10000 )
  {
    v63 = (volatile signed __int32 *)BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 8) = v27;
    v64 = _InterlockedCompareExchange(v63, 1, 0);
    if ( v64 )
      ExpReleaseFastMutexContended(v63, v64);
    KeAbPostRelease((ULONG_PTR)v63);
    return v66;
  }
  return v12;
}
