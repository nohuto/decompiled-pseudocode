/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1404A5A14
 * Callers:
 *     FsRtlOplockFsctrlEx @ 0x1404A59FC (FsRtlOplockFsctrlEx.c)
 *     FsRtlOplockFsctrl @ 0x1404A60FC (FsRtlOplockFsctrl.c)
 *     FsRtlUpperOplockFsctrl @ 0x14066D124 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpAttachOplockKey @ 0x14006DA88 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140072918 (FsRtlpRequestExclusiveOplock.c)
 *     IoIsOperationSynchronous @ 0x140073110 (IoIsOperationSynchronous.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140073E58 (FsRtlpCallerIsAtomicRequestor.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x140195A80 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E2F5C (FsRtlpAcknowledgeOplockBreak.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404A64EC (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14066D2C4 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14066D484 (FsRtlpOplockBreakNotify.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(PVOID *Oplock, PIRP Irp, unsigned int a3, char a4, unsigned int a5)
{
  unsigned int v8; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v10; // r12d
  struct _IRP *MasterIrp; // r13
  int MdlAddress; // eax
  int v13; // r8d
  int v14; // r8d
  PVOID v17; // rdi
  ULONG Options; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  _QWORD *v21; // rbx
  ULONG_PTR v22; // r12
  __int64 v23; // rax
  __int64 v24; // r13
  PVOID v25; // rdi
  ULONG_PTR v26; // rbx
  signed __int32 v27; // eax
  unsigned int v28; // r12d
  int v29; // r8d
  int v30; // r8d
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // r14
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned int v39; // [rsp+40h] [rbp-58h]
  int v40; // [rsp+44h] [rbp-54h]
  int v41; // [rsp+44h] [rbp-54h]
  int v42; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  PVOID v45[8]; // [rsp+58h] [rbp-40h] BYREF
  int v46; // [rsp+A8h] [rbp+10h]

  v8 = 0;
  v45[0] = 0LL;
  P = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 )
    {
      if ( a3 != 1
        || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
        || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
      {
        return (unsigned int)-1073741598;
      }
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               (_QWORD **)Oplock,
                               (__int64)CurrentStackLocation,
                               0LL,
                               1LL,
                               0,
                               0xC8u,
                               a5);
    }
    else if ( (Options & 0x10000) != 0 )
    {
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
      {
        v21 = *Oplock;
        if ( !*Oplock )
        {
          v21 = (_QWORD *)FsRtlpAllocateOplock(v19);
          *Oplock = v21;
        }
        v22 = v21[19];
        CurrentThread = KeGetCurrentThread();
        v23 = KeAbPreAcquire(v22, 0LL, 0LL, v20);
        v24 = v23;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v22, 0) )
          ExpAcquireFastMutexContended(v22, v23);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
        *(_QWORD *)(v22 + 8) = CurrentThread;
        v39 = FsRtlCheckOplockEx(Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v39 )
        {
          P = ExAllocatePoolWithTag((POOL_TYPE)273, 0x48uLL, 0x6F725346u);
          memset(P, 0, 0x48uLL);
          v39 = FsRtlpRequestShareableOplock(
                  (__int64 *)Oplock,
                  (__int64)CurrentStackLocation,
                  0LL,
                  0x10000LL,
                  &P,
                  0,
                  0,
                  a5);
        }
        v25 = P;
        if ( P )
        {
          FsRtlpClearOwnerThread((__int64)v21, (__int64)P);
          ExFreePoolWithTag(v25, 0);
        }
        v26 = v21[19];
        *(_QWORD *)(v26 + 8) = 0LL;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)v26, 1, 0);
        if ( v27 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v26, v27);
        KeAbPostRelease(v26);
        return v39;
      }
    }
    return v8;
  }
  v10 = 2;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x90000u:
LABEL_50:
      v28 = v10 | 0x40;
      if ( a3 == 1
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               (_QWORD **)Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               1LL,
                               0,
                               v28,
                               a5);
      }
LABEL_51:
      v8 = -1073741598;
LABEL_52:
      Irp->IoStatus.Status = v8;
LABEL_53:
      IofCompleteRequest(Irp, 1);
      return v8;
    case 0x90004u:
      if ( a3
        || IoIsOperationSynchronous(Irp)
        || (Irp->Flags & 0x40) != 0
        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
        v8 = -1073741598;
        Irp->IoStatus.Status = -1073741598;
        goto LABEL_53;
      }
      return (unsigned int)FsRtlpRequestShareableOplock(
                             (__int64 *)Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             16LL,
                             0LL,
                             1,
                             0,
                             a5);
    case 0x90008u:
