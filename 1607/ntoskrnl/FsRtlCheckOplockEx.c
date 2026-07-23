/*
 * XREFs of FsRtlCheckOplockEx @ 0x14007A100
 * Callers:
 *     FsRtlCheckOplock @ 0x14007A050 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14007701C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14007A9E0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpOplockBreakToII @ 0x14007B80C (FsRtlpOplockBreakToII.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400A0EB4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToNone @ 0x1400B3464 (FsRtlpOplockBreakToNone.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     IoSetOplockKeyContext @ 0x1401336D0 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401B8FF4 (FsRtlGetMarkHandleInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14046A400 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x14046A420 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x14046A4A0 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x14046A594 (FsRtlAcknowledgeEcp.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  NTSTATUS v9; // r14d
  PFAST_MUTEX *v10; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  NTSTATUS v12; // esi
  _QWORD *FileObjectExtension; // rcx
  struct _ECP_LIST *v14; // r12
  _BOOL8 v15; // r8
  int v17; // edx
  UCHAR MajorFunction; // cl
  __int64 v19; // rdi
  ULONG_PTR v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  int v23; // edi
  int v24; // eax
  char v25; // al
  char v26; // cl
  __int64 v27; // rsi
  char v28; // al
  int v29; // eax
  ULONG Options; // eax
  bool v31; // zf
  unsigned int LowPart; // eax
  ULONG_PTR v33; // rdi
  signed __int32 v34; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _BYTE v43[15]; // [rsp+51h] [rbp-B7h] BYREF
  int v44; // [rsp+60h] [rbp-A8h]
  NTSTATUS v45; // [rsp+64h] [rbp-A4h]
  __int64 v46; // [rsp+68h] [rbp-A0h]
  PVOID EcpContext; // [rsp+70h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-90h]
  struct _IO_STACK_LOCATION *v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+98h] [rbp-70h] BYREF
  PVOID v53; // [rsp+A0h] [rbp-68h]
  int v54; // [rsp+A8h] [rbp-60h]
  GUID EcpType; // [rsp+B0h] [rbp-58h] BYREF

  v46 = (__int64)Context;
  v50 = (__int64)PostIrpRoutine;
  v9 = 0;
  v45 = 0;
  v10 = (PFAST_MUTEX *)*Oplock;
  v53 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v49 = CurrentStackLocation;
  if ( (Flags & 4) != 0 )
  {
    P = 0LL;
    if ( !v10 )
      return 0;
    ExAcquireFastMutexUnsafe(v10[19]);
    if ( CurrentStackLocation->MajorFunction )
    {
      v9 = -1073741811;
    }
    else if ( ((_DWORD)v10[18] & 0x10000) != 0
           && FsRtlpCallerIsAtomicRequestor((__int64)v10, (__int64)CurrentStackLocation->FileObject, &P) )
    {
      v39 = P;
      FsRtlpOplockDequeueRH((__int64)P, v37, v38);
      v40 = v39[7];
      v41 = (_QWORD *)v39[8];
      if ( *(_QWORD **)(v40 + 8) != v39 + 7 || (_QWORD *)*v41 != v39 + 7 )
        __fastfail(3u);
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
      if ( v10[15] == (PFAST_MUTEX)(v10 + 15) )
        *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
      if ( v39[5] )
        FsRtlpClearOwner(v10, v39);
      ExFreePoolWithTag(v39, 0);
      FsRtlpComputeShareableOplockState((__int64)v10);
      FsRtlpReleaseIrpsWaitingForRH(v42);
    }
    ExReleaseFastMutexUnsafe(v10[19]);
    return v9;
  }
  if ( (Flags & 0x10000000) == 0 )
  {
    v12 = 0;
    if ( CurrentStackLocation->MajorFunction )
      goto LABEL_9;
    FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( FileObjectExtension != IopRevocationExtension )
      {
        v35 = FileObjectExtension[7];
        if ( v35 )
        {
          if ( (*(_BYTE *)(v35 + 2) & 3) != 0 )
            goto LABEL_9;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
    v14 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v14, &EcpType, &EcpContext, 0LL) )
          goto LABEL_8;
        v36 = 1;
      }
      else
      {
        v36 = 2;
      }
      *(_DWORD *)&v43[7] = v36;
      CurrentStackLocation = v49;
      v12 = IoSetOplockKeyContext(v49->FileObject, EcpContext, (unsigned __int16)v36);
      if ( *(_WORD *)&v43[7] == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v12 == -1073741823 )
        v12 = 0;
      goto LABEL_9;
    }
LABEL_8:
    CurrentStackLocation = v49;
LABEL_9:
    v45 = v12;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (PFAST_MUTEX *)*Oplock;
    v53 = *Oplock;
  }
  if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !v45 )
  {
    v43[0] = (Flags & 0x20000000) != 0;
    v43[1] = 1;
    while ( 1 )
    {
      v43[3] = 0;
      if ( (Flags & 0x10) != 0 || v43[0] )
        break;
      v17 = *((_DWORD *)v10 + 36);
      v54 = v17;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( CurrentStackLocation->MajorFunction == 3 )
      {
        v25 = v43[1];
        if ( (v17 & 0xFFFF4FFE) == 0 )
          v25 = 0;
        v43[1] = v25;
      }
      if ( MajorFunction != 4 || (v17 & 0xFFFFDFFE) != 0 )
        break;
      v43[1] = 0;
LABEL_110:
      if ( v43[0] && (Flags & 0x20000000) == 0 )
      {
        v33 = (ULONG_PTR)v10[19];
        *(_QWORD *)(v33 + 8) = 0LL;
        v34 = _InterlockedCompareExchange((volatile signed __int32 *)v33, 1, 0);
        if ( v34 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v33, v34);
        KeAbPostRelease(v33);
      }
      if ( !v43[3] )
        return v45;
    }
    if ( !v43[1] )
      goto LABEL_110;
    if ( !v43[0] )
    {
      BugCheckParameter2 = (ULONG_PTR)v10[19];
      *(_QWORD *)&v43[7] = KeGetCurrentThread();
      v19 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v20 = BugCheckParameter2;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
      {
        ExpAcquireFastMutexContended(v20);
        v20 = BugCheckParameter2;
      }
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      *(_QWORD *)(v20 + 8) = *(_QWORD *)&v43[7];
    }
    v43[0] = 1;
    v21 = *((unsigned int *)v10 + 36);
    LODWORD(BugCheckParameter2) = v21;
    if ( (_DWORD)v21 == 1 )
      goto LABEL_110;
    LOBYTE(v15) = 0;
    *(_DWORD *)&v43[7] = v15;
    v43[2] = 0;
    v22 = 0;
    v23 = 0;
    v44 = 0;
    if ( (Flags & 0x10) != 0 )
    {
      v23 = 20480;
      v44 = 20480;
      goto LABEL_41;
    }
    v24 = CurrentStackLocation->MajorFunction;
    if ( v24 == 18 )
    {
LABEL_38:
      FsRtlpOplockCleanup((int)v10);
      if ( CurrentStackLocation->MajorFunction == 18 )
      {
        if ( (Flags & 0x20) != 0 )
        {
LABEL_88:
          v23 = 0x2000;
LABEL_89:
          v44 = v23;
        }
        goto LABEL_40;
      }
      v26 = v43[7];
LABEL_91:
      v22 = 0;
    }
    else
    {
      if ( !CurrentStackLocation->MajorFunction )
      {
        if ( ((v21 & 0x7000) != 0
           && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) != 0
           || (v21 & 0x1E) != 0 && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) != 0
           || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0)
          && ((v21 & 8) == 0
           || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) != 0
           || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) == 0) )
        {
          v29 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
          LODWORD(v49) = v29;
          if ( ((v29 & 0xFFFFFFFA) != 0 || v29 == 1)
            && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0 )
          {
LABEL_58:
            v26 = 1;
            v43[2] = 1;
            v23 = 0x4000;
            v44 = 0x4000;
            v22 = 0;
            goto LABEL_42;
          }
LABEL_72:
          v22 = 1;
          v23 = 20480;
          v44 = 20480;
LABEL_41:
          v26 = v43[7];
          goto LABEL_42;
        }
LABEL_40:
        v22 = 0;
        goto LABEL_41;
      }
      if ( v24 != 3 )
      {
        switch ( CurrentStackLocation->MajorFunction )
        {
          case 2u:
            if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
              goto LABEL_38;
            goto LABEL_40;
          case 4u:
            goto LABEL_72;
          case 6u:
            Options = CurrentStackLocation->Parameters.Create.Options;
            if ( Options == 20 )
            {
              v31 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
              goto LABEL_81;
            }
            if ( Options == 19 )
              goto LABEL_72;
            switch ( Options )
            {
              case 0xAu:
              case 0xBu:
              case 0x28u:
              case 0x41u:
                v23 = 0x2000;
                v44 = 0x2000;
                v26 = v43[7];
                if ( (v21 & 0xC) == 0 )
                  goto LABEL_91;
                v22 = 1;
                break;
              case 0xDu:
              case 0x40u:
                v26 = v43[7];
                if ( !Irp->AssociatedIrp.MasterIrp->Type )
                  goto LABEL_91;
                v23 = 0x2000;
                v44 = 0x2000;
                v22 = 0;
                break;
              case 0x27u:
                goto LABEL_72;
              default:
                goto LABEL_40;
            }
            goto LABEL_42;
          case 9u:
            goto LABEL_58;
          case 0xDu:
            LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
            if ( LowPart > 0x98268 )
            {
              if ( LowPart == 623428 || LowPart == 623592 )
                goto LABEL_72;
              v31 = LowPart == 639668;
LABEL_81:
              if ( v31 )
                goto LABEL_72;
            }
            else
            {
              switch ( LowPart )
              {
                case 0x98268u:
                  goto LABEL_72;
                case 0x900FCu:
                  if ( (FsRtlGetMarkHandleInfo(Irp, v21, v15, 0x140000000uLL) & 0x4000) == 0 )
                    goto LABEL_40;
                  v23 = 0x2000;
                  v44 = 0x2000;
                  v26 = v43[7];
                  if ( (BugCheckParameter2 & 0xC) != 0 )
                  {
                    v22 = 1;
                    goto LABEL_42;
                  }
                  goto LABEL_91;
                case 0x94264u:
                  v15 = (v21 & 8) == 0;
                  *(_DWORD *)&v43[7] = (v21 & 8) == 0;
                  v43[2] = (v21 & 8) == 0;
                  v23 = 0x4000;
                  goto LABEL_89;
                case 0x980C8u:
                case 0x98208u:
                  goto LABEL_72;
              }
            }
            break;
          case 0x11u:
            v31 = (v21 & 8) == 0;
            goto LABEL_81;
          case 0x15u:
            goto LABEL_88;
          default:
            goto LABEL_40;
        }
        goto LABEL_40;
      }
      if ( (v21 & 8) != 0 )
      {
        v26 = v43[7];
      }
      else
      {
        v26 = 1;
        v43[2] = 1;
      }
      v23 = 0x4000;
      v44 = 0x4000;
      v22 = 0;
    }
LABEL_42:
    if ( v26 )
    {
      if ( ((_DWORD)v10[18] & 0x1F0FFDF) != 0x10 )
      {
        v28 = FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL);
        v27 = v46;
        if ( !v28 )
          v45 = FsRtlpOplockBreakToII(
                  (_DWORD)v10,
                  (_DWORD)CurrentStackLocation,
                  (_DWORD)Irp,
                  Flags,
                  v46,
                  (__int64)CompletionRoutine,
                  v50,
                  (__int64)v43,
                  (__int64)&v43[3]);
        goto LABEL_45;
      }
    }
    else if ( v22
           && (((_DWORD)v10[18] & 0x1F0FFDF) == 0x10
            || !(unsigned __int8)FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL)) )
    {
      v27 = v46;
      v45 = FsRtlpOplockBreakToNone(
              (_DWORD)v10,
              (_DWORD)CurrentStackLocation,
              (_DWORD)Irp,
              Flags,
              v46,
              (__int64)CompletionRoutine,
              v50,
              (__int64)v43,
              (__int64)&v43[3]);
      goto LABEL_45;
    }
    v27 = v46;
LABEL_45:
    if ( !v45 && ((_DWORD)v10[18] & v23) != 0 )
      v45 = FsRtlpOplockBreakByCacheFlags(
              (__int64)v10,
              (__int64)CurrentStackLocation,
              Irp,
              Flags,
              v23,
              v27,
              (__int64)CompletionRoutine,
              v50,
              v43,
              (__int64)&v43[3]);
    goto LABEL_110;
  }
  return v45;
}
