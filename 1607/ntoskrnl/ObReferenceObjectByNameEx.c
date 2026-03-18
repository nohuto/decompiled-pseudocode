/*
 * XREFs of ObReferenceObjectByNameEx @ 0x140499E04
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040849C (AlpcpCreateClientPort.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     ObInitServerSilo @ 0x140579FFC (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x1405F9934 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9B0C (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmObReferenceObjectByName @ 0x140606CB0 (CmObReferenceObjectByName.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14000BFD0 (ObpReleaseLookupContext.c)
 *     SeClearLearningModeObjectInformation @ 0x14000F640 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14000FB70 (SeSetLearningModeObjectInformation.c)
 *     PsDereferenceSiloContext @ 0x1400870F4 (PsDereferenceSiloContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ObpFreeObjectNameBuffer @ 0x140405DC0 (ObpFreeObjectNameBuffer.c)
 *     SeDeleteAccessState @ 0x140405E08 (SeDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140406380 (PsGetCurrentSilo.c)
 *     SeCreateAccessState @ 0x1404063B0 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1404068F0 (ObpCheckObjectReference.c)
 *     ObpCaptureObjectCreateInformation @ 0x140419770 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x14044DB84 (SeReleaseSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ObpAdjustAccessMask @ 0x14049A0D4 (ObpAdjustAccessMask.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        struct _OBJECT_TYPE *a4,
        unsigned __int8 a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rsi
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v12; // rbx
  unsigned int Number; // eax
  int *v14; // r13
  unsigned __int8 v15; // r15
  __int64 CurrentSilo; // rax
  void *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r9
  BOOLEAN v20; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v22; // rcx
  _GENERAL_LOOKASIDE *v23; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v29; // rcx
  UNICODE_STRING v30; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v32; // [rsp+98h] [rbp-21h]
  UNICODE_STRING *v33; // [rsp+A0h] [rbp-19h]
  __int64 v34; // [rsp+A8h] [rbp-11h]
  char *v35; // [rsp+108h] [rbp+4Fh] BYREF
  __int64 v36; // [rsp+110h] [rbp+57h] BYREF
  ACCESS_MASK v37; // [rsp+118h] [rbp+5Fh]

  v37 = a3;
  v36 = a2;
  v7 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v12 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v12 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v12 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v12
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v12 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    Number = CurrentPrcb->Number;
    v14 = (int *)&v12[10];
    v15 = a5;
    LODWORD(v12->Next) = Number;
    LODWORD(v36) = ObpCaptureObjectCreateInformation(v15, v15, a1, &v30, (__int64)&v12[10], 1u);
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
          goto LABEL_28;
        }
      }
LABEL_19:
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
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v36) = ObpLookupObjectName(
                         *((_QWORD *)&v12[10].Next + 1),
                         &v30,
                         *v14,
                         a4,
                         v15,
                         a6,
                         0LL,
                         0LL,
                         CurrentSilo,
                         (struct _ACCESS_STATE *)v12,
                         (__int64)&v12[28],
                         0LL,
                         &v35);
        if ( (int)v36 >= 0 )
        {
          ObpReleaseLookupContext((__int64)&v12[28]);
          v17 = v35;
          v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v35 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v35 - 48) >> 8)];
          if ( (*(_DWORD *)(v18 + 72) & *v14) == 0 )
          {
            v32 = v18 + 16;
            v33 = &v30;
            v34 = *((_QWORD *)&v12[10].Next + 1);
            SeSetLearningModeObjectInformation((__int64)v31);
            LOBYTE(v19) = v15;
            if ( ObpCheckObjectReference((__int64)v17, (__int64)v12, v20, v19, (PNTSTATUS)&v36) )
              *a7 = v17;
            else
              PsDereferenceSiloContext(v17);
            SeClearLearningModeObjectInformation();
            goto LABEL_12;
          }
          PsDereferenceSiloContext(v35);
          LODWORD(v36) = -1073741811;
        }
      }
LABEL_13:
      SeDeleteAccessState(v7);
LABEL_14:
      Next = v12[12].Next;
      if ( Next )
      {
        SeReleaseSecurityDescriptor(Next, (char)v12[11].Next, 1);
        v12[12].Next = 0LL;
      }
      if ( v30.Buffer )
        ObpFreeObjectNameBuffer((__int64)&v30);
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
LABEL_28:
          ((void (__fastcall *)(PSLIST_ENTRY))v23->FreeEx)(v12);
          return (unsigned int)v36;
        }
      }
      goto LABEL_19;
    }
LABEL_12:
    if ( v7 != (struct _SECURITY_SUBJECT_CONTEXT *)v12 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 3221225626LL;
}
