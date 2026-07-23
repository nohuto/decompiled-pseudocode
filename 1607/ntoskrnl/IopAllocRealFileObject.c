/*
 * XREFs of IopAllocRealFileObject @ 0x140441980
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     IopCheckInitiatorHint @ 0x14009C74C (IopCheckInitiatorHint.c)
 *     PsIsSystemThread @ 0x1400A2714 (PsIsSystemThread.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x140404C80 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x140418630 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x14041A9D0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046A30C (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x1404A5D00 (IopRetrieveTransactionParameters.c)
 *     ObpRegisterObject @ 0x1406682E0 (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // rsi
  POBJECT_TYPE *v10; // rbp
  char v12; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v15; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  int TransactionParameters; // esi
  int v21; // edi
  __int64 v22; // r8
  struct _KPRCB *v23; // rax
  _GENERAL_LOOKASIDE *v24; // r8
  _DWORD *v25; // rbx
  int v26; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v28; // rcx
  char *v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // ecx
  __int16 v35; // [rsp+40h] [rbp-88h] BYREF
  void *v36; // [rsp+48h] [rbp-80h] BYREF
  __int128 v37; // [rsp+50h] [rbp-78h] BYREF
  int v38; // [rsp+60h] [rbp-68h] BYREF
  __int64 v39; // [rsp+68h] [rbp-60h]
  __int64 v40; // [rsp+70h] [rbp-58h]
  int v41; // [rsp+78h] [rbp-50h]
  __int128 v42; // [rsp+80h] [rbp-48h]
  char v44; // [rsp+E8h] [rbp+20h]

  v44 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v38 = 48;
  v39 = 0LL;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v41 = a4;
  v40 = 0LL;
  v42 = 0LL;
  ++P->TotalAllocates;
  v35 = 1;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v15 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
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
      {
        TransactionParameters = -1073741670;
        goto LABEL_27;
      }
    }
  }
  LODWORD(v15->Next) = CurrentPrcb->Number;
  v21 = ObpCaptureObjectCreateInformation(0, a5, (__int64)&v38, &v37, (__int64)v15, 0);
  if ( v21 < 0 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[4].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
    {
      ++v24->FreeMisses;
      v24 = v23->PPLookasideList[4].L;
      goto LABEL_8;
    }
    goto LABEL_10;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    v21 = -1073741811;
    goto LABEL_17;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    v21 = -1073741727;
    goto LABEL_17;
  }
  v26 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v26;
  v21 = ObpAllocateObject(v15, a5, (__int64)v10, &v37, 216, &v36, &v35);
  if ( v21 < 0 )
  {
LABEL_17:
    if ( *((_QWORD *)&v37 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v37);
    Next = v15[2].Next;
    if ( Next )
    {
      LOBYTE(v22) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v15[1].Next), v22);
      v15[2].Next = 0LL;
    }
    v28 = KeGetCurrentPrcb();
    v24 = v28->PPLookasideList[4].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
    {
      ++v24->FreeMisses;
      v24 = v28->PPLookasideList[4].L;
LABEL_8:
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
      {
        ++v24->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v15);
        v25 = v36;
        goto LABEL_26;
      }
    }
LABEL_10:
    RtlpInterlockedPushEntrySList(&v24->ListHead, v15);
    v25 = v36;
    goto LABEL_26;
  }
  v29 = (char *)v36;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v36);
    ObpPushStackInfo((__int64)v29, 1, 1u, 1953261124);
  }
  v25 = v29 + 48;
LABEL_26:
  TransactionParameters = v21;
  if ( v21 < 0 )
  {
LABEL_27:
    if ( !a8 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)TransactionParameters;
  }
  memset(v25, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v25 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v25 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v25 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v25 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v25 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v30 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v30 )
      *((_QWORD *)v25 + 26) = v30;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 144) & 0x47) != 0 || !PsIsHostSilo(*(_QWORD *)(a7 + 8)) )
      TransactionParameters = IopAllocateFoExtensionsOnCreate((_DWORD)v25, a2, a6, a7, a9);
    if ( TransactionParameters >= 0 )
    {
      if ( a5 )
      {
        if ( (*(_DWORD *)(a6 + 144) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 48) & 0x40000) != 0
            || (v31 = *(unsigned int *)(a2 + 72), (unsigned int)v31 <= 0x35)
            && (v32 = 0x20000100100108LL, _bittest64(&v32, v31)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(a2, a6, a9, v25);
          }
        }
      }
      if ( TransactionParameters >= 0
        && a5
        && !PsIsSystemThread(KeGetCurrentThread())
        && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      {
        TransactionParameters = IopCheckInitiatorHint((__int64)v25, *(_QWORD *)(a6 + 40));
      }
    }
    v12 = v44;
  }
  *(_QWORD *)a1 = v25;
  if ( !*(_BYTE *)(a6 + 130) && !*(_BYTE *)(a6 + 129) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v33 = v25[20] | 2;
      v25[20] = v33;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v25[20] = v33 | 4;
    }
    if ( (v25[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v25 + 32), SynchronizationEvent, 0);
      v25[28] = 0;
      *((_QWORD *)v25 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
      v25[20] |= 8u;
    if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
      v25[20] |= 0x10u;
    if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
      v25[20] |= 0x20u;
    if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
      v25[20] |= 0x100000u;
    if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      v25[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v25[20] |= 0x20000u;
  *v25 = 14155781;
  *((_QWORD *)v25 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v25 + 1) = a3;
  *((_QWORD *)v25 + 23) = 0LL;
  *((_QWORD *)v25 + 25) = v25 + 48;
  *((_QWORD *)v25 + 24) = v25 + 48;
  return (unsigned int)TransactionParameters;
}
