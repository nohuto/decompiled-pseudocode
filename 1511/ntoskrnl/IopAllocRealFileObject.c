/*
 * XREFs of IopAllocRealFileObject @ 0x140414F70
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 * Callees:
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopCheckInitiatorHint @ 0x1400DE090 (IopCheckInitiatorHint.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ObpAllocateObject @ 0x1404065F0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404107B0 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x14046FB4C (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048F628 (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x140491000 (IopRetrieveTransactionParameters.c)
 *     ObpRegisterObject @ 0x140630100 (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        char a7,
        unsigned int a8)
{
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v9; // rsi
  char v11; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v13; // r12
  PSLIST_ENTRY v15; // rbx
  unsigned int Number; // eax
  char v17; // bp
  char v18; // dl
  int v19; // edi
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rbx
  _DWORD *v23; // rbx
  int TransactionParameters; // esi
  __int64 v25; // rdi
  unsigned int v26; // r12d
  int v27; // ecx
  _QWORD *v28; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v37; // rax
  _GENERAL_LOOKASIDE *v38; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // [rsp+40h] [rbp-88h] BYREF
  __int128 v42; // [rsp+48h] [rbp-80h] BYREF
  int v43; // [rsp+58h] [rbp-70h] BYREF
  __int64 v44; // [rsp+60h] [rbp-68h]
  __int64 v45; // [rsp+68h] [rbp-60h]
  int v46; // [rsp+70h] [rbp-58h]
  __int128 v47; // [rsp+78h] [rbp-50h]
  char v49; // [rsp+E8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v9 = IoFileObjectType;
  v43 = 48;
  v44 = 0LL;
  v11 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v13 = a3;
  v46 = a4;
  v45 = 0LL;
  v47 = 0LL;
  ++P->TotalAllocates;
  v49 = 1;
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
LABEL_53:
        if ( !a7 )
          *(_QWORD *)a1 = 0LL;
        return (unsigned int)TransactionParameters;
      }
    }
  }
  Number = CurrentPrcb->Number;
  v17 = a5;
  v18 = a5;
  LODWORD(v15->Next) = Number;
  v19 = ObpCaptureObjectCreateInformation(0, v18, (__int64)&v43, &v42, (__int64)v15, 0);
  if ( v19 < 0 )
  {
    v37 = KeGetCurrentPrcb();
    v38 = v37->PPLookasideList[4].P;
    ++v38->TotalFrees;
    if ( LOWORD(v38->ListHead.Alignment) < v38->Depth )
      goto LABEL_59;
    ++v38->FreeMisses;
    v38 = v37->PPLookasideList[4].L;
LABEL_57:
    ++v38->TotalFrees;
    if ( LOWORD(v38->ListHead.Alignment) >= v38->Depth )
    {
      ++v38->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v38->FreeEx)(v15);
LABEL_60:
      v23 = v41;
      goto LABEL_9;
    }
LABEL_59:
    RtlpInterlockedPushEntrySList(&v38->ListHead, v15);
    goto LABEL_60;
  }
  if ( ((__int64)v15->Next & (_DWORD)v9[9]) != 0 )
  {
    v19 = -1073741811;
    goto LABEL_64;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    v19 = -1073741727;
    goto LABEL_64;
  }
  v21 = *((_DWORD *)v9 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v9 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v21;
  v19 = ObpAllocateObject(v15, v17, (__int64)v9, &v42, 216, &v41, &v49);
  if ( v19 < 0 )
  {
LABEL_64:
    if ( *((_QWORD *)&v42 + 1) )
      ObpFreeObjectNameBuffer(&v42);
    Next = v15[2].Next;
    if ( Next )
    {
      LOBYTE(v20) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v15[1].Next), v20);
      v15[2].Next = 0LL;
    }
    v40 = KeGetCurrentPrcb();
    v38 = v40->PPLookasideList[4].P;
    ++v38->TotalFrees;
    if ( LOWORD(v38->ListHead.Alignment) < v38->Depth )
      goto LABEL_59;
    ++v38->FreeMisses;
    v38 = v40->PPLookasideList[4].L;
    goto LABEL_57;
  }
  v22 = (__int64)v41;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v41);
    ObpPushStackInfo(v22, 1, 1u, 1953261124);
  }
  v23 = (_DWORD *)(v22 + 48);
LABEL_9:
  TransactionParameters = v19;
  if ( v19 < 0 )
    goto LABEL_53;
  memset(v23, 0, 0xD8uLL);
  v25 = a6;
  if ( a7 )
  {
    *((_QWORD *)v23 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v23 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v23 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v23 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v23 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v30 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v30 )
      *((_QWORD *)v23 + 26) = v30;
  }
  else
  {
    v26 = a8;
    if ( (*(_DWORD *)(a6 + 144) & 0x47) != 0 || !PsIsHostSilo(*(_QWORD *)(a6 + 184)) )
      TransactionParameters = IopAllocateFoExtensionsOnCreate(v23, a2, v25, v26);
    if ( TransactionParameters >= 0 )
    {
      if ( v17 )
      {
        if ( (*(_DWORD *)(v25 + 144) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 48) & 0x40000) != 0
            || (v31 = *(unsigned int *)(a2 + 72), (unsigned int)v31 <= 0x35)
            && (v32 = 0x20000100100108LL, _bittest64(&v32, v31)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(a2, v25, v26, v23);
          }
        }
      }
      if ( TransactionParameters >= 0 && v17 && (*(_DWORD *)(v25 + 64) & 0x20000) != 0 )
        TransactionParameters = IopCheckInitiatorHint((__int64)v23, *(_QWORD *)(v25 + 40));
    }
    v13 = a3;
  }
  *(_QWORD *)a1 = v23;
  if ( !*(_BYTE *)(v25 + 130) && !*(_BYTE *)(v25 + 129) )
  {
    if ( (*(_DWORD *)(v25 + 64) & 0x30) != 0 )
    {
      v27 = v23[20] | 2;
      v23[20] = v27;
      if ( (*(_DWORD *)(v25 + 64) & 0x10) != 0 )
        v23[20] = v27 | 4;
    }
    if ( (v23[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v23 + 32), SynchronizationEvent, 0);
      v23[28] = 0;
      *((_QWORD *)v23 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(v25 + 64) & 8) != 0 )
      v23[20] |= 8u;
    if ( (*(_DWORD *)(v25 + 64) & 2) != 0 )
      v23[20] |= 0x10u;
    if ( (*(_DWORD *)(v25 + 64) & 4) != 0 )
      v23[20] |= 0x20u;
    if ( (*(_DWORD *)(v25 + 64) & 0x800) != 0 )
      v23[20] |= 0x100000u;
    if ( (*(_DWORD *)(v25 + 64) & 0x20000) != 0 )
      v23[20] |= 0x2000000u;
  }
  if ( (v11 & 0x40) == 0 )
    v23[20] |= 0x20000u;
  *v23 = 14155781;
  *((_QWORD *)v23 + 8) = *(_QWORD *)(v25 + 40);
  *((_QWORD *)v23 + 1) = v13;
  *((_QWORD *)v23 + 23) = 0LL;
  v28 = v23 + 48;
  v28[1] = v28;
  *v28 = v28;
  return (unsigned int)TransactionParameters;
}
