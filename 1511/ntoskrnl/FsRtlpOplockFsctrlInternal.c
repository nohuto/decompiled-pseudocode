/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x14048EA24
 * Callers:
 *     FsRtlOplockFsctrl @ 0x14048E9F0 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x14048EA0C (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x1405F41A8 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     IoIsOperationSynchronous @ 0x1400CA440 (IoIsOperationSynchronous.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpAttachOplockKey @ 0x1400CB06C (FsRtlpAttachOplockKey.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1400CC14C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401ACF44 (FsRtlpAcknowledgeOplockBreak.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x14048F084 (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1405F4348 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1405F447C (FsRtlpOplockBreakNotify.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  PVOID PoolWithTag; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v11; // r13d
  struct _IRP *MasterIrp; // rax
  int MdlAddress; // ecx
  int v14; // r8d
  int v15; // r8d
  PVOID v16; // rdi
  ULONG Options; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PFAST_MUTEX *v22; // rsi
  unsigned int v23; // r13d
  int v24; // r8d
  int v25; // r8d
  __int64 v26; // rbx
  _QWORD *v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct _IRP *v31; // rax
  char v32; // r9
  int v33; // [rsp+40h] [rbp-58h]
  int v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+44h] [rbp-54h]
  PVOID v36; // [rsp+50h] [rbp-48h] BYREF
  struct _IRP *v37; // [rsp+58h] [rbp-40h]
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+B0h] [rbp+18h]
  int v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v8 = 0;
  PoolWithTag = 0LL;
  v36 = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
  {
    v11 = 2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589824 )
    {
LABEL_44:
      v23 = v11 | 0x40;
      if ( a3 == 1
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               1u,
                               0,
                               v23,
                               a5);
      }
LABEL_45:
      v8 = -1073741598;
LABEL_46:
      Irp->IoStatus.Status = v8;
LABEL_47:
      IofCompleteRequest(Irp, 1);
      return v8;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589828 )
    {
      if ( a3
        || IoIsOperationSynchronous(Irp)
        || (Irp->Flags & 0x40) != 0
        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
        v8 = -1073741598;
        Irp->IoStatus.Status = -1073741598;
        goto LABEL_47;
      }
      return (unsigned int)FsRtlpRequestShareableOplock(
                             Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             0x10u,
                             0LL,
                             1,
                             0,
                             a5);
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 589832 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589836 )
      {
        v32 = 1;
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589840 )
          return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, Irp->Tail.Overlay.CurrentStackLocation, Irp, a3);
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589844 )
          return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, Irp, Irp, a3);
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 589904 )
        {
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 589916 )
          {
            if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 590400 )
            {
              MasterIrp = Irp->AssociatedIrp.MasterIrp;
              v37 = MasterIrp;
              if ( CurrentStackLocation->Parameters.Create.Options >= 0xC
                && CurrentStackLocation->Parameters.Read.Length >= 0x18 )
              {
                if ( MasterIrp->Type <= 1u )
                {
                  MdlAddress = (int)MasterIrp->MdlAddress;
                  if ( (MdlAddress & 1) != 0 )
                  {
                    v14 = *(_DWORD *)(&MasterIrp->Size + 1);
                    LODWORD(P) = v14 & 1;
                    v33 = v14 & 4;
                    v35 = v14 & 2;
                    v15 = ((_DWORD)P != 0 ? 0x1000 : 0) | (v33 != 0 ? 0x4000 : 0) | (v35 != 0 ? 0x2000 : 0);
                    if ( v15 )
                    {
                      if ( v15 != 12288 && v15 != 4096 )
                      {
                        if ( v15 != 28672 && v15 != 20480 )
                        {
LABEL_76:
                          v8 = -1073741811;
                          goto LABEL_46;
                        }
                        if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                          return (unsigned int)FsRtlpRequestExclusiveOplock(
                                                 Oplock,
                                                 (__int64)CurrentStackLocation,
                                                 (__int64)Irp,
                                                 v39,
                                                 v40,
                                                 ((_DWORD)P != 0 ? 0x1000 : 0) | (v33 != 0 ? 0x4000 : 0) | (v35 != 0 ? 0x2000 : 0) | 0x40u,
                                                 a5);
                        goto LABEL_45;
                      }
                      if ( a3
                        || IoIsOperationSynchronous(Irp)
                        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                      {
                        goto LABEL_45;
                      }
                      if ( (v35 != 0 ? 0x2000 : 0) != 0 )
                      {
                        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)273, 0x48uLL, 0x6F725346u);
                        v36 = PoolWithTag;
                        memset(PoolWithTag, 0, 0x48uLL);
                      }
                      v8 = FsRtlpRequestShareableOplock(
                             Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             ((*(_DWORD *)(&v37->Size + 1) & 1) << 12) | ((*(_DWORD *)(&v37->Size + 1) & 4) << 12) | ((*(_DWORD *)(&v37->Size + 1) & 2u) << 12),
                             (_QWORD *)((unsigned __int64)&v36 & -(__int64)(PoolWithTag != 0LL)),
                             1,
                             0,
                             a5);
                      goto LABEL_23;
                    }
                    v26 = *Oplock;
                    if ( *Oplock )
                    {
                      P = 0LL;
                      if ( (*(_DWORD *)(v26 + 144) & 0x10000) != 0 )
                      {
                        if ( FsRtlpCallerIsAtomicRequestor(v26, (__int64)CurrentStackLocation->FileObject, &P) )
                        {
                          v27 = P;
                          FsRtlpOplockDequeueRH((__int64)P);
                          v28 = v27[7];
                          v29 = (_QWORD *)v27[8];
                          if ( *(_QWORD **)(v28 + 8) != v27 + 7 || (_QWORD *)*v29 != v27 + 7 )
                            __fastfail(3u);
                          *v29 = v28;
                          *(_QWORD *)(v28 + 8) = v29;
                          if ( *(_QWORD *)(v26 + 120) == v26 + 120 )
                            *(_DWORD *)(v26 + 144) &= 0xFFFCFFFF;
                          if ( v27[5] )
                            FsRtlpClearOwnerThread(v26, (__int64)v27);
                          ExFreePoolWithTag(v27, 0);
                          FsRtlpComputeShareableOplockState(v26);
                          FsRtlpReleaseIrpsWaitingForRH(v30);
                        }
                      }
                    }
                    goto LABEL_89;
                  }
                  if ( (MdlAddress & 2) != 0 )
                  {
                    v24 = *(_DWORD *)(&MasterIrp->Size + 1);
                    LODWORD(P) = v24 & 1;
                    v34 = v24 & 2;
                    v25 = ((_DWORD)P != 0 ? 0x1000 : 0) | ((v24 & 4) != 0 ? 0x4000 : 0) | (v34 != 0 ? 0x2000 : 0);
                    if ( v25 && v25 != 4096 && v25 != 12288 && v25 != 20480 && v25 != 28672
                      || IoIsOperationSynchronous(Irp) )
                    {
                      goto LABEL_76;
                    }
                    if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                    {
                      LODWORD(P) = -(int)P;
                      if ( (v34 != 0 ? 0x2000 : 0) != 0 )
                      {
                        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)273, 0x48uLL, 0x6F725346u);
                        v36 = PoolWithTag;
                        memset(PoolWithTag, 0, 0x48uLL);
                      }
                      v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                             *Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             ((*(_DWORD *)(&v37->Size + 1) & 1) << 12) | ((*(_DWORD *)(&v37->Size + 1) & 4) << 12) | ((*(_DWORD *)(&v37->Size + 1) & 2u) << 12),
                             (_QWORD *)((unsigned __int64)&v36 & -(__int64)(PoolWithTag != 0LL)),
                             a5);
LABEL_23:
                      v16 = v36;
                      if ( v36 )
                      {
                        FsRtlpClearOwnerThread(*Oplock, (__int64)v36);
                        ExFreePoolWithTag(v16, 0);
                      }
                      return v8;
                    }
                    v31 = v37;
                    *(_QWORD *)&v37->Type = 0LL;
                    v31->MdlAddress = 0LL;
                    *(_QWORD *)&v31->Flags = 0LL;
                    *(_DWORD *)&v31->Type = 1572865;
                    Irp->IoStatus.Information = 24LL;
