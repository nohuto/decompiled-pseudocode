/*
 * XREFs of ObCreateObjectEx @ 0x14048A8A0
 * Callers:
 *     IoCreateStreamFileObjectEx2 @ 0x14040E4B0 (IoCreateStreamFileObjectEx2.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     NtCreateSemaphore @ 0x140451360 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     NtCreateTimer @ 0x140451ED0 (NtCreateTimer.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     NtCreateEvent @ 0x140488270 (NtCreateEvent.c)
 *     NtCreateMutant @ 0x1404B02E0 (NtCreateMutant.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     EtwpAddUmRegEntry @ 0x1404CEB68 (EtwpAddUmRegEntry.c)
 *     NtCreateWaitCompletionPacket @ 0x14052FBA0 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14048B260 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14048FE90 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1404CF30C (ObpFreeObjectNameBuffer.c)
 *     ObpRegisterObject @ 0x1406AE194 (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        __int64 a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v16; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  int Information; // edi
  __int64 v23; // r8
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // r8
  int v26; // eax
  int v27; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // [rsp+30h] [rbp-38h]
  _BYTE v32[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v33; // [rsp+48h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v16 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
    {
      Size = L->Size;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
      if ( !v16 )
        return 3221225626LL;
    }
  }
  LODWORD(v16->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)v32, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Information = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v26 = a7;
      if ( !a7 )
        v26 = a2[26];
      v27 = a8;
      if ( !a8 )
        v27 = a2[27];
      HIDWORD(v16[1].Next) = v26;
      v31 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v27;
      Information = ObpAllocateObject((_DWORD)v16, a4, (_DWORD)a2, (unsigned int)v32, a6, (__int64)&a5, v31);
      if ( Information >= 0 )
      {
        v30 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v30, 1, 1u, 1953261124);
        }
        *a9 = v30 + 48;
        return (unsigned int)Information;
      }
    }
    else
    {
      Information = -1073741727;
    }
    if ( v33 )
      ObpFreeObjectNameBuffer(v32);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v23) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v23);
      v16[2].Next = 0LL;
    }
    v29 = KeGetCurrentPrcb();
    v25 = v29->PPLookasideList[4].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) < v25->Depth )
      goto LABEL_10;
    ++v25->FreeMisses;
    v25 = v29->PPLookasideList[4].L;
  }
  else
  {
    v24 = KeGetCurrentPrcb();
    v25 = v24->PPLookasideList[4].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) < v25->Depth )
    {
LABEL_10:
      RtlpInterlockedPushEntrySList(&v25->ListHead, v16);
      return (unsigned int)Information;
    }
    ++v25->FreeMisses;
    v25 = v24->PPLookasideList[4].L;
  }
  ++v25->TotalFrees;
  if ( LOWORD(v25->ListHead.Alignment) < v25->Depth )
    goto LABEL_10;
  ++v25->FreeMisses;
  ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v16);
  return (unsigned int)Information;
}
