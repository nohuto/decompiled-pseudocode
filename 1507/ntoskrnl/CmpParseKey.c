/*
 * XREFs of CmpParseKey @ 0x1404BEE10
 * Callers:
 *     <none>
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpGetConvKeyAtIndex @ 0x140050170 (CmpGetConvKeyAtIndex.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     CmpFreeExtraHashInfo @ 0x140119718 (CmpFreeExtraHashInfo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401E006C (CmpLockTableRemove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     CmpUnlockAndLockKcbs @ 0x14042A760 (CmpUnlockAndLockKcbs.c)
 *     CmpUnlockHashEntryByIndex @ 0x140447B68 (CmpUnlockHashEntryByIndex.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404C8A40 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1404EDE10 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpGetNextName @ 0x14051FE50 (CmpGetNextName.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpStepThroughExit @ 0x14052D48C (CmpStepThroughExit.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 a1,
        POBJECT_TYPE *a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 a6,
        UNICODE_STRING *a7,
        _DWORD *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r15
  _DWORD *v11; // r12
  int v12; // esi
  wchar_t *Buffer; // rdx
  unsigned __int16 v15; // cx
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  wchar_t *v20; // rax
  bool v21; // zf
  unsigned __int16 v22; // ax
  wchar_t *v23; // rcx
  __int64 v24; // rbx
  PVOID PoolWithTag; // rax
  __int64 v26; // rbx
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *v28; // rax
  unsigned __int16 Length; // cx
  __int64 v30; // r14
  __int64 v31; // r9
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ebx
  int v35; // eax
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // r13d
  int v41; // eax
  unsigned int v42; // edx
  __int64 v43; // r9
  signed int SymbolicLink; // r15d
  char *v45; // r14
  unsigned int v46; // r8d
  unsigned int ConvKeyAtIndex; // eax
  int *v48; // rbx
  __int64 v49; // rcx
  int *v50; // r12
  struct _KTHREAD *v51; // rbx
  struct _KTHREAD *v52; // r15
  _KPROCESS *Process; // r13
  struct _KTHREAD *v54; // r14
  signed __int64 *p_WaitBlockList; // rdi
  __int64 v56; // rsi
  __int64 v57; // r9
  void *v58; // rbx
  __int16 v59; // ax
  void *v60; // rdi
  __int64 v61; // r9
  __int64 v62; // rdi
  __int64 v63; // r9
  __int16 v64; // ax
  int v65; // eax
  unsigned int v66; // edi
  int v67; // r12d
  unsigned int v68; // esi
  ULONG_PTR v69; // rsi
  unsigned int v70; // r12d
  unsigned int v71; // edi
  __int64 v72; // rcx
  ULONG_PTR v73; // rbx
  unsigned int v74; // esi
  __int64 v75; // rax
  __m128i v76; // xmm0
  __int16 v77; // dx
  _WORD *v78; // xmm0_8
  _WORD *v79; // rax
  __int16 v80; // cx
  unsigned int v81; // esi
  __int64 v82; // rax
  __int64 v83; // rdi
  char NextName; // al
  __int64 v85; // rax
  unsigned int v86; // esi
  struct _ERESOURCE *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdi
  int v90; // eax
  char *v91; // rdi
  unsigned int v92; // eax
  unsigned int v93; // r9d
  WCHAR *v94; // rdi
  int v95; // ebx
  __int64 v96; // rsi
  WCHAR v97; // ax
  int v98; // ecx
  unsigned int v99; // edx
  unsigned int v100; // r8d
  _DWORD *v101; // rax
  unsigned int *v102; // rax
  UNICODE_STRING v103; // xmm0
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // rdx
  signed __int64 *v107; // rbx
  signed __int64 v108; // rax
  signed __int64 v109; // rcx
  signed __int64 v110; // rtt
  signed __int32 v111; // ecx
  int v112; // eax
  PVOID v113; // rsi
  PVOID v114; // rdi
  unsigned int v115; // eax
  unsigned int v116; // ecx
  PVOID v117; // rcx
  int v118; // eax
  unsigned __int32 v119; // r8d
  unsigned __int32 v120; // edx
  void *v121; // rbx
  unsigned int v122; // edi
  __int64 v123; // rsi
  __int64 v124; // rdx
  struct _KTHREAD *v125; // rcx
  __int16 v126; // ax
  int v127; // eax
  signed int LinkNode; // eax
  __int64 v129; // rcx
  int v130; // esi
  bool v131; // cf
  __int64 v132; // rdi
  PVOID v133; // rsi
  char *v134; // rdi
  unsigned int v135; // eax
  unsigned int v136; // ecx
  signed __int64 v137; // rax
  signed __int64 v138; // rcx
  __int64 v139; // rtt
  __int64 v140; // rdx
  signed __int64 *v141; // rbx
  signed __int64 v142; // rax
  signed __int64 v143; // rcx
  signed __int64 v144; // rtt
  signed __int32 v145; // ecx
  ULONG_PTR v146; // r13
  unsigned __int32 v147; // edx
  unsigned __int32 v148; // ecx
  unsigned int v149; // r14d
  ULONG_PTR v150; // rdi
  unsigned __int64 *v151; // r15
  __int64 v152; // rax
  __int64 v153; // r9
  __int64 v154; // rbx
  __int64 v155; // r9
  __int64 v156; // rax
  __int64 v157; // r9
  __int64 v158; // rsi
  __int64 v159; // rdx
  signed __int64 v160; // rax
  signed __int64 v161; // rcx
  __int64 v162; // rtt
  unsigned __int64 v163; // rdx
  signed __int64 *v164; // rbx
  signed __int64 v165; // rax
  signed __int64 v166; // rcx
  signed __int64 v167; // rtt
  int v168; // r8d
  __int64 v169; // rbx
  struct _KTHREAD *v170; // rcx
  __int16 v171; // ax
  int SubKeyByNameWithStatus; // [rsp+90h] [rbp-80h]
  unsigned int v173; // [rsp+94h] [rbp-7Ch] BYREF
  char v174; // [rsp+98h] [rbp-78h] BYREF
  __int16 v175; // [rsp+99h] [rbp-77h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A8h] [rbp-68h]
  ULONG_PTR v178; // [rsp+B0h] [rbp-60h] BYREF
  PVOID v179[2]; // [rsp+B8h] [rbp-58h] BYREF
  char v180[8]; // [rsp+C8h] [rbp-48h] BYREF
  int v181[2]; // [rsp+D0h] [rbp-40h]
  int v182[4]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v183; // [rsp+F0h] [rbp-20h]
  int v184; // [rsp+F8h] [rbp-18h] BYREF
  unsigned int v185; // [rsp+FCh] [rbp-14h] BYREF
  char v186; // [rsp+100h] [rbp-10h] BYREF
  char v187; // [rsp+101h] [rbp-Fh] BYREF
  char v188[2]; // [rsp+102h] [rbp-Eh] BYREF
  unsigned int v189; // [rsp+104h] [rbp-Ch] BYREF
  int v190[2]; // [rsp+108h] [rbp-8h] BYREF
  UNICODE_STRING Source; // [rsp+110h] [rbp+0h] BYREF
  __int64 v192; // [rsp+120h] [rbp+10h]
  __int64 v193; // [rsp+128h] [rbp+18h]
  ULONG_PTR v194[2]; // [rsp+130h] [rbp+20h] BYREF
  UNICODE_STRING v195; // [rsp+140h] [rbp+30h] BYREF
  __int64 v196; // [rsp+150h] [rbp+40h] BYREF
  _SLIST_ENTRY *v197; // [rsp+158h] [rbp+48h] BYREF
  PVOID TokenInformation; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v199[2]; // [rsp+168h] [rbp+58h] BYREF
  int v200; // [rsp+178h] [rbp+68h]
  int v201; // [rsp+17Ch] [rbp+6Ch] BYREF
  ULONG_PTR v202[2]; // [rsp+180h] [rbp+70h] BYREF
  unsigned int v203; // [rsp+190h] [rbp+80h]
  PVOID P; // [rsp+198h] [rbp+88h]
  int v205; // [rsp+1A0h] [rbp+90h]
  __int64 v206; // [rsp+1A8h] [rbp+98h]
  UNICODE_STRING *v207; // [rsp+1B0h] [rbp+A0h]
  _WORD v208[4]; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 v209; // [rsp+1C0h] [rbp+B0h]
  int *v210; // [rsp+1C8h] [rbp+B8h]
  _QWORD v211[3]; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 v212; // [rsp+1E8h] [rbp+D8h]
  __int64 v213; // [rsp+1F0h] [rbp+E0h]
  __int64 v214; // [rsp+1F8h] [rbp+E8h]
  __int64 v215; // [rsp+200h] [rbp+F0h]
  _QWORD v216[18]; // [rsp+210h] [rbp+100h] BYREF
  __int128 v217; // [rsp+2A0h] [rbp+190h] BYREF
  _BYTE v218[32]; // [rsp+2B0h] [rbp+1A0h] BYREF

  v10 = a1;
  v11 = a8;
  v206 = a1;
  v192 = a10;
  v12 = 0;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  LOWORD(v182[0]) = 0;
  v185 = 0;
  v194[0] = 0LL;
  v196 = 0LL;
  memset(v216, 0, 136);
  *(_QWORD *)v181 = a3;
  *(_QWORD *)((char *)v182 + 2) = 0LL;
  *(int *)((char *)&v182[2] + 2) = 0;
  HIWORD(v182[3]) = 0;
  v175 = a4;
  v193 = a6;
  v207 = a7;
  v183 = (__int64)a8;
  v184 = -1;
  v178 = 0xFFFFFFFFLL;
  *(_OWORD *)v179 = 0LL;
  v173 = -1;
  v180[0] = 0;
  v201 = 0;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  if ( a7->Length )
  {
    Buffer = a7->Buffer;
    do
    {
      if ( Buffer[((unsigned __int64)a7->Length >> 1) - 1] != 92 )
        break;
      v15 = a7->Length - 2;
      a7->Length = v15;
    }
    while ( v15 );
  }
  v16 = *(__m128i *)a7;
  v17 = *(_QWORD *)(v10 + 8);
  Source = *a7;
  v18 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( v17 == v18 && (!a8 || (*a8 & 0x40) == 0) )
  {
    v19 = _mm_cvtsi128_si32(v16);
    v195 = (UNICODE_STRING)v16;
    v195.Length = v19;
    if ( v19 )
    {
      v20 = v195.Buffer;
      while ( *v20 == 92 )
      {
        ++v20;
        v21 = v19 == 2;
        v19 -= 2;
        v195.Buffer = v20;
        v195.Length = v19;
        if ( v21 )
          goto LABEL_14;
      }
      if ( v19 && ((*v20 - 65) & 0xFFDF) == 0 )
        return 3221225506LL;
    }
  }
LABEL_14:
  if ( a8 && (*a8 & 0x400) != 0 )
  {
    if ( v17 != v18 )
      return 3221225506LL;
    v22 = _mm_cvtsi128_si32(v16);
    v195 = (UNICODE_STRING)v16;
    v23 = (wchar_t *)v16.m128i_i64[1];
    v195.Length = v22;
    if ( v22 )
    {
      do
      {
        if ( *v23 != 92 )
          break;
        ++v23;
        v21 = v22 == 2;
        v22 -= 2;
        v195.Buffer = v23;
        v195.Length = v22;
      }
      while ( !v21 );
    }
    if ( v22 < 4u || ((*v23 - 65) & 0xFFDF) != 0 || v23[1] != 92 )
      return 3221225506LL;
  }
  v24 = v192;
  v199[1] = v199;
  v199[0] = v199;
  *(_QWORD *)v192 = 0LL;
  if ( !a8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20204D43u);
    P = PoolWithTag;
    v26 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x88uLL);
    v11 = (_DWORD *)v26;
    v183 = v26;
    v24 = v192;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v30 = *(_QWORD *)v181;
  }
  else
  {
    v28 = Source.Buffer;
    if ( Source.Buffer )
    {
      Length = Source.Length;
      do
      {
        if ( !Length )
          break;
        if ( *v28 != 92 )
          break;
        ++v28;
        Length -= 2;
        Source.Buffer = v28;
        Source.Length = Length;
      }
      while ( v28 );
    }
    v30 = *(_QWORD *)v181;
    v216[13] = 1LL;
    LODWORD(v216[15]) = v11[7];
    HIDWORD(v216[15]) = a5;
    v216[14] = &Source;
    LOBYTE(v216[16]) = v175;
    LODWORD(v216[3]) = v11[6];
    v216[2] = CmKeyObjectType;
    LODWORD(v216[7]) = *(_DWORD *)(*(_QWORD *)v181 + 16LL);
    v216[0] = a6;
    v216[1] = v10;
    v216[9] = v24;
    v216[12] = *((_QWORD *)v11 + 10);
    if ( (*v11 & 1) != 0 )
    {
      v31 = 27LL;
      v216[8] = v11 + 8;
      v208[0] = *((_WORD *)v11 + 2);
      v208[1] = v208[0];
      v32 = 26;
      v209 = *((_QWORD *)v11 + 1);
      v216[4] = v208;
      v216[5] = *(_QWORD *)(*(_QWORD *)v181 + 64LL);
      v216[6] = a9;
    }
    else
    {
      v31 = 29LL;
      v32 = 28;
    }
    v33 = CmpCallCallBacks(v32, (__int64)v216, 1, v31, v10, (__int64)v199);
    v34 = v33;
    if ( v33 < 0 )
    {
      if ( v33 == -1073740541 )
      {
        v35 = HIDWORD(v216[7]);
        *(_DWORD *)(*(_QWORD *)v181 + 20LL) |= HIDWORD(v216[7]);
        *(_DWORD *)(v30 + 16) &= ~(v35 | 0x2000000);
        v34 = 0;
      }
      v36 = KeGetCurrentThread();
      v37 = v36->KernelApcDisable + 1;
      v36->KernelApcDisable = v37;
      if ( !v37
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
        && !v36->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v34;
    }
  }
  v38 = *v11;
  v39 = a5 & 0x100;
  v40 = v173;
  v205 = v39;
  v200 = v38;
  v197 = 0LL;
  while ( 1 )
  {
    *(_QWORD *)v190 = *(_QWORD *)(v10 + 8);
    if ( v39 )
      *v11 |= 0x200u;
    v41 = CmpBuildHashStackAndLookupCache(
            v10,
            (struct _SECURITY_SUBJECT_CONTEXT *)v30,
            (__int64 *)v190,
            (__int64)v194,
            &Source.Length,
            &BugCheckParameter2,
            &v178,
            &v189,
            (int *)&v185,
            (__int64)v11,
            &v196,
            (__int64)v218,
            (__int64 *)&v197,
            &v187,
            v180);
    SubKeyByNameWithStatus = v41;
    SymbolicLink = v41;
    if ( v41 < 0 || v41 == 260 )
      break;
    v45 = *(char **)v190;
    if ( v187 == 1 )
    {
      v179[0] = *(PVOID *)v190;
      goto LABEL_64;
    }
    if ( (*(_DWORD *)(*(_QWORD *)v190 + 4LL) & 0x10) == 0 )
    {
      v46 = v185;
      goto LABEL_63;
    }
    if ( (*v11 & 1) != 0 && v185 == v189 )
    {
      v46 = v185 - 1;
      v179[1] = *(PVOID *)(*(_QWORD *)v190 + 72LL);
LABEL_63:
      v179[0] = *(PVOID *)v190;
      ConvKeyAtIndex = CmpGetConvKeyAtIndex((__int64)v218, (__int64)v197, v46);
      v42 = ((101027 * (ConvKeyAtIndex ^ (ConvKeyAtIndex >> 9))) >> 9) ^ (101027
                                                                        * (ConvKeyAtIndex ^ (ConvKeyAtIndex >> 9)));
      v40 = v42 & (*(_DWORD *)(*((_QWORD *)v45 + 4) + 2808LL) - 1);
      v173 = v40;
    }
LABEL_64:
    v21 = (*((_DWORD *)v45 + 1) & 0x20000) == 0;
    v48 = (int *)(v45 + 4);
    BugCheckParameter4 = (ULONG_PTR)v45;
    v210 = (int *)(v45 + 4);
    if ( !v21 )
    {
      v73 = BugCheckParameter2;
      SymbolicLink = -1073741772;
      SubKeyByNameWithStatus = -1073741772;
      goto LABEL_314;
    }
    v21 = CmpVEEnabled == 0;
    v11[5] = *(unsigned __int16 *)(v206 + 50);
    if ( v21 )
      goto LABEL_116;
    v49 = *((_QWORD *)v45 + 4);
    if ( v49 == CmpMasterHive
      || (*v48 & 0x20000) == 0 && (*(_DWORD *)(v49 + 5360) & 0x10) == 0 && (*((_WORD *)v45 + 93) & 0x200) == 0 )
    {
      goto LABEL_116;
    }
    LOBYTE(v42) = 1;
    v203 = v42;
    v50 = v11 + 4;
    if ( v50 && (*v50 & 1) != 0 )
    {
      if ( (*v50 & 2) != 0 )
        goto LABEL_115;
      goto LABEL_110;
    }
    if ( KeGetCurrentThread()->PreviousMode )
    {
      LODWORD(TokenInformation) = 0;
      v51 = KeGetCurrentThread();
      v52 = v51;
      Process = v51->ApcState.Process;
      if ( (*((_DWORD *)&v51[1].SwapListEntry + 3) & 8) == 0 )
        goto LABEL_91;
      v54 = KeGetCurrentThread();
      --v54->KernelApcDisable;
      p_WaitBlockList = (signed __int64 *)&v51[1].WaitBlockList;
      v56 = KeAbPreAcquire((ULONG_PTR)&v51[1].WaitBlockList, 0LL, 0LL, v43);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v51[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (unsigned __int64 *)&v51[1].WaitBlockList,
          v56,
          (ULONG_PTR)&v51[1].WaitBlockList,
          v57);
      if ( v56 )
        *(_BYTE *)(v56 + 26) |= 1u;
      if ( (*((_DWORD *)&v51[1].SwapListEntry + 3) & 8) != 0 )
      {
        v58 = (void *)(*(_QWORD *)&v51[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v58);
      }
      else
      {
        v58 = 0LL;
      }
      if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_WaitBlockList);
      KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
      v59 = v54->KernelApcDisable + 1;
      v54->KernelApcDisable = v59;
      if ( !v59
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152
        && !v54->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v58 )
      {
        ObfDereferenceObject(v58);
      }
      else
      {
LABEL_91:
        v60 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
        if ( !v60 )
        {
          --v52->KernelApcDisable;
          v62 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, v61);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v62, (ULONG_PTR)&Process[1], v63);
          if ( v62 )
            *(_BYTE *)(v62 + 26) |= 1u;
          v60 = (void *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
          KeAbPostRelease((ULONG_PTR)&Process[1]);
          v64 = v52->KernelApcDisable + 1;
          v52->KernelApcDisable = v64;
          if ( !v64
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
            && !v52->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        SeQueryInformationToken(v60, TokenVirtualizationEnabled, &TokenInformation);
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)v60);
      }
      SymbolicLink = SubKeyByNameWithStatus;
      v48 = v210;
      v12 = HIDWORD(v178);
      LOBYTE(v42) = v203;
      if ( (_BYTE)TokenInformation )
        LOBYTE(v42) = 0;
    }
    if ( !v50 )
      goto LABEL_108;
    *v50 |= 1u;
    v65 = *v50;
    if ( (_BYTE)v42 )
    {
      *v50 = v65 | 2;
LABEL_108:
      if ( (_BYTE)v42 )
      {
        v40 = v173;
        v45 = *(char **)v190;
LABEL_115:
        v11 = (_DWORD *)v183;
        goto LABEL_116;
      }
      goto LABEL_109;
    }
    *v50 = v65 | 4;
LABEL_109:
    v45 = *(char **)v190;
    v40 = v173;
LABEL_110:
    v11 = (_DWORD *)v183;
    if ( (*(_DWORD *)v183 & 8) == 0 )
    {
      SubKeyByNameWithStatus = CmpVEExecuteParseLogic((__int64)v45, &Source, (_DWORD *)v183, (UNICODE_STRING *)v193);
      SymbolicLink = SubKeyByNameWithStatus;
      if ( SubKeyByNameWithStatus != -1073741199 )
      {
LABEL_214:
        v73 = BugCheckParameter2;
        goto LABEL_313;
      }
      SymbolicLink = 0;
      SubKeyByNameWithStatus = 0;
    }
LABEL_116:
    v66 = v189;
    if ( !v189 )
      goto LABEL_294;
    v67 = *v48;
    if ( (*v48 & 0x17) != 0 )
    {
      v68 = v185;
      if ( v185 == v189 )
      {
        v21 = (v67 & 0x10) == 0;
        v11 = (_DWORD *)v183;
        if ( v21 )
          goto LABEL_199;
        if ( (*(_DWORD *)v183 & 1) == 0 )
          goto LABEL_184;
        v69 = *((_QWORD *)v45 + 9);
        v70 = v189 - 1;
        BugCheckParameter4 = v69;
        v71 = 0;
        if ( (*(_DWORD *)(v69 + 4) & 0x20000) == 0 && (unsigned __int8)CmpReferenceKeyControlBlock(v69) )
        {
          v72 = *((_QWORD *)v45 + 4);
          *v48 |= 0x20000u;
          CmpRemoveKeyHash(v72, v45 + 16);
          *((_QWORD *)v45 + 3) = -1LL;
          CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v45);
          v73 = *(_QWORD *)(v69 + 32);
          v74 = *(_DWORD *)(v69 + 40);
          BugCheckParameter2 = v73;
          LODWORD(v178) = v74;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v73 + 2848), 1u);
          v75 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v73 + 8))(v73, v74, &v184);
          if ( !v75 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v73 + 2848));
            v11 = (_DWORD *)v183;
            SymbolicLink = -1073741670;
            goto LABEL_312;
          }
          CmpUpdateKeyNodeAccessBits(v73, v75, v74);
          ExReleaseResourceLite(*(PERESOURCE *)(v73 + 2848));
          (*(void (__fastcall **)(ULONG_PTR, int *))(v73 + 16))(v73, &v184);
          v76 = *(__m128i *)v207;
          *(_QWORD *)v182 = *(_QWORD *)&v207->Length;
          v77 = v182[0];
          v78 = (_WORD *)_mm_srli_si128(v76, 8).m128i_u64[0];
          v79 = v78;
          *(_QWORD *)&v182[2] = v78;
          if ( (!v78 || !LOWORD(v182[0])) && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            __debugbreak();
          v80 = HIWORD(v182[0]);
          if ( *v78 == 92 )
          {
            do
            {
              ++v79;
              v77 -= 2;
              v80 -= 2;
            }
            while ( *v79 == 92 );
            *(_QWORD *)&v182[2] = v79;
            HIWORD(v182[0]) = v80;
            LOWORD(v182[0]) = v77;
          }
          if ( v70 )
          {
            do
            {
              if ( *v79 == 92 )
              {
                ++v71;
                do
                {
                  ++v79;
                  v77 -= 2;
                  v80 -= 2;
                }
                while ( *v79 == 92 );
              }
              else
              {
                ++v79;
                v77 -= 2;
                v80 -= 2;
              }
              HIWORD(v182[0]) = v80;
              LOWORD(v182[0]) = v77;
              *(_QWORD *)&v182[2] = v79;
            }
            while ( v71 < v70 );
          }
          CmpUnlockAndLockKcbs((__int64 *)v179, v45, 0LL, 0LL);
          v66 = v189;
          v12 = 1;
          HIDWORD(v178) = 1;
          goto LABEL_142;
        }
        v66 = v189;
        SymbolicLink = -1073741670;
        v12 = 3;
        SubKeyByNameWithStatus = -1073741670;
        HIDWORD(v178) = 3;
      }
      else
      {
        if ( (v67 & 0x10) != 0 )
          goto LABEL_177;
        if ( (v67 & 1) != 0 )
          goto LABEL_197;
        v195 = Source;
        if ( !(unsigned __int8)CmpGetNextName(&v195, v182, &v174) )
        {
LABEL_177:
          SymbolicLink = -1073741772;
          v12 = 2;
          SubKeyByNameWithStatus = -1073741772;
          HIDWORD(v178) = 2;
        }
        else
        {
          v94 = *(WCHAR **)&v182[2];
          v95 = 0;
          if ( LOWORD(v182[0]) )
          {
            v96 = (((unsigned int)LOWORD(v182[0]) - 1) >> 1) + 1;
            do
            {
              v97 = *v94;
              if ( *v94 >= 0x61u )
              {
                if ( v97 <= 0x7Au )
                  v98 = v97 - 32;
                else
                  v98 = RtlUpcaseUnicodeChar(v97);
              }
              else
              {
                v98 = v97;
              }
              ++v94;
              v95 = v98 + 37 * v95;
              --v96;
            }
            while ( v96 );
            v68 = v185;
          }
          v99 = 0;
          if ( (v67 & 2) == 0 )
          {
            v102 = (unsigned int *)*((_QWORD *)v45 + 14);
            v100 = *v102;
            v101 = v102 + 1;
            if ( v100 )
              goto LABEL_193;
LABEL_196:
            v66 = v189;
LABEL_197:
            v11 = (_DWORD *)v183;
            if ( v66 - v68 == 1 && (*(_DWORD *)v183 & 1) != 0 )
            {
LABEL_199:
              v73 = BugCheckParameter2;
              v12 = HIDWORD(v178);
              goto LABEL_143;
            }
LABEL_184:
            v73 = BugCheckParameter2;
            SymbolicLink = -1073741772;
            v12 = 2;
            SubKeyByNameWithStatus = -1073741772;
            HIDWORD(v178) = 2;
            goto LABEL_143;
          }
          v100 = 1;
          v101 = v45 + 112;
LABEL_193:
          while ( *v101 && v95 != *v101 )
          {
            ++v99;
            ++v101;
            if ( v99 >= v100 )
              goto LABEL_196;
          }
          v66 = v189;
          v12 = HIDWORD(v178);
        }
      }
    }
    v73 = BugCheckParameter2;
LABEL_142:
    v11 = (_DWORD *)v183;
LABEL_143:
    if ( v179[0] && v179[1] )
      CmpUnlockAndLockKcbs((__int64 *)v179, *((void **)v45 + 9), 0LL, 0LL);
    if ( v12 != 1 )
    {
      if ( v12 == 2 )
        goto LABEL_313;
      if ( v12 != 3 )
      {
        if ( v185 && v185 == v66 )
        {
LABEL_294:
          HIBYTE(v175) = 1;
          _InterlockedIncrement64(&qword_14077F068);
LABEL_295:
          v129 = *((_QWORD *)v11 + 8);
          v130 = v193;
          v131 = HIBYTE(v175) != 0;
          HIBYTE(v175) = -HIBYTE(v175);
          SubKeyByNameWithStatus = CmpDoOpen(
                                     (unsigned int)&BugCheckParameter2,
                                     v178,
                                     v181[0],
                                     (unsigned __int8)v175,
                                     a5,
                                     (__int64)v11,
                                     (v131 ? 4 : 0) | 2u,
                                     (__int64)v179,
                                     (__int64)&v173,
                                     (__int64)v190,
                                     (__int64)v182,
                                     v129,
                                     v196,
                                     v192,
                                     v193,
                                     (__int64)&v186,
                                     (__int64)v188);
          SymbolicLink = SubKeyByNameWithStatus;
          if ( SubKeyByNameWithStatus != 260 )
            goto LABEL_304;
          CmpUnlockTwoKcbs(v179[0], v179[1]);
          v40 = v173;
          v73 = BugCheckParameter2;
          *(_OWORD *)v179 = 0LL;
          if ( v173 != -1 )
          {
            CmpUnlockHashEntryByIndex(BugCheckParameter2, v173);
            v40 = -1;
            v173 = -1;
          }
          if ( !v188[0] )
          {
            v132 = *(_QWORD *)v190;
            SymbolicLink = CmpGetSymbolicLink(v73, v130, v190[0], (int)v11, 0LL);
            if ( SymbolicLink >= 0 )
              SymbolicLink = 260;
            SubKeyByNameWithStatus = SymbolicLink;
            if ( v186 )
              CmpDereferenceKeyControlBlock(v132);
            *v11 &= ~8u;
            goto LABEL_305;
          }
LABEL_236:
          v45 = (char *)BugCheckParameter4;
          goto LABEL_307;
        }
        if ( (v45[186] & 0x10) == 0 )
        {
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v73 + 2848), 1u);
          v81 = v178;
          v82 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v73 + 8))(v73, (unsigned int)v178, &v184);
          v83 = v82;
          if ( v82 )
          {
            if ( (*(_DWORD *)(v73 + 144) & 0x8001) == 0
              && (*(_DWORD *)(v82 + 12) & CmpAccessBitForPhase) == 0
              && HvpMarkCellDirty(v73, v81, 0, 1LL) )
            {
              *(_DWORD *)(v83 + 12) |= CmpAccessBitForPhase;
            }
            (*(void (__fastcall **)(ULONG_PTR, int *))(v73 + 16))(v73, &v184);
            ExReleaseResourceLite(*(PERESOURCE *)(v73 + 2848));
            while ( 1 )
            {
              NextName = CmpGetNextName(&Source, v182, &v174);
              if ( !LOWORD(v182[0]) )
                break;
              if ( NextName != 1 )
                goto LABEL_237;
              if ( (v45[186] & 0x10) != 0 )
              {
                Source.Buffer = *(wchar_t **)&v182[2];
                if ( Source.Length + LOWORD(v182[0]) > 0xFFFF )
                  goto LABEL_311;
                Source.Length += LOWORD(v182[0]);
                if ( HIWORD(v182[0]) + Source.MaximumLength > 0xFFFF )
                  goto LABEL_311;
                Source.MaximumLength += HIWORD(v182[0]);
                CmpUnlockTwoKcbs(v179[0], v179[1]);
                *(_OWORD *)v179 = 0LL;
                if ( v40 != -1 )
                {
                  CmpUnlockHashEntryByIndex(v73, v40);
                  v40 = -1;
                  v173 = -1;
                }
                v104 = CmpGetSymbolicLink(v73, v193, (int)v45, (int)v11, &Source);
                v45 = (char *)BugCheckParameter4;
                SymbolicLink = v104;
                SubKeyByNameWithStatus = v104;
                if ( v104 >= 0 )
                {
                  *v11 &= ~8u;
                  SymbolicLink = 260;
                  SubKeyByNameWithStatus = 260;
                  goto LABEL_307;
                }
                goto LABEL_338;
              }
              v85 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v73 + 8))(v73, (unsigned int)v178, &v184);
              if ( !v85 )
                goto LABEL_220;
              SubKeyByNameWithStatus = CmpFindSubKeyByNameWithStatus(v73, v85, v182, v202);
              SymbolicLink = SubKeyByNameWithStatus;
              (*(void (__fastcall **)(ULONG_PTR, int *))(v73 + 16))(v73, &v184);
              if ( SubKeyByNameWithStatus < 0 )
              {
                if ( SubKeyByNameWithStatus != -1073741772 )
                  goto LABEL_305;
                if ( v174 == 1 && (*v11 & 1) != 0 )
                {
                  v12 = HIDWORD(v178);
                  goto LABEL_205;
                }
                SymbolicLink = -1073741772;
                BugCheckParameter4 = (ULONG_PTR)CmpAddInfoAfterParseFailure(
                                                  v73,
                                                  (unsigned int)v178,
                                                  (__int64)v179,
                                                  (__int64)v45,
                                                  (__int64)v182);
                SubKeyByNameWithStatus = -1073741772;
                v45 = (char *)BugCheckParameter4;
                _InterlockedIncrement64(qword_14077F078);
                v73 = BugCheckParameter2;
                v40 = v173;
                goto LABEL_314;
              }
              v86 = v202[0];
              v87 = *(struct _ERESOURCE **)(v73 + 2848);
              LODWORD(v178) = v202[0];
              ExAcquireResourceSharedLite(v87, 1u);
              v88 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v73 + 8))(v73, v86, &v184);
              v89 = v88;
              if ( !v88 )
                goto LABEL_219;
              if ( (*(_DWORD *)(v73 + 144) & 0x8001) == 0
                && (*(_DWORD *)(v88 + 12) & CmpAccessBitForPhase) == 0
                && HvpMarkCellDirty(v73, v86, 0, 1LL) )
              {
                *(_DWORD *)(v89 + 12) |= CmpAccessBitForPhase;
              }
              (*(void (__fastcall **)(ULONG_PTR, int *))(v73 + 16))(v73, &v184);
              ExReleaseResourceLite(*(PERESOURCE *)(v73 + 2848));
              v90 = CmpStepThroughExit(&BugCheckParameter2, &v178);
              SymbolicLink = v90;
              SubKeyByNameWithStatus = v90;
              if ( v174 == 1 )
              {
                if ( v90 < 0 )
                  goto LABEL_214;
                _InterlockedIncrement64(&qword_14077F070);
                goto LABEL_295;
              }
              if ( v90 < 0 )
                goto LABEL_214;
              v91 = (char *)BugCheckParameter4;
              v73 = BugCheckParameter2;
              *(_QWORD *)v190 = CmpCreateKeyControlBlock(BugCheckParameter2, (__int64)v182);
              v45 = *(char **)v190;
              if ( !*(_QWORD *)v190 )
              {
                SymbolicLink = -1073741670;
                v45 = v91;
                SubKeyByNameWithStatus = -1073741670;
                goto LABEL_314;
              }
              CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v91);
              CmpUnlockAndLockKcbs((__int64 *)v179, v91, (__int64)v45, 0LL);
              ++v185;
              BugCheckParameter4 = (ULONG_PTR)v45;
              v92 = CmpGetConvKeyAtIndex((__int64)v218, (__int64)v197, v185);
              v40 = (((101027 * (v92 ^ (v92 >> 9))) >> 9) ^ (101027 * (v92 ^ (v92 >> 9)))) & (*(_DWORD *)(v73 + 2808) - 1);
              v173 = v40;
              if ( v93 != v40 )
              {
                if ( v93 != -1 )
                  CmpUnlockHashEntryByIndex(v73, v93);
                CmpUnlockKcb(v45);
                CmpLockHashEntryByIndexExclusive(v73, v40);
                CmpLockKcbExclusive(v45);
                if ( (*((_DWORD *)v45 + 1) & 0x20000) != 0 )
                {
                  SymbolicLink = -1073741772;
                  SubKeyByNameWithStatus = -1073741772;
                  goto LABEL_314;
                }
              }
            }
            if ( NextName != 1 || v174 != 1 )
              goto LABEL_237;
            SubKeyByNameWithStatus = CmpStepThroughExit(&BugCheckParameter2, &v178);
            SymbolicLink = SubKeyByNameWithStatus;
            if ( SubKeyByNameWithStatus < 0 )
              goto LABEL_214;
            SubKeyByNameWithStatus = CmpDoOpen(
                                       (unsigned int)&BugCheckParameter2,
                                       v178,
                                       v181[0],
                                       (unsigned __int8)v175,
                                       a5,
                                       (__int64)v11,
                                       6,
                                       (__int64)v179,
                                       (__int64)&v173,
                                       (__int64)v190,
                                       (__int64)v182,
                                       *((_QWORD *)v11 + 8),
                                       v196,
                                       v192,
                                       v193,
                                       0LL,
                                       0LL);
            SymbolicLink = SubKeyByNameWithStatus;
            if ( SubKeyByNameWithStatus == 260 )
            {
              if ( !*((_QWORD *)v11 + 8) )
              {
                v105 = *(_QWORD *)(*(_QWORD *)v190 + 32LL);
                if ( (*(_DWORD *)(v105 + 5360) & 1) != 0 )
                  *((_QWORD *)v11 + 8) = v105;
              }
              *v11 &= ~8u;
              v73 = BugCheckParameter2;
              v40 = v173;
              goto LABEL_236;
            }
LABEL_304:
            v40 = v173;
            v73 = BugCheckParameter2;
LABEL_305:
            v45 = (char *)BugCheckParameter4;
LABEL_306:
            if ( SymbolicLink >= 0 )
            {
LABEL_307:
              if ( v11[8] == 2 && v180[0] )
                v11[8] = 1;
            }
LABEL_314:
            v133 = v179[0];
            v134 = (char *)v179[1];
            if ( v179[0] )
            {
              if ( v179[1] )
              {
                v135 = (*((_DWORD *)v179[0] + 1) >> 21) & 0x3FF;
                v136 = (*((_DWORD *)v179[1] + 1) >> 21) & 0x3FF;
                if ( v135 < v136 )
                  goto LABEL_320;
                if ( v135 > v136 )
                  goto LABEL_318;
                v133 = v179[0];
                v134 = (char *)v179[1];
                if ( v179[0] >= v179[1] )
                {
                  v134 = (char *)v179[1];
                  if ( v179[0] > v179[1] )
                  {
LABEL_318:
                    CmpUnlockKcb(v179[0]);
                    CmpUnlockKcb(v134);
                  }
                  else
                  {
                    CmpUnlockKcb(v179[0]);
                  }
                }
                else
                {
LABEL_320:
                  CmpUnlockKcb(v134);
                  CmpUnlockKcb(v133);
                }
LABEL_338:
                if ( v40 != -1 )
                {
                  v140 = *(_QWORD *)(v73 + 2800);
                  v141 = (signed __int64 *)(v140 + 24LL * v40);
                  v141[1] = 0LL;
                  _m_prefetchw(v141);
                  v142 = *v141;
                  v143 = *v141 - 16;
                  if ( (*v141 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v143 = 0LL;
                  if ( (v142 & 2) != 0 || (v144 = *v141, v144 != _InterlockedCompareExchange64(v141, v143, v142)) )
                    ExfReleasePushLock((_QWORD *)(v140 + 24LL * v40), v140);
                  KeAbPostRelease((ULONG_PTR)v141);
                  v145 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 5496), 0xFFFFFFFF);
                  v73 = BugCheckParameter2;
                  if ( v145 == 1 )
                    CmpDeleteHive(BugCheckParameter2);
                  v40 = -1;
                  v173 = -1;
                }
                if ( v45 )
                {
                  v146 = BugCheckParameter4;
                  v147 = *(_DWORD *)BugCheckParameter4;
                  if ( *(_DWORD *)BugCheckParameter4 <= 1u )
                  {
LABEL_351:
                    v149 = *(_DWORD *)(v146 + 16);
                    v150 = *(_QWORD *)(v146 + 32);
                    v151 = (unsigned __int64 *)(*(_QWORD *)(v150 + 2800)
                                              + 24LL
                                              * (((101027 * (v149 ^ (v149 >> 9))) ^ ((101027 * (v149 ^ (v149 >> 9))) >> 9)) & (*(_DWORD *)(v150 + 2808) - 1)));
                    v152 = KeAbPreAcquire((ULONG_PTR)v151, 0LL, 0LL, v43);
                    v154 = v152;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)v151, 0LL) )
                      ExfAcquirePushLockExclusiveEx(v151, v152, (ULONG_PTR)v151, v153);
                    if ( v154 )
                      *(_BYTE *)(v154 + 26) |= 1u;
                    v151[1] = (unsigned __int64)KeGetCurrentThread();
                    if ( !CmpReferenceHive(v150) )
                      KeBugCheckEx(0x51u, 0x17uLL, v150, 8uLL, v146);
                    if ( (*(_DWORD *)(v146 + 4) & 0x100000) != 0 )
                      *(_DWORD *)(v146 + 64) = CmpLockTableAdd(v146, 1);
                    v156 = KeAbPreAcquire(v146 + 48, 0LL, 0LL, v155);
                    v158 = v156;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)(v146 + 48), 0LL) )
                      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v146 + 48), v156, v146 + 48, v157);
                    if ( v158 )
                      *(_BYTE *)(v158 + 26) |= 1u;
                    *(_QWORD *)(v146 + 56) = KeGetCurrentThread();
                    CmpDereferenceKeyControlBlockWithLock(v146);
                    if ( *(struct _KTHREAD **)(v146 + 56) == KeGetCurrentThread() )
                      *(_QWORD *)(v146 + 56) = 0LL;
                    else
                      _InterlockedDecrement((volatile signed __int32 *)(v146 + 56));
                    _m_prefetchw((const void *)(v146 + 48));
                    v160 = *(_QWORD *)(v146 + 48);
                    v161 = v160 - 16;
                    if ( (v160 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                      v161 = 0LL;
                    if ( (v160 & 2) != 0
                      || (v162 = *(_QWORD *)(v146 + 48),
                          v162 != _InterlockedCompareExchange64((volatile signed __int64 *)(v146 + 48), v161, v160)) )
                    {
                      ExfReleasePushLock((_QWORD *)(v146 + 48), v159);
                    }
                    KeAbPostRelease(v146 + 48);
                    if ( (*(_DWORD *)(v146 + 4) & 0x100000) != 0 )
                      CmpLockTableRemove(v146, *(_DWORD *)(v146 + 64));
                    if ( (*(_DWORD *)(v146 + 4) & 0x80000) != 0 )
                      CmpFreeKeyControlBlock((PVOID)v146);
                    v163 = (unsigned int)(*(_DWORD *)(v150 + 2808) - 1) & ((101027 * (v149 ^ (v149 >> 9))) ^ ((unsigned __int64)(101027 * (v149 ^ (v149 >> 9))) >> 9));
                    v164 = (signed __int64 *)(*(_QWORD *)(v150 + 2800) + 24 * v163);
                    v164[1] = 0LL;
                    _m_prefetchw(v164);
                    v165 = *v164;
                    v166 = *v164 - 16;
                    if ( (*v164 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                      v166 = 0LL;
                    if ( (v165 & 2) != 0 || (v167 = *v164, v167 != _InterlockedCompareExchange64(v164, v166, v165)) )
                      ExfReleasePushLock(v164, v163);
                    KeAbPostRelease((ULONG_PTR)v164);
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v150 + 5496), 0xFFFFFFFF) == 1 )
                      CmpDeleteHive(v150);
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v148 = v147 - 1;
                      v147 = _InterlockedCompareExchange((volatile signed __int32 *)v146, v147 - 1, v147);
                      if ( v147 == v148 + 1 )
                        break;
                      if ( v147 <= 1 )
                        goto LABEL_351;
                    }
                  }
                  v73 = BugCheckParameter2;
                  v40 = v173;
                  SymbolicLink = SubKeyByNameWithStatus;
                }
LABEL_266:
                v30 = *(_QWORD *)v181;
                goto LABEL_267;
              }
              v134 = (char *)v179[0];
            }
            else if ( !v179[1] )
            {
              goto LABEL_338;
            }
            if ( *((struct _KTHREAD **)v134 + 7) == KeGetCurrentThread() )
              *((_QWORD *)v134 + 7) = 0LL;
            else
              _InterlockedDecrement((volatile signed __int32 *)v134 + 14);
            _m_prefetchw(v134 + 48);
            v137 = *((_QWORD *)v134 + 6);
            v138 = v137 - 16;
            if ( (v137 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v138 = 0LL;
            if ( (v137 & 2) != 0
              || (v139 = *((_QWORD *)v134 + 6),
                  v139 != _InterlockedCompareExchange64((volatile signed __int64 *)v134 + 6, v138, v137)) )
            {
              ExfReleasePushLock((_QWORD *)v134 + 6, 0LL);
            }
            KeAbPostRelease((ULONG_PTR)(v134 + 48));
            if ( (*((_DWORD *)v134 + 1) & 0x100000) != 0 )
              CmpLockTableRemove((__int64)v134, *((_DWORD *)v134 + 16));
            if ( (*((_DWORD *)v134 + 1) & 0x80000) != 0 )
              CmpFreeKeyControlBlock(v134);
            v40 = v173;
            v73 = BugCheckParameter2;
            goto LABEL_338;
          }
LABEL_219:
          ExReleaseResourceLite(*(PERESOURCE *)(v73 + 2848));
LABEL_220:
          SymbolicLink = -1073741670;
LABEL_312:
          SubKeyByNameWithStatus = SymbolicLink;
LABEL_313:
          v45 = (char *)BugCheckParameter4;
          goto LABEL_314;
        }
        if ( (unsigned __int8)CmpGetNextName(&Source, v182, &v174) )
        {
          if ( !LOWORD(v182[0]) )
          {
            *(_DWORD *)&Source.Length = 0;
            goto LABEL_244;
          }
          Source.Buffer = *(wchar_t **)&v182[2];
          if ( Source.Length + LOWORD(v182[0]) <= 0xFFFF )
          {
            Source.Length += LOWORD(v182[0]);
            if ( HIWORD(v182[0]) + Source.MaximumLength <= 0xFFFF )
            {
              Source.MaximumLength += HIWORD(v182[0]);
LABEL_244:
              CmpUnlockTwoKcbs(v179[0], v179[1]);
              if ( v40 != -1 )
              {
                v106 = *(_QWORD *)(v73 + 2800);
                v107 = (signed __int64 *)(v106 + 24LL * v40);
                v107[1] = 0LL;
                _m_prefetchw(v107);
                v108 = *v107;
                v109 = *v107 - 16;
                if ( (*v107 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                  v109 = 0LL;
                if ( (v108 & 2) != 0 || (v110 = *v107, v110 != _InterlockedCompareExchange64(v107, v109, v108)) )
                  ExfReleasePushLock((_QWORD *)(v106 + 24LL * v40), v106);
                KeAbPostRelease((ULONG_PTR)v107);
                v111 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 5496), 0xFFFFFFFF);
                v73 = BugCheckParameter2;
                if ( v111 == 1 )
                  CmpDeleteHive(BugCheckParameter2);
                LODWORD(v45) = v190[0];
                v40 = -1;
                v173 = -1;
              }
              v112 = CmpGetSymbolicLink(v73, v193, (int)v45, (int)v11, &Source);
              v45 = (char *)BugCheckParameter4;
              SymbolicLink = v112;
              SubKeyByNameWithStatus = v112;
              if ( v112 >= 0 )
              {
                *v11 &= ~8u;
                SymbolicLink = 260;
                SubKeyByNameWithStatus = 260;
              }
              goto LABEL_338;
            }
          }
        }
LABEL_311:
        SymbolicLink = -1073741562;
        goto LABEL_312;
      }
      v113 = v179[0];
      v114 = v179[1];
      if ( v179[0] )
      {
        if ( v179[1] )
        {
          v115 = (*((_DWORD *)v179[0] + 1) >> 21) & 0x3FF;
          v116 = (*((_DWORD *)v179[1] + 1) >> 21) & 0x3FF;
          if ( v115 < v116 )
            goto LABEL_258;
          if ( v115 > v116 )
          {
            CmpUnlockKcb(v179[0]);
            v117 = v179[1];
            goto LABEL_265;
          }
          v113 = v179[0];
          v114 = v179[1];
          if ( v179[0] < v179[1] )
          {
LABEL_258:
            CmpUnlockKcb(v114);
            v117 = v113;
LABEL_265:
            CmpUnlockKcb(v117);
            goto LABEL_266;
          }
          if ( v179[0] <= v179[1] )
          {
            v117 = v179[0];
            goto LABEL_265;
          }
          CmpUnlockKcb(v179[0]);
        }
        else
        {
          v114 = v179[0];
        }
      }
      else if ( !v179[1] )
      {
        goto LABEL_266;
      }
      v117 = v114;
      goto LABEL_265;
    }
LABEL_205:
    if ( (*v11 & 2) != 0 )
    {
      v45 = (char *)BugCheckParameter4;
      v217 = *(_OWORD *)v182;
      LinkNode = CmpCreateLinkNode(
                   v73,
                   v178,
                   *(__int64 *)v181,
                   (unsigned __int16 *)&v217,
                   v175,
                   a5,
                   (__int64)v11,
                   (__int64 *)v179,
                   (__int64)&v173,
                   BugCheckParameter4,
                   v196,
                   (PVOID *)v192);
      *v11 &= ~8u;
      SymbolicLink = LinkNode;
      v40 = v173;
      SubKeyByNameWithStatus = LinkNode;
LABEL_292:
      if ( SymbolicLink != 260 )
        v11[8] = 1;
      goto LABEL_306;
    }
    if ( v73 == CmpMasterHive && CmpNoMasterCreates == 1 )
    {
LABEL_237:
      SymbolicLink = -1073741811;
      goto LABEL_312;
    }
    v45 = (char *)BugCheckParameter4;
    SubKeyByNameWithStatus = CmpDoCreate(
                               v73,
                               v178,
                               *(__int64 *)v181,
                               (__m128i *)v182,
                               v175,
                               (__int64)v11,
                               (__int64 *)v179,
                               BugCheckParameter4,
                               *((_QWORD *)v11 + 8),
                               (PVOID *)v192,
                               &v196,
                               (UNICODE_STRING *)v193);
    SymbolicLink = SubKeyByNameWithStatus;
    if ( SubKeyByNameWithStatus != -1073741739 )
      goto LABEL_292;
    CmpUnlockTwoKcbs(v179[0], v179[1]);
    if ( v40 != -1 )
    {
      CmpUnlockHashEntryByIndex(v73, v40);
      v40 = -1;
      v173 = -1;
    }
    CmpDereferenceKeyControlBlock(v45);
    if ( v194[0] )
      CmpDereferenceKeyControlBlock(v194[0]);
    CmpUnlockRegistry();
    v10 = v206;
    v30 = *(_QWORD *)v181;
    v39 = v205;
    v103 = *v207;
    v179[1] = 0LL;
    Source = v103;
    *v11 = v200;
    v179[0] = 0LL;
    v194[0] = 0LL;
  }
  v73 = BugCheckParameter2;
LABEL_267:
  if ( v40 != -1 )
    CmpUnlockHashEntryByIndex(v73, v40);
  if ( SymbolicLink >= 0 )
  {
    v118 = v11[22];
    if ( v118 )
    {
      if ( (v118 & 2) != 0 )
        CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, *((_QWORD *)v11 + 13), 0LL);
    }
  }
  if ( v194[0] )
  {
    v119 = *(_DWORD *)v194[0];
    if ( *(_DWORD *)v194[0] <= 1u )
    {
LABEL_277:
      v121 = (void *)v194[0];
      v122 = *(_DWORD *)(v194[0] + 16);
      v123 = *(_QWORD *)(v194[0] + 32);
      CmpLockHashEntryExclusiveByKcb(v194[0]);
      CmpLockKcbExclusive(v121);
      CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v121);
      CmpUnlockKcb(v121);
      CmpUnlockHashEntry(v123, v122);
    }
    else
    {
      while ( 1 )
      {
        v120 = v119 - 1;
        v119 = _InterlockedCompareExchange((volatile signed __int32 *)v194[0], v119 - 1, v119);
        if ( v119 == v120 + 1 )
          break;
        if ( v119 <= 1 )
          goto LABEL_277;
      }
    }
  }
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    v125 = KeGetCurrentThread();
    v126 = v125->KernelApcDisable + 1;
    v125->KernelApcDisable = v126;
    if ( !v126
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v125->ApcState.ApcListHead[0].Flink != &v125->152
      && !v125->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    LOBYTE(v124) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v124);
  }
  v127 = v11[22];
  if ( v127 && (v127 & 4) != 0 )
  {
    CmpRollbackTransactionArray((unsigned int)v11[28], *((_QWORD *)v11 + 15), 0LL, &v201);
    v11[22] &= ~4u;
    v11[28] = 0;
    *((_QWORD *)v11 + 15) = 0LL;
  }
  if ( (*v11 & 0x100) != 0 )
  {
    KeWaitForSingleObject((char *)&stru_140316750 + 152 * (unsigned int)v11[32], Executive, 0, 0, 0LL);
    *v11 &= ~0x100u;
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v168 = *(_DWORD *)(v30 + 20);
    HIDWORD(v216[7]) = v168;
    if ( (*v11 & 1) != 0 )
    {
      SymbolicLink = CmPostCallbackNotification(27, *(_QWORD *)v192, SymbolicLink, (__int64)v216, v199);
      goto LABEL_393;
    }
    v169 = *(_QWORD *)v192;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v199[0] != v199 )
      {
        v211[0] = v169;
        v213 = 0LL;
        v214 = 0LL;
        v215 = 0LL;
        v211[2] = v216;
        v211[1] = (unsigned int)SymbolicLink;
        v212 = (unsigned int)SymbolicLink;
        CmpCallCallBacks(0x1Du, (__int64)v211, 0, 29LL, v169, (__int64)v199);
        SymbolicLink = v212;
      }
LABEL_393:
      v168 = HIDWORD(v216[7]);
    }
    if ( SymbolicLink >= 0 && v168 != *(_DWORD *)(v30 + 20) )
    {
      *(_DWORD *)(v30 + 20) = v168;
      *(_DWORD *)(v30 + 16) = *(_DWORD *)(v30 + 24) & ~(v168 | 0x2000000);
    }
  }
  if ( v197 )
    CmpFreeExtraHashInfo(v197);
  if ( P )
    ExFreePoolWithTag(P, 0);
  v170 = KeGetCurrentThread();
  v171 = v170->KernelApcDisable + 1;
  v170->KernelApcDisable = v171;
  if ( !v171
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v170->ApcState.ApcListHead[0].Flink != &v170->152
    && !v170->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)SymbolicLink;
}
