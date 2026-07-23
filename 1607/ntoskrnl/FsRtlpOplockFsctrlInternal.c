/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1404696E8
 * Callers:
 *     FsRtlOplockFsctrl @ 0x1404696B4 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x1404696D0 (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x14061E5B8 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14007701C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     IoIsOperationSynchronous @ 0x1400779E0 (IoIsOperationSynchronous.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpAttachOplockKey @ 0x14007BA34 (FsRtlpAttachOplockKey.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400A0EB4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401B91EC (FsRtlpAcknowledgeOplockBreak.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404695E8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14061E758 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14061E88C (FsRtlpOplockBreakNotify.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, __int64 a3, int a4, unsigned int a5)
{
  int v5; // r9d
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
  PFAST_MUTEX *v19; // rsi
  unsigned int v21; // r13d
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
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
  v5 = a3;
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
      v21 = v11 | 0x40;
      if ( (_DWORD)a3 == 1
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
                               v21,
                               a5);
      }
LABEL_49:
      v8 = -1073741598;
LABEL_50:
      Irp->IoStatus.Status = v8;
LABEL_51:
      IofCompleteRequest(Irp, 1);
      return v8;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589828 )
    {
      if ( (_DWORD)a3
        || IoIsOperationSynchronous(Irp)
        || (Irp->Flags & 0x40) != 0
        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
        v8 = -1073741598;
        Irp->IoStatus.Status = -1073741598;
        goto LABEL_51;
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
          return (unsigned int)FsRtlpOpBatchBreakClosePending(
                                 *Oplock,
                                 Irp->Tail.Overlay.CurrentStackLocation,
                                 Irp,
                                 (unsigned int)a3);
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589844 )
          return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, Irp, Irp, (unsigned int)a3);
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
                          goto LABEL_50;
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
                        goto LABEL_49;
                      }
                      if ( v5
                        || IoIsOperationSynchronous(Irp)
                        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                      {
                        goto LABEL_49;
                      }
                      if ( (v35 != 0 ? 0x2000 : 0) != 0 )
                      {
                        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
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
                    v24 = *Oplock;
                    if ( *Oplock )
                    {
                      P = 0LL;
                      if ( (*(_DWORD *)(v24 + 144) & 0x10000) != 0 )
                      {
                        if ( FsRtlpCallerIsAtomicRequestor(v24, (__int64)CurrentStackLocation->FileObject, &P) )
                        {
                          v27 = P;
                          FsRtlpOplockDequeueRH((__int64)P, v25, v26);
                          v28 = v27[7];
                          v29 = (_QWORD *)v27[8];
                          if ( *(_QWORD **)(v28 + 8) != v27 + 7 || (_QWORD *)*v29 != v27 + 7 )
                            __fastfail(3u);
                          *v29 = v28;
                          *(_QWORD *)(v28 + 8) = v29;
                          if ( *(_QWORD *)(v24 + 120) == v24 + 120 )
                            *(_DWORD *)(v24 + 144) &= 0xFFFCFFFF;
                          if ( v27[5] )
                            FsRtlpClearOwner(v24, (__int64)v27);
                          ExFreePoolWithTag(v27, 0);
                          FsRtlpComputeShareableOplockState(v24);
                          FsRtlpReleaseIrpsWaitingForRH(v30);
                        }
                      }
                    }
                    goto LABEL_89;
                  }
                  if ( (MdlAddress & 2) != 0 )
                  {
                    v22 = *(_DWORD *)(&MasterIrp->Size + 1);
                    LODWORD(P) = v22 & 1;
                    v34 = v22 & 2;
                    v23 = ((_DWORD)P != 0 ? 0x1000 : 0) | ((v22 & 4) != 0 ? 0x4000 : 0) | (v34 != 0 ? 0x2000 : 0);
                    if ( v23 && v23 != 4096 && v23 != 12288 && v23 != 20480 && v23 != 28672
                      || IoIsOperationSynchronous(Irp) )
                    {
                      goto LABEL_76;
                    }
                    if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                    {
                      LODWORD(P) = -(int)P;
                      if ( (v34 != 0 ? 0x2000 : 0) != 0 )
                      {
                        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
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
                        FsRtlpClearOwner(*Oplock, (__int64)v36);
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
                goto LABEL_51;
              }
              v8 = -1073741789;
            }
            else
            {
              v8 = -1073741811;
            }
            Irp->IoStatus.Status = v8;
            goto LABEL_51;
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
    if ( (_DWORD)a3 != 1
      || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
      || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
    {
      return (unsigned int)-1073741598;
    }
    v8 = FsRtlpAttachOplockKey(Irp, (__int64)Irp, a3, (unsigned int)a3);
    if ( !v8 )
      return (unsigned int)FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 1u, 0, 0xC8u, a5);
  }
  else if ( (Options & 0x10000) != 0 )
  {
    v8 = FsRtlpAttachOplockKey(Irp, (__int64)Irp, a3, (unsigned int)a3);
    if ( !v8 )
    {
      v19 = (PFAST_MUTEX *)*Oplock;
      if ( !*Oplock )
      {
        v19 = (PFAST_MUTEX *)FsRtlpAllocateOplock();
        *Oplock = (__int64)v19;
      }
      P = v19;
      ExAcquireFastMutexUnsafe(v19[19]);
      v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
      if ( !v8 )
      {
        v36 = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
        memset(v36, 0, 0x48uLL);
        v8 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, &v36, 0, 0, a5);
        PoolWithTag = v36;
      }
      if ( PoolWithTag )
      {
        FsRtlpClearOwner((__int64)v19, (__int64)PoolWithTag);
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      ExReleaseFastMutexUnsafe(v19[19]);
    }
  }
  return v8;
}
