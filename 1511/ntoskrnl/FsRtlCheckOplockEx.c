/*
 * XREFs of FsRtlCheckOplockEx @ 0x140037050
 * Callers:
 *     FsRtlCheckOplock @ 0x1400378A0 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140037950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1400CC14C (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpOplockBreakToII @ 0x1400EAD5C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1400F4010 (FsRtlpOplockBreakToNone.c)
 *     IoSetOplockKeyContext @ 0x14012BCAC (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401ACD44 (FsRtlGetMarkHandleInfo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x1403F55B0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x1403F55D0 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x1403F5650 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404232E0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1404B5154 (FsRtlAcknowledgeEcp.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  NTSTATUS v9; // esi
  PFAST_MUTEX *v10; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS v12; // r12d
  _QWORD *FileObjectExtension; // rcx
  ULONG v14; // ecx
  ULONG v16; // r9d
  int v17; // r8d
  UCHAR MajorFunction; // dl
  int v19; // edx
  int v20; // r12d
  int v21; // eax
  char v22; // al
  int v23; // eax
  NTSTATUS v24; // eax
  ULONG Options; // eax
  bool v26; // zf
  unsigned int LowPart; // eax
  int v28; // r12d
  ULONG_PTR v29; // r12
  signed __int32 v30; // eax
  __int64 v31; // rax
  int v32; // eax
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _BYTE v37[3]; // [rsp+51h] [rbp-A7h] BYREF
  ULONG v38; // [rsp+54h] [rbp-A4h]
  char v39; // [rsp+58h] [rbp-A0h] BYREF
  char v40; // [rsp+59h] [rbp-9Fh]
  unsigned __int8 v41; // [rsp+5Ah] [rbp-9Eh]
  int v42; // [rsp+5Ch] [rbp-9Ch]
  NTSTATUS v43; // [rsp+60h] [rbp-98h]
  PVOID EcpContext; // [rsp+68h] [rbp-90h] BYREF
  int v45; // [rsp+70h] [rbp-88h]
  __int64 v46; // [rsp+78h] [rbp-80h]
  __int64 v47; // [rsp+80h] [rbp-78h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+88h] [rbp-70h] BYREF
  PVOID v49; // [rsp+90h] [rbp-68h]
  PVOID P; // [rsp+98h] [rbp-60h] BYREF
  int v51; // [rsp+A0h] [rbp-58h]
  int v52; // [rsp+A4h] [rbp-54h]
  GUID EcpType; // [rsp+A8h] [rbp-50h] BYREF

  v47 = (__int64)Context;
  v46 = (__int64)PostIrpRoutine;
  v9 = 0;
  v43 = 0;
  v10 = (PFAST_MUTEX *)*Oplock;
  v49 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
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
           && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v10, CurrentStackLocation->FileObject, &P) )
    {
      v33 = P;
      FsRtlpOplockDequeueRH(P);
      v34 = v33[7];
      v35 = (_QWORD *)v33[8];
      if ( *(_QWORD **)(v34 + 8) != v33 + 7 || (_QWORD *)*v35 != v33 + 7 )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      if ( v10[15] == (PFAST_MUTEX)(v10 + 15) )
        *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
      if ( v33[5] )
        FsRtlpClearOwnerThread(v10, v33);
      ExFreePoolWithTag(v33, 0);
      FsRtlpComputeShareableOplockState(v10);
      FsRtlpReleaseIrpsWaitingForRH(v36);
    }
    ExReleaseFastMutexUnsafe(v10[19]);
    return v9;
  }
  if ( (Flags & 0x10000000) == 0 )
  {
    v12 = 0;
    if ( CurrentStackLocation->MajorFunction )
      goto LABEL_8;
    FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( FileObjectExtension != IopRevocationExtension )
      {
        v31 = FileObjectExtension[7];
        if ( v31 )
        {
          if ( (*(_BYTE *)(v31 + 2) & 3) != 0 )
            goto LABEL_8;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
    if ( !ExtraCreateParameter )
      goto LABEL_8;
    EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
    if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
    {
      EcpType = GUID_ECP_OPLOCK_KEY;
      if ( FsRtlRemoveExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
LABEL_8:
        v43 = v12;
        goto LABEL_9;
      }
      v32 = 1;
    }
    else
    {
      v32 = 2;
    }
    v38 = v32;
    v12 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, (unsigned __int16)v32);
    if ( (_WORD)v38 == 1 )
      FsRtlFreeExtraCreateParameter(EcpContext);
    else
      FsRtlAcknowledgeEcp(EcpContext);
    if ( v12 == -1073741823 )
      v12 = 0;
    goto LABEL_8;
  }
LABEL_9:
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (PFAST_MUTEX *)*Oplock;
    v49 = *Oplock;
  }
  if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !v43 )
  {
    v37[0] = (Flags & 0x20000000) != 0;
    v41 = 1;
    while ( 1 )
    {
      v39 = 0;
      v16 = Flags & 0x10;
      v38 = v16;
      if ( (Flags & 0x10) != 0 || v37[0] )
        break;
      v17 = *((_DWORD *)v10 + 36);
      v51 = v17;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( CurrentStackLocation->MajorFunction == 3 )
      {
        v14 = v41;
        if ( (v17 & 0xFFFF4FFE) == 0 )
          v14 = 0;
        v41 = v14;
      }
      if ( MajorFunction != 4 || (v17 & 0xFFFFDFFE) != 0 )
        break;
      v41 = 0;
LABEL_105:
      if ( v37[0] && (Flags & 0x20000000) == 0 )
      {
        v29 = (ULONG_PTR)v10[19];
        *(_QWORD *)(v29 + 8) = 0LL;
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)v29, 1, 0);
        if ( v30 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v29, v30);
        KeAbPostRelease(v29);
      }
      if ( !v39 )
        return v43;
    }
    if ( !v41 )
      goto LABEL_105;
    if ( !v37[0] )
    {
      ExAcquireFastMutexUnsafe(v10[19]);
      v16 = v38;
    }
    v37[0] = 1;
    v19 = *((_DWORD *)v10 + 36);
    v45 = v19;
    if ( v19 == 1 )
      goto LABEL_105;
    LOBYTE(v14) = 0;
    v38 = v14;
    v40 = 0;
    v20 = 0;
    v42 = 0;
    if ( v16 )
    {
      v20 = 20480;
      v42 = 20480;
      goto LABEL_36;
    }
    v21 = CurrentStackLocation->MajorFunction;
    if ( v21 == 18 )
    {
LABEL_33:
      FsRtlpOplockCleanup(v10, (__int64)CurrentStackLocation);
      if ( CurrentStackLocation->MajorFunction == 18 )
      {
        if ( (Flags & 0x20) != 0 )
        {
LABEL_82:
          v20 = 0x2000;
LABEL_83:
          v42 = v20;
        }
        goto LABEL_35;
      }
      v22 = v38;
LABEL_85:
      v14 = 0;
    }
    else
    {
      if ( !CurrentStackLocation->MajorFunction )
      {
        if ( (v19 & 0x7000) != 0
          && (v14 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16), (v14 & 0xFFEDFE7F) != 0)
          || (v19 & 0x1E) != 0
          && (v14 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16), (v14 & 0xFFEFFE7F) != 0)
          || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0 )
        {
          if ( (v19 & 8) == 0
            || (v14 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16), (v14 & 0xFFEDFE56) != 0)
            || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) == 0 )
          {
            v23 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
            v52 = v23;
            if ( ((v23 & 0xFFFFFFFA) != 0 || v23 == 1)
              && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0 )
            {
LABEL_50:
              v22 = 1;
              v40 = 1;
              v20 = 0x4000;
              v42 = 0x4000;
              v14 = 0;
              goto LABEL_37;
            }
LABEL_68:
            LOBYTE(v14) = 1;
            v20 = 20480;
            v42 = 20480;
LABEL_36:
            v22 = v38;
            goto LABEL_37;
          }
        }
LABEL_35:
        v14 = 0;
        goto LABEL_36;
      }
      if ( v21 != 3 )
      {
        switch ( CurrentStackLocation->MajorFunction )
        {
          case 2u:
            if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
              goto LABEL_33;
            goto LABEL_35;
          case 3u:
          case 5u:
          case 7u:
          case 8u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
          case 0x12u:
          case 0x13u:
          case 0x14u:
            goto LABEL_35;
          case 4u:
            goto LABEL_68;
          case 6u:
            Options = CurrentStackLocation->Parameters.Create.Options;
            if ( Options == 20 )
            {
              v26 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
              goto LABEL_76;
            }
            switch ( Options )
            {
              case 0xAu:
              case 0xBu:
              case 0x28u:
                v20 = 0x2000;
                v42 = 0x2000;
                v22 = v38;
                if ( (v19 & 0xC) == 0 )
                  goto LABEL_85;
                LOBYTE(v14) = 1;
                break;
              case 0xDu:
                v22 = v38;
                if ( !Irp->AssociatedIrp.MasterIrp->Type )
                  goto LABEL_85;
                v20 = 0x2000;
                v42 = 0x2000;
                v14 = 0;
                break;
              case 0x13u:
              case 0x27u:
                goto LABEL_68;
              default:
                goto LABEL_35;
            }
            goto LABEL_37;
          case 9u:
            goto LABEL_50;
          case 0xDu:
            LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
            if ( LowPart > 0x98208 )
            {
              if ( LowPart == 623208 || LowPart == 623428 )
                goto LABEL_68;
              v26 = LowPart == 639668;
LABEL_76:
              if ( v26 )
                goto LABEL_68;
            }
            else
            {
              switch ( LowPart )
              {
                case 0x98208u:
                  goto LABEL_68;
                case 0x900FCu:
                  if ( (FsRtlGetMarkHandleInfo(Irp) & 0x4000) == 0 )
                    goto LABEL_35;
                  v20 = 0x2000;
                  v42 = 0x2000;
                  v22 = v38;
                  if ( (v45 & 0xC) != 0 )
                  {
                    LOBYTE(v14) = 1;
                    goto LABEL_37;
                  }
                  goto LABEL_85;
                case 0x94264u:
                  v28 = (unsigned __int8)v38;
                  if ( (v19 & 8) == 0 )
                    v28 = 1;
                  v38 = v28;
                  v40 = v28;
                  v20 = 0x4000;
                  goto LABEL_83;
                case 0x980C8u:
                  goto LABEL_68;
              }
            }
            break;
          case 0x11u:
            v26 = (v19 & 8) == 0;
            goto LABEL_76;
          case 0x15u:
            goto LABEL_82;
          default:
            goto LABEL_36;
        }
        goto LABEL_35;
      }
      if ( (v19 & 8) != 0 )
      {
        v22 = v38;
      }
      else
      {
        v22 = 1;
        v40 = 1;
      }
      v20 = 0x4000;
      v42 = 0x4000;
    }
LABEL_37:
    if ( v22 )
    {
      if ( ((_DWORD)v10[18] & 0x1F0FFDF) != 0x10
        && !(unsigned __int8)FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL) )
      {
        v24 = FsRtlpOplockBreakToII(
                (_DWORD)v10,
                (_DWORD)CurrentStackLocation,
                (_DWORD)Irp,
                Flags,
                v47,
                (__int64)CompletionRoutine,
                v46,
                (__int64)v37,
                (__int64)&v39);
LABEL_60:
        v43 = v24;
      }
    }
    else if ( (_BYTE)v14
           && (((_DWORD)v10[18] & 0x1F0FFDF) == 0x10
            || !(unsigned __int8)FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL)) )
    {
      v24 = FsRtlpOplockBreakToNone(
              (_DWORD)v10,
              (_DWORD)CurrentStackLocation,
              (_DWORD)Irp,
              Flags,
              v47,
              (__int64)CompletionRoutine,
              v46,
              (__int64)v37,
              (__int64)&v39);
      goto LABEL_60;
    }
    if ( !v43 && ((_DWORD)v10[18] & v20) != 0 )
      v43 = FsRtlpOplockBreakByCacheFlags(
              (int)v10,
              v20,
              v47,
              (__int64)CompletionRoutine,
              v46,
              (__int64)v37,
              (__int64)&v39);
    goto LABEL_105;
  }
  return v43;
}
