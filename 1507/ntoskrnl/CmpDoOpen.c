/*
 * XREFs of CmpDoOpen @ 0x1404C78D0
 * Callers:
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     CmpFindPathByNameEx @ 0x1401DFBAC (CmpFindPathByNameEx.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUnblockHiveWrites @ 0x1404075C8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14040760C (CmpBlockHiveWrites.c)
 *     CmpUnlockAndLockKcbs @ 0x14042A760 (CmpUnlockAndLockKcbs.c)
 *     RtlMapGenericMask @ 0x140435530 (RtlMapGenericMask.c)
 *     CmpUnlockHashEntryByIndex @ 0x140447B68 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     EnlistKeyBodyWithKCB @ 0x140449DEC (EnlistKeyBodyWithKCB.c)
 *     CmpCheckWrpKeyAccess @ 0x140466E0C (CmpCheckWrpKeyAccess.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     ObpAllocateObject @ 0x14048B260 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14048FE90 (ObpCaptureObjectCreateInformation.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpCheckKeyBodyAccess @ 0x1404C17F0 (CmpCheckKeyBodyAccess.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     ObpFreeObjectNameBuffer @ 0x1404CF30C (ObpFreeObjectNameBuffer.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1404EDE10 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpRemoveFromDelayedClose @ 0x1404EDEA4 (CmpRemoveFromDelayedClose.c)
 *     CmpRemoveFromDelayedDeref @ 0x14054DEEC (CmpRemoveFromDelayedDeref.c)
 *     CmReferenceKtmTransaction @ 0x140554498 (CmReferenceKtmTransaction.c)
 *     CmpPublishEventForPcaResolver @ 0x14056BEA0 (CmpPublishEventForPcaResolver.c)
 *     CmpLockHashEntryByIndexShared @ 0x14058EA5C (CmpLockHashEntryByIndexShared.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 *     CmpCheckAdminAccess @ 0x140658050 (CmpCheckAdminAccess.c)
 *     ObpRegisterObject @ 0x1406AE194 (ObpRegisterObject.c)
 */