LABEL_89:
                    Irp->IoStatus.Status = 0;
                    IofCompleteRequest(Irp, 1);
                    return 0;
                  }
                }
                v8 = -1073741811;
                Irp->IoStatus.Status = -1073741811;
                goto LABEL_47;
              }
              v8 = -1073741789;
            }
            else
            {
              v8 = -1073741811;
            }
            Irp->IoStatus.Status = v8;
            goto LABEL_47;
          }
          v11 = 4;
          goto LABEL_43;
        }
        v32 = 0;
      }
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v32, a5);
    }
LABEL_43:
    v11 *= 2;
    goto LABEL_44;
  }
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
      return (unsigned int)FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 1u, 0, 0xC8u, a5);
  }
  else if ( (Options & 0x10000) != 0 )
  {
    v8 = FsRtlpAttachOplockKey(Irp);
    if ( !v8 )
    {
      v22 = (PFAST_MUTEX *)*Oplock;
      if ( !*Oplock )
      {
        v22 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v21, v20);
        *Oplock = (__int64)v22;
      }
      P = v22;
      ExAcquireFastMutexUnsafe(v22[19]);
      v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
      if ( !v8 )
      {
        v36 = ExAllocatePoolWithTag((POOL_TYPE)273, 0x48uLL, 0x6F725346u);
        memset(v36, 0, 0x48uLL);
        v8 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, &v36, 0, 0, a5);
        PoolWithTag = v36;
      }
      if ( PoolWithTag )
      {
        FsRtlpClearOwnerThread((__int64)v22, (__int64)PoolWithTag);
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      ExReleaseFastMutexUnsafe(v22[19]);
    }
  }
  return v8;
}
