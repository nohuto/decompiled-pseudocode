/*
 * XREFs of CmpDoOpen @ 0x1403FEFA0
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpUnblockHiveWrites @ 0x1403BC51C (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1403BC560 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1403DC244 (CmpBlockHiveWrites.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     EnlistKeyBodyWithKCB @ 0x1403E0248 (EnlistKeyBodyWithKCB.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     ObpAllocateObject @ 0x1404065F0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404107B0 (ObpCaptureObjectCreateInformation.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x14046FB4C (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     RtlMapGenericMask @ 0x140472860 (RtlMapGenericMask.c)
 *     CmpCheckAdminAccess @ 0x1404974C8 (CmpCheckAdminAccess.c)
 *     CmpUnlockHashEntryByIndex @ 0x140499A00 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140499A7C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A976C (CmpCheckWrpKeyAccess.c)
 *     CmReferenceKtmTransaction @ 0x1404B8A10 (CmReferenceKtmTransaction.c)
 *     CmpRemoveFromDelayedDeref @ 0x1404BAD8C (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x1404C082C (CmpRemoveFromDelayedClose.c)
 *     CmpPublishEventForPcaResolver @ 0x1404F9D2C (CmpPublishEventForPcaResolver.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpLockHashEntryByIndexShared @ 0x1405E6524 (CmpLockHashEntryByIndexShared.c)
 *     ObpRegisterObject @ 0x140630100 (ObpRegisterObject.c)
 */

