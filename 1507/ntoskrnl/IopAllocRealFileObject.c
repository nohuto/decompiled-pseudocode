/*
 * XREFs of IopAllocRealFileObject @ 0x140488940
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     IopRetrieveTransactionParameters @ 0x140488530 (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x14048B260 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14048FE90 (ObpCaptureObjectCreateInformation.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404A58AC (IopAllocateFoExtensionsOnCreate.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1404CF30C (ObpFreeObjectNameBuffer.c)
 *     ObpRegisterObject @ 0x1406AE194 (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        char a7,
        unsigned int a8)
{
  struct _KPRCB *CurrentPrcb; // rsi
  POBJECT_TYPE *v10; // rbp
  char v11; // r12
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  int TransactionParameters; // esi
  unsigned __int8 v20; // r15
  int v21; // edx
  int Information; // edi
  __int64 v23; // r8
  struct _KPRCB *v24; // rax
  _GENERAL_LOOKASIDE *v25; // r8
  _DWORD *v26; // rbx
  int v27; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v29; // rcx
  char *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ecx
  void *v37; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v38[8]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v39; // [rsp+50h] [rbp-78h]
  int v40; // [rsp+58h] [rbp-70h] BYREF
  __int64 v41; // [rsp+60h] [rbp-68h]
  __int64 v42; // [rsp+68h] [rbp-60h]
  int v43; // [rsp+70h] [rbp-58h]
  __int128 v44; // [rsp+78h] [rbp-50h]
  char v46; // [rsp+E8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v40 = 48;
  v11 = a4;
  v41 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v43 = a4;
  v42 = 0LL;
  v44 = 0LL;
  ++P->TotalAllocates;
  v46 = 1;
  v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v14 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
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
      {
        TransactionParameters = -1073741670;
        goto LABEL_27;
      }
    }
  }
  v20 = a5;
  v21 = a5;
  LODWORD(v14->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(0, v21, (unsigned int)&v40, (unsigned int)v38, (__int64)v14, 0);
  if ( Information < 0 )
  {
    v24 = KeGetCurrentPrcb();
    v25 = v24->PPLookasideList[4].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) >= v25->Depth )
    {
      ++v25->FreeMisses;
      v25 = v24->PPLookasideList[4].L;
      goto LABEL_8;
    }
    goto LABEL_10;
  }
  if ( ((__int64)v14->Next & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_17;
  }
  if ( ((__int64)v14->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Information = -1073741727;
    goto LABEL_17;
  }
  v27 = *((_DWORD *)v10 + 27);
  HIDWORD(v14[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v14[1].Next + 2) = v27;
  Information = ObpAllocateObject((_DWORD)v14, v20, (_DWORD)v10, (unsigned int)v38, 216, (__int64)&v37, (__int64)&v46);
  if ( Information < 0 )
  {
LABEL_17:
    if ( v39 )
      ObpFreeObjectNameBuffer(v38);
    Next = v14[2].Next;
    if ( Next )
    {
      LOBYTE(v23) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v14[1].Next), v23);
      v14[2].Next = 0LL;
    }
    v29 = KeGetCurrentPrcb();
    v25 = v29->PPLookasideList[4].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) >= v25->Depth )
    {
      ++v25->FreeMisses;
      v25 = v29->PPLookasideList[4].L;
LABEL_8:
      ++v25->TotalFrees;
      if ( LOWORD(v25->ListHead.Alignment) >= v25->Depth )
      {
        ++v25->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v14);
        v26 = v37;
        goto LABEL_26;
      }
    }
LABEL_10:
    RtlpInterlockedPushEntrySList(&v25->ListHead, v14);
    v26 = v37;
    goto LABEL_26;
  }
  v30 = (char *)v37;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v37);
    ObpPushStackInfo((__int64)v30, 1, 1u, 1953261124);
  }
  v26 = v30 + 48;
LABEL_26:
  TransactionParameters = Information;
  if ( Information < 0 )
  {
LABEL_27:
    if ( !a7 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)TransactionParameters;
  }
  memset(v26, 0, 0xD8uLL);
  v31 = a6;
  if ( a7 )
  {
    *((_QWORD *)v26 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v26 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v26 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v26 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v26 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v32 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v32 )
      *((_QWORD *)v26 + 26) = v32;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 144) & 7) != 0 )
      TransactionParameters = IopAllocateFoExtensionsOnCreate(v26, a2, a6, a8);
    if ( TransactionParameters >= 0 )
    {
      if ( v20 )
      {
        if ( (*(_DWORD *)(v31 + 144) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 48) & 0x40000) != 0
            || (v33 = *(unsigned int *)(a2 + 72), (unsigned int)v33 <= 0x35)
            && (v34 = 0x20000100100108LL, _bittest64(&v34, v33)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters();
          }
        }
      }
      if ( TransactionParameters >= 0 && v20 && (*(_DWORD *)(v31 + 64) & 0x20000) != 0 )
        TransactionParameters = IopCheckInitiatorHint((__int64)v26, *(_QWORD *)(v31 + 40));
    }
  }
  *(_QWORD *)a1 = v26;
  if ( !*(_BYTE *)(v31 + 130) && !*(_BYTE *)(v31 + 129) )
  {
    if ( (*(_DWORD *)(v31 + 64) & 0x30) != 0 )
    {
      v35 = v26[20] | 2;
      v26[20] = v35;
      if ( (*(_DWORD *)(v31 + 64) & 0x10) != 0 )
        v26[20] = v35 | 4;
    }
    if ( (v26[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v26 + 32), SynchronizationEvent, 0);
      v26[28] = 0;
      *((_QWORD *)v26 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(v31 + 64) & 8) != 0 )
      v26[20] |= 8u;
    if ( (*(_DWORD *)(v31 + 64) & 2) != 0 )
      v26[20] |= 0x10u;
    if ( (*(_DWORD *)(v31 + 64) & 4) != 0 )
      v26[20] |= 0x20u;
    if ( (*(_DWORD *)(v31 + 64) & 0x800) != 0 )
      v26[20] |= 0x100000u;
    if ( (*(_DWORD *)(v31 + 64) & 0x20000) != 0 )
      v26[20] |= 0x2000000u;
  }
  if ( (v11 & 0x40) == 0 )
    v26[20] |= 0x20000u;
  *v26 = 14155781;
  *((_QWORD *)v26 + 8) = *(_QWORD *)(v31 + 40);
  *((_QWORD *)v26 + 1) = a3;
  *((_QWORD *)v26 + 23) = 0LL;
  *((_QWORD *)v26 + 25) = v26 + 48;
  *((_QWORD *)v26 + 24) = v26 + 48;
  return (unsigned int)TransactionParameters;
}
