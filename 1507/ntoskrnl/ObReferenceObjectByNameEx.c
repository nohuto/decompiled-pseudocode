/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1404EC8E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     NtQueryOpenSubKeys @ 0x1406503A4 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1406505EC (NtQueryOpenSubKeysEx.c)
 *     CmObReferenceObjectByName @ 0x14065EAB8 (CmObReferenceObjectByName.c)
 * Callees:
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E550 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ObpCaptureObjectCreateInformation @ 0x14048FE90 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x1404CF30C (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1404CF854 (ObpCheckObjectReference.c)
 *     ObpAdjustAccessMask @ 0x1404ECC5C (ObpAdjustAccessMask.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        ACCESS_MASK a3,
        struct _OBJECT_TYPE *a4,
        char a5,
        void *a6,
        __int64 *a7)
{
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  unsigned int Number; // eax
  char v20; // r15
  _SLIST_ENTRY *v21; // rdi
  __int64 v22; // rdx
  signed __int64 *v23; // r14
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  signed __int64 v26; // rtt
  _SLIST_ENTRY *v27; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v29; // ax
  void *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r9
  BOOLEAN v33; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v35; // rcx
  _GENERAL_LOOKASIDE *v36; // r8
  __int64 v37; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-29h] BYREF
  char v39[16]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v40; // [rsp+90h] [rbp-9h]
  _QWORD *v41; // [rsp+98h] [rbp-1h]
  __int64 v42; // [rsp+A0h] [rbp+7h]
  NTSTATUS Information; // [rsp+E8h] [rbp+4Fh] BYREF

  if ( !a1 || !a4 )
    return 3221225485LL;
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
  Number = CurrentPrcb->Number;
  v20 = a5;
  LODWORD(v14->Next) = Number;
  Information = ObpCaptureObjectCreateInformation(v20, v20, a1, v38, (__int64)&v14[10], 1u);
  if ( Information >= 0 )
  {
    if ( !a2 )
    {
      Information = SeCreateAccessState(v14, &v14[14].Next, a3, &a4->TypeInfo.GenericMapping);
      if ( Information < 0 )
      {
LABEL_32:
        if ( a2 == (struct _SECURITY_SUBJECT_CONTEXT *)v14 )
          SeDeleteAccessState(a2);
        Next = v14[12].Next;
        if ( Next )
        {
          SeReleaseSecurityDescriptor(Next, (char)v14[11].Next, 1);
          v14[12].Next = 0LL;
        }
        if ( v38[1] )
          ObpFreeObjectNameBuffer((__int64)v38);
        goto LABEL_38;
      }
      a2 = (struct _SECURITY_SUBJECT_CONTEXT *)v14;
    }
    Information = ObpAdjustAccessMask(a2);
    if ( Information >= 0 )
    {
      v21 = v14 + 28;
      Information = ObpLookupObjectName(
                      *((HANDLE *)&v14[10].Next + 1),
                      (__int64)v38,
                      (int)v14[10].Next,
                      a4,
                      v20,
                      a6,
                      0LL,
                      0LL,
                      (_ACCESS_STATE *)a2,
                      (__int64)&v14[28],
                      (PVOID *)&v37);
      if ( Information >= 0 )
      {
        if ( *((_BYTE *)&v14[29].Next + 14) )
        {
          v23 = (signed __int64 *)(&v21->Next[18].Next + 1);
          _m_prefetchw(v23);
          v24 = *v23;
          v25 = *v23 - 16;
          if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v25 = 0LL;
          if ( (v24 & 2) != 0 || (v26 = *v23, v26 != _InterlockedCompareExchange64(v23, v25, v24)) )
            ExfReleasePushLock(v23, v22);
          KeAbPostRelease((ULONG_PTR)v23);
          v27 = v21->Next;
          LODWORD(v14[30].Next) = -286387660;
          ObfDereferenceObject(v27);
          v21->Next = 0LL;
          *((_WORD *)&v14[29].Next + 7) = 0;
          CurrentThread = KeGetCurrentThread();
          v29 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v29;
          if ( !v29
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        v30 = (void *)*((_QWORD *)&v14[28].Next + 1);
        if ( v30 )
        {
          ObfDereferenceObject(v30);
          *((_QWORD *)&v14[28].Next + 1) = 0LL;
        }
        v31 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v37 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v37 - 48) >> 8)];
        if ( (*(_DWORD *)(v31 + 72) & (__int64)v14[10].Next) != 0 )
        {
          PspDereferenceSiloObject((void *)v37);
          Information = -1073741811;
        }
        else
        {
          v40 = v31 + 16;
          v41 = v38;
          v42 = *((_QWORD *)&v14[10].Next + 1);
          SeSetLearningModeObjectInformation((__int64)v39);
          LOBYTE(v32) = v20;
          if ( ObpCheckObjectReference(v37, (__int64)a2, v33, v32, &Information) )
            *a7 = v37;
          else
            PspDereferenceSiloObject((void *)v37);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_32;
  }
LABEL_38:
  v35 = KeGetCurrentPrcb();
  v36 = v35->PPLookasideList[8].P;
  ++v36->TotalFrees;
  if ( LOWORD(v36->ListHead.Alignment) < v36->Depth
    || (++v36->FreeMisses,
        v36 = v35->PPLookasideList[8].L,
        ++v36->TotalFrees,
        LOWORD(v36->ListHead.Alignment) < v36->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v36->ListHead, v14);
  }
  else
  {
    ++v36->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v36->FreeEx)(v14);
  }
  return (unsigned int)Information;
}