__int64 __fastcall CmpDoOpen(
        ULONG_PTR *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int16 a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        ULONG_PTR *a10,
        __m128i *a11,
        __int64 a12,
        __int64 a13,
        PVOID *a14,
        __m128i *a15,
        _BYTE *a16,
        _BYTE *a17)
{
  _BYTE *v17; // rsi
  signed __int64 v18; // rbx
  ULONG_PTR v19; // r13
  NTSTATUS Object; // edi
  _BYTE *v22; // r14
  bool v23; // zf
  int v24; // r12d
  void **v25; // rdi
  __int16 v26; // r12
  signed __int32 *KeyControlBlock; // rsi
  signed __int32 v28; // eax
  signed __int32 v29; // ecx
  signed __int32 v30; // ett
  __int64 v31; // r15
  struct _KPRCB *CurrentPrcb; // r13
  POBJECT_TYPE *v33; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v35; // r14
  unsigned int Number; // eax
  unsigned __int8 v37; // r13
  int v38; // edx
  int v39; // ecx
  int Information; // eax
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // r14
  __int64 v44; // rax
  PVOID *v45; // r14
  __int64 v46; // r15
  _QWORD *v47; // rdi
  void *v48; // rcx
  __int64 v49; // rax
  _DWORD *v50; // r13
  char v51; // r12
  __int64 *v52; // rsi
  unsigned int v53; // r8d
  unsigned __int64 v54; // r14
  signed __int64 v55; // rax
  signed __int64 v56; // rcx
  __int64 v57; // rtt
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 **v62; // rcx
  int v63; // eax
  ACCESS_MASK *v64; // r12
  __int64 v65; // rbx
  __int64 v67; // rax
  ULONG_PTR *v68; // r15
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rax
  signed __int64 v72; // rcx
  ULONG_PTR v73; // rtt
  __int64 v74; // rax
  ULONG_PTR v75; // rcx
  ULONG_PTR v76; // rdx
  void **v77; // r13
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  void **v82; // rdi
  void *v83; // rax
  ULONG_PTR v84; // rbx
  KPROCESSOR_MODE PreviousMode; // bl
  ACCESS_MASK v86; // eax
  signed __int32 v87; // eax
  _DWORD *v88; // rbx
  ULONG_PTR v89; // rcx
  ULONG_PTR v90; // rdx
  __int64 v91; // rax
  _DWORD *v92; // rcx
  ULONG_PTR v93; // rtt
  _DWORD *v94; // r15
  _QWORD *v95; // rdi
  char *v96; // rdx
  char *v97; // rcx
  _DWORD *v98; // rbx
  char PathByName; // bl
  __m128i *v100; // rbx
  void *v101; // rcx
  __int64 v102; // rbx
  struct _KPRCB *v103; // rcx
  _GENERAL_LOOKASIDE *v104; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v106; // rcx
  int v107; // [rsp+40h] [rbp-69h] BYREF
  int v108; // [rsp+44h] [rbp-65h] BYREF
  ACCESS_MASK AccessMask; // [rsp+48h] [rbp-61h] BYREF
  __m128i v110; // [rsp+50h] [rbp-59h] BYREF
  __int64 v111; // [rsp+60h] [rbp-49h] BYREF
  __int64 v112; // [rsp+68h] [rbp-41h] BYREF
  char v113[8]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v114; // [rsp+78h] [rbp-31h]
  unsigned int v115; // [rsp+80h] [rbp-29h] BYREF
  ULONG_PTR v116[4]; // [rsp+88h] [rbp-21h] BYREF
  NTSTATUS v117; // [rsp+F0h] [rbp+47h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+F8h] [rbp+4Fh]
  __int64 v119; // [rsp+100h] [rbp+57h]
  unsigned __int8 v120; // [rsp+108h] [rbp+5Fh]

  v120 = a4;
  v119 = a3;
  LODWORD(BugCheckParameter3) = a2;
  v17 = a16;
  v18 = 0LL;
  v19 = *a1;
  v117 = 0;
  Object = 0;
  v107 = -1;
  if ( a16 )
    *a16 = 0;
  v22 = a17;
  if ( a17 )
    *a17 = 0;
  if ( (*(_DWORD *)(v19 + 144) & 0x20) != 0 )
  {
    if ( *(struct _KTHREAD **)(v19 + 5416) != KeGetCurrentThread() )
      return 3221225524LL;
    Object = v117;
  }
  if ( (*a6 & 1) != 0 )
  {
    if ( (*a6 & 2) != 0 )
      return 3221225506LL;
    if ( (a6[6] & 2) != 0 )
      return 3221225525LL;
    a6[8] = 2;
  }
  v23 = (a7 & 4) == 0;
  v24 = a7 & 4;
  a7 = v24;
  if ( v23 )
  {
    v67 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v19 + 8))(v19, a2, &v107);
    if ( !v67 )
      return 3221225626LL;
    if ( (((*(_BYTE *)(v67 + 2) & 0x10) != 0) & !_bittest((const signed __int32 *)&a5, 8u)) == 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v19 + 16))(v19, &v107);
      v68 = a10;
      KeyControlBlock = (signed __int32 *)CmpCreateKeyControlBlock(v19, BugCheckParameter3, *a10, 2, a11);
      if ( KeyControlBlock )
      {
        if ( *(_QWORD *)a8 )
          *(_QWORD *)(a8 + 8) = KeyControlBlock;
        else
          *(_QWORD *)a8 = KeyControlBlock;
        if ( (*a6 & 0x20) != 0 )
        {
          v87 = a6[14];
          *((_WORD *)KeyControlBlock + 93) |= 0x40u;
          KeyControlBlock[24] = v87;
        }
        *v68 = (ULONG_PTR)KeyControlBlock;
        goto LABEL_15;
      }
      return 3221225626LL;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v19 + 16))(v19, &v107);
    v82 = (void **)a10;
    v83 = (void *)CmpCreateKeyControlBlock(v19, BugCheckParameter3, *a10, 2, a11);
    v84 = (ULONG_PTR)v83;
    if ( !v83 )
      return 3221225626LL;
    CmpUnlockAndLockKcbs((void **)a8, *v82, v83, 0);
    if ( v17 )
      *v17 = 1;
    else
      CmpDereferenceKeyControlBlockWithLock(v84, 0LL);
    *v82 = (void *)v84;
    return 260LL;
  }
  v25 = (void **)a10;
  v26 = a5;
  KeyControlBlock = (signed __int32 *)*a10;
  if ( (*(_WORD *)(*a10 + 186) & 0x10) == 0 || (a5 & 0x100) != 0 )
    goto LABEL_9;
  if ( (KeyControlBlock[1] & 8) == 0 )
    return 260LL;
  KeyControlBlock = (signed __int32 *)*((_QWORD *)KeyControlBlock + 13);
  CmpUnlockTwoKcbs(*(char **)a8, *(char **)(a8 + 8));
  v74 = a8;
  *(_QWORD *)a8 = 0LL;
  *(_QWORD *)(v74 + 8) = 0LL;
  if ( *a9 != -1 )
  {
    CmpUnlockHashEntryByIndex(v19);
    *a9 = -1;
  }
  v75 = *((_QWORD *)KeyControlBlock + 4);
  v76 = (((101027 * (KeyControlBlock[4] ^ ((unsigned int)KeyControlBlock[4] >> 9))) >> 9) ^ (101027
                                                                                           * (KeyControlBlock[4] ^ ((unsigned int)KeyControlBlock[4] >> 9)))) & (*(_DWORD *)(v75 + 2808) - 1);
  *a9 = v76;
  CmpLockHashEntryByIndexExclusive(v75, v76);
  v77 = (void **)a8;
  CmpUnlockAndLockKcbs((void **)a8, 0LL, KeyControlBlock, 2);
  v117 = 260;
  if ( a13 && *((_QWORD *)*v25 + 4) != *((_QWORD *)KeyControlBlock + 4)
    || _bittest(KeyControlBlock + 1, 0x11u)
    || (v26 & 0x1000) != 0 )
  {
    v108 = -1;
    CmpUnlockAndLockKcbs(v77, KeyControlBlock, 0LL, 0);
    v88 = a9;
    if ( *a9 != -1 )
    {
      CmpUnlockHashEntryByIndex(*((_QWORD *)KeyControlBlock + 4));
      *v88 = -1;
    }
    v89 = *((_QWORD *)*v25 + 4);
    v90 = (*(_DWORD *)(v89 + 2808) - 1) & ((101027 * (*((_DWORD *)*v25 + 4) ^ (*((_DWORD *)*v25 + 4) >> 9))) ^ ((unsigned int)(101027 * (*((_DWORD *)*v25 + 4) ^ (*((_DWORD *)*v25 + 4) >> 9))) >> 9));
    *v88 = v90;
    CmpLockHashEntryByIndexShared(v89, v90);
    CmpUnlockAndLockKcbs(v77, 0LL, *v25, 1);
    CmpCleanUpKcbValueCache((__int64)*v25);
    v91 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*((_QWORD *)*v25 + 4) + 8LL))(
            *((_QWORD *)*v25 + 4),
            *((unsigned int *)*v25 + 10),
            &v108);
    if ( v91 )
    {
      v92 = *v25;
      v92[24] = *(_DWORD *)(v91 + 36);
      *((_QWORD *)v92 + 13) = *(unsigned int *)(v91 + 40);
      (*(void (__fastcall **)(_QWORD, int *))(*((_QWORD *)v92 + 4) + 16LL))(*((_QWORD *)v92 + 4), &v108);
      return 260LL;
    }
    *v25 = KeyControlBlock;
    return 3221225626LL;
  }
  v23 = (*((_BYTE *)KeyControlBlock + 186) & 0x10) == 0;
  v19 = *((_QWORD *)KeyControlBlock + 4);
  *a1 = v19;
  *v25 = KeyControlBlock;
  if ( !v23 )
    return 260LL;
