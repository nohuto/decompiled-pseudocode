/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x14007704C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14007701C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14010F424 (FsRtlpCancelExclusiveIrp.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404695E8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140469CE8 (FsRtlpOplockUpperLowerCompatible.c)
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
  int v13; // r11d
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *i; // rbx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  CCHAR v23; // r10
  int v24; // eax
  int v25; // eax
  _QWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rdi
  IRP *v29; // r9
  struct _IRP *MasterIrp; // r8
  _QWORD *v31; // r12
  _QWORD *m; // rdi
  _QWORD *n; // rax
  PVOID *v34; // rdi
  int v35; // r8d
  _QWORD *v36; // rdi
  _QWORD *j; // r12
  _QWORD *k; // rax
  _QWORD *v39; // r12
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  int v45; // [rsp+50h] [rbp-68h]
  _QWORD *v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-58h]
  IRP *v48; // [rsp+68h] [rbp-50h]
  struct _IRP *v49; // [rsp+70h] [rbp-48h]
  _QWORD *v50; // [rsp+78h] [rbp-40h]
  __int64 v51; // [rsp+80h] [rbp-38h]
  __int64 v52; // [rsp+88h] [rbp-30h]

  v11 = 0;
  v45 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
    *a1 = Oplock;
  }
  v47 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v13 & 0x20000) != 0 )
    {
      v14 = P;
      FsRtlpOplockDequeueRH(P);
      v15 = v14[7];
      v16 = (_QWORD *)v14[8];
      if ( *(_QWORD **)(v15 + 8) != v14 + 7 || (_QWORD *)*v16 != v14 + 7 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v14[5] )
        FsRtlpClearOwner(Oplock, v14);
      ExFreePoolWithTag(v14, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_14;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v18 = i;
      v19 = *(_QWORD *)(i[2] + 184LL);
      if ( *(_BYTE *)v19 != 13 || *(_DWORD *)(v19 + 24) != 589844 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v18);
      }
    }
    v20 = P;
    FsRtlpOplockDequeueRH(P);
    v21 = v20[7];
    v22 = (_QWORD *)v20[8];
    if ( *(_QWORD **)(v21 + 8) != v20 + 7 || (_QWORD *)*v22 != v20 + 7 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v20[5] )
      FsRtlpClearOwner(Oplock, v20);
    ExFreePoolWithTag(v20, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, v23);
    goto LABEL_111;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_111;
  }
  v24 = *(_DWORD *)(Oplock + 144);
  if ( (v24 & 0x91) != 0 )
  {
    if ( (v24 & 0x10) != 0 && (a6 & 0x7000) != 0 )
    {
      if ( (a6 & 0x10000) != 0 )
      {
LABEL_38:
        v11 = -1073739511;
        goto LABEL_111;
      }
      goto LABEL_39;
    }
    if ( (v24 & 0x80u) != 0
      && !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0LL) )
    {
      if ( (a6 & 0x10000) != 0 )
      {
        v11 = -1073739511;
        goto LABEL_111;
      }
      goto LABEL_14;
    }
    v25 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v25 == 16 || v25 == 4096 || v25 == 4112 )
      FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
    v23 = 1;
    if ( a4 > 1 && (*(_DWORD *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
    {
      if ( !a3 )
        goto LABEL_40;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
    {
      if ( (a6 & 0x10000) != 0 )
      {
        v11 = -1073739511;
        goto LABEL_111;
      }
      goto LABEL_39;
    }
    goto LABEL_107;
  }
  if ( (v24 & 0x7000) != 0 && (v24 & 0x1F00F00) == 0 )
  {
    v26 = (_QWORD *)(Oplock + 72);
    if ( (_QWORD *)*v26 == v26 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_38;
      if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
        goto LABEL_39;
      v27 = v24 & 0x1F0FFDF;
      if ( v27 == 4096 )
      {
        if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
          goto LABEL_39;
        v36 = (_QWORD *)(Oplock + 40);
        for ( j = *(_QWORD **)(Oplock + 40); j != v36; j = (_QWORD *)*j )
        {
          v50 = j - 21;
          v51 = j[2];
          if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v51 + 48), 0LL) )
            goto LABEL_14;
        }
        v23 = 1;
        if ( a4 > 1 && (a5 & 1) == 0 )
          goto LABEL_39;
        for ( k = (_QWORD *)*v36; ; k = (_QWORD *)*v39 )
        {
          v46 = k;
          if ( k == v36 )
            break;
          v39 = (_QWORD *)k[1];
          FsRtlpRemoveAndCompleteReadOnlyIrp(*v39, 533LL, a6 & 0x7000);
        }
      }
      else
      {
        if ( v27 != 12288 )
        {
          if ( (v27 == 20544 || v27 == 28736 && a6 == 28736) && ((a6 - 20544) & 0xFFFFDFFF) == 0 )
          {
            if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0LL) )
            {
LABEL_14:
              *(_DWORD *)(a3 + 48) = -1073741598;
              pIofCompleteRequest((PIRP)a3, 1);
              v11 = -1073741598;
              goto LABEL_111;
            }
            v28 = *(_QWORD *)Oplock;
            v48 = (IRP *)v28;
            IoAcquireCancelSpinLock((PKIRQL)(v28 + 69));
            _InterlockedExchange64((volatile __int64 *)(v28 + 104), 0LL);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v28 + 69));
            v29 = v48;
            if ( v48->Cancel )
            {
              v48->IoStatus.Information = 0LL;
              v29->IoStatus.Status = -1073741536;
            }
            else
            {
              MasterIrp = v48->AssociatedIrp.MasterIrp;
              v49 = MasterIrp;
              *(_QWORD *)&MasterIrp->Type = 0LL;
              MasterIrp->MdlAddress = 0LL;
              *(_QWORD *)&MasterIrp->Flags = 0LL;
              *(_DWORD *)&MasterIrp->Type = 1572865;
              *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
              LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
              v29->IoStatus.Information = 24LL;
              v29->IoStatus.Status = 533;
            }
            pIofCompleteRequest(v29, 1);
            *(_QWORD *)Oplock = 0LL;
            ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
            *(_QWORD *)(Oplock + 8) = 0LL;
            goto LABEL_107;
          }