__int64 __fastcall CmpDoOpen(
        ULONG_PTR *a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int16 a5,
        __int64 a6,
        char a7,
        unsigned __int64 *a8,
        unsigned int *a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        PVOID *a14,
        __m128i *a15,
        _BYTE *a16,
        _BYTE *a17)
{
  _BYTE *v17; // rsi
  signed __int64 v18; // rbx
  ULONG_PTR v19; // r14
  NTSTATUS v21; // edi
  __int64 result; // rax
  unsigned __int64 *v23; // r15
  unsigned int *v24; // rsi
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // rdx
  ULONG_PTR v27; // rcx
  ULONG_PTR v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // r8
  bool v31; // zf
  signed __int32 v32; // eax
  signed __int32 v33; // ecx
  signed __int32 v34; // ett
  __int64 v35; // rax
  __int64 v36; // rax
  ULONG_PTR v37; // rbx
  __int64 KeyControlBlock; // rax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  ULONG_PTR v45; // rtt
  signed __int64 v46; // rcx
  ULONG_PTR v47; // rtt
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  char PathByName; // bl
  void *v51; // rcx
  __int64 v52; // rbx
  struct _KPRCB *CurrentPrcb; // r12
  POBJECT_TYPE *v54; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v56; // r14
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v61; // r8
  struct _KPRCB *v62; // rcx
  _GENERAL_LOOKASIDE *v63; // r8
  PVOID *v64; // r12
  int v65; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v67; // rcx
  __int64 v68; // r14
  int *v69; // rdi
  void *v70; // rcx
  __int64 v71; // rax
  _DWORD *v72; // r15
  unsigned int v73; // r14d
  __int64 *v74; // rsi
  __int64 v75; // r9
  unsigned int v76; // r8d
  char v77; // r14
  __int64 v78; // r14
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 **v83; // rcx
  int v84; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v86; // rbx
  ACCESS_MASK v87; // eax
  NTSTATUS v88; // [rsp+40h] [rbp-59h] BYREF
  char v89; // [rsp+44h] [rbp-55h]
  int v90; // [rsp+48h] [rbp-51h] BYREF
  ACCESS_MASK AccessMask; // [rsp+4Ch] [rbp-4Dh] BYREF
  int v92; // [rsp+50h] [rbp-49h] BYREF
  __m128i v93; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v94; // [rsp+68h] [rbp-31h] BYREF
  __int64 v95; // [rsp+70h] [rbp-29h] BYREF
  __int128 v96; // [rsp+78h] [rbp-21h] BYREF
  __int64 v97; // [rsp+88h] [rbp-11h] BYREF
  __int64 v98[8]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int BugCheckParameter3; // [rsp+E8h] [rbp+4Fh]
  char v101; // [rsp+F8h] [rbp+5Fh]
  int v102; // [rsp+110h] [rbp+77h]

  v101 = a4;
  BugCheckParameter3 = a2;
  v17 = a16;
  v18 = 0LL;
  v19 = *a1;
  v88 = 0;
  v90 = -1;
  v21 = 0;
  if ( a16 )
    *a16 = 0;
  if ( a17 )
    *a17 = 0;
  if ( (*(_DWORD *)(v19 + 144) & 0x20) != 0 )
  {
    if ( *(struct _KTHREAD **)(v19 + 5416) != KeGetCurrentThread() )
      return 3221225524LL;
    v21 = v88;
  }
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    if ( (*(_DWORD *)a6 & 2) != 0 )
      return 3221225506LL;
    if ( (*(_DWORD *)(a6 + 24) & 2) != 0 )
      return 3221225525LL;
    *(_DWORD *)(a6 + 32) = 2;
  }
  v102 = a7 & 4;
  if ( !v102 )
  {
    v35 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v19 + 8))(v19, a2, &v90);
    if ( !v35 )
      return 3221225626LL;
    if ( (*(_BYTE *)(v35 + 2) & 0x10) == 0 || (a5 & 0x100) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v19 + 16))(v19, &v90);
      KeyControlBlock = CmpCreateKeyControlBlock(v19, a11);
      v24 = (unsigned int *)KeyControlBlock;
      if ( !KeyControlBlock )
        return 3221225626LL;
      v23 = a8;
      if ( *a8 )
        a8[1] = KeyControlBlock;
      else
        *a8 = KeyControlBlock;
      if ( (*(_DWORD *)a6 & 0x20) != 0 )
      {
        v39 = *(_DWORD *)(a6 + 56);
        *((_WORD *)v24 + 93) |= 0x40u;
        v24[24] = v39;
      }
      *a10 = v24;
      goto LABEL_55;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v19 + 16))(v19, &v90);
    v36 = CmpCreateKeyControlBlock(v19, a11);
    v37 = v36;
    if ( !v36 )
      return 3221225626LL;
    CmpUnlockAndLockKcbs((__int64 *)a8, *a10, v36, 0LL);
    if ( v17 )
    {
      *v17 = 1;
      result = 260LL;
      *a10 = (void *)v37;
      return result;
    }
    CmpDereferenceKeyControlBlockWithLock(v37);
    *a10 = (void *)v37;
    return 260LL;
  }
  v23 = a8;
  v24 = (unsigned int *)*a10;
  if ( (*((_BYTE *)*a10 + 186) & 0x10) == 0 || (a5 & 0x100) != 0 )
    goto LABEL_30;
  if ( (v24[1] & 8) == 0 )
    return 260LL;
  v24 = (unsigned int *)*((_QWORD *)v24 + 13);
  CmpUnlockTwoKcbs(*a8, a8[1]);
  *a8 = 0LL;
  a8[1] = 0LL;
  if ( *a9 != -1 )
  {
    CmpUnlockHashEntryByIndex(v19, *a9);
    *a9 = -1;
  }
  v25 = *((_QWORD *)v24 + 4);
  v26 = (((101027 * (v24[4] ^ (v24[4] >> 9))) >> 9) ^ (101027 * (v24[4] ^ (v24[4] >> 9)))) & (*(_DWORD *)(v25 + 2808) - 1);
  *a9 = v26;
  CmpLockHashEntryByIndexExclusive(v25, v26);
  CmpUnlockAndLockKcbs((__int64 *)a8, 0LL, (__int64)v24, 2LL);
  v88 = 260;
  if ( (!a13 || *((_QWORD *)*a10 + 4) == *((_QWORD *)v24 + 4)) && (v24[1] & 0x20000) == 0 )
  {
    v31 = (*((_BYTE *)v24 + 186) & 0x10) == 0;
    v19 = *((_QWORD *)v24 + 4);
    *a10 = v24;
    *a1 = v19;
    if ( v31 )
    {
LABEL_30:
      v32 = *v24;
      v33 = *v24 + 1;
      if ( *v24 == -1 )
        return 3221225626LL;
      while ( 1 )
      {
        v34 = v32;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)v24, v33, v32);
        if ( v34 == v32 )
          break;
        v33 = v32 + 1;
        if ( v32 == -1 )
          return 3221225626LL;
      }
      if ( (v24[2] & 1) != 0 && (unsigned __int8)CmpRemoveFromDelayedDeref(v24) )
      {
        CmpDereferenceKeyControlBlock(v24);
        v21 = v88;
      }
      else
      {
        if ( (v24[2] & 2) != 0 )
          CmpRemoveFromDelayedClose(v24);
        v21 = v88;
      }
