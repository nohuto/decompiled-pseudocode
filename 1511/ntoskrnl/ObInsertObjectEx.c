/*
 * XREFs of ObInsertObjectEx @ 0x14042D940
 * Callers:
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     NtCreateSemaphore @ 0x1403F1A14 (NtCreateSemaphore.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     NtCreateMutant @ 0x14042D830 (NtCreateMutant.c)
 *     NtCreateEvent @ 0x14042E720 (NtCreateEvent.c)
 *     EtwpAddUmRegEntry @ 0x140438150 (EtwpAddUmRegEntry.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     NtCreateTimer2 @ 0x14044EB44 (NtCreateTimer2.c)
 *     NtCreateTimer @ 0x14044EC80 (NtCreateTimer.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x140478460 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x140479434 (SeCopyClientToken.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     NtCreateWaitCompletionPacket @ 0x1404A6A48 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     SeAssignSecurityEx2 @ 0x14007E030 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14007E0B0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     ObpChargeQuotaForObject @ 0x14046B680 (ObpChargeQuotaForObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1404A95A0 (ObpAdjustCreatorAccessState.c)
 *     SeObjectCreateSaclAccessBits @ 0x1404ABB00 (SeObjectCreateSaclAccessBits.c)
 *     SeDeassignSecurity @ 0x1404B4020 (SeDeassignSecurity.c)
 *     ObpCreateSymbolicLinkName @ 0x1404BAF58 (ObpCreateSymbolicLinkName.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        int a4,
        char a5,
        PVOID *a6,
        __int64 *a7)
{
  __int64 v7; // rsi
  int Handle; // edi
  char *v12; // r9
  POBJECT_TYPE v13; // r14
  char PreviousMode; // dl
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rcx
  PVOID v21; // rax
  struct _KTHREAD *v22; // rax
  _BYTE *v23; // rdi
  char *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rcx
  bool v27; // zf
  int v28; // ecx
  char *v29; // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rcx
  struct _KPRCB *v33; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  PACCESS_TOKEN ClientToken; // rcx
  struct _KTHREAD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  signed __int64 v39; // rax
  signed __int64 v40; // rcx
  __int64 v41; // rtt
  _BYTE *v42; // rax
  char *v43; // rcx
  struct _KTHREAD *v44; // rdi
  int v45; // [rsp+40h] [rbp-C0h]
  PVOID *v46; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v47; // [rsp+50h] [rbp-B0h]
  int v48; // [rsp+54h] [rbp-ACh]
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *v50; // [rsp+60h] [rbp-A0h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  ACCESS_MASK v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+74h] [rbp-8Ch]
  char *v54; // [rsp+78h] [rbp-88h]
  ULONG Index[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h]
  PVOID v57; // [rsp+90h] [rbp-70h]
  PVOID *v58; // [rsp+98h] [rbp-68h]
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  _QWORD v62[20]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v63[28]; // [rsp+160h] [rbp+60h] BYREF

  v7 = *(Object - 2);
  Handle = 0;
  v48 = 0;
  v54 = 0LL;
  v53 = a4;
  v12 = 0LL;
  v52 = a3;
  v58 = a6;
  v13 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( (*((_BYTE *)Object - 22) & 2) != 0 )
  {
    v42 = (_BYTE *)ObpInfoMaskToOffset[*((_BYTE *)Object - 22) & 3];
    v43 = (char *)((char *)(Object - 6) - v42);
    if ( Object - 6 != (_QWORD *)v42 )
    {
      v12 = v43 + 8;
      v54 = v43 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v47 = PreviousMode;
  if ( (v13->TypeInfo.ObjectTypeFlags & 8) == 0 && !v12 && !*(_QWORD *)(v7 + 32) )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      *a7 = 0LL;
      Handle = ObpCreateHandle(0, (char *)Object, a3, 0LL, a4 + 1, *(_DWORD *)v7, PreviousMode, 0LL, a6, a7);
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
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(__int64))P->FreeEx)(v7);
    }
LABEL_11:
    ObfDereferenceObject(Object);
    return (unsigned int)Handle;
  }
  if ( !a2 )
  {
    a2 = (struct _ACCESS_STATE *)v62;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    v56 = Process;
    v61 = *(_QWORD *)(Process + 744);
    if ( CurrentThread )
    {
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v50 = KeGetCurrentThread();
        PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)v50);
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
        {
          v57 = (PVOID)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v57);
          DWORD2(v59) = CurrentThread[1].SystemCallNumber & 3;
        }
        else
        {
          v57 = 0LL;
        }
        PspUnlockThreadSecurityShared((__int64)CurrentThread, (__int64)v50);
        Process = v56;
        v21 = v57;
      }
      else
      {
        v21 = 0LL;
      }
      *(_QWORD *)&v59 = v21;
    }
    else
    {
      *(_QWORD *)&v59 = 0LL;
    }
    v50 = (struct _KTHREAD *)(Process + 856);
    v22 = (struct _KTHREAD *)ObFastReferenceObject((signed __int64 *)(Process + 856));
    if ( !v22 )
    {
      v44 = KeGetCurrentThread();
      PspLockProcessShared(v56, (__int64)v44);
      v50 = (struct _KTHREAD *)ObFastReferenceObjectLocked(v50);
      PspUnlockProcessShared(v56, (__int64)v44);
      v22 = v50;
    }
    v60 = v22;
    Handle = SepCreateAccessStateFromSubjectContext(&v59, v62, v63, v52, &v13->TypeInfo.GenericMapping);
    if ( Handle < 0 )
      goto LABEL_11;
  }
  v23 = *(_BYTE **)(v7 + 32);
  a2->SecurityDescriptor = v23;
  if ( !v23 )
  {
LABEL_22:
    v24 = v54;
    if ( v54 || (v13->TypeInfo.ObjectTypeFlags & 8) == 0 && !*(_QWORD *)(v7 + 32) )
      goto LABEL_33;
    if ( (a5 & 1) != 0 )
      v48 = 16;
    v25 = (__int64)a2->SecurityDescriptor;
    SecurityDescriptor = 0LL;
    *(_QWORD *)Index = 8LL;
    Handle = SeComputeAutoInheritByObjectTypeEx((__int64)v13, v25, 0LL, &v49, Index);
    if ( Handle >= 0 )
    {
      v49 |= v48;
      Handle = SeAssignSecurityEx2(
                 0,
                 (int)a2->SecurityDescriptor,
                 (int)&SecurityDescriptor,
                 0LL,
                 v13 == ObpDirectoryObjectType,
                 v49,
                 Index,
                 (__int64)&a2->SubjectSecurityContext,
                 (__int64)&v13->TypeInfo.GenericMapping);
      if ( Handle >= 0 )
      {
        LOBYTE(v45) = KeGetCurrentThread()->PreviousMode;
        Handle = v13->TypeInfo.SecurityProcedure(
                   Object,
                   AssignSecurityDescriptor,
                   0LL,
                   SecurityDescriptor,
                   0LL,
                   0LL,
                   PagedPool,
                   &v13->TypeInfo.GenericMapping,
                   v45);
        if ( Handle >= 0 )
        {
          v26 = *(void **)(v7 + 32);
          if ( *(_BYTE *)(v7 + 16) <= 1u && v26 )
            ExFreePoolWithTag(v26, 0);
          *(_QWORD *)(v7 + 32) = 0LL;
          a2->SecurityDescriptor = 0LL;
          v24 = v54;
LABEL_33:
          *(Object - 2) = 0LL;
          if ( a7 )
          {
            v27 = v24 == 0LL;
            v28 = v53;
            v29 = (char *)v7;
            v46 = v58;
            if ( v27 )
              v29 = 0LL;
            *a7 = 0LL;
            v30 = ObpCreateHandle(0, (char *)Object, 0, (__int64)a2, v28 + 1, *(_DWORD *)v7, v47, v29, v46, a7);
            Handle = v30;
            if ( v30 >= 0 && v13 == ObpSymbolicLinkObjectType && v30 != 0x40000000 )
              ObpCreateSymbolicLinkName(Object);
          }
          else if ( a2 == (struct _ACCESS_STATE *)v62 || (Handle = ObpAdjustCreatorAccessState(a2), Handle >= 0) )
          {
            v36 = KeGetCurrentThread();
            --v36->KernelApcDisable;
            v37 = KeAbPreAcquire((ULONG_PTR)(Object - 4), 0LL, 0LL);
            v38 = v37;
            if ( _interlockedbittestandset64((volatile signed __int32 *)Object - 8, 0LL) )
              ExfAcquirePushLockExclusiveEx(Object - 4, v37, (ULONG_PTR)(Object - 4));
            if ( v38 )
              *(_BYTE *)(v38 + 26) |= 1u;
            Handle = ObpChargeQuotaForObject(Object - 6, KeGetCurrentThread()->ApcState.Process, 0LL);
            _m_prefetchw(Object - 4);
            v39 = *(Object - 4);
            if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v40 = v39 - 16;
            else
              v40 = 0LL;
            if ( (v39 & 2) != 0 || (v41 = *(Object - 4), v41 != _InterlockedCompareExchange64(Object - 4, v40, v39)) )
              ExfReleasePushLock(Object - 4);
            KeAbPostRelease((ULONG_PTR)(Object - 4));
            KeLeaveCriticalRegion();
            if ( Handle >= 0 )
              goto LABEL_39;
          }
          ObfDereferenceObject(Object);
LABEL_39:
          v32 = *(_QWORD *)(v7 + 32);
          if ( v32 )
          {
            LOBYTE(v31) = 1;
            SeReleaseSecurityDescriptor(v32, *(unsigned __int8 *)(v7 + 16), v31);
            *(_QWORD *)(v7 + 32) = 0LL;
          }
          v33 = KeGetCurrentPrcb();
          L = v33->PPLookasideList[4].P;
          ++L->TotalFrees;
          if ( LOWORD(L->ListHead.Alignment) < L->Depth
            || (++L->FreeMisses, L = v33->PPLookasideList[4].L,
                                 ++L->TotalFrees,
                                 LOWORD(L->ListHead.Alignment) < L->Depth) )
          {
            RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v7);
          }
          else
          {
            ++L->FreeMisses;
            ((void (__fastcall *)(__int64))L->FreeEx)(v7);
          }
          if ( a2 == (struct _ACCESS_STATE *)v62 )
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
          return (unsigned int)Handle;
        }
        SeDeassignSecurity(&SecurityDescriptor);
      }
    }
    ObfDereferenceObject(Object);
    if ( a2 == (struct _ACCESS_STATE *)v62 )
      SeDeleteAccessState(a2);
    return (unsigned int)Handle;
  }
  if ( RtlValidSecurityDescriptor(v23) )
  {
    if ( (v23[2] & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v23);
    goto LABEL_22;
  }
  ObfDereferenceObject(Object);
  if ( a2 == (struct _ACCESS_STATE *)v62 )
    SeDeleteAccessState(a2);
  return 3221225593LL;
}
