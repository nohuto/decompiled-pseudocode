/*
 * XREFs of ObReferenceObjectByNameEx @ 0x14049AE04
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     NtQueryOpenSubKeys @ 0x1405DBB9C (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405DBD48 (NtQueryOpenSubKeysEx.c)
 * Callees:
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140043230 (SeClearLearningModeObjectInformation.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404107B0 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x14046FB4C (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1404707E4 (ObpCheckObjectReference.c)
 *     ObpAdjustAccessMask @ 0x14049B0D0 (ObpAdjustAccessMask.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        struct _OBJECT_TYPE *a4,
        char a5,
        void *a6,
        _QWORD *a7)
{
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rsi
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v12; // rbx
  unsigned int Number; // eax
  int *v14; // r13
  char v15; // r15
  _QWORD *CurrentServerSilo; // rdi
  int v17; // r14d
  void *v18; // rdi
  __int64 v19; // rcx
  BOOLEAN v20; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v22; // rcx
  _GENERAL_LOOKASIDE *v23; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v29; // rcx
  _QWORD v30[2]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v31[16]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v32; // [rsp+88h] [rbp-21h]
  _QWORD *v33; // [rsp+90h] [rbp-19h]
  __int64 v34; // [rsp+98h] [rbp-11h]
  __int64 v35; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v36; // [rsp+100h] [rbp+57h] BYREF
  ACCESS_MASK v37; // [rsp+108h] [rbp+5Fh]

  v37 = a3;
  v36 = a2;
  v7 = 0LL;
  if ( a1 && a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v12 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v12 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v12 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v12 )
      {
        Size = L->Size;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v12 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
        if ( !v12 )
          return 3221225626LL;
      }
    }
    Number = CurrentPrcb->Number;
    v14 = (int *)&v12[10];
    v15 = a5;
    LODWORD(v12->Next) = Number;
    LODWORD(v36) = ObpCaptureObjectCreateInformation(v15, v15, a1, v30, (__int64)&v12[10], 1u);
    if ( (int)v36 < 0 )
    {
      v29 = KeGetCurrentPrcb();
      v23 = v29->PPLookasideList[8].P;
      ++v23->TotalFrees;
      if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
      {
        ++v23->FreeMisses;
        v23 = v29->PPLookasideList[8].L;
        ++v23->TotalFrees;
        if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
        {
          ++v23->FreeMisses;
          goto LABEL_29;
        }
      }
LABEL_21:
      RtlpInterlockedPushEntrySList(&v23->ListHead, v12);
      return (unsigned int)v36;
    }
    LODWORD(v36) = SeCreateAccessState(v12, &v12[14].Next, v37, &a4->TypeInfo.GenericMapping);
    if ( (int)v36 >= 0 )
    {
      v7 = (struct _SECURITY_SUBJECT_CONTEXT *)v12;
      LODWORD(v36) = ObpAdjustAccessMask(v12);
      if ( (int)v36 >= 0 )
      {
        CurrentServerSilo = PsGetCurrentServerSilo();
        LODWORD(v36) = ObpLookupObjectName(
                         *((HANDLE *)&v12[10].Next + 1),
                         (__int64)v30,
                         *v14,
                         a4,
                         v15,
                         a6,
                         0LL,
                         0LL,
                         (__int64)CurrentServerSilo,
                         (_ACCESS_STATE *)v12,
                         (__int64)&v12[28],
                         (PVOID *)&v35);
        v17 = v36;
        if ( CurrentServerSilo )
          ObDereferenceObject(CurrentServerSilo);
        if ( v17 >= 0 )
        {
          ObpReleaseLookupContext((__int64)&v12[28]);
          v18 = (void *)v35;
          v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v35 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v35 - 48) >> 8)];
          if ( (*(_DWORD *)(v19 + 72) & *v14) == 0 )
          {
            v32 = v19 + 16;
            v33 = v30;
            v34 = *((_QWORD *)&v12[10].Next + 1);
            SeSetLearningModeObjectInformation((__int64)v31);
            if ( ObpCheckObjectReference((__int64)v18, (__int64)v12, v20, v15, (PNTSTATUS)&v36) )
              *a7 = v18;
            else
              ObDereferenceObject(v18);
            SeClearLearningModeObjectInformation();
            goto LABEL_14;
          }
          ObDereferenceObject((void *)v35);
          LODWORD(v36) = -1073741811;
        }
      }
LABEL_15:
      SeDeleteAccessState(v7);
LABEL_16:
      Next = v12[12].Next;
      if ( Next )
      {
        SeReleaseSecurityDescriptor(Next, (char)v12[11].Next, 1);
        v12[12].Next = 0LL;
      }
      if ( v30[1] )
        ObpFreeObjectNameBuffer((__int64)v30);
      v22 = KeGetCurrentPrcb();
      v23 = v22->PPLookasideList[8].P;
      ++v23->TotalFrees;
      if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
      {
        ++v23->FreeMisses;
        v23 = v22->PPLookasideList[8].L;
        ++v23->TotalFrees;
        if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
        {
          ++v23->FreeMisses;
LABEL_29:
          ((void (__fastcall *)(PSLIST_ENTRY))v23->FreeEx)(v12);
          return (unsigned int)v36;
        }
      }
      goto LABEL_21;
    }
LABEL_14:
    if ( v7 != (struct _SECURITY_SUBJECT_CONTEXT *)v12 )
      goto LABEL_16;
    goto LABEL_15;
  }
  return 3221225485LL;
}
