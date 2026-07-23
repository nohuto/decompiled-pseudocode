/*
 * XREFs of ObInsertObjectEx @ 0x140487BC0
 * Callers:
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x140436B68 (NtDuplicateToken.c)
 *     NtCreateSemaphore @ 0x140451360 (NtCreateSemaphore.c)
 *     NtCreateTimer @ 0x140451ED0 (NtCreateTimer.c)
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     NtCreateEvent @ 0x140488270 (NtCreateEvent.c)
 *     NtCreateMutant @ 0x1404B02E0 (NtCreateMutant.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     EtwpAddUmRegEntry @ 0x1404CEB68 (EtwpAddUmRegEntry.c)
 *     SeCopyClientToken @ 0x1404D25E4 (SeCopyClientToken.c)
 *     NtCreateWaitCompletionPacket @ 0x14052FBA0 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x140486000 (PsReferenceImpersonationTokenEx.c)
 *     ObpAssignSecurity @ 0x140486910 (ObpAssignSecurity.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     ObpChargeQuotaForObject @ 0x1404CF634 (ObpChargeQuotaForObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 *     SeObjectCreateSaclAccessBits @ 0x14053DF24 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        struct _ACCESS_STATE *a2,
        ACCESS_MASK a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _SLIST_ENTRY *v7; // rdi
  char *v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // al
  int Handle; // esi
  struct _OBJECT_TYPE *v15; // r14
  _BYTE *v16; // rax
  char *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  struct _KTHREAD *v24; // rcx
  unsigned __int64 *Process; // rsi
  __int64 v26; // r9
  ULONG_PTR v27; // r14
  struct _KTHREAD *v28; // r15
  unsigned __int64 *v29; // rsi
  __int64 v30; // r9
  __int64 v31; // r14
  __int16 v32; // ax
  _SLIST_ENTRY *v33; // rsi
  char *v34; // r15
  int v35; // ecx
  int v36; // esi
  _SLIST_ENTRY *v37; // rcx
  int v38; // ecx
  _SLIST_ENTRY *v39; // rax
  int v40; // r14d
  __int64 v41; // r8
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // r14
  __int64 v46; // rdx
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  __int64 v49; // rtt
  struct _KTHREAD *v50; // rcx
  __int16 v51; // ax
  _SLIST_ENTRY *v52; // rcx
  struct _KPRCB *v53; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  PACCESS_TOKEN ClientToken; // rcx
  __int64 v56; // [rsp+40h] [rbp-248h]
  char PreviousMode; // [rsp+50h] [rbp-238h]
  char v58; // [rsp+51h] [rbp-237h] BYREF
  bool v59; // [rsp+52h] [rbp-236h] BYREF
  ACCESS_MASK v60; // [rsp+54h] [rbp-234h]
  int v61; // [rsp+58h] [rbp-230h]
  char *v62; // [rsp+60h] [rbp-228h]
  _QWORD *v63; // [rsp+68h] [rbp-220h]
  __int64 v64; // [rsp+78h] [rbp-210h]
  struct _OBJECT_TYPE *v65; // [rsp+80h] [rbp-208h]
  __int128 v66; // [rsp+88h] [rbp-200h] BYREF
  ULONG_PTR v67; // [rsp+98h] [rbp-1F0h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-1E8h]
  _QWORD v69[20]; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v70[28]; // [rsp+150h] [rbp-138h] BYREF

  v7 = (_SLIST_ENTRY *)*(Object - 2);
  v11 = 0LL;
  v12 = *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v60 = a3;
  v61 = a4;
  v13 = *((_BYTE *)Object - 22);
  Handle = 0;
  v64 = a6;
  v62 = 0LL;
  v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v12];
  v65 = v15;
  if ( (v13 & 2) != 0 )
  {
    v16 = (_BYTE *)ObpInfoMaskToOffset[v13 & 3];
    v17 = (char *)((char *)(Object - 6) - v16);
    if ( Object - 6 != (_QWORD *)v16 )
    {
      v11 = v17 + 8;
      v62 = v17 + 8;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v19 = (unsigned __int8)CurrentThread->gap0[10];
  PreviousMode = CurrentThread->PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v11 && !v7[2].Next )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, Object, a3, 0LL, (int)a4 + 1, v7->Next, (_BYTE)v19, 0LL, a6, a7);
    }
    Next = v7[2].Next;
    if ( Next )
    {
      LOBYTE(v19) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v7[1].Next), v19);
      v7[2].Next = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
    {
      ++P->FreeMisses;
      P = CurrentPrcb->PPLookasideList[4].L;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v7);
        ObfDereferenceObject(Object);
        return (unsigned int)Handle;
      }
    }
    RtlpInterlockedPushEntrySList(&P->ListHead, v7);
    goto LABEL_15;
  }
  if ( !a2 )
  {
    a2 = (struct _ACCESS_STATE *)v69;
    v24 = KeGetCurrentThread();
    Process = (unsigned __int64 *)v24->ApcState.Process;
    v68 = Process[93];
    if ( v24 )
      *(_QWORD *)&v66 = PsReferenceImpersonationTokenEx((__int64)v24, 0, &v58, &v59, (int *)&v66 + 2, 0LL);
    else
      *(_QWORD *)&v66 = 0LL;
    v63 = Process + 107;
    v27 = ObFastReferenceObject((signed __int64 *)Process + 107);
    if ( !v27 )
    {
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v29 = Process + 91;
      v31 = KeAbPreAcquire((ULONG_PTR)v29, 0LL, 0LL, v26);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v29, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v29, v31, (ULONG_PTR)v29, v30);
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
      v27 = ObFastReferenceObjectLocked(v63);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v29, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v29);
      KeAbPostRelease((ULONG_PTR)v29);
      v32 = v28->KernelApcDisable + 1;
      v28->KernelApcDisable = v32;
      if ( !v32
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
        && !v28->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v67 = v27;
    v15 = v65;
    Handle = SepCreateAccessStateFromSubjectContext(&v66, v69, v70, v60, &v65->TypeInfo.GenericMapping);
    if ( Handle < 0 )
    {
LABEL_15:
      ObfDereferenceObject(Object);
      return (unsigned int)Handle;
    }
  }
  v33 = v7[2].Next;
  a2->SecurityDescriptor = v33;
  if ( v33 )
  {
    if ( !RtlValidSecurityDescriptor(v33) )
    {
      ObfDereferenceObject(Object);
      if ( a2 == (struct _ACCESS_STATE *)v69 )
        SeDeleteAccessState(a2);
      return 3221225593LL;
    }
    if ( (BYTE2(v33->Next) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v33);
  }
  v34 = v62;
  if ( !v62 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || (char *)v7[2].Next != v62) )
  {
    v35 = 0;
    if ( (a5 & 1) != 0 )
      v35 = 16;
    v36 = ObpAssignSecurity((__int64)a2, 0LL, Object, v15, v35, 0);
    if ( v36 < 0 )
    {
      ObfDereferenceObject(Object);
      if ( a2 == (struct _ACCESS_STATE *)v69 )
        SeDeleteAccessState(a2);
      return (unsigned int)v36;
    }
    v37 = v7[2].Next;
    if ( LOBYTE(v7[1].Next) <= 1u && v37 )
      ExFreePoolWithTag(v37, 0);
    v7[2].Next = 0LL;
    a2->SecurityDescriptor = 0LL;
  }
  *(Object - 2) = 0LL;
  if ( a7 )
  {
    v38 = v61;
    v39 = v7;
    if ( !v34 )
      v39 = 0LL;
    v56 = v64;
    *a7 = 0LL;
    v40 = ObpCreateHandle(0LL, Object, 0LL, a2, v38 + 1, v7->Next, PreviousMode, v39, v56, a7);
    ObfDereferenceObject(Object);
  }
  else
  {
    if ( a2 != (struct _ACCESS_STATE *)v69 )
    {
      v40 = ObpAdjustCreatorAccessState(a2);
      if ( v40 < 0 )
        goto LABEL_74;
    }
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    v43 = KeAbPreAcquire((ULONG_PTR)(Object - 4), 0LL, 0LL, a4);
    v45 = v43;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Object - 8, 0LL) )
      ExfAcquirePushLockExclusiveEx(Object - 4, v43, (ULONG_PTR)(Object - 4), v44);
    if ( v45 )
      *(_BYTE *)(v45 + 26) |= 1u;
    v40 = ObpChargeQuotaForObject(Object - 6, KeGetCurrentThread()->ApcState.Process, 0LL);
    _m_prefetchw(Object - 4);
    v47 = *(Object - 4);
    if ( (v47 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v48 = 0LL;
    else
      v48 = v47 - 16;
    if ( (v47 & 2) != 0 || (v49 = *(Object - 4), v49 != _InterlockedCompareExchange64(Object - 4, v48, v47)) )
      ExfReleasePushLock(Object - 4, v46);
    KeAbPostRelease((ULONG_PTR)(Object - 4));
    v50 = KeGetCurrentThread();
    v51 = v50->KernelApcDisable + 1;
    v50->KernelApcDisable = v51;
    if ( !v51
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v50->ApcState.ApcListHead[0].Flink != &v50->152
      && !v50->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v40 < 0 )
LABEL_74:
      ObfDereferenceObject(Object);
  }
  v52 = v7[2].Next;
  if ( v52 )
  {
    LOBYTE(v41) = 1;
    SeReleaseSecurityDescriptor(v52, LOBYTE(v7[1].Next), v41);
    v7[2].Next = 0LL;
  }
  v53 = KeGetCurrentPrcb();
  L = v53->PPLookasideList[4].P;
  ++L->TotalFrees;
  if ( LOWORD(L->ListHead.Alignment) < L->Depth
    || (++L->FreeMisses, L = v53->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
  {
    RtlpInterlockedPushEntrySList(&L->ListHead, v7);
  }
  else
  {
    ++L->FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(v7);
  }
  if ( a2 == (struct _ACCESS_STATE *)v69 )
  {
    SepDeleteAccessState((__int64)a2);
    ObFastDereferenceObject(
      (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
      (unsigned __int64)a2->SubjectSecurityContext.PrimaryToken);
    ClientToken = a2->SubjectSecurityContext.ClientToken;
    a2->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( ClientToken )
      ObfDereferenceObject(ClientToken);
    a2->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v40;
}
