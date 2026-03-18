/*
 * XREFs of ObCreateObjectEx @ 0x140412D10
 * Callers:
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x1403F1A14 (NtCreateSemaphore.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     NtCreateMutant @ 0x14042D830 (NtCreateMutant.c)
 *     NtCreateEvent @ 0x14042E720 (NtCreateEvent.c)
 *     EtwpAddUmRegEntry @ 0x140438150 (EtwpAddUmRegEntry.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     AlpcpCreatePort @ 0x14046C4A4 (AlpcpCreatePort.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWaitCompletionPacket @ 0x1404A6A48 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ObpAllocateObject @ 0x1404065F0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404107B0 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x14046FB4C (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x140630100 (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        char a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int v17; // esi
  __int64 v18; // r8
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  __int64 v22; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v29; // rcx
  _GENERAL_LOOKASIDE *v30; // r8
  struct _KPRCB *v31; // rax
  _GENERAL_LOOKASIDE *v32; // r8
  _BYTE *v33; // [rsp+30h] [rbp-38h]
  __int128 v34; // [rsp+40h] [rbp-28h] BYREF

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
  v17 = ObpCaptureObjectCreateInformation(a1, a4, a3, &v34, (__int64)v16, 0);
  if ( v17 >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      v21 = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v19 = a7;
      if ( !a7 )
        v19 = a2[26];
      v20 = a8;
      if ( !a8 )
        v20 = a2[27];
      HIDWORD(v16[1].Next) = v19;
      v33 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v20;
      v21 = ObpAllocateObject(v16, a4, (__int64)a2, &v34, a6, &a5, v33);
      if ( v21 >= 0 )
      {
        v22 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v22, 1, 1u, 1953261124);
        }
        *a9 = v22 + 48;
        return (unsigned int)v21;
      }
    }
    else
    {
      v21 = -1073741727;
    }
    if ( *((_QWORD *)&v34 + 1) )
      ObpFreeObjectNameBuffer(&v34);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18);
      v16[2].Next = 0LL;
    }
    v29 = KeGetCurrentPrcb();
    v30 = v29->PPLookasideList[4].P;
    ++v30->TotalFrees;
    if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
      || (++v30->FreeMisses,
          v30 = v29->PPLookasideList[4].L,
          ++v30->TotalFrees,
          LOWORD(v30->ListHead.Alignment) < v30->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v30->ListHead, v16);
    }
    else
    {
      ++v30->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v30->FreeEx)(v16);
    }
    return (unsigned int)v21;
  }
  v31 = KeGetCurrentPrcb();
  v32 = v31->PPLookasideList[4].P;
  ++v32->TotalFrees;
  if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
    || (++v32->FreeMisses,
        v32 = v31->PPLookasideList[4].L,
        ++v32->TotalFrees,
        LOWORD(v32->ListHead.Alignment) < v32->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v32->ListHead, v16);
  }
  else
  {
    ++v32->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v32->FreeEx)(v16);
  }
  return (unsigned int)v17;
}