LABEL_55:
      if ( !a12 || a12 == v19 )
        goto LABEL_80;
      if ( (*(_DWORD *)(v19 + 5360) & 1) != 0 )
      {
        v41 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v41, (ULONG_PTR)&CmpHiveListHeadLock, v42);
        if ( v41 )
          *(_BYTE *)(v41 + 26) |= 1u;
        v43 = *(_QWORD *)(v19 + 5368);
        if ( v43 != v19 + 5368 )
        {
          while ( 1 )
          {
            v44 = v43 - 5368;
            if ( v44 == a12 )
              break;
            v43 = *(_QWORD *)(v44 + 5368);
            if ( v43 == v19 + 5368 )
              goto LABEL_65;
          }
          _m_prefetchw(&CmpHiveListHeadLock);
          v46 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v46 = 0LL;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v47 = CmpHiveListHeadLock,
                v47 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v46,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock, v40);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          v21 = v88;
LABEL_80:
          if ( v21 < 0 )
            goto LABEL_72;
          if ( CmpVEEnabled
            && (*((_WORD *)v24 + 93) & 0x200) != 0
            && (v24[1] & 0x7FE00000) > 0xA00000
            && !CmpIsSystemEntity((int *)(a6 + 16))
            && (!CmpVEEnabled || (*((_WORD *)v24 + 93) & 0x100) == 0) )
          {
            v48 = v23[1];
            v49 = *v23;
            *(__int64 *)((char *)v93.m128i_i64 + 2) = 0LL;
            *(__int32 *)((char *)&v93.m128i_i32[2] + 2) = 0;
            v93.m128i_i16[7] = 0;
            v93.m128i_i16[0] = 0;
            CmpUnlockTwoKcbs(v49, v48);
            *v23 = 0LL;
            v23[1] = 0LL;
            if ( *a9 != -1 )
            {
              CmpUnlockHashEntryByIndex(v19, *a9);
              *a9 = -1;
            }
            CmpUnlockRegistry();
            CmpLockRegistryExclusive();
            if ( (v24[1] & 0x20000) != 0 )
            {
              CmpDereferenceKeyControlBlock(v24);
              return 3221225524LL;
            }
            v21 = CmVirtualKCBToRealPath(v24, &v93);
            if ( v21 >= 0 )
            {
              *(_DWORD *)a6 |= 8u;
              v21 = CmpBlockHiveWrites(0LL, 16, &v97);
              if ( v21 >= 0 )
              {
                PathByName = CmpFindPathByNameEx(0LL, &v93, 0LL, 16, &v94, v98);
                CmpUnblockHiveWrites(0LL, 16, v97);
                v21 = 260;
                if ( PathByName )
                {
                  if ( a15 )
                  {
                    v51 = (void *)a15->m128i_i64[1];
                    if ( v51 )
                      ExFreePoolWithTag(v51, 0);
                    *a15 = v93;
                  }
                  else
                  {
                    v21 = -1073741670;
                  }
                }
                else
                {
                  v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*((_QWORD *)v24 + 4) + 8LL))(
                          *((_QWORD *)v24 + 4),
                          v24[10],
                          &v90);
                  if ( v52 )
                  {
                    if ( HvpMarkCellDirty(v19, BugCheckParameter3, 1, 0LL) )
                    {
                      *(_WORD *)(v52 + 2) |= 0x100u;
                      *((_WORD *)v24 + 93) |= 0x100u;
                    }
                    else
                    {
                      v21 = -1073741443;
                    }
                    (*(void (__fastcall **)(_QWORD, int *))(*((_QWORD *)v24 + 4) + 16LL))(*((_QWORD *)v24 + 4), &v90);
                  }
                  else
                  {
                    v21 = -1073741670;
                  }
                }
              }
              CmpDereferenceKeyControlBlock(v24);
              if ( v21 == 260 && a17 )
                *a17 = 1;
              return (unsigned int)v21;
            }
