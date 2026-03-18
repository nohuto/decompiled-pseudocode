/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1400C9C44
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400C98A4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1400CC14C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140103A90 (FsRtlpCancelExclusiveIrp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x14048F040 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x14048F084 (FsRtlpAllocateOplock.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v11; // edi
  __int64 Oplock; // r14
  __int64 v13; // rdx
  char v14; // r10
  __int64 v15; // rdx
  int v16; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 *v21; // r12
  __int64 *j; // rbx
  int v23; // r11d
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *i; // rbx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 k; // rax
  __int64 *v38; // rbx
  _QWORD *v39; // rbx
  _QWORD *m; // r12
  _QWORD *n; // rax
  _QWORD **v42; // r12
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  int v45; // [rsp+50h] [rbp-68h]
  __int64 v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-58h]
  __int64 v48; // [rsp+68h] [rbp-50h]
  _QWORD *v49; // [rsp+70h] [rbp-48h]
  __int64 v50; // [rsp+78h] [rbp-40h]
  __int64 v51; // [rsp+80h] [rbp-38h]
  __int64 v52; // [rsp+88h] [rbp-30h]

  v11 = 0;
  v45 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v47 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v23 & 0x20000) != 0 )
    {
      v24 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v25 = v24[7];
      v26 = (_QWORD *)v24[8];
      if ( *(_QWORD **)(v25 + 8) != v24 + 7 || (_QWORD *)*v26 != v24 + 7 )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v24[5] )
        FsRtlpClearOwnerThread(Oplock, v24);
      ExFreePoolWithTag(v24, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_29;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v28 = i;
      v29 = *(_QWORD *)(i[2] + 184LL);
      if ( *(_BYTE *)v29 != 13 || *(_DWORD *)(v29 + 24) != 589844 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v28);
      }
    }
    v30 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v31 = v30[7];
    v32 = (_QWORD *)v30[8];
    if ( *(_QWORD **)(v31 + 8) != v30 + 7 || (_QWORD *)*v32 != v30 + 7 )
      __fastfail(3u);
    *v32 = v31;
    *(_QWORD *)(v31 + 8) = v32;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v30[5] )
      FsRtlpClearOwnerThread(Oplock, v30);
    ExFreePoolWithTag(v30, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    LOBYTE(v13) = v14;
    pIofCompleteRequest(a3, v13);
    goto LABEL_106;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_106;
  }
  v15 = *(unsigned int *)(Oplock + 144);
  if ( (v15 & 0x91) != 0 )
  {
    if ( (a6 & 0x7000) == 0 || (v15 & 0x10) == 0 )
    {
      if ( (v15 & 0x80u) != 0LL
        && !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0LL) )
      {
        if ( (a6 & 0x10000) != 0 )
        {
          v11 = -1073739511;
          goto LABEL_106;
        }
        goto LABEL_29;
      }
      v16 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v16 == 16 || v16 == 4096 || v16 == 4112 )
        FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)(Oplock + 40), 0, 0);
      v14 = 1;
      if ( a4 > 1 && (*(_BYTE *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
      {
        if ( !a3 )
          goto LABEL_60;
        goto LABEL_59;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
      {
        if ( (a6 & 0x10000) != 0 )
        {
          v11 = -1073739511;
          goto LABEL_106;
        }
        goto LABEL_59;
      }
      goto LABEL_15;
    }
    if ( (a6 & 0x10000) != 0 )
    {
LABEL_58:
      v11 = -1073739511;
      goto LABEL_106;
    }
    goto LABEL_59;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x1F00F00) == 0 && (*(_DWORD *)(Oplock + 144) & 0x7000) != 0 )
  {
    v20 = (_QWORD *)(Oplock + 72);
    if ( (_QWORD *)*v20 == v20 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_58;
      if ( (a6 & 0x7000) != 0 && (!*(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) || (a6 & 0x2000) == 0) )
      {
        v15 &= 0x1F0FFDFu;
        if ( (_DWORD)v15 == 12288 )
        {
          if ( a6 != 28736 || (_QWORD *)*v20 != v20 )
            goto LABEL_59;
          v21 = (__int64 *)(Oplock + 56);
          for ( j = *(__int64 **)(Oplock + 56); j != v21; j = (__int64 *)*j )
          {
            if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0LL) )
              goto LABEL_29;
            if ( j[7] )
            {
              v11 = -1073741597;
              *(_DWORD *)(a3 + 48) = -1073741597;
              LOBYTE(v15) = 1;
              pIofCompleteRequest(a3, v15);
              goto LABEL_106;
            }
          }
          v14 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_59;
          for ( k = *v21; ; k = *v38 )
          {
            v46 = k;
            if ( (__int64 *)k == v21 )
              break;
            v38 = *(__int64 **)(k + 8);
            FsRtlpRemoveAndBreakRHIrp(*v38, Oplock, 1, 533, 0x7000u, 0, 0, 0);
          }
        }
        else if ( (_DWORD)v15 == 4096 )
        {
          if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
            goto LABEL_59;
          v39 = (_QWORD *)(Oplock + 40);
          for ( m = *(_QWORD **)(Oplock + 40); m != v39; m = (_QWORD *)*m )
          {
            v49 = m - 21;
            v50 = m[2];
            if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v50 + 48), 0LL) )
              goto LABEL_29;
          }
          v14 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_59;
          for ( n = (_QWORD *)*v39; ; n = *v42 )
          {
            v46 = (__int64)n;
            if ( n == v39 )
              break;
            v42 = (_QWORD **)n[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp(*v42, 533, a6 & 0x7000);
          }
        }
        else
        {
          if ( (_DWORD)v15 != 20544 && ((_DWORD)v15 != 28736 || a6 != 28736) || ((a6 - 20544) & 0xFFFFDFFF) != 0 )
            goto LABEL_59;
          if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0LL) )
          {
LABEL_29:
            *(_DWORD *)(a3 + 48) = -1073741598;
            LOBYTE(v15) = 1;
            pIofCompleteRequest(a3, v15);
            v11 = -1073741598;
            goto LABEL_106;
          }
          v33 = *(_QWORD *)Oplock;
          v48 = v33;
          IoAcquireCancelSpinLock((PKIRQL)(v33 + 69));
          _InterlockedExchange64((volatile __int64 *)(v33 + 104), 0LL);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v33 + 69));
          v35 = v48;
          if ( *(_BYTE *)(v48 + 68) )
          {
            *(_QWORD *)(v48 + 56) = 0LL;
            *(_DWORD *)(v35 + 48) = -1073741536;
          }
          else
          {
            v36 = *(_QWORD *)(v48 + 24);
            v51 = v36;
            *(_QWORD *)v36 = 0LL;
            *(_QWORD *)(v36 + 8) = 0LL;
            *(_QWORD *)(v36 + 16) = 0LL;
            *(_DWORD *)v36 = 1572865;
            *(_DWORD *)(v36 + 4) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
            v34 = (a6 >> 12) & 1;
            *(_DWORD *)(v36 + 8) = (a6 >> 12) & 7;
            *(_QWORD *)(v35 + 56) = 24LL;
            *(_DWORD *)(v35 + 48) = 533;
          }
          LOBYTE(v34) = 1;
          pIofCompleteRequest(v35, v34);
          *(_QWORD *)Oplock = 0LL;
          ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
          *(_QWORD *)(Oplock + 8) = 0LL;
        }
LABEL_15:
        *(_QWORD *)Oplock = a3;
        *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
        FsRtlpClearOwnerThread(Oplock, 0LL);
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(Oplock + 24) = CurrentThread;
        ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_BYTE *)(Oplock + 32) = 0;
        *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
        ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
        v52 = *(_QWORD *)(a3 + 184);
        *(_BYTE *)(v52 + 3) |= 1u;
        *(_QWORD *)(a3 + 56) = Oplock;
        IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
        if ( *(_BYTE *)(a3 + 68) )
        {
          LOBYTE(v19) = 1;
          LOBYTE(v18) = 1;
          FsRtlpCancelExclusiveIrp(a3, v18, v19);
        }
        else
        {
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        }
        v11 = 259;
        goto LABEL_106;
      }
LABEL_59:
      *(_DWORD *)(a3 + 48) = -1073741598;
      LOBYTE(v15) = v14;
      pIofCompleteRequest(a3, v15);
LABEL_60:
      v11 = -1073741598;
      goto LABEL_106;
    }
  }
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_58;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    LOBYTE(v15) = v14;
    pIofCompleteRequest(a3, v15);
  }
  v11 = -1073741598;
  v45 = -1073741598;
LABEL_106:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
