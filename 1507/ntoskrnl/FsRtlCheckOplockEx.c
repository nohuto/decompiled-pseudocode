/*
 * XREFs of FsRtlCheckOplockEx @ 0x140070120
 * Callers:
 *     FsRtlCheckOplock @ 0x140070070 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400709B0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockKeysEqual @ 0x140070F7C (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockBreakToII @ 0x1400726F0 (FsRtlpOplockBreakToII.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140073E58 (FsRtlpCallerIsAtomicRequestor.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpOplockBreakToNone @ 0x1401313A8 (FsRtlpOplockBreakToNone.c)
 *     IoSetOplockKeyContext @ 0x14015AC04 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404A5730 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x1404A5750 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x1404A57D0 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1404A59F4 (FsRtlAcknowledgeEcp.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  __int64 v6; // r15
  char *v10; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  int v12; // r15d
  _QWORD *FileObjectExtension; // rcx
  struct _ECP_LIST *v14; // r13
  ULONG_PTR v15; // r8
  PVOID v17; // rdi
  __int64 v18; // r9
  UCHAR MajorFunction; // dl
  __int64 v20; // rcx
  int v21; // edx
  char v22; // r10
  char v23; // cl
  int v24; // eax
  char v25; // cl
  int v26; // eax
  ULONG Options; // eax
  bool v28; // zf
  unsigned int LowPart; // eax
  ULONG_PTR v30; // rcx
  unsigned __int32 v31; // eax
  __int64 v32; // rax
  ULONG_PTR v33; // rdi
  struct _KTHREAD *v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  _QWORD *v38; // rbx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  ULONG_PTR v42; // rbx
  unsigned __int32 v43; // eax
  int v44; // eax
  bool v45; // [rsp+50h] [rbp-A8h] BYREF
  char v46; // [rsp+51h] [rbp-A7h]
  ULONG v47; // [rsp+54h] [rbp-A4h]
  char v48; // [rsp+58h] [rbp-A0h]
  _BYTE v49[15]; // [rsp+59h] [rbp-9Fh] BYREF
  PVOID EcpContext; // [rsp+68h] [rbp-90h] BYREF
  PVOID P; // [rsp+70h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-78h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+88h] [rbp-70h] BYREF
  PVOID v55; // [rsp+90h] [rbp-68h]
  int v56; // [rsp+98h] [rbp-60h]
  int v57; // [rsp+9Ch] [rbp-5Ch]
  __int64 v58; // [rsp+A0h] [rbp-58h]
  GUID EcpType; // [rsp+A8h] [rbp-50h] BYREF

  v6 = (__int64)Context;
  BugCheckParameter2 = (ULONG_PTR)Context;
  P = PostIrpRoutine;
  *(_DWORD *)&v49[7] = 0;
  v10 = (char *)*Oplock;
  v55 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (Flags & 4) == 0 )
  {
    if ( (Flags & 0x10000000) != 0 )
    {
LABEL_7:
      FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
      if ( v10 != *Oplock )
      {
        v10 = (char *)*Oplock;
        v55 = *Oplock;
      }
      if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !*(_DWORD *)&v49[7] )
      {
        v45 = (Flags & 0x20000000) != 0;
        v48 = 1;
        v17 = P;
        while ( 1 )
        {
          v49[0] = 0;
          v18 = Flags & 0x10;
          v47 = Flags & 0x10;
          if ( (Flags & 0x10) != 0 || v45 )
            break;
          LODWORD(v15) = *((_DWORD *)v10 + 36);
          v56 = v15;
          MajorFunction = CurrentStackLocation->MajorFunction;
          if ( CurrentStackLocation->MajorFunction == 3 )
          {
            v25 = v48;
            if ( (v15 & 0xFFFF4FFE) == 0 )
              v25 = 0;
            v48 = v25;
          }
          if ( MajorFunction != 4 || (v15 & 0xFFFFDFFE) != 0 )
            break;
          v48 = 0;
LABEL_99:
          if ( v45 && (Flags & 0x20000000) == 0 )
          {
            v30 = *((_QWORD *)v10 + 19);
            CurrentThread = (struct _KTHREAD *)v30;
            *(_QWORD *)(v30 + 8) = 0LL;
            v31 = _InterlockedCompareExchange((volatile signed __int32 *)v30, 1, 0);
            if ( v31 )
            {
              ExpReleaseFastMutexContended(v30, v31);
              v30 = (ULONG_PTR)CurrentThread;
            }
            KeAbPostRelease(v30);
          }
          if ( !v49[0] )
            return *(_DWORD *)&v49[7];
        }
        if ( !v48 )
          goto LABEL_99;
        if ( !v45 )
        {
          BugCheckParameter2 = *((_QWORD *)v10 + 19);
          CurrentThread = KeGetCurrentThread();
          v20 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, v18);
          v58 = v20;
          v15 = BugCheckParameter2;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
          {
            ExpAcquireFastMutexContended(v15);
            v20 = v58;
            v15 = BugCheckParameter2;
          }
          if ( v20 )
            *(_BYTE *)(v20 + 26) |= 1u;
          *(_QWORD *)(v15 + 8) = CurrentThread;
          LODWORD(v18) = v47;
        }
        v45 = 1;
        v21 = *((_DWORD *)v10 + 36);
        if ( v21 == 1 )
          goto LABEL_99;
        LOBYTE(v15) = 0;
        v47 = v15;
        v49[1] = 0;
        v22 = 0;
        v46 = 0;
        *(_DWORD *)&v49[3] = 0;
        if ( (_DWORD)v18 )
        {
          *(_DWORD *)&v49[3] = 20480;
        }
        else if ( CurrentStackLocation->MajorFunction == 18 )
        {
LABEL_29:
          FsRtlpOplockCleanup((int)v10);
          if ( CurrentStackLocation->MajorFunction == 18 && (Flags & 0x20) != 0 )
            *(_DWORD *)&v49[3] = 0x2000;
          v22 = v46;
        }
        else if ( CurrentStackLocation->MajorFunction )
        {
          switch ( CurrentStackLocation->MajorFunction )
          {
            case 2u:
              if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                break;
              goto LABEL_29;
            case 3u:
              if ( (v21 & 8) != 0 )
              {
                v23 = v47;
              }
              else
              {
                v23 = 1;
                v49[1] = 1;
              }
              *(_DWORD *)&v49[3] = 0x4000;
              goto LABEL_34;
            case 4u:
              goto LABEL_70;
            case 6u:
              Options = CurrentStackLocation->Parameters.Create.Options;
              if ( Options != 20 )
              {
                switch ( Options )
                {
                  case 0xAu:
                  case 0xBu:
                  case 0x28u:
                    *(_DWORD *)&v49[3] = 0x2000;
                    v23 = v47;
                    if ( (v21 & 0xC) != 0 )
                    {
                      v22 = 1;
                      v46 = 1;
                    }
                    break;
                  case 0xDu:
                    v23 = v47;
                    if ( Irp->AssociatedIrp.MasterIrp->Type )
                      *(_DWORD *)&v49[3] = 0x2000;
                    break;
                  case 0x13u:
                  case 0x27u:
                    goto LABEL_70;
                  default:
                    goto LABEL_33;
                }
                goto LABEL_34;
              }
              v28 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
LABEL_69:
              if ( v28 )
                goto LABEL_70;
              break;
            case 9u:
              v23 = 1;
              v49[1] = 1;
              *(_DWORD *)&v49[3] = 0x4000;
              goto LABEL_34;
            case 0xDu:
              LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
              if ( LowPart > 0x98268 )
              {
                if ( LowPart == 623428 || LowPart == 639668 )
                  goto LABEL_98;
              }
              else
              {
                switch ( LowPart )
                {
                  case 0x98268u:
                    goto LABEL_98;
                  case 0x94264u:
                    LODWORD(v15) = (v21 & 8) == 0;
                    v47 = v15;
                    v49[1] = (v21 & 8) == 0;
                    *(_DWORD *)&v49[3] = 0x4000;
                    goto LABEL_33;
                  case 0x980C8u:
                  case 0x98208u:
LABEL_98:
                    v22 = 1;
                    v46 = 1;
                    *(_DWORD *)&v49[3] = 20480;
                    goto LABEL_33;
                }
              }
              break;
            case 0x11u:
              v28 = (v21 & 8) == 0;
              goto LABEL_69;
            case 0x15u:
              *(_DWORD *)&v49[3] = 0x2000;
              break;
            default:
              break;
          }
        }
        else if ( ((v21 & 0x7000) != 0
                && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) != 0
                || (v21 & 0x1E) != 0
                && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) != 0
                || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0)
               && ((v21 & 8) == 0
                || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) != 0
                || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) == 0) )
        {
          v24 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
          v57 = v24;
          if ( ((v24 & 0xFFFFFFFA) != 0 || v24 == 1)
            && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0 )
          {
            v23 = 1;
            v49[1] = 1;
            *(_DWORD *)&v49[3] = 0x4000;
LABEL_34:
            if ( v23 )
            {
              if ( (*((_DWORD *)v10 + 36) & 0x1F0FFDF) != 0x10
                && !(unsigned __int8)FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0LL) )
              {
                v26 = FsRtlpOplockBreakToII(
                        (_DWORD)v10,
                        (_DWORD)CurrentStackLocation,
                        (_DWORD)Irp,
                        Flags,
                        v6,
                        (__int64)CompletionRoutine,
                        (__int64)v17,
                        (__int64)&v45,
                        (__int64)v49);
LABEL_61:
                *(_DWORD *)&v49[7] = v26;
              }
            }
            else if ( v22
                   && ((*((_DWORD *)v10 + 36) & 0x1F0FFDF) == 0x10
                    || !(unsigned __int8)FsRtlpOplockKeysEqual(
                                           CurrentStackLocation->FileObject,
                                           *((_QWORD *)v10 + 1),
                                           0LL)) )
            {
              v26 = FsRtlpOplockBreakToNone(
                      (_DWORD)v10,
                      (_DWORD)CurrentStackLocation,
                      (_DWORD)Irp,
                      Flags,
                      v6,
                      (__int64)CompletionRoutine,
                      (__int64)v17,
                      (__int64)&v45,
                      (__int64)v49);
              goto LABEL_61;
            }
            if ( !*(_DWORD *)&v49[7] && (*(_DWORD *)&v49[3] & *((_DWORD *)v10 + 36)) != 0 )
              *(_DWORD *)&v49[7] = FsRtlpOplockBreakByCacheFlags(
                                     (int)v10,
                                     *(int *)&v49[3],
                                     v6,
                                     (__int64)CompletionRoutine,
                                     (__int64)v17,
                                     (__int64)&v45,
                                     (__int64)v49);
            goto LABEL_99;
          }
LABEL_70:
          v22 = 1;
          v46 = 1;
          *(_DWORD *)&v49[3] = 20480;
        }
LABEL_33:
        v23 = v47;
        goto LABEL_34;
      }
      return *(_DWORD *)&v49[7];
    }
    v12 = 0;
    if ( CurrentStackLocation->MajorFunction
      || (FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension) != 0LL
      && FileObjectExtension != IopRevocationExtension
      && (v32 = FileObjectExtension[7]) != 0
      && (*(_BYTE *)(v32 + 2) & 3) != 0
      || (EcpContext = 0LL,
          ExtraCreateParameter = 0LL,
          IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter),
          (v14 = ExtraCreateParameter) == 0LL) )
    {
LABEL_6:
      *(_DWORD *)&v49[7] = v12;
      v6 = BugCheckParameter2;
      goto LABEL_7;
    }
    EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
    if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
    {
      EcpType = GUID_ECP_OPLOCK_KEY;
      if ( FsRtlRemoveExtraCreateParameter(v14, &EcpType, &EcpContext, 0LL) )
        goto LABEL_6;
      v44 = 1;
    }
    else
    {
      v44 = 2;
    }
    v47 = v44;
    v12 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, (unsigned __int16)v44);
    if ( (_WORD)v47 == 1 )
      FsRtlFreeExtraCreateParameter(EcpContext);
    else
      FsRtlAcknowledgeEcp(EcpContext);
    if ( v12 == -1073741823 )
      v12 = 0;
    goto LABEL_6;
  }
  P = 0LL;
  if ( v10 )
  {
    v33 = *((_QWORD *)v10 + 19);
    v34 = KeGetCurrentThread();
    v35 = KeAbPreAcquire(v33, 0LL, 0LL, (__int64)Context);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v33, 0) )
      ExpAcquireFastMutexContended(v33);
    if ( v35 )
      *(_BYTE *)(v35 + 26) |= 1u;
    *(_QWORD *)(v33 + 8) = v34;
    if ( CurrentStackLocation->MajorFunction )
    {
      *(_DWORD *)&v49[7] = -1073741811;
    }
    else
    {
      if ( (*((_DWORD *)v10 + 36) & 0x10000) != 0
        && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v10, CurrentStackLocation->FileObject, &P) )
      {
        v38 = P;
        FsRtlpOplockDequeueRH((__int64)P, v36, v37);
        v39 = v38[7];
        v40 = (_QWORD *)v38[8];
        if ( *(_QWORD **)(v39 + 8) != v38 + 7 || (_QWORD *)*v40 != v38 + 7 )
          __fastfail(3u);
        *v40 = v39;
        *(_QWORD *)(v39 + 8) = v40;
        if ( *((char **)v10 + 15) == v10 + 120 )
          *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
        if ( v38[5] )
          FsRtlpClearOwnerThread(v10, v38);
        ExFreePoolWithTag(v38, 0);
        FsRtlpComputeShareableOplockState(v10);
        FsRtlpReleaseIrpsWaitingForRH(v41);
      }
      *(_DWORD *)&v49[7] = 0;
    }
    v42 = *((_QWORD *)v10 + 19);
    *(_QWORD *)(v42 + 8) = 0LL;
    v43 = _InterlockedCompareExchange((volatile signed __int32 *)v42, 1, 0);
    if ( v43 )
      ExpReleaseFastMutexContended(v42, v43);
    KeAbPostRelease(v42);
    return *(_DWORD *)&v49[7];
  }
  return 0;
}
