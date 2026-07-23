/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1403E4434
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     ObInitServerSilo @ 0x14057A53C (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x1405F99E8 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmObReferenceObjectByName @ 0x140606D64 (CmObReferenceObjectByName.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     SeClearLearningModeObjectInformation @ 0x14000F1C0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ObpAdjustAccessMask @ 0x1403E4704 (ObpAdjustAccessMask.c)
 *     ObpFreeObjectNameBuffer @ 0x140404C80 (ObpFreeObjectNameBuffer.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1404057B0 (ObpCheckObjectReference.c)
 *     ObpCaptureObjectCreateInformation @ 0x140418630 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _SLIST_ENTRY *v7; // rsi
  int v9; // r12d
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  int v12; // edx
  int v13; // ecx
  PSLIST_ENTRY v14; // rbx
  unsigned int Number; // eax
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 CurrentSilo; // rax
  void *v20; // rdi
  __int64 v21; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rcx
  _GENERAL_LOOKASIDE *v24; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v30; // rcx
  _BYTE v31[8]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v32; // [rsp+80h] [rbp-39h]
  _BYTE v33[16]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v34; // [rsp+98h] [rbp-21h]
  _BYTE *v35; // [rsp+A0h] [rbp-19h]
  __int64 v36; // [rsp+A8h] [rbp-11h]
  char *v37; // [rsp+108h] [rbp+4Fh] BYREF
  __int64 v38; // [rsp+110h] [rbp+57h] BYREF
  unsigned int v39; // [rsp+118h] [rbp+5Fh]

  v39 = a3;
  v38 = a2;
  v7 = 0LL;
  v9 = a1;
  if ( !a1 || !a4 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v14 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v14
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    Number = CurrentPrcb->Number;
    v16 = a5;
    LODWORD(v14->Next) = Number;
    LOBYTE(v12) = v16;
    LOBYTE(v13) = v16;
    LODWORD(v38) = ObpCaptureObjectCreateInformation(v13, v12, v9, (unsigned int)v31, (__int64)&v14[10], 1);
    if ( (int)v38 < 0 )
    {
      v30 = KeGetCurrentPrcb();
      v24 = v30->PPLookasideList[8].P;
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
      {
        ++v24->FreeMisses;
        v24 = v30->PPLookasideList[8].L;
        ++v24->TotalFrees;
        if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
        {
          ++v24->FreeMisses;
          goto LABEL_28;
        }
      }
LABEL_19:
      RtlpInterlockedPushEntrySList(&v24->ListHead, v14);
      return (unsigned int)v38;
    }
    LODWORD(v38) = SeCreateAccessState(v14, &v14[14], v39, a4 + 76);
    if ( (int)v38 >= 0 )
    {
      v7 = v14;
      LODWORD(v38) = ObpAdjustAccessMask(v14);
      if ( (int)v38 >= 0 )
      {
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v38) = ObpLookupObjectName(
                         *((_QWORD *)&v14[10].Next + 1),
                         v16,
                         a6,
                         0LL,
                         0LL,
                         CurrentSilo,
                         (__int64)v14,
                         (__int64)&v14[28],
                         0LL,
                         (__int64)&v37);
        if ( (int)v38 >= 0 )
        {
          ObpReleaseLookupContext((__int64)&v14[28]);
          v20 = v37;
          v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v37 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v37 - 48) >> 8)];
          if ( (*(_DWORD *)(v21 + 72) & (__int64)v14[10].Next) == 0 )
          {
            v34 = v21 + 16;
            v35 = v31;
            v36 = *((_QWORD *)&v14[10].Next + 1);
            SeSetLearningModeObjectInformation((__int64)v33);
            if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)v20, (PNTSTATUS)&v38) )
              *a7 = v20;
            else
              PsDereferenceSiloContext(v20);
            SeClearLearningModeObjectInformation();
            goto LABEL_12;
          }
          PsDereferenceSiloContext(v37);
          LODWORD(v38) = -1073741811;
        }
      }
LABEL_13:
      SeDeleteAccessState(v7);
LABEL_14:
      Next = v14[12].Next;
      if ( Next )
      {
        LOBYTE(v17) = v14[11].Next;
        LOBYTE(v18) = 1;
        SeReleaseSecurityDescriptor(Next, v17, v18);
        v14[12].Next = 0LL;
      }
      if ( v32 )
        ObpFreeObjectNameBuffer(v31);
      v23 = KeGetCurrentPrcb();
      v24 = v23->PPLookasideList[8].P;
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
      {
        ++v24->FreeMisses;
        v24 = v23->PPLookasideList[8].L;
        ++v24->TotalFrees;
        if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
        {
          ++v24->FreeMisses;
LABEL_28:
          ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v14);
          return (unsigned int)v38;
        }
      }
      goto LABEL_19;
    }
LABEL_12:
    if ( v7 != v14 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 3221225626LL;
}