LABEL_9:
  v28 = *KeyControlBlock;
  v29 = *KeyControlBlock + 1;
  if ( *KeyControlBlock == -1 )
    return 3221225626LL;
  while ( 1 )
  {
    v30 = v28;
    v28 = _InterlockedCompareExchange(KeyControlBlock, v29, v28);
    if ( v30 == v28 )
      break;
    v29 = v28 + 1;
    if ( v28 == -1 )
      return 3221225626LL;
  }
  if ( (KeyControlBlock[2] & 1) != 0 && (unsigned __int8)CmpRemoveFromDelayedDeref(KeyControlBlock) )
  {
    CmpDereferenceKeyControlBlock((ULONG_PTR)KeyControlBlock);
    Object = v117;
    v24 = a7;
  }
  else
  {
    if ( (KeyControlBlock[2] & 2) != 0 )
      CmpRemoveFromDelayedClose(KeyControlBlock);
    Object = v117;
    v24 = a7;
  }
LABEL_15:
  v31 = a12;
  if ( !a12 || a12 == v19 )
    goto LABEL_16;
  if ( (*(_DWORD *)(v19 + 5360) & 1) == 0 )
  {
LABEL_163:
    Object = -1073741790;
    goto LABEL_164;
  }
  v69 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v69, (ULONG_PTR)&CmpHiveListHeadLock);
  if ( v69 )
    *(_BYTE *)(v69 + 26) |= 1u;
  v70 = *(_QWORD *)(v19 + 5368);
  if ( v70 == v19 + 5368 )
  {
LABEL_157:
    _m_prefetchw(&CmpHiveListHeadLock);
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v18 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v93 = CmpHiveListHeadLock,
          v93 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpHiveListHeadLock,
                   v18,
                   CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    goto LABEL_163;
  }
  while ( 1 )
  {
    v71 = v70 - 5368;
    if ( v71 == v31 )
      break;
    v70 = *(_QWORD *)(v71 + 5368);
    if ( v70 == v19 + 5368 )
      goto LABEL_157;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v72 = CmpHiveListHeadLock - 16;
  else
    v72 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v73 = CmpHiveListHeadLock,
        v73 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v72, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  Object = v117;
LABEL_16:
  if ( Object < 0 )
    goto LABEL_164;
  if ( CmpVEEnabled )
  {
    if ( (*((_WORD *)KeyControlBlock + 93) & 0x200) != 0 && (KeyControlBlock[1] & 0x7FE00000u) > 0xA00000 )
    {
      v94 = a6;
      if ( !CmpIsSystemEntity(a6 + 4) && (!CmpVEEnabled || (*((_WORD *)KeyControlBlock + 93) & 0x100) == 0) )
      {
        v95 = (_QWORD *)a8;
        v110.m128i_i16[0] = 0;
        *(__int64 *)((char *)v110.m128i_i64 + 2) = 0LL;
        *(__int32 *)((char *)&v110.m128i_i32[2] + 2) = 0;
        v96 = *(char **)(a8 + 8);
        v97 = *(char **)a8;
        v110.m128i_i16[7] = 0;
        CmpUnlockTwoKcbs(v97, v96);
        *v95 = 0LL;
        v95[1] = 0LL;
        v98 = a9;
        if ( *a9 != -1 )
        {
          CmpUnlockHashEntryByIndex(v19);
          *v98 = -1;
        }
        CmpUnlockRegistry();
        CmpLockRegistryExclusive();
        if ( (KeyControlBlock[1] & 0x20000) != 0 )
        {
          CmpDereferenceKeyControlBlock((ULONG_PTR)KeyControlBlock);
          return 3221225524LL;
        }
        Object = CmVirtualKCBToRealPath(KeyControlBlock, &v110);
        if ( Object >= 0 )
        {
          *v94 |= 8u;
          Object = CmpBlockHiveWrites(0LL, 16, &v111);
          if ( Object >= 0 )
          {
            PathByName = CmpFindPathByName(0LL, &v110, 0LL, &v115, v116);
            CmpUnblockHiveWrites(0LL, 16, v111);
            Object = 260;
            if ( PathByName )
            {
              v100 = a15;
              if ( a15 )
              {
                v101 = (void *)a15->m128i_i64[1];
                if ( v101 )
                  ExFreePoolWithTag(v101, 0);
                *v100 = v110;
              }
              else
              {
                Object = -1073741670;
              }
            }
            else
            {
              v102 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*((_QWORD *)KeyControlBlock + 4) + 8LL))(
                       *((_QWORD *)KeyControlBlock + 4),
                       (unsigned int)KeyControlBlock[10],
                       &v107);
              if ( v102 )
              {
                if ( HvpMarkCellDirty(v19, (unsigned int)BugCheckParameter3, 1) )
                {
                  *(_WORD *)(v102 + 2) |= 0x100u;
                  *((_WORD *)KeyControlBlock + 93) |= 0x100u;
                }
                else
                {
                  Object = -1073741443;
                }
                (*(void (__fastcall **)(_QWORD, int *))(*((_QWORD *)KeyControlBlock + 4) + 16LL))(
                  *((_QWORD *)KeyControlBlock + 4),
                  &v107);
              }
              else
              {
                Object = -1073741670;
              }
            }
          }
          CmpDereferenceKeyControlBlock((ULONG_PTR)KeyControlBlock);
          if ( Object == 260 && v22 )
            *v22 = 1;
          return (unsigned int)Object;
        }
LABEL_164:
        CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)KeyControlBlock, 0LL);
        return (unsigned int)Object;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = CmKeyObjectType;
  LOBYTE(a16) = 1;
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v35 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v35 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v35 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v35 )
    {
      Size = L->Size;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v35 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
      if ( !v35 )
      {
        Object = -1073741670;
        goto LABEL_164;
      }
    }
  }
  Number = CurrentPrcb->Number;
  v37 = v120;
  v38 = v120;
  v39 = v120;
  LODWORD(v35->Next) = Number;
  Information = ObpCaptureObjectCreateInformation(v39, v38, 0, (unsigned int)v113, (__int64)v35, 0);
  LODWORD(a15) = 1;
  Object = Information;
  if ( Information < 0 )
  {
    v103 = KeGetCurrentPrcb();
    v104 = v103->PPLookasideList[4].P;
    ++v104->TotalFrees;
    if ( LOWORD(v104->ListHead.Alignment) >= v104->Depth )
    {
      ++v104->FreeMisses;
      v104 = v103->PPLookasideList[4].L;
      ++v104->TotalFrees;
      if ( LOWORD(v104->ListHead.Alignment) >= v104->Depth )
      {
LABEL_193:
        ++v104->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v104->FreeEx)(v35);
        v45 = a14;
        goto LABEL_27;
      }
    }
    goto LABEL_194;
  }
  if ( ((__int64)v35->Next & (_DWORD)v33[9]) != 0 )
  {
    Object = -1073741811;
    goto LABEL_198;
  }
  if ( ((__int64)v35->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, v37) )
  {
    Object = -1073741727;
LABEL_198:
    if ( v114 )
      ObpFreeObjectNameBuffer(v113);
    Next = v35[2].Next;
    if ( Next )
    {
      LOBYTE(v41) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v35[1].Next), v41);
      v35[2].Next = 0LL;
    }
    v106 = KeGetCurrentPrcb();
    v104 = v106->PPLookasideList[4].P;
    ++v104->TotalFrees;
    if ( LOWORD(v104->ListHead.Alignment) >= v104->Depth )
    {
      ++v104->FreeMisses;
      v104 = v106->PPLookasideList[4].L;
      ++v104->TotalFrees;
      if ( LOWORD(v104->ListHead.Alignment) >= v104->Depth )
        goto LABEL_193;
    }