LABEL_72:
            CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v24);
            return (unsigned int)v21;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          v54 = CmKeyObjectType;
          LOBYTE(a16) = 1;
          P = CurrentPrcb->PPLookasideList[4].P;
          ++P->TotalAllocates;
          v56 = RtlpInterlockedPopEntrySList(&P->ListHead);
          if ( !v56 )
          {
            ++P->AllocateMisses;
            L = CurrentPrcb->PPLookasideList[4].L;
            ++L->TotalAllocates;
            v56 = RtlpInterlockedPopEntrySList(&L->ListHead);
            if ( !v56 )
            {
              Size = L->Size;
              Tag = L->Tag;
              Type = (unsigned int)L->Type;
              ++L->AllocateMisses;
              v56 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
              if ( !v56 )
              {
                v21 = -1073741670;
                goto LABEL_72;
              }
            }
          }
          LODWORD(v56->Next) = CurrentPrcb->Number;
          v21 = ObpCaptureObjectCreateInformation(v101, v101, 0LL, &v96, (__int64)v56, 0);
          if ( v21 >= 0 )
          {
            if ( ((__int64)v56->Next & (_DWORD)v54[9]) != 0 )
            {
              v21 = -1073741811;
            }
            else if ( ((__int64)v56->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, v101) )
            {
              v65 = *((_DWORD *)v54 + 27);
              HIDWORD(v56[1].Next) = *((_DWORD *)v54 + 26);
              *((_DWORD *)&v56[1].Next + 2) = v65;
              v21 = ObpAllocateObject(v56, v101, (__int64)v54, &v96, 88, &v95, &a16);
              if ( v21 >= 0 )
              {
                v68 = v95;
                if ( ObpTraceFlags )
                {
                  ObpRegisterObject(v95);
                  ObpPushStackInfo(v68, 1, 1u, 1953261124);
                }
                v64 = a14;
                *a14 = (PVOID)(v68 + 48);
LABEL_133:
                v88 = v21;
                if ( v21 < 0 )
                  goto LABEL_72;
                v69 = (int *)*v64;
                if ( a13 )
                  v70 = *(void **)(a13 + 48);
                else
                  v70 = 0LL;
                *((_QWORD *)v69 + 7) = v70;
                if ( !a13 || *(_QWORD *)(a13 + 48) )
                  v71 = 0LL;
                else
                  v71 = a13 + 80;
                v72 = (_DWORD *)a6;
                *((_QWORD *)v69 + 8) = v71;
                *((_WORD *)v69 + 24) = 0;
                *((_WORD *)v69 + 25) = *(_WORD *)(a6 + 20);
                if ( v70 )
                {
                  v88 = CmReferenceKtmTransaction(v70);
                  v73 = v88;
                  if ( v88 < 0 )
                  {
                    *((_QWORD *)v69 + 7) = 0LL;
                    if ( (*((_BYTE *)v24 + 186) & 0x40) != 0 )
                    {
                      *v69 = v24[24];
                      *((_QWORD *)v69 + 1) = v24;
                    }
                    else
                    {
                      *v69 = 1803104306;
                      *((_QWORD *)v69 + 1) = v24;
                      *((_QWORD *)v69 + 2) = 0LL;
                      *((_QWORD *)v69 + 3) = PsGetCurrentThreadProcessId();
                      *((_QWORD *)v69 + 10) = v69 + 18;
                      *((_QWORD *)v69 + 9) = v69 + 18;
                      EnlistKeyBodyWithKCB((signed __int64)v69, 2 - (v102 != 0));
                    }
                    ObDereferenceObjectDeferDelete(*v64);
                    return v73;
                  }
                }
                if ( (*((_BYTE *)v24 + 186) & 0x40) != 0 )
                {
                  *v69 = v24[24];
                  *((_QWORD *)v69 + 1) = v24;
                  *((_QWORD *)v69 + 10) = v69 + 18;
                  *((_QWORD *)v69 + 9) = v69 + 18;
                  *(_QWORD *)(a6 + 56) = *v69;
                  return 1073741846LL;
                }
                *v69 = 1803104306;
                *((_QWORD *)v69 + 1) = v24;
                *((_QWORD *)v69 + 2) = 0LL;
                v74 = (__int64 *)(v69 + 8);
                *((_QWORD *)v69 + 3) = PsGetCurrentThreadProcessId();
                v76 = 0;
                *((_QWORD *)v69 + 10) = v69 + 18;
                v77 = 2 - (v102 != 0);
                *((_QWORD *)v69 + 9) = v69 + 18;
                *((_QWORD *)v69 + 5) = v69 + 8;
                *((_QWORD *)v69 + 4) = v69 + 8;
                while ( _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(*((_QWORD *)v69 + 1) + 8LL * v76 + 136),
                          (signed __int64)v69,
                          0LL) )
                {
                  if ( ++v76 >= 4 )
                  {
                    if ( (v77 & 1) != 0 )
                      CmpUnlockKcb(*((char **)v69 + 1));
                    if ( (v77 & 2) == 0 )
                    {
                      v78 = *((_QWORD *)v69 + 1);
                      if ( (*(_DWORD *)(v78 + 4) & 0x100000) != 0 )
                        *(_DWORD *)(v78 + 64) = CmpLockTableAdd(*((_QWORD *)v69 + 1), 1);
                      v79 = KeAbPreAcquire(v78 + 48, 0LL, 0LL, v75);
                      v81 = v79;
                      if ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 48), 0LL) )
                        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v78 + 48), v79, v78 + 48, v80);
                      if ( v81 )
                        *(_BYTE *)(v81 + 26) |= 1u;
                      v72 = (_DWORD *)a6;
                      v64 = a14;
                      *(_QWORD *)(v78 + 56) = KeGetCurrentThread();
                      v77 = 2 - (v102 != 0);
                    }
                    v82 = *((_QWORD *)v69 + 1) + 120LL;
                    v83 = *(__int64 ***)(*((_QWORD *)v69 + 1) + 128LL);
                    *v74 = v82;
                    *((_QWORD *)v69 + 5) = v83;
                    if ( *v83 != (__int64 *)v82 )
                      __fastfail(3u);
                    *v83 = v74;
                    *(_QWORD *)(v82 + 8) = v74;
                    if ( (v77 & 3) == 0 )
                      CmpUnlockKcb(*((char **)v69 + 1));
                    break;
                  }
                }
                v84 = v72[6];
                v88 = 0;
                if ( (v84 & 4) != 0 )
                {
                  *(_QWORD *)&a3->RemainingDesiredAccess = 0LL;
                  PreviousMode = KeGetCurrentThread()->PreviousMode;
                  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
                    a3->PreviouslyGrantedAccess |= 0x1020019u;
                  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
                    a3->PreviouslyGrantedAccess |= 0x10F0026u;
                  if ( !a3->PreviouslyGrantedAccess )
                  {
                    ObDereferenceObjectDeferDelete(*v64);
                    return 3221225506LL;
                  }
                  return (unsigned int)v88;
                }
                v86 = *((_QWORD *)v69 + 1);
                if ( !a3->OriginalDesiredAccess && (*v72 & 0x800) != 0
                  || CmpCheckKeyBodyAccess(v69, (GUID *)a13, a3, v101, &v88) )
                {
                  return (unsigned int)v88;
                }
                if ( !CmpIsSystemEntity(v72 + 4)
                  && (*(_DWORD *)(v86 + 184) & 0x40) == 0
                  && (*(_DWORD *)(*(_QWORD *)(v86 + 32) + 5360LL) & 0x10) != 0 )
                {
                  v88 = CmpCheckAdminAccess(
                          a3->RemainingDesiredAccess,
                          (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v86 + 88) + 32LL));
                  if ( v88 >= 0 )
                  {
                    if ( v89 == 1 )
                    {
                      AccessMask = 0x2000000;
                      RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76));
                      v87 = AccessMask;
                      a3->RemainingDesiredAccess = AccessMask;
                      a3->OriginalDesiredAccess = v87;
                      if ( CmpCheckKeyBodyAccess(v69, (GUID *)a13, a3, v101, &v88) )
                        return (unsigned int)v88;
                    }
                    else
                    {
                      v88 = -1073741790;
                    }
                  }
                }
                if ( (*v72 & 2) != 0 )
                {
                  *(_DWORD *)(v86 + 4) |= 0x20000u;
                  *(_QWORD *)(v86 + 24) = -1LL;
                  *(_DWORD *)(v86 + 40) = -1;
                }
                if ( (*(_DWORD *)(v86 + 4) & 0x20000) == 0
                  && KeGetCurrentThread()->PreviousMode == 1
                  && (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process)
                  && (a3->RemainingDesiredAccess & 0xD0026) != 0
                  && CmpCheckWrpKeyAccess(v86) )
                {
                  CmpPublishEventForPcaResolver(v86);
                }
                ObDereferenceObjectDeferDelete(*v64);
                return (unsigned int)v88;
              }
            }
            else
            {
              v21 = -1073741727;
            }
            if ( *((_QWORD *)&v96 + 1) )
              ObpFreeObjectNameBuffer(&v96);
            Next = v56[2].Next;
            if ( Next )
            {
              LOBYTE(v61) = 1;
              SeReleaseSecurityDescriptor(Next, LOBYTE(v56[1].Next), v61);
              v56[2].Next = 0LL;
            }
            v67 = KeGetCurrentPrcb();
            v63 = v67->PPLookasideList[4].P;
            ++v63->TotalFrees;
            if ( LOWORD(v63->ListHead.Alignment) >= v63->Depth )
            {
              ++v63->FreeMisses;
              v63 = v67->PPLookasideList[4].L;
              ++v63->TotalFrees;
              if ( LOWORD(v63->ListHead.Alignment) >= v63->Depth )
                goto LABEL_115;
            }
          }
          else
          {
            v62 = KeGetCurrentPrcb();
            v63 = v62->PPLookasideList[4].P;
            ++v63->TotalFrees;
            if ( LOWORD(v63->ListHead.Alignment) >= v63->Depth )
            {
              ++v63->FreeMisses;
              v63 = v62->PPLookasideList[4].L;
              ++v63->TotalFrees;
              if ( LOWORD(v63->ListHead.Alignment) >= v63->Depth )
              {
LABEL_115:
                ++v63->FreeMisses;
                ((void (__fastcall *)(PSLIST_ENTRY))v63->FreeEx)(v56);
                v64 = a14;
                goto LABEL_133;
              }
            }
          }
          RtlpInterlockedPushEntrySList(&v63->ListHead, v56);
          v64 = a14;
          goto LABEL_133;
        }
