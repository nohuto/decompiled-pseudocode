/*
 * XREFs of ObOpenObjectByName @ 0x1404902E0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmCreateKey @ 0x1404F4850 (CmCreateKey.c)
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x140524CA0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140526CC0 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x14052B6AC (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x14052D710 (NtOpenSection.c)
 *     NtOpenMutant @ 0x14052D790 (NtOpenMutant.c)
 *     NtOpenDirectoryObject @ 0x14052F6F4 (NtOpenDirectoryObject.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     NtOpenEvent @ 0x14053A3E0 (NtOpenEvent.c)
 *     NtOpenSemaphore @ 0x14054DAE4 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 *     NtOpenSession @ 0x14056419C (NtOpenSession.c)
 *     IopReferenceDriverObjectByName @ 0x1405727F4 (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     CmpCreatePredefined @ 0x1405A41D0 (CmpCreatePredefined.c)
 *     NtDeleteFile @ 0x1405BE4C0 (NtDeleteFile.c)
 *     CmpDoReOpenTransKey @ 0x140665888 (CmpDoReOpenTransKey.c)
 *     IopFastQueryNetworkAttributes @ 0x1406748BC (IopFastQueryNetworkAttributes.c)
 *     NtOpenIoCompletion @ 0x140674A1C (NtOpenIoCompletion.c)
 *     NtOpenPartition @ 0x1406A47E8 (NtOpenPartition.c)
 *     NtOpenJobObject @ 0x1406C4068 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x1406F0844 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x1406FA3F4 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E550 (SeClearLearningModeObjectInformation.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObpCaptureObjectCreateInformation @ 0x14048FE90 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 *     SeObjectCreateSaclAccessBits @ 0x14053DF24 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        _QWORD *a7)
{
  char v9; // r12
  __int64 v10; // r15
  __int64 v11; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *v14; // rdi
  PSLIST_ENTRY v15; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v20; // edi
  __int64 v21; // r9
  struct _KPRCB *v22; // rdx
  _GENERAL_LOOKASIDE *v23; // r8
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r12
  void *v26; // rdi
  struct _KTHREAD *v27; // r15
  __int64 v28; // rdi
  __int64 v29; // r9
  __int16 v30; // ax
  __int64 v31; // r9
  ULONG_PTR v32; // r14
  struct _KTHREAD *v33; // rbp
  unsigned __int64 *v34; // rdi
  __int64 v35; // r9
  __int64 v36; // r14
  __int16 v37; // ax
  __int64 v38; // r8
  _SLIST_ENTRY *Next; // rax
  _BYTE *v40; // rdi
  _SLIST_ENTRY *v41; // r14
  __int64 v42; // rdx
  __int64 *v43; // r15
  signed __int64 v44; // rax
  signed __int64 v45; // rcx
  __int64 v46; // rtt
  _SLIST_ENTRY *v47; // rcx
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  void *v50; // rcx
  void *v51; // rbp
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rcx
  struct _KPRCB *v55; // rcx
  _SLIST_ENTRY *v56; // rdx
  _GENERAL_LOOKASIDE *v57; // r8
  int v58; // r14d
  void *v59; // rcx
  _SLIST_ENTRY *v60; // rcx
  _SLIST_ENTRY *v61; // rcx
  struct _KPRCB *v62; // rdx
  _GENERAL_LOOKASIDE *v63; // r8
  struct _KPRCB *v64; // rcx
  int v65; // [rsp+30h] [rbp-E8h]
  __int64 v66; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+70h] [rbp-A8h] BYREF
  PVOID P; // [rsp+78h] [rbp-A0h]
  __int64 v69; // [rsp+80h] [rbp-98h] BYREF
  __int128 v70; // [rsp+88h] [rbp-90h] BYREF
  ULONG_PTR v71; // [rsp+98h] [rbp-80h]
  struct _LIST_ENTRY *Blink; // [rsp+A0h] [rbp-78h]
  char v73[16]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-60h]
  __int64 *v75; // [rsp+C0h] [rbp-58h]
  __int64 v76; // [rsp+C8h] [rbp-50h]
  unsigned int v77; // [rsp+120h] [rbp+8h]

  v9 = a3;
  v10 = a2;
  v11 = 0LL;
  *a7 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = CurrentPrcb->PPLookasideList[8].P;
  ++v14->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&v14->ListHead);
  if ( !v15 )
  {
    ++v14->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
    {
      Size = L->Size;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
      if ( !v15 )
        return 3221225626LL;
    }
  }
  LODWORD(v15->Next) = CurrentPrcb->Number;
  v77 = 1;
  v20 = ObpCaptureObjectCreateInformation(v9, v9, a1, &v67, (__int64)&v15[10], 1u);
  if ( v20 >= 0 )
  {
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      Blink = Process[1].Header.WaitListHead.Blink;
      if ( CurrentThread )
      {
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
        {
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          v28 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v21);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(
              (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
              v28,
              (ULONG_PTR)&CurrentThread[1].WaitBlockList,
              v29);
          if ( v28 )
            *(_BYTE *)(v28 + 26) |= 1u;
          if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
          {
            v26 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v26);
            DWORD2(v70) = CurrentThread[1].SystemCallNumber & 3;
          }
          else
          {
            v26 = 0LL;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
          v30 = v27->KernelApcDisable + 1;
          v27->KernelApcDisable = v30;
          if ( !v30
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
            && !v27->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        else
        {
          v26 = 0LL;
        }
        *(_QWORD *)&v70 = v26;
      }
      else
      {
        *(_QWORD *)&v70 = 0LL;
      }
      v32 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
      if ( !v32 )
      {
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        v34 = (unsigned __int64 *)&Process[1];
        v36 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, v31);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v34, v36, (ULONG_PTR)v34, v35);
        if ( v36 )
          *(_BYTE *)(v36 + 26) |= 1u;
        v32 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v34, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v34);
        KeAbPostRelease((ULONG_PTR)v34);
        v37 = v33->KernelApcDisable + 1;
        v33->KernelApcDisable = v37;
        if ( !v37
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
          && !v33->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v10 = a2;
      v71 = v32;
      v20 = SepCreateAccessStateFromSubjectContext(&v70, v15, &v15[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
      if ( v20 < 0 )
        goto LABEL_85;
      v9 = a3;
      a4 = (__int64)v15;
    }
    Next = v15[12].Next;
    if ( Next )
      *(_QWORD *)(a4 + 64) = Next;
    v40 = *(_BYTE **)(a4 + 64);
    if ( v40 )
    {
      if ( !RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
      {
        v20 = -1073741703;
LABEL_85:
        if ( (PSLIST_ENTRY)a4 == v15 )
        {
          SepDeleteAccessState(a4);
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            *(_QWORD *)(a4 + 48));
          v59 = *(void **)(a4 + 32);
          *(_QWORD *)(a4 + 48) = 0LL;
          if ( v59 )
            ObfDereferenceObject(v59);
          *(_QWORD *)(a4 + 32) = 0LL;
        }
        v60 = v15[12].Next;
        if ( v60 )
        {
          LOBYTE(v38) = 1;
          SeReleaseSecurityDescriptor(v60, LOBYTE(v15[11].Next), v38);
          v15[12].Next = 0LL;
        }
        v61 = (_SLIST_ENTRY *)P;
        if ( P )
        {
          if ( WORD1(v67) == 248 )
          {
            v62 = KeGetCurrentPrcb();
            v63 = v62->PPLookasideList[5].P;
            ++v63->TotalFrees;
            if ( LOWORD(v63->ListHead.Alignment) < v63->Depth
              || (++v63->FreeMisses,
                  v63 = v62->PPLookasideList[5].L,
                  ++v63->TotalFrees,
                  LOWORD(v63->ListHead.Alignment) < v63->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v63->ListHead, v61);
            }
            else
            {
              ++v63->FreeMisses;
              ((void (*)(void))v63->FreeEx)();
            }
          }
          else
          {
            ExFreePoolWithTag(P, 0);
          }
        }
        SeClearLearningModeObjectInformation();
        v64 = KeGetCurrentPrcb();
        v23 = v64->PPLookasideList[8].P;
        ++v23->TotalFrees;
        if ( LOWORD(v23->ListHead.Alignment) < v23->Depth )
          goto LABEL_102;
        ++v23->FreeMisses;
        v23 = v64->PPLookasideList[8].L;
        goto LABEL_100;
      }
      if ( (v40[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v40);
    }
    v41 = v15 + 28;
    v20 = ObpLookupObjectName(
            *((HANDLE *)&v15[10].Next + 1),
            v9,
            a6,
            *((_QWORD *)&v15[12].Next + 1),
            0LL,
            a4,
            (__int64)&v15[28],
            (__int64)&v66);
    if ( v20 >= 0 )
    {
      if ( *((_BYTE *)&v15[29].Next + 14) )
      {
        v11 = *((_QWORD *)&v15[28].Next + 1) - 48LL;
        ObfReferenceObject(*((PVOID *)&v15[28].Next + 1));
        _InterlockedIncrement((volatile signed __int32 *)(v11 - ObpInfoMaskToOffset[*(_BYTE *)(v11 + 26) & 3] + 24));
      }
      if ( *((_BYTE *)&v15[29].Next + 14) )
      {
        v43 = (__int64 *)(&v41->Next[18].Next + 1);
        _m_prefetchw(v43);
        v44 = *v43;
        v45 = *v43 - 16;
        if ( (*v43 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v45 = 0LL;
        if ( (v44 & 2) != 0 || (v46 = *v43, v46 != _InterlockedCompareExchange64(v43, v45, v44)) )
          ExfReleasePushLock(v43, v42);
        KeAbPostRelease((ULONG_PTR)v43);
        v47 = v41->Next;
        LODWORD(v15[30].Next) = -286387660;
        ObfDereferenceObject(v47);
        v41->Next = 0LL;
        *((_WORD *)&v15[29].Next + 7) = 0;
        v48 = KeGetCurrentThread();
        v49 = v48->KernelApcDisable + 1;
        v48->KernelApcDisable = v49;
        if ( !v49
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
          && !v48->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v10 = a2;
      }
      v50 = (void *)*((_QWORD *)&v15[28].Next + 1);
      if ( v50 )
      {
        ObfDereferenceObject(v50);
        *((_QWORD *)&v15[28].Next + 1) = 0LL;
      }
      v51 = (void *)v66;
      v52 = v66 - 48;
      if ( (*(_BYTE *)(v66 - 21) & 1) != 0 )
      {
        v77 = 0;
        v53 = *(_QWORD *)(v52 + 32);
        if ( v53 )
        {
          v54 = *(_QWORD *)(v53 + 32);
          if ( v54 )
          {
            LOBYTE(v38) = 1;
            SeReleaseSecurityDescriptor(v54, *(unsigned __int8 *)(v53 + 16), v38);
            *(_QWORD *)(*(_QWORD *)(v52 + 32) + 32LL) = 0LL;
          }
          v55 = KeGetCurrentPrcb();
          v56 = *(_SLIST_ENTRY **)(v52 + 32);
          v57 = v55->PPLookasideList[4].P;
          ++v57->TotalFrees;
          if ( LOWORD(v57->ListHead.Alignment) < v57->Depth
            || (++v57->FreeMisses,
                v57 = v55->PPLookasideList[4].L,
                ++v57->TotalFrees,
                LOWORD(v57->ListHead.Alignment) < v57->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v57->ListHead, v56);
          }
          else
          {
            ++v57->FreeMisses;
            ((void (__fastcall *)(_SLIST_ENTRY *))v57->FreeEx)(v56);
          }
          *(_QWORD *)(v52 + 32) = 0LL;
          v51 = (void *)v66;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v52 + 24) ^ (unsigned __int64)BYTE1(v52)]
                      + 72) & (__int64)v15[10].Next) != 0 )
      {
        PspDereferenceSiloObject(v51);
        v20 = -1073741811;
      }
      else
      {
        v75 = &v67;
        v74 = v10 + 16;
        v76 = *((_QWORD *)&v15[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v73);
        LOBYTE(v65) = v9;
        v58 = ObpCreateHandle(v77, v51, 0LL, a4, 0, v15[10].Next, v65, 0LL, 0LL, &v69);
        if ( v58 >= 0 )
        {
          *a7 = v69;
        }
        else
        {
          PspDereferenceSiloObject(v51);
          v20 = v58;
        }
      }
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v11 - ObpInfoMaskToOffset[*(_BYTE *)(v11 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v11);
        ObfDereferenceObject((PVOID)(v11 + 48));
      }
    }
    goto LABEL_85;
  }
  v22 = KeGetCurrentPrcb();
  v23 = v22->PPLookasideList[8].P;
  ++v23->TotalFrees;
  if ( LOWORD(v23->ListHead.Alignment) < v23->Depth )
  {
LABEL_102:
    RtlpInterlockedPushEntrySList(&v23->ListHead, v15);
    return (unsigned int)v20;
  }
  ++v23->FreeMisses;
  v23 = v22->PPLookasideList[8].L;
LABEL_100:
  ++v23->TotalFrees;
  if ( LOWORD(v23->ListHead.Alignment) < v23->Depth )
    goto LABEL_102;
  ++v23->FreeMisses;
  ((void (__fastcall *)(PSLIST_ENTRY))v23->FreeEx)(v15);
  return (unsigned int)v20;
}
