/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x140072918
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x140070F7C (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140073E58 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140073E88 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140133958 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404A60B8 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1404A64EC (FsRtlpAllocateOplock.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  _QWORD *Oplock; // r14
  ULONG_PTR v11; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r11d
  int v17; // edx
  int v18; // eax
  struct _KTHREAD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rcx
  int v23; // edx
  __int64 *v24; // rcx
  __int64 *v25; // rbx
  int v26; // ebx
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *i; // rbx
  _QWORD *v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdi
  IRP *v36; // r9
  struct _IRP *MasterIrp; // r8
  __int64 v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx
  _QWORD *v41; // rax
  ULONG_PTR v42; // rbx
  unsigned __int32 v43; // eax
  unsigned int v45; // [rsp+40h] [rbp-78h]
  __int64 *v46; // [rsp+48h] [rbp-70h]
  _QWORD *v47; // [rsp+48h] [rbp-70h]
  PVOID P[2]; // [rsp+50h] [rbp-68h] BYREF
  IRP *v49; // [rsp+60h] [rbp-58h]
  _QWORD *v50; // [rsp+68h] [rbp-50h]
  __int64 v51; // [rsp+70h] [rbp-48h]
  struct _IRP *v52; // [rsp+78h] [rbp-40h]
  __int64 v53; // [rsp+80h] [rbp-38h]
  unsigned int v54; // [rsp+D8h] [rbp+20h]

  v54 = a4;
  v45 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = (_QWORD *)FsRtlpAllocateOplock(a1);
    *a1 = Oplock;
  }
  P[1] = Oplock;
  v11 = Oplock[19];
  CurrentThread = KeGetCurrentThread();
  v13 = KeAbPreAcquire(v11, 0LL, 0LL, a4);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v11, 0) )
    ExpAcquireFastMutexContended(v11);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  *(_QWORD *)(v11 + 8) = CurrentThread;
  if ( (Oplock[18] & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), P) )
  {
    if ( (v16 & 0x20000) != 0 )
    {
      v27 = P[0];
      FsRtlpOplockDequeueRH((__int64)P[0], v14, v15);
      v28 = v27[7];
      v29 = (_QWORD *)v27[8];
      if ( *(_QWORD **)(v28 + 8) != v27 + 7 || (_QWORD *)*v29 != v27 + 7 )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      if ( (_QWORD *)Oplock[15] == Oplock + 15 )
        *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
      if ( v27[5] )
        FsRtlpClearOwnerThread((__int64)Oplock, (__int64)v27);
      ExFreePoolWithTag(v27, 0);
      P[0] = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_35;
    }
    for ( i = (_QWORD *)Oplock[11]; i != Oplock + 11; i = (_QWORD *)*i )
    {
      v31 = i;
      v14 = *(_QWORD *)(i[2] + 184LL);
      if ( *(_BYTE *)v14 != 13 || *(_DWORD *)(v14 + 24) != 589844 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v31);
      }
    }
    v32 = P[0];
    FsRtlpOplockDequeueRH((__int64)P[0], v14, v15);
    v33 = v32[7];
    v34 = (_QWORD *)v32[8];
    if ( *(_QWORD **)(v33 + 8) != v32 + 7 || (_QWORD *)*v34 != v32 + 7 )
      __fastfail(3u);
    *v34 = v33;
    *(_QWORD *)(v33 + 8) = v34;
    if ( (_QWORD *)Oplock[15] == Oplock + 15 )
      *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
    if ( v32[5] )
      FsRtlpClearOwnerThread((__int64)Oplock, (__int64)v32);
    ExFreePoolWithTag(v32, 0);
    P[0] = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, 1);
    goto LABEL_107;
  }
  if ( a6 == 200 )
  {
    *Oplock = a3;
    Oplock[1] = *(_QWORD *)(a2 + 48);
    *((_DWORD *)Oplock + 36) = Oplock[18] & 0x20 | 0xC8;
    goto LABEL_107;
  }
  v17 = *((_DWORD *)Oplock + 36);
  if ( (v17 & 0x91) != 0 )
  {
    if ( (a6 & 0x7000) != 0 && (v17 & 0x10) != 0
      || (v17 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), Oplock[1], 0) )
    {
      goto LABEL_62;
    }
    v18 = Oplock[18] & 0x1F0FFDF;
    if ( v18 == 16 || v18 == 4096 || v18 == 4112 )
      FsRtlpRemoveAndCompleteReadOnlyIrp(Oplock[5], 0LL, 0LL);
    if ( v54 > 1 && (a5 & 1) == 0 && (Oplock[18] & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(a3 + 48) = -1073741598;
        pIofCompleteRequest((PIRP)a3, 1);
      }
      v45 = -1073741598;
      goto LABEL_107;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
    {
LABEL_62:
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_63;
      goto LABEL_35;
    }
LABEL_21:
    *Oplock = a3;
    Oplock[1] = *(_QWORD *)(a2 + 48);
    Oplock[2] = KeGetCurrentThread()->ApcState.Process;
    FsRtlpClearOwnerThread((__int64)Oplock, 0LL);
    v19 = KeGetCurrentThread();
    Oplock[3] = v19;
    ObfReferenceObjectWithTag(v19, 0x746C6644u);
    *((_BYTE *)Oplock + 32) = 0;
    *((_DWORD *)Oplock + 36) = a6 | Oplock[18] & 0x20;
    ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    v53 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v53 + 3) |= 1u;
    *(_QWORD *)(a3 + 56) = Oplock;
    IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v21) = 1;
      LOBYTE(v20) = 1;
      FsRtlpCancelExclusiveIrp(a3, v20, v21);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v45 = 259;
    goto LABEL_107;
  }
  if ( (Oplock[18] & 0x1F00F00) == 0 && (Oplock[18] & 0x7000) != 0 )
  {
    v22 = Oplock + 9;
    if ( (_QWORD *)*v22 == v22 )
    {
      if ( (a6 & 0x10000) != 0 )
      {
LABEL_63:
        v45 = -1073739511;
        goto LABEL_107;
      }
      if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
        goto LABEL_35;
      v23 = v17 & 0x1F0FFDF;
      if ( v23 == 12288 )
      {
        if ( a6 == 28736 && (_QWORD *)*v22 == v22 )
        {
          v24 = Oplock + 7;
          v25 = (__int64 *)Oplock[7];
          while ( v25 != v24 )
          {
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v25[3], 0) )
              goto LABEL_35;
            if ( v25[7] )
            {
              v26 = -1073741597;
              goto LABEL_36;
            }
            v25 = (__int64 *)*v25;
            v24 = Oplock + 7;
          }
          if ( v54 <= 1 || (a5 & 1) != 0 )
          {
            v38 = *v24;
            while ( (__int64 *)v38 != v24 )
            {
              v46 = *(__int64 **)(v38 + 8);
              FsRtlpRemoveAndBreakRHIrp(*v46, (__int64)Oplock, 1, 533, 0x7000u, 0, 0, 0);
              v38 = *v46;
              v24 = Oplock + 7;
            }
            goto LABEL_21;
          }
        }
      }
      else if ( v23 == 4096 )
      {
        if ( ((a6 - 20544) & 0xFFFFDFFF) == 0 )
        {
          v39 = Oplock + 5;
          v40 = (_QWORD *)Oplock[5];
          while ( v40 != v39 )
          {
            v50 = v40 - 21;
            v51 = v40[2];
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v51 + 48), 0) )
              goto LABEL_35;
            v40 = (_QWORD *)*v40;
            v39 = Oplock + 5;
          }
          if ( v54 <= 1 || (a5 & 1) != 0 )
          {
            v41 = (_QWORD *)*v39;
            while ( v41 != v39 )
            {
              v47 = (_QWORD *)v41[1];
              FsRtlpRemoveAndCompleteReadOnlyIrp(*v47, 533LL, a6 & 0x7000);
              v41 = (_QWORD *)*v47;
              v39 = Oplock + 5;
            }
            goto LABEL_21;
          }
        }
      }
      else if ( (v23 == 20544 || v23 == 28736 && a6 == 28736)
             && ((a6 - 20544) & 0xFFFFDFFF) == 0
             && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), Oplock[1], 0) )
      {
        v35 = *Oplock;
        v49 = (IRP *)v35;
        IoAcquireCancelSpinLock((PKIRQL)(v35 + 69));
        _InterlockedExchange64((volatile __int64 *)(v35 + 104), 0LL);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v35 + 69));
        v36 = v49;
        if ( v49->Cancel )
        {
          v49->IoStatus.Information = 0LL;
          v36->IoStatus.Status = -1073741536;
        }
        else
        {
          MasterIrp = v49->AssociatedIrp.MasterIrp;
          v52 = MasterIrp;
          *(_QWORD *)&MasterIrp->Type = 0LL;
          MasterIrp->MdlAddress = 0LL;
          *(_QWORD *)&MasterIrp->Flags = 0LL;
          *(_DWORD *)&MasterIrp->Type = 1572865;
          *(_DWORD *)(&MasterIrp->Size + 1) = (*((_DWORD *)Oplock + 36) >> 12) & 7;
          LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
          v36->IoStatus.Information = 24LL;
          v36->IoStatus.Status = 533;
        }
        pIofCompleteRequest(v36, 1);
        *Oplock = 0LL;
        ObfDereferenceObjectWithTag((PVOID)Oplock[1], 0x746C6644u);
        Oplock[1] = 0LL;
        goto LABEL_21;
      }
LABEL_35:
      v26 = -1073741598;
LABEL_36:
      *(_DWORD *)(a3 + 48) = v26;
      pIofCompleteRequest((PIRP)a3, 1);
      v45 = v26;
      goto LABEL_107;
    }
  }
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_63;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, 1);
  }
  v45 = -1073741598;
LABEL_107:
  v42 = Oplock[19];
  *(_QWORD *)(v42 + 8) = 0LL;
  v43 = _InterlockedCompareExchange((volatile signed __int32 *)v42, 1, 0);
  if ( v43 )
    ExpReleaseFastMutexContended(v42, v43);
  KeAbPostRelease(v42);
  return v45;
}
