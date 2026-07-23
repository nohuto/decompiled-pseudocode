/*
 * XREFs of CmpParseKey @ 0x1404014E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     CmpGetConvKeyAtIndex @ 0x140041F90 (CmpGetConvKeyAtIndex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     CmpFreeExtraHashInfo @ 0x1400E2CF4 (CmpFreeExtraHashInfo.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpAddInfoAfterParseFailure @ 0x1403E0290 (CmpAddInfoAfterParseFailure.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1403FB6B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     CmpGetNextName @ 0x1403FEEC0 (CmpGetNextName.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmpUnlockHashEntryByIndex @ 0x140499A00 (CmpUnlockHashEntryByIndex.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140499A7C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpStepThroughExit @ 0x1404A2960 (CmpStepThroughExit.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpDecommisssionKcb @ 0x1404C3454 (CmpDecommisssionKcb.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
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
  __int64 v10; // r13
  _DWORD *v11; // r12
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
  PVOID PoolWithTag; // rax
  __int64 v25; // rsi
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *v27; // rax
  unsigned __int16 Length; // cx
  __int16 v29; // si
  __int64 v30; // r14
  int v31; // r9d
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // ebx
  int v35; // eax
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  unsigned int v38; // edi
  int v39; // ecx
  int v40; // eax
  int SymbolicLink; // r14d
  ULONG_PTR v42; // r15
  unsigned int v43; // r8d
  unsigned int ConvKeyAtIndex; // eax
  int *v45; // rbx
  __int64 v46; // rcx
  int *v47; // rsi
  bool v48; // r13
  struct _KTHREAD *v49; // rbx
  void *v50; // rdi
  __int64 v51; // r15
  __int64 Process; // r14
  struct _KTHREAD *v53; // r12
  void *v54; // rbx
  int v55; // eax
  int v56; // r13d
  int v57; // r12d
  unsigned int v58; // esi
  ULONG_PTR v59; // rsi
  unsigned int v60; // r12d
  unsigned int v61; // edi
  __int64 v62; // rcx
  ULONG_PTR v63; // rbx
  unsigned int v64; // esi
  __int64 v65; // rax
  __m128i v66; // xmm0
  __int16 v67; // dx
  _WORD *v68; // xmm0_8
  _WORD *v69; // rax
  __int16 v70; // cx
  int v71; // esi
  WCHAR *v72; // rdi
  int v73; // ebx
  __int64 v74; // rsi
  WCHAR v75; // ax
  int v76; // ecx
  unsigned int v77; // edx
  unsigned int v78; // r8d
  _DWORD *v79; // rax
  unsigned int *v80; // rax
  unsigned int v81; // esi
  __int64 v82; // rax
  __int64 v83; // rdi
  unsigned int v84; // edi
  void *v85; // r13
  char NextName; // al
  __int64 v87; // rax
  unsigned int v88; // esi
  struct _ERESOURCE *v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdi
  int v92; // eax
  unsigned int v93; // eax
  int v94; // r9d
  ULONG_PTR v95; // rsi
  UNICODE_STRING v96; // xmm0
  char *v97; // rsi
  char *v98; // rdi
  unsigned int v99; // eax
  unsigned int v100; // ecx
  char *v101; // rcx
  __int64 v102; // rdx
  __int64 *v103; // rbx
  signed __int64 v104; // rax
  signed __int64 v105; // rcx
  __int64 v106; // rtt
  signed __int32 v107; // ecx
  ULONG_PTR v108; // r12
  unsigned __int32 v109; // edx
  unsigned __int32 v110; // ecx
  unsigned int v111; // r15d
  ULONG_PTR v112; // rsi
  unsigned __int64 *v113; // r14
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rdx
  __int64 *v119; // rbx
  signed __int64 v120; // rax
  signed __int64 v121; // rcx
  __int64 v122; // rtt
  signed __int32 v123; // ecx
  char *v124; // rsi
  char *v125; // rdi
  unsigned int v126; // eax
  unsigned int v127; // ecx
  int LinkNode; // eax
  __int64 v129; // rcx
  unsigned __int16 *v130; // rsi
  bool v131; // cf
  ULONG_PTR v132; // rdi
  signed __int64 v133; // rax
  signed __int64 v134; // rcx
  __int64 v135; // rtt
  __int64 v136; // rax
  __int64 v137; // rdi
  __int64 v138; // rdx
  signed __int32 v139; // eax
  signed __int32 v140; // ett
  signed __int32 v141; // ecx
  __int64 v142; // rdi
  struct _KTHREAD *v143; // rax
  int v144; // eax
  __int64 v145; // rax
  __int64 v146; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v148; // rdx
  unsigned __int8 v149; // r14
  bool v150; // di
  signed __int32 v151; // eax
  signed __int64 v152; // rax
  signed __int64 v153; // rcx
  __int64 v154; // rtt
  __int64 *v155; // rbx
  signed __int64 v156; // rax
  signed __int64 v157; // rcx
  __int64 v158; // rtt
  int v159; // eax
  unsigned __int32 v160; // r8d
  unsigned __int32 v161; // edx
  char *v162; // rbx
  unsigned int v163; // edi
  __int64 v164; // rsi
  __int64 v165; // rdx
  int v166; // eax
  _DWORD *v167; // rcx
  int v168; // r8d
  __int64 v169; // rbx
  struct _KTHREAD *v170; // rcx
  __int16 v171; // ax
  int SubKeyByNameWithStatus; // [rsp+90h] [rbp-80h]
  int v173; // [rsp+94h] [rbp-7Ch]
  int v174; // [rsp+98h] [rbp-78h] BYREF
  bool v175; // [rsp+9Ch] [rbp-74h] BYREF
  unsigned __int8 v176; // [rsp+9Dh] [rbp-73h]
  char v177; // [rsp+9Eh] [rbp-72h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-70h] BYREF
  ULONG_PTR v179; // [rsp+A8h] [rbp-68h] BYREF
  PVOID v180[2]; // [rsp+B0h] [rbp-60h] BYREF
  char v181[4]; // [rsp+C0h] [rbp-50h] BYREF
  int v182; // [rsp+C4h] [rbp-4Ch]
  __int64 v183; // [rsp+C8h] [rbp-48h]
  unsigned int v184; // [rsp+D0h] [rbp-40h] BYREF
  _DWORD v185[3]; // [rsp+D4h] [rbp-3Ch] BYREF
  __int64 v186[2]; // [rsp+E0h] [rbp-30h] BYREF
  char v187; // [rsp+F0h] [rbp-20h] BYREF
  char v188; // [rsp+F1h] [rbp-1Fh] BYREF
  char v189[14]; // [rsp+F2h] [rbp-1Eh] BYREF
  UNICODE_STRING Source; // [rsp+100h] [rbp-10h] BYREF
  ULONG_PTR KeyControlBlock; // [rsp+110h] [rbp+0h] BYREF
  int v192[2]; // [rsp+118h] [rbp+8h]
  __int64 v193; // [rsp+120h] [rbp+10h]
  ULONG_PTR BugCheckParameter4; // [rsp+128h] [rbp+18h]
  ULONG_PTR v195; // [rsp+130h] [rbp+20h] BYREF
  __int64 v196; // [rsp+138h] [rbp+28h]
  UNICODE_STRING v197; // [rsp+140h] [rbp+30h] BYREF
  __int64 v198; // [rsp+150h] [rbp+40h] BYREF
  _SLIST_ENTRY *v199; // [rsp+158h] [rbp+48h] BYREF
  int v200; // [rsp+160h] [rbp+50h] BYREF
  int TokenInformation; // [rsp+164h] [rbp+54h] BYREF
  _QWORD TokenInformation_4[2]; // [rsp+168h] [rbp+58h] BYREF
  PVOID P; // [rsp+178h] [rbp+68h]
  int v204; // [rsp+180h] [rbp+70h] BYREF
  unsigned int v205; // [rsp+184h] [rbp+74h] BYREF
  int v206; // [rsp+188h] [rbp+78h]
  int v207; // [rsp+18Ch] [rbp+7Ch]
  UNICODE_STRING *v208; // [rsp+190h] [rbp+80h]
  int *v209; // [rsp+198h] [rbp+88h]
  __int64 v210; // [rsp+1A0h] [rbp+90h]
  _WORD v211[4]; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v212; // [rsp+1B0h] [rbp+A0h]
  _QWORD v213[3]; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 v214; // [rsp+1D0h] [rbp+C0h]
  __int64 v215; // [rsp+1D8h] [rbp+C8h]
  __int64 v216; // [rsp+1E0h] [rbp+D0h]
  __int64 v217; // [rsp+1E8h] [rbp+D8h]
  _QWORD v218[18]; // [rsp+1F0h] [rbp+E0h] BYREF
  __int128 v219; // [rsp+280h] [rbp+170h] BYREF
  _BYTE v220[32]; // [rsp+290h] [rbp+180h] BYREF

  v10 = a1;
  v11 = a8;
  v210 = a1;
  v193 = a10;
  BugCheckParameter2 = 0LL;
  P = 0LL;
  LOWORD(v186[0]) = 0;
  v184 = 0;
  v195 = 0LL;
  v182 = 0;
  v198 = 0LL;
  memset(v218, 0, 136);
  *(_QWORD *)v192 = a3;
  *(__int64 *)((char *)v186 + 2) = 0LL;
  *(_DWORD *)((char *)&v186[1] + 2) = 0;
  HIWORD(v186[1]) = 0;
  v177 = 0;
  v176 = a4;
  v196 = a6;
  v208 = a7;
  v183 = (__int64)a8;
  v185[0] = -1;
  LODWORD(v179) = -1;
  *(_OWORD *)v180 = 0LL;
  v174 = -1;
  v204 = 0;
  v181[0] = 0;
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
    v197 = (UNICODE_STRING)v16;
    v197.Length = v19;
    if ( v19 )
    {
      v20 = v197.Buffer;
      while ( *v20 == 92 )
      {
        ++v20;
        v21 = v19 == 2;
        v19 -= 2;
        v197.Buffer = v20;
        v197.Length = v19;
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
    v197 = (UNICODE_STRING)v16;
    v23 = (wchar_t *)v16.m128i_i64[1];
    v197.Length = v22;
    if ( v22 )
    {
      do
      {
        if ( *v23 != 92 )
          break;
        ++v23;
        v21 = v22 == 2;
        v22 -= 2;
        v197.Buffer = v23;
        v197.Length = v22;
      }
      while ( !v21 );
    }
    if ( v22 < 4u || ((*v23 - 65) & 0xFFDF) != 0 || v23[1] != 92 )
      return 3221225506LL;
  }
  TokenInformation_4[1] = TokenInformation_4;
  TokenInformation_4[0] = TokenInformation_4;
  *(_QWORD *)v193 = 0LL;
  if ( !a8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20204D43u);
    P = PoolWithTag;
    v25 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x88uLL);
    v11 = (_DWORD *)v25;
    v183 = v25;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v29 = a5;
  }
  else
  {
    v27 = Source.Buffer;
    if ( Source.Buffer )
    {
      Length = Source.Length;
      do
      {
        if ( !Length )
          break;
        if ( *v27 != 92 )
          break;
        ++v27;
        Length -= 2;
        Source.Buffer = v27;
        Source.Length = Length;
      }
      while ( v27 );
    }
    v29 = a5;
    v218[13] = 1LL;
    LODWORD(v218[15]) = v11[7];
    v218[14] = &Source;
    HIDWORD(v218[15]) = a5;
    LOBYTE(v218[16]) = a4;
    LODWORD(v218[3]) = v11[6];
    v218[2] = CmKeyObjectType;
    v218[0] = a6;
    v30 = *(_QWORD *)v192;
    v218[1] = v10;
    LODWORD(v218[7]) = *(_DWORD *)(*(_QWORD *)v192 + 16LL);
    v218[9] = v193;
    v218[12] = *((_QWORD *)v11 + 10);
    if ( (*v11 & 1) != 0 )
    {
      v31 = 27;
      v218[8] = v11 + 8;
      v211[0] = *((_WORD *)v11 + 2);
      v211[1] = v211[0];
      v32 = 26;
      v212 = *((_QWORD *)v11 + 1);
      v218[4] = v211;
      v218[5] = *(_QWORD *)(*(_QWORD *)v192 + 64LL);
      v218[6] = a9;
    }
    else
    {
      v31 = 29;
      v32 = 28;
    }
    v33 = CmpCallCallBacks(v32, (unsigned int)v218, 1, v31, v10, (__int64)TokenInformation_4);
    v34 = v33;
    if ( v33 < 0 )
    {
      if ( v33 == -1073740541 )
      {
        v35 = HIDWORD(v218[7]);
        *(_DWORD *)(v30 + 20) |= HIDWORD(v218[7]);
        *(_DWORD *)(v30 + 16) &= ~(v35 | 0x2000000);
        v34 = 0;
      }
      v36 = KeGetCurrentThread();
      v37 = v36->KernelApcDisable + 1;
      v36->KernelApcDisable = v37;
      if ( !v37
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
        && !v36->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v36);
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v34;
    }
  }
  v38 = v174;
  v39 = v29 & 0x100;
  v207 = *v11;
  v206 = v39;
  v199 = 0LL;
  v173 = v174;
  while ( 1 )
  {
    KeyControlBlock = *(_QWORD *)(v10 + 8);
    if ( v39 )
      *v11 |= 0x200u;
    v40 = CmpBuildHashStackAndLookupCache(
            v10,
            (unsigned int)&KeyControlBlock,
            (unsigned int)&v195,
            (unsigned int)&Source,
            (__int64)&BugCheckParameter2,
            (__int64)&v179,
            (__int64)&v200,
            (__int64)&v184,
            (__int64)v11,
            (__int64)&v198,
            (__int64)v220,
            (__int64)&v199,
            (__int64)&v187,
            (__int64)v181);
    SubKeyByNameWithStatus = v40;
    SymbolicLink = v40;
    if ( v40 < 0 || v40 == 260 )
    {
      v63 = BugCheckParameter2;
      goto LABEL_367;
    }
    v42 = KeyControlBlock;
    if ( v187 == 1 )
    {
      v180[0] = (PVOID)KeyControlBlock;
      goto LABEL_64;
    }
    if ( (*(_DWORD *)(KeyControlBlock + 4) & 0x10) == 0 )
    {
      v43 = v184;
      goto LABEL_63;
    }
    if ( (*v11 & 1) != 0 && v184 == v200 )
    {
      v43 = v184 - 1;
      v180[1] = *(PVOID *)(KeyControlBlock + 72);
LABEL_63:
      v180[0] = (PVOID)KeyControlBlock;
      ConvKeyAtIndex = CmpGetConvKeyAtIndex((__int64)v220, (__int64)v199, v43);
      v38 = (((101027 * (ConvKeyAtIndex ^ (ConvKeyAtIndex >> 9))) >> 9) ^ (101027
                                                                         * (ConvKeyAtIndex ^ (ConvKeyAtIndex >> 9)))) & (*(_DWORD *)(*(_QWORD *)(v42 + 32) + 2808LL) - 1);
      v174 = v38;
      v173 = v38;
    }
LABEL_64:
    v21 = (*(_DWORD *)(v42 + 4) & 0x20000) == 0;
    v45 = (int *)(v42 + 4);
    BugCheckParameter4 = v42;
    v209 = (int *)(v42 + 4);
    if ( !v21 )
    {
LABEL_200:
      SymbolicLink = -1073741772;
      SubKeyByNameWithStatus = -1073741772;
LABEL_201:
      v63 = BugCheckParameter2;
      goto LABEL_202;
    }
    v21 = CmpVEEnabled == 0;
    v11[5] = *(unsigned __int16 *)(v10 + 50);
    if ( !v21 )
    {
      v46 = *(_QWORD *)(v42 + 32);
      if ( v46 != CmpMasterHive
        && ((*v45 & 0x20000) != 0 || (*(_DWORD *)(v46 + 5360) & 0x10) != 0 || (*(_WORD *)(v42 + 186) & 0x200) != 0) )
      {
        v47 = v11 + 4;
        v48 = 1;
        if ( v11 != (_DWORD *)-16LL && (*v47 & 1) != 0 )
        {
          if ( (*v47 & 2) != 0 )
            goto LABEL_94;
          goto LABEL_89;
        }
        if ( KeGetCurrentThread()->PreviousMode )
        {
          v49 = KeGetCurrentThread();
          v50 = 0LL;
          v51 = (__int64)v49;
          TokenInformation = 0;
          Process = (__int64)v49->ApcState.Process;
          if ( (*((_DWORD *)&v49[1].SwapListEntry + 3) & 8) == 0 )
            goto LABEL_80;
          v53 = KeGetCurrentThread();
          PspLockThreadSecurityShared((__int64)v49, (__int64)v53);
          if ( (*((_DWORD *)&v49[1].SwapListEntry + 3) & 8) != 0 )
          {
            v50 = (void *)(*(_QWORD *)&v49[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v50);
          }
          PspUnlockThreadSecurityShared((__int64)v49, (__int64)v53);
          if ( v50 )
          {
            ObfDereferenceObject(v50);
          }
          else
          {
LABEL_80:
            v54 = (void *)ObFastReferenceObject((signed __int64 *)(Process + 856));
            if ( !v54 )
            {
              PspLockProcessShared(Process, v51);
              v54 = (void *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
              PspUnlockProcessShared(Process, v51);
            }
            SeQueryInformationToken(v54, TokenVirtualizationEnabled, (PVOID *)&TokenInformation);
            ObFastDereferenceObject(
              (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
              (unsigned __int64)v54);
            v48 = (_BYTE)TokenInformation == 0;
          }
          v45 = v209;
          SymbolicLink = SubKeyByNameWithStatus;
        }
        if ( v47 )
        {
          *v47 |= 1u;
          v55 = *v47;
          if ( !v48 )
          {
            *v47 = v55 | 4;
LABEL_88:
            v38 = v174;
            v11 = (_DWORD *)v183;
            v42 = KeyControlBlock;
            v173 = v174;
LABEL_89:
            if ( (*v11 & 8) == 0 )
            {
              SubKeyByNameWithStatus = CmpVEExecuteParseLogic(v42, &Source, v11, (UNICODE_STRING *)v196);
              SymbolicLink = SubKeyByNameWithStatus;
              if ( SubKeyByNameWithStatus != -1073741199 )
                goto LABEL_201;
              SymbolicLink = 0;
              SubKeyByNameWithStatus = 0;
            }
            goto LABEL_94;
          }
          *v47 = v55 | 2;
        }
        if ( v48 )
        {
          v38 = v174;
          v42 = KeyControlBlock;
          v11 = (_DWORD *)v183;
          v173 = v174;
          goto LABEL_94;
        }
        goto LABEL_88;
      }
    }
LABEL_94:
    v56 = v200;
    if ( !v200 )
      goto LABEL_280;
    v57 = *v45;
    if ( (*v45 & 0x17) == 0 )
      goto LABEL_146;
    v58 = v184;
    if ( v184 == v200 )
    {
      v21 = (v57 & 0x10) == 0;
      v11 = (_DWORD *)v183;
      if ( !v21 )
      {
        if ( (*(_DWORD *)v183 & 1) != 0 )
        {
          v59 = *(_QWORD *)(v42 + 72);
          v60 = v200 - 1;
          v61 = 0;
          BugCheckParameter4 = v59;
          if ( (*(_DWORD *)(v59 + 4) & 0x20000) != 0 || !CmpReferenceKeyControlBlock((signed __int32 *)v59) )
          {
            v38 = v173;
            SymbolicLink = -1073741670;
            v71 = 3;
            SubKeyByNameWithStatus = -1073741670;
            v182 = 3;
            goto LABEL_147;
          }
          v62 = *(_QWORD *)(v42 + 32);
          *v45 |= 0x20000u;
          CmpRemoveKeyHash(v62, v42 + 16);
          *(_QWORD *)(v42 + 24) = -1LL;
          CmpDereferenceKeyControlBlockWithLock(v42, 0LL);
          v63 = *(_QWORD *)(v59 + 32);
          v64 = *(_DWORD *)(v59 + 40);
          BugCheckParameter2 = v63;
          LODWORD(v179) = v64;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v63 + 2848), 1u);
          v65 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v63 + 8))(v63, v64, v185);
          if ( !v65 )
            goto LABEL_195;
          CmpUpdateKeyNodeAccessBits(v63, v65, v64);
          ExReleaseResourceLite(*(PERESOURCE *)(v63 + 2848));
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v63 + 16))(v63, v185);
          v66 = *(__m128i *)v208;
          v186[0] = *(_QWORD *)&v208->Length;
          v67 = v186[0];
          v68 = (_WORD *)_mm_srli_si128(v66, 8).m128i_u64[0];
          v69 = v68;
          v186[1] = (__int64)v68;
          if ( (!v68 || !LOWORD(v186[0])) && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            __debugbreak();
          v70 = WORD1(v186[0]);
          if ( *v68 == 92 )
          {
            do
            {
              ++v69;
              v67 -= 2;
              v70 -= 2;
            }
            while ( *v69 == 92 );
            v186[1] = (__int64)v69;
            WORD1(v186[0]) = v70;
            LOWORD(v186[0]) = v67;
          }
          if ( v56 != 1 )
          {
            do
            {
              if ( *v69 == 92 )
              {
                ++v61;
                do
                {
                  ++v69;
                  v67 -= 2;
                  v70 -= 2;
                }
                while ( *v69 == 92 );
              }
              else
              {
                ++v69;
                v67 -= 2;
                v70 -= 2;
              }
              WORD1(v186[0]) = v70;
              LOWORD(v186[0]) = v67;
              v186[1] = (__int64)v69;
            }
            while ( v61 < v60 );
          }
          CmpUnlockAndLockKcbs(v180, (void *)v42, 0LL, 0);
          v38 = v173;
          v71 = 1;
          v182 = 1;
          goto LABEL_148;
        }
LABEL_125:
        v63 = BugCheckParameter2;
        SymbolicLink = -1073741772;
        v71 = 2;
        SubKeyByNameWithStatus = -1073741772;
        v182 = 2;
        goto LABEL_149;
      }
      goto LABEL_124;
    }
    if ( (v57 & 0x10) != 0 )
      goto LABEL_120;
    if ( (v57 & 1) != 0 )
    {
      v11 = (_DWORD *)v183;
      if ( v200 - v184 != 1 || (*(_DWORD *)v183 & 1) == 0 )
        goto LABEL_125;
LABEL_124:
      v63 = BugCheckParameter2;
      v71 = v182;
      goto LABEL_149;
    }
    v197 = Source;
    if ( !CmpGetNextName((__int16 *)&v197, (__int64)v186, &v175) )
    {
LABEL_120:
      SymbolicLink = -1073741772;
      v71 = 2;
      SubKeyByNameWithStatus = -1073741772;
      v182 = 2;
      goto LABEL_147;
    }
    v72 = (WCHAR *)v186[1];
    v73 = 0;
    if ( LOWORD(v186[0]) )
    {
      v74 = (((unsigned int)LOWORD(v186[0]) - 1) >> 1) + 1;
      do
      {
        v75 = *v72;
        if ( *v72 >= 0x61u )
        {
          if ( v75 <= 0x7Au )
            v76 = v75 - 32;
          else
            v76 = RtlUpcaseUnicodeChar(v75);
        }
        else
        {
          v76 = v75;
        }
        ++v72;
        v73 = v76 + 37 * v73;
        --v74;
      }
      while ( v74 );
      v58 = v184;
    }
    v77 = 0;
    if ( (v57 & 2) != 0 )
    {
      v78 = 1;
      v79 = (_DWORD *)(v42 + 112);
LABEL_139:
      while ( *v79 && v73 != *v79 )
      {
        ++v77;
        ++v79;
        if ( v77 >= v78 )
          goto LABEL_142;
      }
      v38 = v173;
LABEL_146:
      v71 = v182;
LABEL_147:
      v63 = BugCheckParameter2;
LABEL_148:
      v11 = (_DWORD *)v183;
      goto LABEL_149;
    }
    v80 = *(unsigned int **)(v42 + 112);
    v78 = *v80;
    v79 = v80 + 1;
    if ( v78 )
      goto LABEL_139;
LABEL_142:
    v11 = (_DWORD *)v183;
    if ( v56 - v58 == 1 && (*(_DWORD *)v183 & 1) != 0 )
    {
      v63 = BugCheckParameter2;
      v38 = v173;
      v71 = v182;
    }
    else
    {
      v63 = BugCheckParameter2;
      SymbolicLink = -1073741772;
      v38 = v173;
      v71 = 2;
      SubKeyByNameWithStatus = -1073741772;
      v182 = 2;
    }
LABEL_149:
    if ( v180[0] && v180[1] )
      CmpUnlockAndLockKcbs(v180, *(void **)(v42 + 72), 0LL, 0);
    if ( v71 != 1 )
      break;
LABEL_186:
    if ( (*v11 & 2) != 0 )
    {
      v219 = *(_OWORD *)v186;
      LinkNode = CmpCreateLinkNode(
                   v63,
                   v179,
                   *(__int64 *)v192,
                   (unsigned __int16 *)&v219,
                   v176,
                   a5,
                   (__int64)v11,
                   (__int64)v180,
                   (__int64)&v174,
                   BugCheckParameter4,
                   v198,
                   (PVOID *)v193);
      *v11 &= ~8u;
      SymbolicLink = LinkNode;
      SubKeyByNameWithStatus = LinkNode;
      v173 = v174;
LABEL_278:
      if ( SymbolicLink != 260 )
        v11[8] = 1;
      goto LABEL_291;
    }
    if ( v63 == CmpMasterHive && CmpNoMasterCreates == 1 )
    {
LABEL_276:
      SymbolicLink = -1073741811;
      SubKeyByNameWithStatus = -1073741811;
      goto LABEL_202;
    }
    v95 = BugCheckParameter4;
    SubKeyByNameWithStatus = CmpDoCreate(
                               v63,
                               v179,
                               *(__int64 *)v192,
                               (__m128i *)v186,
                               v176,
                               (__int64)v11,
                               (__int64)v180,
                               BugCheckParameter4,
                               *((_QWORD *)v11 + 8),
                               (PVOID *)v193,
                               &v198,
                               (UNICODE_STRING *)v196);
    SymbolicLink = SubKeyByNameWithStatus;
    if ( SubKeyByNameWithStatus != -1073741739 )
      goto LABEL_278;
    CmpUnlockTwoKcbs((char *)v180[0], (char *)v180[1]);
    v38 = v173;
    if ( v173 != -1 )
    {
      CmpUnlockHashEntryByIndex(v63);
      v38 = -1;
      v173 = -1;
      v174 = -1;
    }
    CmpDereferenceKeyControlBlock(v95);
    if ( v195 )
      CmpDereferenceKeyControlBlock(v195);
    CmpUnlockRegistry();
    v10 = v210;
    v39 = v206;
    v180[1] = 0LL;
    v96 = *v208;
    v180[0] = 0LL;
    Source = v96;
    *v11 = v207;
    v195 = 0LL;
  }
  if ( v71 == 2 )
    goto LABEL_202;
  if ( v71 == 3 )
  {
    v124 = (char *)v180[0];
    v125 = (char *)v180[1];
    if ( v180[0] )
    {
      if ( !v180[1] )
      {
        CmpUnlockKcb((char *)v180[0]);
        v38 = v173;
        goto LABEL_367;
      }
      v126 = (*((_DWORD *)v180[0] + 1) >> 21) & 0x3FF;
      v127 = (*((_DWORD *)v180[1] + 1) >> 21) & 0x3FF;
      if ( v126 < v127 )
        goto LABEL_269;
      if ( v126 > v127 )
      {
LABEL_267:
        CmpUnlockKcb((char *)v180[0]);
        CmpUnlockKcb(v125);
        v38 = v173;
        goto LABEL_367;
      }
      v124 = (char *)v180[0];
      v125 = (char *)v180[1];
      if ( v180[0] < v180[1] )
      {
LABEL_269:
        CmpUnlockKcb(v125);
        CmpUnlockKcb(v124);
        v38 = v173;
        goto LABEL_367;
      }
      v125 = (char *)v180[1];
      if ( v180[0] > v180[1] )
        goto LABEL_267;
      CmpUnlockKcb((char *)v180[0]);
    }
    else if ( v180[1] )
    {
      CmpUnlockKcb((char *)v180[1]);
      v38 = v173;
      goto LABEL_367;
    }
    v38 = v173;
    goto LABEL_367;
  }
  if ( v184 && v184 == v56 )
  {
LABEL_280:
    v177 = 1;
    _InterlockedIncrement64(&qword_1406FC048);
LABEL_281:
    v129 = *((_QWORD *)v11 + 8);
    v130 = (unsigned __int16 *)v196;
    v131 = v177 != 0;
    v177 = -v177;
    SubKeyByNameWithStatus = CmpDoOpen(
                               &BugCheckParameter2,
                               (unsigned int)v179,
                               *(__int64 *)v192,
                               v176,
                               a5,
                               v11,
                               (v131 ? 4 : 0) | 2u,
                               (__int64)v180,
                               &v174,
                               &KeyControlBlock,
                               (__m128i *)v186,
                               v129,
                               v198,
                               (PVOID *)v193,
                               (__m128i *)v196,
                               v189,
                               &v188);
    SymbolicLink = SubKeyByNameWithStatus;
    if ( SubKeyByNameWithStatus != 260 )
      goto LABEL_290;
    CmpUnlockTwoKcbs((char *)v180[0], (char *)v180[1]);
    v63 = BugCheckParameter2;
    v173 = v174;
    *(_OWORD *)v180 = 0LL;
    if ( v174 != -1 )
    {
      CmpUnlockHashEntryByIndex(BugCheckParameter2);
      v173 = -1;
      v174 = -1;
    }
    if ( !v188 )
    {
      v132 = KeyControlBlock;
      SymbolicLink = CmpGetSymbolicLink(v63, v130, KeyControlBlock, (__int64)v11, a5, 0LL);
      if ( SymbolicLink >= 0 )
        SymbolicLink = 260;
      SubKeyByNameWithStatus = SymbolicLink;
      if ( v189[0] )
        CmpDereferenceKeyControlBlock(v132);
      *v11 &= ~8u;
      goto LABEL_291;
    }
    goto LABEL_292;
  }
  if ( (*(_BYTE *)(v42 + 186) & 0x10) != 0 )
  {
    if ( !CmpGetNextName((__int16 *)&Source, (__int64)v186, &v175) )
    {
      SymbolicLink = -1073741562;
      SubKeyByNameWithStatus = -1073741562;
      goto LABEL_202;
    }
    if ( LOWORD(v186[0]) )
    {
      Source.Buffer = (wchar_t *)v186[1];
      if ( Source.Length + LOWORD(v186[0]) > 0xFFFF )
      {
        SymbolicLink = -1073741562;
        SubKeyByNameWithStatus = -1073741562;
        goto LABEL_202;
      }
      Source.Length += LOWORD(v186[0]);
      if ( WORD1(v186[0]) + Source.MaximumLength > 0xFFFF )
      {
        SymbolicLink = -1073741562;
        SubKeyByNameWithStatus = -1073741562;
        goto LABEL_202;
      }
      Source.MaximumLength += WORD1(v186[0]);
    }
    else
    {
      *(_DWORD *)&Source.Length = 0;
    }
    CmpUnlockTwoKcbs((char *)v180[0], (char *)v180[1]);
    if ( v38 != -1 )
    {
      v118 = *(_QWORD *)(v63 + 2800);
      v119 = (__int64 *)(v118 + 24LL * v38);
      v119[1] = 0LL;
      _m_prefetchw(v119);
      v120 = *v119;
      v121 = *v119 - 16;
      if ( (*v119 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v121 = 0LL;
      if ( (v120 & 2) != 0 || (v122 = *v119, v122 != _InterlockedCompareExchange64(v119, v121, v120)) )
        ExfReleasePushLock((_QWORD *)(v118 + 24LL * v38));
      KeAbPostRelease((ULONG_PTR)v119);
      v123 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 5496), 0xFFFFFFFF);
      v63 = BugCheckParameter2;
      if ( v123 == 1 )
        CmpDeleteHive(BugCheckParameter2);
      v42 = KeyControlBlock;
      v38 = -1;
      v174 = -1;
    }
    SubKeyByNameWithStatus = CmpGetSymbolicLink(v63, (unsigned __int16 *)v196, v42, (__int64)v11, a5, &Source);
    SymbolicLink = SubKeyByNameWithStatus;
    if ( SubKeyByNameWithStatus >= 0 )
    {
      *v11 &= ~8u;
      SymbolicLink = 260;
      SubKeyByNameWithStatus = 260;
    }
    goto LABEL_208;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v63 + 2848), 1u);
  v81 = v179;
  v82 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v63 + 8))(v63, (unsigned int)v179, v185);
  v83 = v82;
  if ( v82 )
  {
    if ( (*(_DWORD *)(v63 + 144) & 0x8001) == 0
      && (*(_DWORD *)(v82 + 12) & CmpAccessBitForPhase) == 0
      && HvpMarkCellDirty(v63, v81, 0) )
    {
      *(_DWORD *)(v83 + 12) |= CmpAccessBitForPhase;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v63 + 16))(v63, v185);
    ExReleaseResourceLite(*(PERESOURCE *)(v63 + 2848));
    v84 = v173;
    v85 = (void *)BugCheckParameter4;
    while ( 1 )
    {
      NextName = CmpGetNextName((__int16 *)&Source, (__int64)v186, &v175);
      if ( !LOWORD(v186[0]) )
        break;
      if ( NextName != 1 )
        goto LABEL_276;
      if ( (*(_BYTE *)(v42 + 186) & 0x10) != 0 )
      {
        Source.Buffer = (wchar_t *)v186[1];
        if ( Source.Length + LOWORD(v186[0]) > 0xFFFF )
        {
          SymbolicLink = -1073741562;
          SubKeyByNameWithStatus = -1073741562;
          goto LABEL_202;
        }
        Source.Length += LOWORD(v186[0]);
        if ( WORD1(v186[0]) + Source.MaximumLength > 0xFFFF )
        {
          SymbolicLink = -1073741562;
          SubKeyByNameWithStatus = -1073741562;
          goto LABEL_202;
        }
        Source.MaximumLength += WORD1(v186[0]);
        CmpUnlockTwoKcbs((char *)v180[0], (char *)v180[1]);
        *(_OWORD *)v180 = 0LL;
        if ( v84 != -1 )
        {
          CmpUnlockHashEntryByIndex(v63);
          v173 = -1;
          v174 = -1;
        }
        SubKeyByNameWithStatus = CmpGetSymbolicLink(v63, (unsigned __int16 *)v196, v42, (__int64)v11, a5, &Source);
        SymbolicLink = SubKeyByNameWithStatus;
        if ( SubKeyByNameWithStatus >= 0 )
        {
          *v11 &= ~8u;
          SymbolicLink = 260;
          SubKeyByNameWithStatus = 260;
          goto LABEL_292;
        }
        goto LABEL_207;
      }
      v87 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v63 + 8))(v63, (unsigned int)v179, v185);
      if ( !v87 )
        goto LABEL_196;
      SubKeyByNameWithStatus = CmpFindSubKeyByNameWithStatus(v63, v87, (const UNICODE_STRING *)v186, &v205);
      SymbolicLink = SubKeyByNameWithStatus;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v63 + 16))(v63, v185);
      if ( SubKeyByNameWithStatus < 0 )
      {
        if ( SubKeyByNameWithStatus != -1073741772 )
          goto LABEL_291;
        if ( !v175 || (*v11 & 1) == 0 )
        {
          BugCheckParameter4 = (ULONG_PTR)CmpAddInfoAfterParseFailure(
                                            v63,
                                            (unsigned int)v179,
                                            (__int64)v180,
                                            v42,
                                            (__int64)v186);
          _InterlockedIncrement64(qword_1406FC058);
          v173 = v174;
          goto LABEL_200;
        }
        goto LABEL_186;
      }
      v88 = v205;
      v89 = *(struct _ERESOURCE **)(v63 + 2848);
      LODWORD(v179) = v205;
      ExAcquireResourceSharedLite(v89, 1u);
      v90 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v63 + 8))(v63, v88, v185);
      v91 = v90;
      if ( !v90 )
        goto LABEL_195;
      if ( (*(_DWORD *)(v63 + 144) & 0x8001) == 0
        && (*(_DWORD *)(v90 + 12) & CmpAccessBitForPhase) == 0
        && HvpMarkCellDirty(v63, v88, 0) )
      {
        *(_DWORD *)(v91 + 12) |= CmpAccessBitForPhase;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v63 + 16))(v63, v185);
      ExReleaseResourceLite(*(PERESOURCE *)(v63 + 2848));
      v92 = CmpStepThroughExit(&BugCheckParameter2, &v179);
      SymbolicLink = v92;
      SubKeyByNameWithStatus = v92;
      if ( v175 )
      {
        if ( v92 < 0 )
          goto LABEL_201;
        _InterlockedIncrement64(&qword_1406FC050);
        goto LABEL_281;
      }
      if ( v92 < 0 )
        goto LABEL_201;
      v63 = BugCheckParameter2;
      KeyControlBlock = CmpCreateKeyControlBlock(BugCheckParameter2, v179, (ULONG_PTR)v85, 2, (__m128i *)v186);
      v42 = KeyControlBlock;
      if ( !KeyControlBlock )
        goto LABEL_196;
      CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v85, 0LL);
      CmpUnlockAndLockKcbs(v180, v85, (void *)v42, 0);
      ++v184;
      v85 = (void *)v42;
      BugCheckParameter4 = v42;
      v93 = CmpGetConvKeyAtIndex((__int64)v220, (__int64)v199, v184);
      v84 = (((101027 * (v93 ^ (v93 >> 9))) >> 9) ^ (101027 * (v93 ^ (v93 >> 9)))) & (*(_DWORD *)(v63 + 2808) - 1);
      v173 = v84;
      v174 = v84;
      if ( v94 != v84 )
      {
        if ( v94 != -1 )
          CmpUnlockHashEntryByIndex(v63);
        CmpUnlockKcb((char *)v42);
        CmpLockHashEntryByIndexExclusive(v63, v84);
        CmpLockKcbExclusive(v42);
        if ( (*(_DWORD *)(v42 + 4) & 0x20000) != 0 )
        {
          SymbolicLink = -1073741772;
          SubKeyByNameWithStatus = -1073741772;
          goto LABEL_202;
        }
      }
    }
    if ( NextName != 1 || !v175 )
      goto LABEL_276;
    SubKeyByNameWithStatus = CmpStepThroughExit(&BugCheckParameter2, &v179);
    SymbolicLink = SubKeyByNameWithStatus;
    if ( SubKeyByNameWithStatus < 0 )
      goto LABEL_201;
    SubKeyByNameWithStatus = CmpDoOpen(
                               &BugCheckParameter2,
                               (unsigned int)v179,
                               *(__int64 *)v192,
                               v176,
                               a5,
                               v11,
                               6,
                               (__int64)v180,
                               &v174,
                               &KeyControlBlock,
                               (__m128i *)v186,
                               *((_QWORD *)v11 + 8),
                               v198,
                               (PVOID *)v193,
                               (__m128i *)v196,
                               0LL,
                               0LL);
    SymbolicLink = SubKeyByNameWithStatus;
    if ( SubKeyByNameWithStatus == 260 )
    {
      if ( !*((_QWORD *)v11 + 8) )
      {
        v116 = *(_QWORD *)(KeyControlBlock + 32);
        if ( (*(_DWORD *)(v116 + 5360) & 1) != 0 )
          *((_QWORD *)v11 + 8) = v116;
      }
      v117 = v174;
      *v11 &= ~8u;
      v63 = BugCheckParameter2;
      v173 = v117;
      goto LABEL_292;
    }
LABEL_290:
    v63 = BugCheckParameter2;
    v173 = v174;
LABEL_291:
    if ( SymbolicLink >= 0 )
    {
LABEL_292:
      if ( v11[8] == 2 && v181[0] )
        v11[8] = 1;
    }
  }
  else
  {
LABEL_195:
    ExReleaseResourceLite(*(PERESOURCE *)(v63 + 2848));
LABEL_196:
    SymbolicLink = -1073741670;
    SubKeyByNameWithStatus = -1073741670;
  }
LABEL_202:
  v97 = (char *)v180[0];
  v98 = (char *)v180[1];
  if ( !v180[0] )
  {
    if ( !v180[1] )
      goto LABEL_207;
    goto LABEL_303;
  }
  if ( !v180[1] )
  {
    v98 = (char *)v180[0];
LABEL_303:
    if ( *((struct _KTHREAD **)v98 + 7) == KeGetCurrentThread() )
      *((_QWORD *)v98 + 7) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)v98 + 14);
    _m_prefetchw(v98 + 48);
    v133 = *((_QWORD *)v98 + 6);
    v134 = v133 - 16;
    if ( (v133 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v134 = 0LL;
    if ( (v133 & 2) != 0
      || (v135 = *((_QWORD *)v98 + 6),
          v135 != _InterlockedCompareExchange64((volatile signed __int64 *)v98 + 6, v134, v133)) )
    {
      ExfReleasePushLock((_QWORD *)v98 + 6);
    }
    KeAbPostRelease((ULONG_PTR)(v98 + 48));
    if ( (*((_DWORD *)v98 + 1) & 0x100000) != 0 )
      CmpLockTableRemove((__int64)v98, *((_DWORD *)v98 + 16));
    if ( (*((_DWORD *)v98 + 1) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((unsigned __int64)v98);
    v63 = BugCheckParameter2;
    v38 = v174;
    goto LABEL_208;
  }
  v99 = (*((_DWORD *)v180[0] + 1) >> 21) & 0x3FF;
  v100 = (*((_DWORD *)v180[1] + 1) >> 21) & 0x3FF;
  if ( v99 < v100 )
    goto LABEL_205;
  if ( v99 <= v100 )
  {
    v97 = (char *)v180[0];
    v98 = (char *)v180[1];
    if ( v180[0] < v180[1] )
    {
LABEL_205:
      CmpUnlockKcb(v98);
      v101 = v97;
    }
    else if ( v180[0] <= v180[1] )
    {
      v101 = (char *)v180[0];
    }
    else
    {
      CmpUnlockKcb((char *)v180[0]);
      v101 = v98;
    }
  }
  else
  {
    CmpUnlockKcb((char *)v180[0]);
    v101 = (char *)v180[1];
  }
  CmpUnlockKcb(v101);
LABEL_207:
  v38 = v173;
LABEL_208:
  if ( v38 != -1 )
  {
    v102 = *(_QWORD *)(v63 + 2800);
    v103 = (__int64 *)(v102 + 24LL * v38);
    v103[1] = 0LL;
    _m_prefetchw(v103);
    v104 = *v103;
    v105 = *v103 - 16;
    if ( (*v103 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v105 = 0LL;
    if ( (v104 & 2) != 0 || (v106 = *v103, v106 != _InterlockedCompareExchange64(v103, v105, v104)) )
      ExfReleasePushLock((_QWORD *)(v102 + 24LL * v38));
    KeAbPostRelease((ULONG_PTR)v103);
    v107 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 5496), 0xFFFFFFFF);
    v63 = BugCheckParameter2;
    if ( v107 == 1 )
      CmpDeleteHive(BugCheckParameter2);
    v38 = -1;
    v174 = -1;
  }
  v108 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    v109 = *(_DWORD *)BugCheckParameter4;
    if ( *(_DWORD *)BugCheckParameter4 <= 1u )
    {
LABEL_221:
      v111 = *(_DWORD *)(v108 + 16);
      v112 = *(_QWORD *)(v108 + 32);
      v113 = (unsigned __int64 *)(*(_QWORD *)(v112 + 2800)
                                + 24LL
                                * (((101027 * (v111 ^ (v111 >> 9))) ^ ((101027 * (v111 ^ (v111 >> 9))) >> 9)) & (*(_DWORD *)(v112 + 2808) - 1)));
      v114 = KeAbPreAcquire((ULONG_PTR)v113, 0LL, 0LL);
      v115 = v114;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v113, 0LL) )
        ExfAcquirePushLockExclusiveEx(v113, v114, (ULONG_PTR)v113);
      if ( v115 )
        *(_BYTE *)(v115 + 26) |= 1u;
      v113[1] = (unsigned __int64)KeGetCurrentThread();
      if ( !CmpReferenceHive(v112) )
        KeBugCheckEx(0x51u, 0x17uLL, v112, 8uLL, v108);
      if ( (*(_DWORD *)(v108 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v108 + 64) = CmpLockTableAdd(v108, 1);
      v136 = KeAbPreAcquire(v108 + 48, 0LL, 0LL);
      v137 = v136;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v108 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v108 + 48), v136, v108 + 48);
      if ( v137 )
        *(_BYTE *)(v137 + 26) |= 1u;
      *(_QWORD *)(v108 + 56) = KeGetCurrentThread();
      v138 = (unsigned int)(*(_DWORD *)v108 - 1);
      v140 = *(_DWORD *)v108;
      v139 = _InterlockedCompareExchange((volatile signed __int32 *)v108, v138, *(_DWORD *)v108);
      if ( v140 != v139 )
      {
        do
        {
          v141 = v139;
          v138 = (unsigned int)(v139 - 1);
          v139 = _InterlockedCompareExchange((volatile signed __int32 *)v108, v138, v139);
        }
        while ( v139 != v141 );
      }
      if ( !(_DWORD)v138 )
      {
        if ( (*(_BYTE *)(v108 + 186) & 4) != 0 )
        {
          v142 = *(_QWORD *)(v108 + 32);
          CmpCleanUpKcbCacheWithLock(v108, v138);
          v143 = KeGetCurrentThread();
          *(_DWORD *)(v142 + 144) |= 0x80u;
          *(_QWORD *)(v142 + 5424) = v143;
          *(_DWORD *)(v142 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v142 + 5500), 1u) & 0x7F) + 5504) = 31;
          if ( (*(_DWORD *)(v142 + 144) & 0x20) == 0 )
            CmpDereferenceHive(v142);
        }
        else if ( CmpHoldLazyFlush > 0 && (*(_DWORD *)(v108 + 4) & 8) == 0 && (*(_BYTE *)(v108 + 186) & 0x10) == 0
               || (v144 = *(_DWORD *)(v108 + 4), (v144 & 0x20) != 0)
               || (v144 & 0x20000) != 0 )
        {
          CmpCleanUpKcbCacheWithLock(v108, 0LL);
          if ( *(struct _KTHREAD **)(v108 + 56) != KeGetCurrentThread() )
            CmpDecommisssionKcb(v108);
        }
        else
        {
          v145 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0LL);
          v146 = v145;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v145);
          if ( v146 )
            *(_BYTE *)(v146 + 26) |= 1u;
          v148 = CmpDelayedLRUListHead;
          *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
          *(_QWORD *)(v108 + 216) = CmpDelayedLRUListHead;
          *(_QWORD *)(v108 + 224) = &CmpDelayedLRUListHead;
          if ( *(__int64 **)(v148 + 8) != &CmpDelayedLRUListHead )
            __fastfail(3u);
          *(_QWORD *)(v148 + 8) = v108 + 216;
          CmpDelayedLRUListHead = v108 + 216;
          *(_DWORD *)(v108 + 8) |= 2u;
          ++qword_1406FC028;
          v149 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
          v150 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
          *(&CmpDelayedCloseTableLock + 1) = 0LL;
          v151 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
          if ( v151 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v151);
          __writecr8(v149);
          KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
          if ( v150 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
            ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
        }
      }
      if ( *(struct _KTHREAD **)(v108 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v108 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v108 + 56));
      _m_prefetchw((const void *)(v108 + 48));
      v152 = *(_QWORD *)(v108 + 48);
      v153 = v152 - 16;
      if ( (v152 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v153 = 0LL;
      if ( (v152 & 2) != 0
        || (v154 = *(_QWORD *)(v108 + 48),
            v154 != _InterlockedCompareExchange64((volatile signed __int64 *)(v108 + 48), v153, v152)) )
      {
        ExfReleasePushLock((_QWORD *)(v108 + 48));
      }
      KeAbPostRelease(v108 + 48);
      if ( (*(_DWORD *)(v108 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(v108, *(_DWORD *)(v108 + 64));
      if ( (*(_DWORD *)(v108 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v108);
      v155 = (__int64 *)(*(_QWORD *)(v112 + 2800)
                       + 24
                       * ((unsigned int)(*(_DWORD *)(v112 + 2808) - 1) & ((101027 * (v111 ^ (v111 >> 9))) ^ ((unsigned __int64)(101027 * (v111 ^ (v111 >> 9))) >> 9))));
      v155[1] = 0LL;
      _m_prefetchw(v155);
      v156 = *v155;
      v157 = *v155 - 16;
      if ( (*v155 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v157 = 0LL;
      if ( (v156 & 2) != 0 || (v158 = *v155, v158 != _InterlockedCompareExchange64(v155, v157, v156)) )
        ExfReleasePushLock(v155);
      KeAbPostRelease((ULONG_PTR)v155);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v112 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive(v112);
    }
    else
    {
      while ( 1 )
      {
        v110 = v109 - 1;
        v109 = _InterlockedCompareExchange((volatile signed __int32 *)v108, v109 - 1, v109);
        if ( v109 == v110 + 1 )
          break;
        if ( v109 <= 1 )
          goto LABEL_221;
      }
    }
    v63 = BugCheckParameter2;
    v38 = v174;
    SymbolicLink = SubKeyByNameWithStatus;
  }
  v11 = (_DWORD *)v183;
LABEL_367:
  if ( v38 != -1 )
    CmpUnlockHashEntryByIndex(v63);
  if ( SymbolicLink >= 0 )
  {
    v159 = v11[22];
    if ( v159 )
    {
      if ( (v159 & 2) != 0 )
        CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, *((_QWORD *)v11 + 13), 0LL);
    }
  }
  if ( v195 )
  {
    v160 = *(_DWORD *)v195;
    if ( *(_DWORD *)v195 <= 1u )
    {
LABEL_377:
      v162 = (char *)v195;
      v163 = *(_DWORD *)(v195 + 16);
      v164 = *(_QWORD *)(v195 + 32);
      CmpLockHashEntryExclusiveByKcb(v195);
      CmpLockKcbExclusive((__int64)v162);
      CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v162, 0LL);
      CmpUnlockKcb(v162);
      CmpUnlockHashEntry(v164, v163);
    }
    else
    {
      while ( 1 )
      {
        v161 = v160 - 1;
        v160 = _InterlockedCompareExchange((volatile signed __int32 *)v195, v160 - 1, v160);
        if ( v160 == v161 + 1 )
          break;
        if ( v160 <= 1 )
          goto LABEL_377;
      }
    }
  }
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v165) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v165);
  }
  v166 = v11[22];
  if ( v166 && (v166 & 4) != 0 )
  {
    CmpRollbackTransactionArray((unsigned int)v11[28], *((_QWORD *)v11 + 15), 0LL, &v204);
    v11[22] &= ~4u;
    v11[28] = 0;
    *((_QWORD *)v11 + 15) = 0LL;
  }
  if ( (*v11 & 0x100) != 0 )
  {
    KeWaitForSingleObject((char *)&stru_1402C7680 + 152 * (unsigned int)v11[32], Executive, 0, 0, 0LL);
    *v11 &= ~0x100u;
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v167 = *(_DWORD **)v192;
    v168 = *(_DWORD *)(*(_QWORD *)v192 + 20LL);
    HIDWORD(v218[7]) = v168;
    if ( (*v11 & 1) != 0 )
    {
      SymbolicLink = CmPostCallbackNotification(
                       27,
                       *(_QWORD *)v193,
                       SymbolicLink,
                       (unsigned int)v218,
                       (__int64)TokenInformation_4);
      goto LABEL_394;
    }
    v169 = *(_QWORD *)v193;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)TokenInformation_4[0] != TokenInformation_4 )
      {
        v213[0] = v169;
        v215 = 0LL;
        v216 = 0LL;
        v217 = 0LL;
        v213[2] = v218;
        v213[1] = (unsigned int)SymbolicLink;
        v214 = (unsigned int)SymbolicLink;
        CmpCallCallBacks(29, (unsigned int)v213, 0, 29, v169, (__int64)TokenInformation_4);
        SymbolicLink = v214;
      }
LABEL_394:
      v168 = HIDWORD(v218[7]);
      v167 = *(_DWORD **)v192;
    }
    if ( SymbolicLink >= 0 && v168 != v167[5] )
    {
      v167[5] = v168;
      v167[4] = v167[6] & ~(v168 | 0x2000000);
    }
  }
  if ( v199 )
    CmpFreeExtraHashInfo(v199);
  if ( P )
    ExFreePoolWithTag(P, 0);
  v170 = KeGetCurrentThread();
  v171 = v170->KernelApcDisable + 1;
  v170->KernelApcDisable = v171;
  if ( !v171
    && ($E81C3296F15336D9BF9B2D43BB137B25 *)v170->ApcState.ApcListHead[0].Flink != &v170->152
    && !v170->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v170);
  }
  return (unsigned int)SymbolicLink;
}
