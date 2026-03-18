/*
 * XREFs of ObInsertObjectEx @ 0x14041EF00
 * Callers:
 *     EtwpAddUmRegEntry @ 0x14040DADC (EtwpAddUmRegEntry.c)
 *     NtDuplicateToken @ 0x1404126D0 (NtDuplicateToken.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     NtCreateEvent @ 0x14041EDE0 (NtCreateEvent.c)
 *     NtCreateSection @ 0x14042C990 (NtCreateSection.c)
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 *     ObInsertObject @ 0x140471424 (ObInsertObject.c)
 *     NtCreateTimer @ 0x14047169C (NtCreateTimer.c)
 *     NtCreateMutant @ 0x140493450 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x1404C2B8C (NtCreateWaitCompletionPacket.c)
 *     SeCopyClientToken @ 0x1404CA804 (SeCopyClientToken.c)
 *     NtCreateSemaphore @ 0x140515FA0 (NtCreateSemaphore.c)
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14000F6E0 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F860 (SepCreateAccessStateFromSubjectContext.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObpAdjustCreatorAccessState @ 0x140404050 (ObpAdjustCreatorAccessState.c)
 *     SeDeleteAccessState @ 0x140405E08 (SeDeleteAccessState.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     ObpAssignSecurity @ 0x14041FA10 (ObpAssignSecurity.c)
 *     SeReleaseSecurityDescriptor @ 0x14044DB84 (SeReleaseSecurityDescriptor.c)
 *     ObpChargeQuotaForObject @ 0x1404A545C (ObpChargeQuotaForObject.c)
 *     RtlValidSecurityDescriptor @ 0x1404BCD44 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1404D0A1C (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        struct _SECURITY_SUBJECT_CONTEXT *AccessState,
        __int64 a3,
        int a4,
        char a5,
        PVOID *a6,
        unsigned __int64 *a7)
{
  __int64 v7; // rbx
  char *v10; // r12
  int Handle; // esi
  __int64 v12; // r13
  _BYTE *v13; // rax
  char PreviousMode; // dl
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  _BYTE *v19; // rsi
  int v20; // eax
  int v21; // esi
  void *v22; // rcx
  struct _KTHREAD *v23; // rax
  int v24; // r14d
  __int64 v25; // r8
  KPROCESSOR_MODE v26; // dl
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v28; // rax
  _BYTE *v29; // r14
  signed __int64 v30; // rax
  signed __int64 v31; // rcx
  __int64 v32; // rtt
  __int64 v33; // rcx
  struct _KPRCB *v34; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  char v36; // [rsp+60h] [rbp-208h]
  ACCESS_MASK v37; // [rsp+64h] [rbp-204h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-1F0h] BYREF
  _QWORD v40[20]; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD v41[28]; // [rsp+140h] [rbp-128h] BYREF

  v7 = *(Object - 2);
  v10 = 0LL;
  Handle = 0;
  v37 = a3;
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( (*((_BYTE *)Object - 22) & 2) != 0 )
  {
    v13 = (_BYTE *)ObpInfoMaskToOffset[*((_BYTE *)Object - 22) & 3];
    if ( Object - 6 != (_QWORD *)v13 )
      v10 = (char *)((char *)(Object - 6) - v13 + 8);
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = PreviousMode;
  if ( (*(_BYTE *)(v12 + 66) & 8) == 0 && !v10 && !*(_QWORD *)(v7 + 32) )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      *a7 = 0LL;
      Handle = ObpCreateHandle(0, (char *)Object, a3, 0LL, a4 + 1, *(_DWORD *)v7, PreviousMode, 0LL, 0, a6, a7);
    }
    v15 = *(_QWORD *)(v7 + 32);
    if ( v15 )
    {
      LOBYTE(a3) = 1;
      SeReleaseSecurityDescriptor(v15, *(unsigned __int8 *)(v7 + 16), a3);
      *(_QWORD *)(v7 + 32) = 0LL;
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
        ((void (__fastcall *)(__int64))P->FreeEx)(v7);
        ObfDereferenceObject(Object);
        return (unsigned int)Handle;
      }
    }
    RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v7);
    goto LABEL_15;
  }
  if ( !AccessState )
  {
    AccessState = (struct _SECURITY_SUBJECT_CONTEXT *)v40;
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    Handle = SepCreateAccessStateFromSubjectContext(&SubjectContext, v40, v41, v37, (PGENERIC_MAPPING)(v12 + 76));
    if ( Handle < 0 )
    {
LABEL_15:
      ObfDereferenceObject(Object);
      return (unsigned int)Handle;
    }
  }
  v19 = *(_BYTE **)(v7 + 32);
  AccessState[2].ClientToken = v19;
  if ( v19 )
  {
    if ( !RtlValidSecurityDescriptor(v19) )
    {
      ObfDereferenceObject(Object);
      if ( AccessState == (struct _SECURITY_SUBJECT_CONTEXT *)v40 )
        SeDeleteAccessState(AccessState);
      return 3221225593LL;
    }
    if ( (v19[2] & 0x10) != 0 && (HIDWORD(AccessState->PrimaryToken) & 0x1000000) == 0 )
      LODWORD(AccessState->PrimaryToken) |= SeObjectCreateSaclAccessBits(v19);
  }
  if ( !v10 && ((*(_BYTE *)(v12 + 66) & 8) != 0 || *(_QWORD *)(v7 + 32)) )
  {
    v20 = 0;
    if ( (a5 & 1) != 0 )
      v20 = 16;
    v21 = ObpAssignSecurity((_DWORD)AccessState, 0, (_DWORD)Object, v12, v20, 0);
    if ( v21 < 0 )
    {
      ObfDereferenceObject(Object);
      if ( AccessState == (struct _SECURITY_SUBJECT_CONTEXT *)v40 )
        SeDeleteAccessState(AccessState);
      return (unsigned int)v21;
    }
    v22 = *(void **)(v7 + 32);
    if ( *(_BYTE *)(v7 + 16) <= 1u && v22 )
      ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(v7 + 32) = 0LL;
    AccessState[2].ClientToken = 0LL;
  }
  *(Object - 2) = 0LL;
  if ( a7 )
  {
    v23 = (struct _KTHREAD *)v7;
    if ( !v10 )
      v23 = 0LL;
    *a7 = 0LL;
    v24 = ObpCreateHandle(
            0,
            (char *)Object,
            0,
            (struct _ACCESS_STATE *)AccessState,
            a4 + 1,
            *(_DWORD *)v7,
            v36,
            v23,
            0,
            a6,
            a7);
    ObfDereferenceObject(Object);
  }
  else
  {
    if ( AccessState != (struct _SECURITY_SUBJECT_CONTEXT *)v40 )
    {
      v26 = v36;
      if ( (*(_DWORD *)v7 & 0x400) != 0 )
        v26 = 1;
      v24 = ObpAdjustCreatorAccessState((PACCESS_STATE)AccessState, v26, v12, (__int64)Object);
      if ( v24 < 0 )
        goto LABEL_58;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v28 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(Object - 4), 0LL, 0);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Object - 8, 0LL) )
      ExfAcquirePushLockExclusiveEx(Object - 4, v28, (ULONG_PTR)(Object - 4));
    if ( v29 )
      v29[26] |= 1u;
    v24 = ObpChargeQuotaForObject(Object - 6, KeGetCurrentThread()->ApcState.Process, 0LL);
    _m_prefetchw(Object - 4);
    v30 = *(Object - 4);
    if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    else
      v31 = v30 - 16;
    if ( (v30 & 2) != 0 || (v32 = *(Object - 4), v32 != _InterlockedCompareExchange64(Object - 4, v31, v30)) )
      ExfReleasePushLock(Object - 4);
    KeAbPostRelease((ULONG_PTR)(Object - 4));
    KeLeaveCriticalRegion();
    if ( v24 < 0 )
LABEL_58:
      ObfDereferenceObject(Object);
  }
  v33 = *(_QWORD *)(v7 + 32);
  if ( v33 )
  {
    LOBYTE(v25) = 1;
    SeReleaseSecurityDescriptor(v33, *(unsigned __int8 *)(v7 + 16), v25);
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  v34 = KeGetCurrentPrcb();
  L = v34->PPLookasideList[4].P;
  ++L->TotalFrees;
  if ( LOWORD(L->ListHead.Alignment) < L->Depth
    || (++L->FreeMisses, L = v34->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
  {
    RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v7);
  }
  else
  {
    ++L->FreeMisses;
    ((void (__fastcall *)(__int64))L->FreeEx)(v7);
  }
  if ( AccessState == (struct _SECURITY_SUBJECT_CONTEXT *)v40 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(AccessState + 1);
  }
  return (unsigned int)v24;
}