LABEL_65:
        _m_prefetchw(&CmpHiveListHeadLock);
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v18 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v45 = CmpHiveListHeadLock,
              v45 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v18,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, v40);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
      }
      v21 = -1073741790;
      goto LABEL_72;
    }
    return 260LL;
  }
  v92 = -1;
  CmpUnlockAndLockKcbs((__int64 *)a8, v24, 0LL, 0LL);
  if ( *a9 != -1 )
  {
    CmpUnlockHashEntryByIndex(*((_QWORD *)v24 + 4), *a9);
    *a9 = -1;
  }
  v27 = *((_QWORD *)*a10 + 4);
  v28 = (*(_DWORD *)(v27 + 2808) - 1) & ((101027 * (*((_DWORD *)*a10 + 4) ^ (*((_DWORD *)*a10 + 4) >> 9))) ^ ((unsigned int)(101027 * (*((_DWORD *)*a10 + 4) ^ (*((_DWORD *)*a10 + 4) >> 9))) >> 9));
  *a9 = v28;
  CmpLockHashEntryByIndexShared(v27, v28);
  CmpUnlockAndLockKcbs((__int64 *)a8, 0LL, (__int64)*a10, 1LL);
  CmpCleanUpKcbValueCache(*a10);
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*((_QWORD *)*a10 + 4) + 8LL))(
          *((_QWORD *)*a10 + 4),
          *((unsigned int *)*a10 + 10),
          &v92);
  if ( !v29 )
  {
    *a10 = v24;
    return 3221225626LL;
  }
  v30 = *a10;
  v30[24] = *(_DWORD *)(v29 + 36);
  *((_QWORD *)v30 + 13) = *(unsigned int *)(v29 + 40);
  (*(void (__fastcall **)(_QWORD, int *))(*((_QWORD *)v30 + 4) + 16LL))(*((_QWORD *)v30 + 4), &v92);
  return 260LL;
}