LABEL_39:
          *(_DWORD *)(a3 + 48) = -1073741598;
          pIofCompleteRequest((PIRP)a3, v23);
LABEL_40:
          v11 = -1073741598;
          goto LABEL_111;
        }
        if ( a6 != 28736 || (_QWORD *)*v26 != v26 )
          goto LABEL_39;
        v31 = (_QWORD *)(Oplock + 56);
        for ( m = *(_QWORD **)(Oplock + 56); m != v31; m = (_QWORD *)*m )
        {
          if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0LL) )
            goto LABEL_14;
          if ( m[7] )
          {
            v11 = -1073741597;
            *(_DWORD *)(a3 + 48) = -1073741597;
            pIofCompleteRequest((PIRP)a3, 1);
            goto LABEL_111;
          }
        }
        v23 = 1;
        if ( a4 > 1 && (a5 & 1) == 0 )
          goto LABEL_39;
        for ( n = (_QWORD *)*v31; ; n = *v34 )
        {
          v46 = n;
          if ( n == v31 )
            break;
          v34 = (PVOID *)n[1];
          if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails) )
          {
            FsRtlpRemoveAndCompleteRHIrp(*v34, 0, 0, 0);
          }
          else
          {
            LOBYTE(v35) = 1;
            FsRtlpRemoveAndBreakRHIrp(*v34, Oplock, v35, 533, 28672);
          }
        }
      }
LABEL_107:
      *(_QWORD *)Oplock = a3;
      *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
      FsRtlpClearOwner(Oplock, 0LL);
      *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
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
        LOBYTE(v42) = 1;
        LOBYTE(v41) = 1;
        FsRtlpCancelExclusiveIrp(a3, v41, v42);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v11 = 259;
      goto LABEL_111;
    }
  }
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_38;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    pIofCompleteRequest((PIRP)a3, v23);
  }
  v11 = -1073741598;
  v45 = -1073741598;
LABEL_111:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