LABEL_194:
    RtlpInterlockedPushEntrySList(&v104->ListHead, v35);
    v45 = a14;
    goto LABEL_27;
  }
  v42 = *((_DWORD *)v33 + 27);
  HIDWORD(v35[1].Next) = *((_DWORD *)v33 + 26);
  *((_DWORD *)&v35[1].Next + 2) = v42;
  Object = ObpAllocateObject((_DWORD)v35, v37, (_DWORD)v33, (unsigned int)v113, 88, (__int64)&v112, (__int64)&a16);
  if ( Object < 0 )
    goto LABEL_198;
  v43 = v112;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v112);
    ObpPushStackInfo(v43, 1, 1u, 1953261124);
  }
  v44 = v43 + 48;
  v45 = a14;
  *a14 = (PVOID)v44;
LABEL_27:
  v117 = Object;
  if ( Object < 0 )
    goto LABEL_164;
  v46 = a13;
  v47 = *v45;
  if ( a13 )
    v48 = *(void **)(a13 + 48);
  else
    v48 = 0LL;
  v47[7] = v48;
  if ( !v46 || *(_QWORD *)(v46 + 48) )
    v49 = 0LL;
  else
    v49 = v46 + 80;
  v50 = a6;
  v47[8] = v49;
  *((_WORD *)v47 + 24) = 0;
  *((_WORD *)v47 + 25) = *((_WORD *)v50 + 10);
  if ( !v48 || (v117 = CmReferenceKtmTransaction(v48), v117 >= 0) )
  {
    if ( (*((_BYTE *)KeyControlBlock + 186) & 0x40) != 0 )
    {
      *(_DWORD *)v47 = KeyControlBlock[24];
      v47[1] = KeyControlBlock;
      v47[10] = v47 + 9;
      v47[9] = v47 + 9;
      *((_QWORD *)v50 + 7) = *(int *)v47;
      return 1073741846LL;
    }
    *(_DWORD *)v47 = 1803104306;
    v47[1] = KeyControlBlock;
    v47[2] = 0LL;
    v47[3] = PsGetCurrentThreadProcessId();
    v47[10] = v47 + 9;
    v47[9] = v47 + 9;
    if ( v24 )
    {
      v51 = 1;
    }
    else
    {
      v51 = 2;
      LODWORD(a15) = 2;
    }
    v52 = v47 + 4;
    v53 = 0;
    v47[5] = v47 + 4;
    v47[4] = v47 + 4;
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v47[1] + 8LL * v53 + 136),
              (signed __int64)v47,
              0LL) )
    {
      if ( ++v53 >= 4 )
      {
        if ( (v51 & 1) != 0 )
        {
          v54 = v47[1];
          if ( *(struct _KTHREAD **)(v54 + 56) == KeGetCurrentThread() )
            *(_QWORD *)(v54 + 56) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v54 + 56));
          _m_prefetchw((const void *)(v54 + 48));
          v55 = *(_QWORD *)(v54 + 48);
          if ( (v55 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v56 = v55 - 16;
          else
            v56 = 0LL;
          if ( (v55 & 2) != 0
            || (v57 = *(_QWORD *)(v54 + 48),
                v57 != _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 48), v56, v55)) )
          {
            ExfReleasePushLock((_QWORD *)(v54 + 48));
          }
          KeAbPostRelease(v54 + 48);
          if ( (*(_DWORD *)(v54 + 4) & 0x100000) != 0 )
            CmpLockTableRemove(v54, *(_DWORD *)(v54 + 64));
          if ( (*(_DWORD *)(v54 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v54);
        }
        if ( (v51 & 2) == 0 )
        {
          v58 = v47[1];
          if ( (*(_DWORD *)(v58 + 4) & 0x100000) != 0 )
            *(_DWORD *)(v58 + 64) = CmpLockTableAdd(v47[1], 1);
          v59 = KeAbPreAcquire(v58 + 48, 0LL, 0LL);
          v60 = v59;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v58 + 48), v59, v58 + 48);
          if ( v60 )
            *(_BYTE *)(v60 + 26) |= 1u;
          v51 = (char)a15;
          *(_QWORD *)(v58 + 56) = KeGetCurrentThread();
        }
        v61 = v47[1] + 120LL;
        v62 = *(__int64 ***)(v47[1] + 128LL);
        *v52 = v61;
        v47[5] = v62;
        if ( *v62 != (__int64 *)v61 )
          __fastfail(3u);
        *v62 = v52;
        *(_QWORD *)(v61 + 8) = v52;
        if ( (v51 & 3) == 0 )
          CmpUnlockKcb((char *)v47[1]);
        v45 = a14;
        break;
      }
    }
    v63 = v50[6];
    v64 = (ACCESS_MASK *)v119;
    v117 = 0;
    if ( (v63 & 4) != 0 )
    {
      *(_QWORD *)(v119 + 16) = 0LL;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        v64[5] |= 0x1020019u;
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
        v64[5] |= 0x10F0026u;
      if ( !v64[5] )
      {
        ObDereferenceObjectDeferDelete(*v45);
        return 3221225506LL;
      }
    }
    else
    {
      v65 = v47[1];
      if ( !(unsigned __int8)CmpCheckKeyBodyAccess(v47, &v117) )
      {
        if ( !CmpIsSystemEntity(v50 + 4)
          && (*(_DWORD *)(v65 + 184) & 0x40) == 0
          && (*(_DWORD *)(*(_QWORD *)(v65 + 32) + 5360LL) & 0x10) != 0 )
        {
          v117 = CmpCheckAdminAccess(v64[4], (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v65 + 88) + 32LL));
          if ( v117 >= 0 )
          {
            if ( (_BYTE)a17 == 1 )
            {
              AccessMask = 0x2000000;
              RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76));
              v86 = AccessMask;
              v64[4] = AccessMask;
              v64[6] = v86;
              if ( (unsigned __int8)CmpCheckKeyBodyAccess(v47, &v117) )
                return (unsigned int)v117;
            }
            else
            {
              v117 = -1073741790;
            }
          }
        }
        if ( (*v50 & 2) != 0 )
        {
          *(_DWORD *)(v65 + 4) |= 0x20000u;
          *(_QWORD *)(v65 + 24) = -1LL;
          *(_DWORD *)(v65 + 40) = -1;
        }
        if ( (*(_DWORD *)(v65 + 4) & 0x20000) == 0
          && KeGetCurrentThread()->PreviousMode == 1
          && (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process)
          && (v64[4] & 0xD0026) != 0 )
        {
          if ( (unsigned __int8)CmpCheckWrpKeyAccess(v65) )
            CmpPublishEventForPcaResolver(v65);
        }
        ObDereferenceObjectDeferDelete(*v45);
      }
    }
    return (unsigned int)v117;
  }
  v47[7] = 0LL;
  if ( (*((_BYTE *)KeyControlBlock + 186) & 0x40) != 0 )
  {
    *(_DWORD *)v47 = KeyControlBlock[24];
    v47[1] = KeyControlBlock;
  }
  else
  {
    *(_DWORD *)v47 = 1803104306;
    v47[1] = KeyControlBlock;
    v47[2] = 0LL;
    v47[3] = PsGetCurrentThreadProcessId();
    v47[10] = v47 + 9;
    v47[9] = v47 + 9;
    EnlistKeyBodyWithKCB((signed __int64)v47, 2 - (v24 != 0));
  }
  ObDereferenceObjectDeferDelete(*v45);
  return (unsigned int)v117;
}
