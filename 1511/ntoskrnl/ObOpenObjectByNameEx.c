/*
 * XREFs of ObOpenObjectByNameEx @ 0x14040FFF0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     NtQueryAttributesFile @ 0x140423010 (NtQueryAttributesFile.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x14049DA10 (NtQueryFullAttributesFile.c)
 *     NtDeleteFile @ 0x140546550 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x1405FA488 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140043230 (SeClearLearningModeObjectInformation.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404107B0 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     SeObjectCreateSaclAccessBits @ 0x1404ABB00 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        struct _OBJECT_TYPE *a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        void *a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // ebp
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rbx
  int *v15; // r13
  int Information; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r14
  void *v19; // rbp
  ULONG_PTR v20; // rbp
  __int64 v21; // r8
  _SLIST_ENTRY *Next; // rax
  _BYTE *v23; // rdi
  _SLIST_ENTRY *v24; // r14
  void *v25; // rcx
  void *v26; // r14
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rcx
  struct _KPRCB *v30; // rcx
  _SLIST_ENTRY *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // r8
  int v33; // ebp
  void *v34; // rcx
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY *v36; // rcx
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // r8
  struct _KPRCB *v39; // rcx
  _GENERAL_LOOKASIDE *v40; // r8
  __int64 v42; // rbp
  __int64 v43; // rbp
  signed __int64 *v44; // rbp
  signed __int64 v45; // rax
  signed __int64 v46; // rcx
  signed __int64 v47; // rtt
  _SLIST_ENTRY *v48; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KTHREAD *v53; // rdi
  struct _KPRCB *v54; // rax
  __int64 v55; // [rsp+60h] [rbp-B8h]
  __int64 v56; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v57[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int16 v58; // [rsp+72h] [rbp-A6h]
  PSLIST_ENTRY ListEntry; // [rsp+78h] [rbp-A0h]
  __int64 v60; // [rsp+80h] [rbp-98h] BYREF
  struct _KTHREAD *v61; // [rsp+88h] [rbp-90h]
  __int128 v62; // [rsp+98h] [rbp-80h] BYREF
  ULONG_PTR v63; // [rsp+A8h] [rbp-70h]
  __int64 v64; // [rsp+B0h] [rbp-68h]
  char v65[16]; // [rsp+B8h] [rbp-60h] BYREF
  _UNICODE_STRING *p_Name; // [rsp+C8h] [rbp-50h]
  _BYTE *v67; // [rsp+D0h] [rbp-48h]
  __int64 v68; // [rsp+D8h] [rbp-40h]
  unsigned int v69; // [rsp+120h] [rbp+8h]

  v8 = a1;
  v55 = 0LL;
  *a8 = 0LL;
  if ( a1 && a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v14 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v14 )
      {
        Size = L->Size;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
        if ( !v14 )
          return 3221225626LL;
      }
    }
    LODWORD(v14->Next) = CurrentPrcb->Number;
    v15 = (int *)&v14[10];
    v69 = 1;
    Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)v57, (__int64)&v14[10], 1);
    if ( Information < 0 )
    {
      v54 = KeGetCurrentPrcb();
      v40 = v54->PPLookasideList[8].P;
      ++v40->TotalFrees;
      if ( LOWORD(v40->ListHead.Alignment) < v40->Depth )
        goto LABEL_45;
      ++v40->FreeMisses;
      v40 = v54->PPLookasideList[8].L;
LABEL_70:
      ++v40->TotalFrees;
      if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
      {
        ++v40->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v14);
        return (unsigned int)Information;
      }
LABEL_45:
      RtlpInterlockedPushEntrySList(&v40->ListHead, v14);
      return (unsigned int)Information;
    }
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = (__int64)CurrentThread->ApcState.Process;
      v64 = *(_QWORD *)(Process + 744);
      if ( CurrentThread )
      {
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
        {
          v61 = KeGetCurrentThread();
          --v61->KernelApcDisable;
          v42 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(
              (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
              v42,
              (ULONG_PTR)&CurrentThread[1].WaitBlockList);
          if ( v42 )
            *(_BYTE *)(v42 + 26) |= 1u;
          if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
          {
            v19 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v19);
            DWORD2(v62) = CurrentThread[1].SystemCallNumber & 3;
          }
          else
          {
            v19 = 0LL;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)v61);
        }
        else
        {
          v19 = 0LL;
        }
        *(_QWORD *)&v62 = v19;
      }
      else
      {
        *(_QWORD *)&v62 = 0LL;
      }
      v20 = ObFastReferenceObject((signed __int64 *)(Process + 856));
      if ( !v20 )
      {
        v53 = KeGetCurrentThread();
        PspLockProcessShared(Process, (__int64)v53);
        v20 = ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
        PspUnlockProcessShared(Process, (__int64)v53);
      }
      v63 = v20;
      Information = SepCreateAccessStateFromSubjectContext(&v62, v14, &v14[14].Next, a5, &a2->TypeInfo.GenericMapping);
      if ( Information < 0 )
        goto LABEL_34;
      a4 = (__int64)v14;
      v15 = (int *)&v14[10];
    }
    Next = v14[12].Next;
    if ( Next )
      *(_QWORD *)(a4 + 64) = Next;
    v23 = *(_BYTE **)(a4 + 64);
    if ( v23 )
    {
      if ( !RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
      {
        Information = -1073741703;
LABEL_34:
        if ( (PSLIST_ENTRY)a4 == v14 )
        {
          SepDeleteAccessState(a4);
          ObFastDereferenceObject(
            (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
            *(_QWORD *)(a4 + 48));
          v34 = *(void **)(a4 + 32);
          *(_QWORD *)(a4 + 48) = 0LL;
          if ( v34 )
            ObfDereferenceObject(v34);
          *(_QWORD *)(a4 + 32) = 0LL;
        }
        v35 = v14[12].Next;
        if ( v35 )
        {
          LOBYTE(v21) = 1;
          SeReleaseSecurityDescriptor(v35, LOBYTE(v14[11].Next), v21);
          v14[12].Next = 0LL;
        }
        v36 = ListEntry;
        if ( ListEntry )
        {
          if ( v58 == 248 )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->PPLookasideList[5].P;
            ++v38->TotalFrees;
            if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
              || (++v38->FreeMisses,
                  v38 = v37->PPLookasideList[5].L,
                  ++v38->TotalFrees,
                  LOWORD(v38->ListHead.Alignment) < v38->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v38->ListHead, v36);
            }
            else
            {
              ++v38->FreeMisses;
              ((void (*)(void))v38->FreeEx)();
            }
          }
          else
          {
            ExFreePoolWithTag(ListEntry, 0);
          }
        }
        SeClearLearningModeObjectInformation();
        v39 = KeGetCurrentPrcb();
        v40 = v39->PPLookasideList[8].P;
        ++v40->TotalFrees;
        if ( LOWORD(v40->ListHead.Alignment) < v40->Depth )
          goto LABEL_45;
        ++v40->FreeMisses;
        v40 = v39->PPLookasideList[8].L;
        goto LABEL_70;
      }
      if ( (v23[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v23);
    }
    v24 = v14 + 28;
    Information = ObpLookupObjectName(
                    *((HANDLE *)&v14[10].Next + 1),
                    (__int64)v57,
                    *v15,
                    a2,
                    a3,
                    a6,
                    *((_SECURITY_QUALITY_OF_SERVICE **)&v14[12].Next + 1),
                    0LL,
                    a7,
                    (_ACCESS_STATE *)a4,
                    (__int64)&v14[28],
                    (PVOID *)&v56);
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v43 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        v55 = v43;
        ObfReferenceObject(*((PVOID *)&v14[28].Next + 1));
        _InterlockedIncrement((volatile signed __int32 *)(v43 - ObpInfoMaskToOffset[*(_BYTE *)(v43 + 26) & 3] + 24));
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v44 = (signed __int64 *)(&v24->Next[18].Next + 1);
        _m_prefetchw(v44);
        v45 = *v44;
        if ( (*v44 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v46 = v45 - 16;
        else
          v46 = 0LL;
        if ( (v45 & 2) != 0 || (v47 = *v44, v47 != _InterlockedCompareExchange64(v44, v46, v45)) )
          ExfReleasePushLock(v44);
        KeAbPostRelease((ULONG_PTR)v44);
        v48 = v24->Next;
        LODWORD(v14[30].Next) = -286387660;
        ObfDereferenceObject(v48);
        v24->Next = 0LL;
        *((_WORD *)&v14[29].Next + 7) = 0;
        KeLeaveCriticalRegion();
      }
      v25 = (void *)*((_QWORD *)&v14[28].Next + 1);
      if ( v25 )
      {
        ObfDereferenceObject(v25);
        LODWORD(v25) = 0;
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v26 = (void *)v56;
      v27 = v56 - 48;
      if ( (*(_BYTE *)(v56 - 21) & 1) != 0 )
      {
        v28 = *(_QWORD *)(v27 + 32);
        v69 = (unsigned int)v25;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 32);
          if ( v29 )
          {
            LOBYTE(v21) = 1;
            SeReleaseSecurityDescriptor(v29, *(unsigned __int8 *)(v28 + 16), v21);
            *(_QWORD *)(*(_QWORD *)(v27 + 32) + 32LL) = 0LL;
          }
          v30 = KeGetCurrentPrcb();
          v31 = *(_SLIST_ENTRY **)(v27 + 32);
          v32 = v30->PPLookasideList[4].P;
          ++v32->TotalFrees;
          if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
            || (++v32->FreeMisses,
                v32 = v30->PPLookasideList[4].L,
                ++v32->TotalFrees,
                LOWORD(v32->ListHead.Alignment) < v32->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v32->ListHead, v31);
          }
          else
          {
            ++v32->FreeMisses;
            ((void (__fastcall *)(_SLIST_ENTRY *))v32->FreeEx)(v31);
          }
          *(_QWORD *)(v27 + 32) = 0LL;
          v26 = (void *)v56;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v27 + 24) ^ (unsigned __int64)BYTE1(v27)]
                      + 72) & *v15) != 0 )
      {
        ObDereferenceObject(v26);
        Information = -1073741811;
      }
      else
      {
        v67 = v57;
        p_Name = &a2->Name;
        v68 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v65);
        v33 = ObpCreateHandle(v69, (char *)v26, 0, a4, 0, *v15, a3, 0LL, 0LL, &v60);
        if ( v33 < 0 )
        {
          ObDereferenceObject(v26);
          Information = v33;
        }
        else
        {
          *a8 = v60;
        }
      }
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v55 - ObpInfoMaskToOffset[*(_BYTE *)(v55 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v55);
        ObfDereferenceObject((PVOID)(v55 + 48));
      }
    }
    goto LABEL_34;
  }
  return 3221225485LL;
}
