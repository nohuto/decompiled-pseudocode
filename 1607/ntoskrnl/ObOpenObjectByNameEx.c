/*
 * XREFs of ObOpenObjectByNameEx @ 0x140417F30
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401C9960 (IoRevokeHandlesForProcess.c)
 *     NtQueryFullAttributesFile @ 0x140404848 (NtQueryFullAttributesFile.c)
 *     NtOpenSection @ 0x140404CE4 (NtOpenSection.c)
 *     NtQueryAttributesFile @ 0x140414020 (NtQueryAttributesFile.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     NtDeleteFile @ 0x14057D8D8 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140623F6C (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     ObpDereferenceNamedObject @ 0x14000BBF4 (ObpDereferenceNamedObject.c)
 *     SeClearLearningModeObjectInformation @ 0x14000F1C0 (SeClearLearningModeObjectInformation.c)
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x14000F260 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F3E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObpUnlockDirectory @ 0x14008B190 (ObpUnlockDirectory.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObpCaptureObjectCreateInformation @ 0x140418630 (ObpCaptureObjectCreateInformation.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     RtlValidSecurityDescriptor @ 0x1404A8A74 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1404B44BC (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r14d
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rbx
  _SLIST_ENTRY *v15; // r15
  int Information; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r15
  void *v19; // r14
  ULONG_PTR v20; // r14
  __int64 v21; // r8
  _SLIST_ENTRY *Next; // rax
  _BYTE *v23; // rdi
  void *v24; // rcx
  void *v25; // rcx
  char *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  struct _KPRCB *v29; // rcx
  _SLIST_ENTRY *v30; // rdx
  _GENERAL_LOOKASIDE *v31; // r8
  void *v32; // r14
  int v33; // r15d
  void *v34; // rcx
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY *v36; // rcx
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // r8
  struct _KPRCB *v39; // rcx
  _GENERAL_LOOKASIDE *v40; // r8
  __int64 v42; // r14
  unsigned __int64 *p_WaitBlockList; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KTHREAD *v48; // rdi
  __int64 v49; // rax
  struct _KPRCB *v50; // rax
  __int64 v51; // rax
  int v52; // [rsp+38h] [rbp-D0h]
  __int64 v53; // [rsp+78h] [rbp-90h] BYREF
  char *v54; // [rsp+80h] [rbp-88h] BYREF
  __int64 v55; // [rsp+88h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-78h]
  _BYTE v57[2]; // [rsp+98h] [rbp-70h] BYREF
  __int16 v58; // [rsp+9Ah] [rbp-6Eh]
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp-68h]
  struct _KTHREAD *v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v62; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR v63; // [rsp+D0h] [rbp-38h]
  __int64 v64; // [rsp+D8h] [rbp-30h]
  char v65[16]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-18h]
  _BYTE *v67; // [rsp+F8h] [rbp-10h]
  __int64 v68; // [rsp+100h] [rbp-8h]
  unsigned int v69; // [rsp+148h] [rbp+40h]

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
    v15 = v14 + 10;
    v69 = 1;
    Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)v57, (__int64)&v14[10], 1);
    if ( Information < 0 )
    {
      v50 = KeGetCurrentPrcb();
      v40 = v50->PPLookasideList[8].P;
      ++v40->TotalFrees;
      if ( LOWORD(v40->ListHead.Alignment) < v40->Depth )
        goto LABEL_49;
      ++v40->FreeMisses;
      v40 = v50->PPLookasideList[8].L;
LABEL_66:
      ++v40->TotalFrees;
      if ( LOWORD(v40->ListHead.Alignment) >= v40->Depth )
      {
        ++v40->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v14);
        return (unsigned int)Information;
      }
LABEL_49:
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
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v60 = KeGetCurrentThread();
          --v60->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
          v42 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0);
          p_WaitBlockList = (unsigned __int64 *)&CurrentThread[1].WaitBlockList;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(p_WaitBlockList, v42, (ULONG_PTR)&CurrentThread[1].WaitBlockList);
            p_WaitBlockList = (unsigned __int64 *)&CurrentThread[1].WaitBlockList;
          }
          if ( v42 )
            *(_BYTE *)(v42 + 26) |= 1u;
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v19 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v19);
            p_WaitBlockList = (unsigned __int64 *)BugCheckParameter2;
            DWORD2(v62) = CurrentThread[1].SystemCallNumber & 3;
          }
          else
          {
            v19 = 0LL;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitBlockList, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)p_WaitBlockList);
            p_WaitBlockList = (unsigned __int64 *)BugCheckParameter2;
          }
          KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)v60);
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
        v48 = KeGetCurrentThread();
        PspLockProcessShared(Process, (__int64)v48);
        v20 = ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
        PspUnlockProcessShared(Process, (__int64)v48);
      }
      v63 = v20;
      if ( SeTokenLeakTracking )
      {
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
          if ( v20 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v62 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 1144) + 284LL));
          if ( (_QWORD)v62 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      Information = SepCreateAccessStateFromSubjectContext(&v62, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
      if ( Information < 0 )
        goto LABEL_37;
      a4 = (__int64)v14;
      v15 = v14 + 10;
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
LABEL_37:
        if ( (PSLIST_ENTRY)a4 == v14 )
        {
          SepDeleteAccessState(a4);
          if ( SeTokenLeakTracking )
          {
            v51 = *(_QWORD *)(a4 + 48);
            if ( v51 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v51 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
                __debugbreak();
            }
            v49 = *(_QWORD *)(a4 + 32);
            if ( v49 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v49 + 1144) + 284LL));
              if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
                __debugbreak();
            }
          }
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
          goto LABEL_49;
        ++v40->FreeMisses;
        v40 = v39->PPLookasideList[8].L;
        goto LABEL_66;
      }
      if ( (v23[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v23);
    }
    Information = ObpLookupObjectName(
                    *((_QWORD *)&v14[10].Next + 1),
                    a3,
                    a6,
                    *((_QWORD *)&v14[12].Next + 1),
                    0LL,
                    a7,
                    a4,
                    (__int64)&v14[28],
                    (__int64)&v53,
                    (__int64)&v54);
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v55 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        ObfReferenceObject((PVOID)(v55 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v55 - ObpInfoMaskToOffset[*(_BYTE *)(v55 + 26) & 3] + 24));
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
        ObpUnlockDirectory((__int64)v14[28].Next, (__int64)&v14[28]);
      v24 = (void *)*((_QWORD *)&v14[28].Next + 1);
      if ( v24 )
      {
        ObfDereferenceObject(v24);
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v25 = v54;
      v26 = v54 - 48;
      if ( (*(v54 - 21) & 1) != 0 )
      {
        v27 = *((_QWORD *)v26 + 4);
        v69 = 0;
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 32);
          if ( v28 )
          {
            LOBYTE(v21) = 1;
            SeReleaseSecurityDescriptor(v28, *(unsigned __int8 *)(v27 + 16), v21);
            *(_QWORD *)(*((_QWORD *)v26 + 4) + 32LL) = 0LL;
          }
          v29 = KeGetCurrentPrcb();
          v30 = (_SLIST_ENTRY *)*((_QWORD *)v26 + 4);
          v31 = v29->PPLookasideList[4].P;
          ++v31->TotalFrees;
          if ( LOWORD(v31->ListHead.Alignment) < v31->Depth
            || (++v31->FreeMisses,
                v31 = v29->PPLookasideList[4].L,
                ++v31->TotalFrees,
                LOWORD(v31->ListHead.Alignment) < v31->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v31->ListHead, v30);
          }
          else
          {
            ++v31->FreeMisses;
            ((void (__fastcall *)(_SLIST_ENTRY *))v31->FreeEx)(v30);
          }
          v25 = v54;
          *((_QWORD *)v26 + 4) = 0LL;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v26[24] ^ (unsigned __int64)BYTE1(v26)]
                      + 72) & (__int64)v15->Next) != 0 )
      {
        PsDereferenceSiloContext(v25);
        Information = -1073741811;
      }
      else
      {
        v67 = v57;
        v66 = a2 + 16;
        v68 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v65);
        v32 = v54;
        LOBYTE(v52) = a3;
        v33 = ObpCreateHandle(v69, v54, 0LL, a4, 0, v15->Next, v52, 0LL, v53, 0LL, &v61);
        if ( v33 < 0 )
        {
          PsDereferenceSiloContext(v32);
          Information = v33;
        }
        else
        {
          *a8 = v61;
        }
      }
      if ( v55 )
        ObpDereferenceNamedObject(v55);
    }
    goto LABEL_37;
  }
  return 3221225485LL;
}