LABEL_49:
      v10 *= 2;
      goto LABEL_50;
    case 0x9000Cu:
      v38 = 1LL;
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(
                             (__int64)*Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             v38,
                             a5);
    case 0x90010u:
      return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, Irp->Tail.Overlay.CurrentStackLocation, Irp, a3);
    case 0x90014u:
      return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, Irp, Irp, a3);
    case 0x90050u:
      v38 = 0LL;
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(
                             (__int64)*Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             v38,
                             a5);
    case 0x9005Cu:
      v10 = 4;
      goto LABEL_49;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 590400 )
  {
    v8 = -1073741811;
LABEL_78:
    Irp->IoStatus.Status = v8;
    goto LABEL_53;
  }
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v8 = -1073741789;
    goto LABEL_78;
  }
  if ( MasterIrp->Type > 1u )
    goto LABEL_80;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MdlAddress & 1) == 0 )
  {
    if ( (MdlAddress & 2) != 0 )
    {
      v29 = *(_DWORD *)(&MasterIrp->Size + 1);
      v41 = v29 & 2;
      v30 = ((v29 & 1) != 0 ? 0x1000 : 0) | ((v29 & 4) != 0 ? 0x4000 : 0) | (v41 != 0 ? 0x2000 : 0);
      if ( v30 && v30 != 4096 && v30 != 12288 && v30 != 20480 && v30 != 28672 || IoIsOperationSynchronous(Irp) )
        goto LABEL_82;
      if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
        *(_QWORD *)&MasterIrp->Type = 0LL;
        MasterIrp->MdlAddress = 0LL;
        *(_QWORD *)&MasterIrp->Flags = 0LL;
        *(_DWORD *)&MasterIrp->Type = 1572865;
        Irp->IoStatus.Information = 24LL;
        Irp->IoStatus.Status = 0;
        IofCompleteRequest(Irp, 1);
        return 0;
      }
      if ( (v41 != 0 ? 0x2000 : 0) != 0 )
      {
        v45[0] = ExAllocatePoolWithTag((POOL_TYPE)273, 0x48uLL, 0x6F725346u);
        P = v45[0];
        memset(v45[0], 0, 0x48uLL);
      }
      v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
             (__int64)*Oplock,
             (__int64)CurrentStackLocation,
             (__int64)Irp,
             ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 4) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 2u) << 12),
             (_QWORD *)((unsigned __int64)&P & -(__int64)(v45[0] != 0LL)),
             a5);
LABEL_30:
      v17 = P;
      if ( P )
      {
        FsRtlpClearOwnerThread((__int64)*Oplock, (__int64)P);
        ExFreePoolWithTag(v17, 0);
      }
      return v8;
    }
LABEL_80:
    v8 = -1073741811;
    Irp->IoStatus.Status = -1073741811;
    goto LABEL_53;
  }
  v13 = *(_DWORD *)(&MasterIrp->Size + 1);
  v46 = v13 & 1;
  v40 = v13 & 4;
  v42 = v13 & 2;
  v14 = (v46 != 0 ? 0x1000 : 0) | (v40 != 0 ? 0x4000 : 0) | (v42 != 0 ? 0x2000 : 0);
  if ( v14 )
  {
    if ( v14 != 12288 && v14 != 4096 )
    {
      if ( v14 != 28672 && v14 != 20480 )
      {
LABEL_82:
        v8 = -1073741811;
        goto LABEL_52;
      }
      if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               (_QWORD **)Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               a3,
                               a4,
                               (v46 != 0 ? 0x1000 : 0) | (v40 != 0 ? 0x4000 : 0) | (v42 != 0 ? 0x2000 : 0) | 0x40u,
                               a5);
      goto LABEL_51;
    }
    if ( a3 || IoIsOperationSynchronous(Irp) || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      goto LABEL_51;
    if ( (v42 != 0 ? 0x2000 : 0) != 0 )
    {
      v45[0] = ExAllocatePoolWithTag((POOL_TYPE)273, 0x48uLL, 0x6F725346u);
      P = v45[0];
      memset(v45[0], 0, 0x48uLL);
    }
    v8 = FsRtlpRequestShareableOplock(
           (__int64 *)Oplock,
           (__int64)CurrentStackLocation,
           (__int64)Irp,
           ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 4) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 2u) << 12),
           (_QWORD *)((unsigned __int64)&P & -(__int64)(v45[0] != 0LL)),
           1,
           0,
           a5);
    goto LABEL_30;
  }
  v31 = *Oplock;
  if ( *Oplock )
  {
    v45[0] = 0LL;
    if ( (v31[18] & 0x10000) != 0 )
    {
      if ( FsRtlpCallerIsAtomicRequestor((__int64)v31, (__int64)CurrentStackLocation->FileObject, v45) )
      {
        v34 = v45[0];
        FsRtlpOplockDequeueRH((__int64)v45[0], v32, v33);
        v35 = v34[7];
        v36 = (_QWORD *)v34[8];
        if ( *(_QWORD **)(v35 + 8) != v34 + 7 || (_QWORD *)*v36 != v34 + 7 )
          __fastfail(3u);
        *v36 = v35;
        *(_QWORD *)(v35 + 8) = v36;
        if ( (_QWORD *)v31[15] == v31 + 15 )
          *((_DWORD *)v31 + 36) &= 0xFFFCFFFF;
        if ( v34[5] )
          FsRtlpClearOwnerThread((__int64)v31, (__int64)v34);
        ExFreePoolWithTag(v34, 0);
        FsRtlpComputeShareableOplockState((__int64)v31);
        FsRtlpReleaseIrpsWaitingForRH(v37);
      }
    }
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0;
}
