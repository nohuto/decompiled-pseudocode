/*
 * XREFs of CmpDoParseKey @ 0x140452BE0
 * Callers:
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 * Callees:
 *     CmpRebuildKcbCacheFromNode @ 0x14000AA6C (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x140076520 (RtlGetCurrentServiceSessionId.c)
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     PspUnlockThreadSecurityShared @ 0x1400920C8 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140092110 (PspLockThreadSecurityShared.c)
 *     CmpTransSilentIgnore @ 0x1400960C0 (CmpTransSilentIgnore.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1400A8FFC (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1400AFEFC (CmpUpdateHiveRootCellFlags.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x1401B5000 (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401B5218 (CmpLockTableRemove.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockHashEntryByKcb @ 0x1403FB840 (CmpUnlockHashEntryByKcb.c)
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpTransReferenceTransaction @ 0x1403FDF98 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpIsKeyStackSymlink @ 0x140402638 (CmpIsKeyStackSymlink.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpGetComponentNameAtIndex @ 0x1404036B0 (CmpGetComponentNameAtIndex.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupPathInfo @ 0x1404037E0 (CmpCleanupPathInfo.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x140403EF0 (CmpIsKeyDeleted.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     ObpFreeObjectNameBuffer @ 0x140404C80 (ObpFreeObjectNameBuffer.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x140418630 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x14041A9D0 (ObpAllocateObject.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140436860 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x140436D90 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     HvResetDirtyData @ 0x1404809E4 (HvResetDirtyData.c)
 *     CmpCreateKeyBody @ 0x1404912B8 (CmpCreateKeyBody.c)
 *     CmpComputeComponentHashes @ 0x14049B480 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x14049B7CC (CmpExpandPathInfo.c)
 *     CmpValidateComponents @ 0x1404A87D0 (CmpValidateComponents.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     CmpSetKcbAtLayerHeight @ 0x1404B0A9C (CmpSetKcbAtLayerHeight.c)
 *     CmpCompareUnicodeString @ 0x1404B6020 (CmpCompareUnicodeString.c)
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404BEE8C (CmpVEPerformOpenAccessCheck.c)
 *     CmpTransSearchAddTransFromHive @ 0x1404C2248 (CmpTransSearchAddTransFromHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1404C9290 (CmpTryToLockHashEntryExclusive.c)
 *     CmpPublishEventForPcaResolver @ 0x1404D32E0 (CmpPublishEventForPcaResolver.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1404E9B30 (CmpLockHashEntrySharedByKcb.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpGetComponentHashAtIndex @ 0x140518930 (CmpGetComponentHashAtIndex.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 *     CmpWaitForHiveMount @ 0x14057581C (CmpWaitForHiveMount.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601B14 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCheckExeOwnerForPca @ 0x140601EA4 (CmpCheckExeOwnerForPca.c)
 *     CmpCheckKeyOwnerForPca @ 0x140602208 (CmpCheckKeyOwnerForPca.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     CmRmIsKcbStackVisible @ 0x14060DD80 (CmRmIsKcbStackVisible.c)
 *     ObpRegisterObject @ 0x1406682E0 (ObpRegisterObject.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        const UNICODE_STRING *a5,
        __m128i *a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  signed __int64 v9; // rdi
  __int16 v10; // r12
  __int64 v12; // r13
  __m128i v13; // xmm6
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r14d
  unsigned __int64 v19; // rbx
  char v20; // al
  __int16 v21; // r8
  __int16 v22; // r9
  wchar_t *v23; // r10
  __int16 v24; // cx
  wchar_t *v25; // rax
  __int16 v26; // dx
  int v27; // ebx
  __int64 v28; // rcx
  bool v29; // zf
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  __int16 v32; // r10
  __int64 v33; // r12
  __int64 v34; // rbx
  unsigned int v35; // r8d
  char v36; // cl
  __int16 v37; // bx
  __int64 v38; // rdx
  _WORD *v39; // r15
  __int16 v40; // r13
  __int16 v41; // r12
  __m128i v42; // xmm0
  unsigned int v43; // edx
  int v44; // r14d
  unsigned __int64 v45; // rcx
  WCHAR *v46; // r12
  WCHAR v47; // ax
  __int64 v48; // r13
  __int16 v49; // ax
  int v50; // ebx
  WCHAR *v51; // r14
  __int64 v52; // r15
  WCHAR v53; // ax
  unsigned int v54; // edx
  _WORD *v55; // rcx
  int v56; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v58; // rbx
  __int64 v59; // r14
  int v60; // eax
  int v61; // eax
  unsigned __int64 v62; // rbx
  bool v63; // r15
  signed __int64 v64; // rax
  signed __int64 v65; // rcx
  __int64 v66; // rtt
  __int16 v67; // bx
  __int64 v68; // r13
  ULONG_PTR v69; // r15
  signed __int32 v70; // eax
  __int16 v71; // r13
  ULONG_PTR v72; // r8
  signed __int32 v73; // ecx
  signed __int32 v74; // ett
  ULONG_PTR v75; // rcx
  __int64 v76; // r14
  __int64 v77; // r14
  signed __int64 *v78; // rbx
  signed __int64 v79; // rax
  signed __int64 v80; // rcx
  signed __int64 v81; // rtt
  signed __int64 *v82; // r15
  __int64 v83; // rbx
  __int64 v84; // rax
  _OWORD *v85; // rcx
  volatile signed __int32 *v86; // r12
  unsigned int v87; // r14d
  unsigned int v88; // ebx
  __int64 v89; // rcx
  _OWORD *v90; // r12
  int v91; // eax
  int v92; // edx
  unsigned int v93; // r13d
  __int64 v94; // rax
  unsigned __int64 *v95; // r15
  __int64 v96; // r14
  ULONG_PTR v97; // r15
  __int64 v98; // r14
  char *v99; // r15
  __int64 v100; // rcx
  WCHAR *v101; // r13
  unsigned __int8 *v102; // rdx
  unsigned __int16 v103; // r12
  unsigned __int16 v104; // r15
  WCHAR v105; // ax
  int v106; // r14d
  int v107; // edx
  signed __int64 *v108; // r13
  _BYTE *v109; // rax
  _BYTE *v110; // r14
  signed __int32 v111; // eax
  signed __int32 v112; // ecx
  signed __int32 v113; // ett
  char v114; // r12
  __int64 v115; // rax
  __int64 v116; // r14
  unsigned __int8 CurrentIrql; // r15
  int v118; // eax
  _QWORD *v119; // rax
  __int64 v120; // rdx
  _QWORD *v121; // rcx
  unsigned __int8 v122; // r14
  signed __int32 v123; // eax
  __int64 v124; // rax
  __int64 v125; // r14
  unsigned __int8 v126; // r15
  int v127; // eax
  char v128; // al
  char *v129; // rcx
  char *v130; // rdx
  char **v131; // rax
  unsigned __int8 v132; // r14
  signed __int32 v133; // eax
  bool v134; // r14
  signed __int64 v135; // rax
  signed __int64 v136; // rcx
  signed __int64 v137; // rtt
  unsigned int v138; // r14d
  ULONG_PTR v139; // r13
  signed __int64 *v140; // r14
  signed __int64 v141; // rax
  signed __int64 v142; // rcx
  signed __int64 v143; // rtt
  signed __int64 *v144; // rbx
  signed __int64 v145; // rax
  signed __int64 v146; // rcx
  signed __int64 v147; // rtt
  __int16 v148; // r15
  __int64 v149; // rbx
  signed __int32 v150; // eax
  signed __int32 v151; // ecx
  signed __int32 v152; // ett
  __int64 v153; // rcx
  bool v154; // bl
  signed __int64 v155; // rax
  signed __int64 v156; // rcx
  __int64 v157; // rtt
  char v158; // r13
  unsigned __int32 v159; // edx
  unsigned __int32 v160; // ecx
  unsigned int v161; // ebx
  __int64 v162; // r15
  __int64 v163; // rax
  char *v164; // r14
  __int64 v165; // rcx
  __int64 ComponentNameAtIndex; // rax
  _DWORD *v167; // rbx
  __int64 v168; // rdx
  __int64 v169; // r8
  bool v170; // r14
  signed __int64 v171; // rax
  signed __int64 v172; // rcx
  __int64 v173; // rtt
  __int64 v174; // r8
  __int16 v175; // dx
  __int64 v176; // rcx
  int *v177; // r15
  bool v178; // r12
  __int64 v179; // r12
  struct _KTHREAD *v180; // rbx
  __int64 v181; // r14
  __int64 Process; // r13
  void *v183; // r14
  void *v184; // rbx
  int v185; // eax
  int v186; // ebx
  bool v187; // r14
  int v188; // eax
  signed __int64 v189; // rax
  signed __int64 v190; // rcx
  signed __int64 v191; // rtt
  __int64 v192; // r14
  __int64 v193; // r15
  __int64 v194; // rbx
  __int64 v195; // rax
  __int64 v196; // rax
  signed __int64 v197; // rcx
  ULONG_PTR v198; // rtt
  signed __int64 v199; // rcx
  ULONG_PTR v200; // rtt
  __int64 v201; // rbx
  __int64 v202; // rcx
  __int16 v203; // r14
  struct _PRIVILEGE_SET *v204; // rbx
  SIZE_T v205; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int16 v207; // r14
  struct _PRIVILEGE_SET *v208; // rsi
  SIZE_T v209; // rbx
  struct _PRIVILEGE_SET *v210; // rax
  unsigned __int16 v211; // r11
  __int64 *v212; // rbx
  _QWORD *v213; // rax
  __int64 v214; // r10
  __int64 v215; // r10
  __int16 v216; // r11
  __int16 v217; // r13
  __int16 v218; // r15
  __int64 v219; // rdi
  __int64 *v220; // r12
  __int64 v221; // rbx
  __int64 v222; // rsi
  __int16 v223; // r8
  __int64 v224; // rdx
  __int64 v225; // rax
  __int64 v226; // rdx
  __int64 v227; // r8
  ACCESS_MASK *v228; // r13
  __int64 KcbAtLayerHeight; // rax
  char *NextElement; // rax
  _QWORD *v231; // r10
  int v232; // ecx
  __int16 v233; // dx
  __int64 v234; // r8
  __int16 v235; // r15
  unsigned __int64 *v236; // r12
  unsigned __int64 v237; // rbx
  bool v238; // r14
  signed __int64 v239; // rax
  signed __int64 v240; // rcx
  __int64 v241; // rtt
  int v242; // r15d
  __int64 v243; // r8
  _OWORD *v244; // r9
  int v245; // eax
  unsigned int v246; // ecx
  char v247; // dl
  __int64 *v248; // rsi
  __int64 v249; // r13
  int v250; // eax
  __int64 v251; // r10
  _QWORD *v252; // r12
  unsigned __int16 v253; // r11
  __int64 v254; // rcx
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // r8
  __int64 v258; // rax
  __int64 v259; // rdx
  __int64 v260; // r8
  ULONG_PTR v261; // rbx
  __int64 i; // r10
  __int64 v263; // r10
  __int16 v264; // r11
  __int64 v265; // rbx
  __int64 v266; // rsi
  __int16 v267; // r13
  __int16 v268; // r15
  __int64 v269; // rdi
  __int64 *v270; // r12
  __int64 v271; // rbx
  __int64 v272; // rsi
  __int64 v273; // rsi
  __int16 v274; // r12
  __int16 v275; // r15
  __int64 v276; // rdi
  __int64 *v277; // r13
  __int64 v278; // rbx
  __int64 v279; // rsi
  int v280; // eax
  __int64 v281; // r12
  __int16 v282; // bx
  __int64 v283; // r13
  __int64 v284; // r14
  char v285; // r15
  __int64 v286; // r12
  __int64 v287; // r15
  unsigned int v288; // r8d
  UNICODE_STRING *v289; // r12
  int ComponentHashAtIndex; // ebx
  __int64 v291; // r15
  __int64 v292; // rcx
  unsigned int v293; // edx
  _DWORD *v294; // rsi
  ULONG_PTR v295; // rcx
  int HiveRootCell; // eax
  int v297; // eax
  __int64 v298; // rbx
  __int64 v299; // r15
  int v300; // r8d
  int v301; // edx
  ULONG_PTR v302; // rcx
  bool v303; // r15
  __int64 v304; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v306; // r15
  PACCESS_STATE v307; // rbx
  KPROCESSOR_MODE v308; // r13
  _QWORD *v309; // rsi
  __int64 v310; // rcx
  __int64 v311; // r14
  __int64 v312; // rax
  __int64 v313; // rbx
  int v314; // edx
  __int16 v315; // ax
  const UNICODE_STRING *v316; // r9
  __int16 v317; // dx
  __int64 v318; // r8
  __int64 v319; // rax
  char *v320; // rax
  _QWORD *v321; // r10
  int v322; // ecx
  __int64 v323; // rdx
  __int64 v324; // r15
  __int64 v325; // rcx
  signed __int32 v326; // eax
  __int64 v327; // rbx
  unsigned __int64 *v328; // rsi
  signed __int32 v329; // ecx
  signed __int32 v330; // ett
  struct _KPRCB *CurrentPrcb; // r12
  POBJECT_TYPE *v332; // r13
  _GENERAL_LOOKASIDE *v333; // r14
  PSLIST_ENTRY v334; // r15
  _GENERAL_LOOKASIDE *L; // r14
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  char v339; // si
  KPROCESSOR_MODE v340; // r14
  unsigned int Number; // eax
  unsigned __int8 v342; // dl
  unsigned __int8 v343; // cl
  int v344; // r12d
  struct _KPRCB *v345; // rax
  _GENERAL_LOOKASIDE *v346; // r8
  int v347; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v349; // rcx
  __int64 v350; // rsi
  __int64 v351; // r14
  __int64 v352; // rax
  __int64 v353; // rax
  __int64 *v354; // r15
  unsigned int v355; // r8d
  unsigned __int64 v356; // r14
  bool v357; // r13
  signed __int64 v358; // rax
  signed __int64 v359; // rcx
  __int64 v360; // rtt
  unsigned __int64 v361; // r13
  _BYTE *v362; // rax
  _BYTE *v363; // r14
  __int64 v364; // rax
  __int64 **v365; // rcx
  char v366; // al
  __int64 v367; // r14
  __int64 v368; // rax
  __int64 v369; // rdx
  __int64 v370; // r8
  __int64 v371; // rax
  __int64 v372; // rdx
  __int64 v373; // r8
  __int64 v374; // r8
  int v375; // ebx
  __int64 v376; // rdx
  __int64 v377; // rcx
  _BYTE *v378; // rcx
  int Logic; // eax
  __int64 v380; // rcx
  int v381; // r9d
  _WORD *v382; // r13
  struct _PRIVILEGE_SET *v383; // rbx
  __int64 v384; // r10
  int v385; // eax
  __int64 v386; // r15
  char *v387; // rax
  __int64 v388; // r10
  int v389; // ecx
  __int64 v390; // rsi
  struct _PRIVILEGE_SET *v391; // r14
  __int16 v392; // r12
  SIZE_T v393; // r15
  struct _PRIVILEGE_SET *v394; // rax
  unsigned __int16 v395; // r11
  __int64 j; // r10
  __int64 v397; // r10
  __int16 v398; // r11
  __int64 SecurityDescriptorForKcbStack; // rax
  struct _KTHREAD *v400; // rcx
  void *v401; // r15
  PACCESS_STATE v402; // r12
  struct _KTHREAD *v403; // rcx
  ACCESS_MASK RemainingDesiredAccess; // r9d
  BOOLEAN v405; // al
  struct _PRIVILEGE_SET *v406; // r14
  BOOLEAN v407; // si
  ACCESS_MASK v408; // eax
  PERESOURCE *ClientToken; // rcx
  PACCESS_STATE v410; // rsi
  int SessionId; // ebx
  __int64 v412; // rdx
  __int64 v413; // rcx
  PVOID v414; // rax
  __int64 v415; // rdx
  __int16 v416; // r15
  __int16 v417; // r13
  unsigned __int64 *v418; // r12
  unsigned __int64 v419; // rbx
  bool v420; // r14
  signed __int64 v421; // rax
  signed __int64 v422; // rcx
  __int64 v423; // rtt
  __int64 v424; // rdx
  __int16 v425; // r15
  __int16 v426; // r13
  unsigned __int64 *v427; // r12
  unsigned __int64 v428; // rbx
  bool v429; // r14
  signed __int64 v430; // rax
  signed __int64 v431; // rcx
  __int64 v432; // rtt
  unsigned __int64 v433; // rbx
  bool v434; // r14
  signed __int64 v435; // rax
  signed __int64 v436; // rcx
  __int64 v437; // rtt
  unsigned __int32 v438; // edx
  unsigned __int32 v439; // ecx
  unsigned int v440; // ebx
  __int64 v441; // r15
  _BYTE *v442; // rax
  _BYTE *v443; // r14
  char *v444; // r12
  __int64 v445; // rax
  __int64 v446; // rcx
  bool v447; // r14
  signed __int64 v448; // rax
  signed __int64 v449; // rcx
  __int64 v450; // rtt
  signed __int64 *v451; // rbx
  signed __int64 v452; // rax
  signed __int64 v453; // rtt
  __int64 v454; // rbx
  int v455; // eax
  __int64 v456; // rdx
  PVOID v457; // rbx
  _SLIST_ENTRY *v458; // rdx
  struct _KPRCB *v459; // rcx
  _GENERAL_LOOKASIDE *v460; // r8
  signed __int32 v462[8]; // [rsp+0h] [rbp-100h] BYREF
  ACCESS_MASK PreviouslyGrantedAccess[2]; // [rsp+20h] [rbp-E0h]
  BOOLEAN ObjectCreated[8]; // [rsp+28h] [rbp-D8h]
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-D0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+38h] [rbp-C8h]
  PACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-C0h]
  PNTSTATUS AccessStatus; // [rsp+48h] [rbp-B8h]
  int SymbolicLinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v470; // [rsp+54h] [rbp-ACh]
  char v471; // [rsp+55h] [rbp-ABh]
  unsigned __int16 v472; // [rsp+56h] [rbp-AAh]
  char v473; // [rsp+58h] [rbp-A8h]
  char v474; // [rsp+59h] [rbp-A7h]
  bool v475; // [rsp+5Ah] [rbp-A6h] BYREF
  char v476; // [rsp+5Bh] [rbp-A5h]
  char v477; // [rsp+5Ch] [rbp-A4h]
  __int16 v478[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v479; // [rsp+64h] [rbp-9Ch]
  __int16 v480; // [rsp+68h] [rbp-98h]
  char v481; // [rsp+6Ch] [rbp-94h] BYREF
  char v482; // [rsp+6Dh] [rbp-93h]
  char v483; // [rsp+6Eh] [rbp-92h]
  int v484; // [rsp+70h] [rbp-90h]
  __int64 v485; // [rsp+78h] [rbp-88h]
  __int64 v486; // [rsp+80h] [rbp-80h]
  char v487; // [rsp+88h] [rbp-78h]
  __int16 v488; // [rsp+8Ah] [rbp-76h]
  __int64 v489; // [rsp+90h] [rbp-70h]
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  __int64 v491; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v492; // [rsp+A8h] [rbp-58h]
  __int64 *v493; // [rsp+B0h] [rbp-50h]
  unsigned int v494; // [rsp+B8h] [rbp-48h]
  PACCESS_STATE AccessState; // [rsp+C0h] [rbp-40h]
  unsigned int v496; // [rsp+C8h] [rbp-38h]
  __m128i v497; // [rsp+D0h] [rbp-30h]
  NTSTATUS v498; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v499; // [rsp+E4h] [rbp-1Ch] BYREF
  PCUNICODE_STRING String2; // [rsp+E8h] [rbp-18h]
  PVOID v501; // [rsp+F0h] [rbp-10h]
  PVOID v502; // [rsp+F8h] [rbp-8h]
  unsigned int v503; // [rsp+100h] [rbp+0h]
  ULONG_PTR v504; // [rsp+108h] [rbp+8h]
  __m128i v505; // [rsp+110h] [rbp+10h] BYREF
  __m128i v506; // [rsp+120h] [rbp+20h]
  ULONG_PTR v507; // [rsp+130h] [rbp+30h]
  char v508; // [rsp+138h] [rbp+38h]
  ULONG_PTR BugCheckParameter2; // [rsp+140h] [rbp+40h]
  volatile signed __int32 *v510; // [rsp+148h] [rbp+48h]
  __int64 v511; // [rsp+150h] [rbp+50h]
  PVOID P; // [rsp+158h] [rbp+58h]
  ACCESS_MASK v513; // [rsp+160h] [rbp+60h] BYREF
  _BYTE TokenInformation[12]; // [rsp+164h] [rbp+64h] BYREF
  __int64 v515; // [rsp+170h] [rbp+70h] BYREF
  __int64 v516; // [rsp+178h] [rbp+78h]
  __int64 v517; // [rsp+180h] [rbp+80h]
  PPRIVILEGE_SET v518; // [rsp+188h] [rbp+88h]
  __int64 v519; // [rsp+190h] [rbp+90h]
  _OWORD *v520; // [rsp+198h] [rbp+98h]
  __int64 v521; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v522; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v523; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v524; // [rsp+1B8h] [rbp+B8h] BYREF
  PPRIVILEGE_SET v525; // [rsp+1C0h] [rbp+C0h] BYREF
  char v526[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v528; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v529; // [rsp+1E8h] [rbp+E8h]
  __int64 v530; // [rsp+1F0h] [rbp+F0h]
  PPRIVILEGE_SET Privileges; // [rsp+1F8h] [rbp+F8h]
  _QWORD v532[3]; // [rsp+200h] [rbp+100h] BYREF
  PPRIVILEGE_SET v533; // [rsp+218h] [rbp+118h]
  __int64 v534; // [rsp+220h] [rbp+120h]
  _QWORD v535[3]; // [rsp+228h] [rbp+128h]
  _QWORD v536[3]; // [rsp+240h] [rbp+140h] BYREF
  PPRIVILEGE_SET v537; // [rsp+258h] [rbp+158h]
  __int64 v538; // [rsp+260h] [rbp+160h] BYREF
  _QWORD *v539; // [rsp+268h] [rbp+168h]
  _WORD v540[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v541; // [rsp+278h] [rbp+178h]
  __int128 v542; // [rsp+280h] [rbp+180h] BYREF
  __int64 v543; // [rsp+290h] [rbp+190h]
  _OWORD v544[11]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v9 = 0LL;
  v10 = 0;
  String2 = a5;
  v12 = 0LL;
  v489 = a1;
  v539 = a9;
  v470 = a3;
  AccessState = a2;
  v485 = a7;
  v483 = 0;
  v473 = 0;
  Object = 0LL;
  v486 = 0LL;
  *(_QWORD *)&TokenInformation[4] = 0LL;
  v481 = 0;
  v492 = 0LL;
  v476 = 0;
  v487 = 0;
  v475 = 0;
  v482 = 0;
  v477 = 0;
  v484 = 0;
  v478[0] = 0;
  v522 = 0LL;
  HvpGetCellContextReinitialize((__int64)v526);
  v13 = *a6;
  v471 = 0;
  v479 = 0;
  v505 = v13;
  P = 0LL;
  memset(v544, 0, 0xA8uLL);
  v528 = 4294901760LL;
  v529 = 0LL;
  v530 = 0LL;
  Privileges = 0LL;
  v532[0] = 4294901760LL;
  v536[0] = 4294901760LL;
  v532[1] = 0LL;
  v532[2] = 0LL;
  v533 = 0LL;
  v536[1] = 0LL;
  v536[2] = 0LL;
  v537 = 0LL;
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v14 = *(_QWORD **)(a7 + 96);
  v15 = *(_QWORD *)(a7 + 80);
  v16 = v489;
  v501 = v14;
  *(_QWORD *)(a7 + 96) = 0LL;
  if ( v15 )
  {
    v17 = *(_QWORD *)(v16 + 56);
    if ( v17 && v15 != v17 )
    {
      v18 = -1072103422;
      SymbolicLinkTarget = -1072103422;
      goto LABEL_575;
    }
    v511 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v16 + 56);
    v511 = *(_QWORD *)(v16 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v489 + 50);
  if ( (PVOID)v489 != CmpRegistryRootObject )
  {
    if ( !v14 )
      goto LABEL_50;
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock((ULONG_PTR)v14);
    v501 = 0LL;
    CmpUnlockRegistry();
    goto LABEL_49;
  }
  if ( !v14 )
    goto LABEL_50;
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  v19 = v14[36];
  v20 = 0;
  v473 = 1;
  if ( (v19 & 1) != 0 )
  {
    v20 = 1;
    v19 &= ~1uLL;
  }
  v508 = v20;
  if ( !v19 || v20 || !RtlPrefixUnicodeString((PCUNICODE_STRING)v19, String2, 1u) )
  {
    CmpDereferenceKeyControlBlock((ULONG_PTR)v501);
    v501 = 0LL;
    CmpUnlockRegistry();
    v13 = v505;
LABEL_49:
    v473 = 0;
    goto LABEL_50;
  }
  v21 = String2->Length - *(_WORD *)v19;
  v22 = String2->MaximumLength - *(_WORD *)v19;
  v23 = &String2->Buffer[(unsigned __int64)*(unsigned __int16 *)v19 >> 1];
  v24 = v21;
  v505.m128i_i16[0] = v21;
  v25 = v23;
  v505.m128i_i64[1] = (__int64)v23;
  v26 = v22;
  v505.m128i_i16[1] = v22;
  if ( v21 )
  {
    do
    {
      if ( *v25 != 92 )
        break;
      ++v25;
      v26 -= 2;
      v24 -= 2;
    }
    while ( v24 );
    v505.m128i_i16[0] = v24;
    v505.m128i_i64[1] = (__int64)v25;
    v505.m128i_i16[1] = v26;
  }
  v27 = ((*((_DWORD *)v501 + 1) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v24 )
  {
    v28 = *((_QWORD *)v501 + 9);
    v29 = (*(_DWORD *)v28 & 1) == 0;
    v30 = *(unsigned __int16 *)(v28 + 24);
    v31 = v30;
    if ( v29 )
      v31 = (unsigned __int64)v30 >> 1;
    else
      LOWORD(v30) = 2 * v30;
    v505.m128i_i16[0] = v30 + v21;
    v505.m128i_i16[1] = v30 + v22;
    --v27;
    v505.m128i_i64[1] = (__int64)&v23[-v31];
    v10 = 1;
    v484 = 1;
  }
  SymbolicLinkTarget = CmpComputeComponentHashes(&v505, v478, v544);
  v18 = SymbolicLinkTarget;
  if ( SymbolicLinkTarget >= 0 )
  {
    v496 = v478[0];
    if ( (unsigned int)(v478[0] + v27) > 0x20 )
    {
      v18 = -1073741811;
      SymbolicLinkTarget = -1073741811;
      goto LABEL_575;
    }
    SymbolicLinkTarget = CmpValidateComponents((unsigned int)v478[0], v544);
    v18 = SymbolicLinkTarget;
    if ( SymbolicLinkTarget >= 0 )
    {
      v29 = v10 == v32;
      v33 = (__int64)v501;
      if ( v29 )
      {
        CmpLockHashEntrySharedByKcb((ULONG_PTR)v501);
        v477 = 1;
      }
      if ( (*(_DWORD *)(v33 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v33 + 60) = CmpLockTableAdd(v33, 0);
      v34 = KeAbPreAcquire(v33 + 40, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v33 + 40), v34, v33 + 40);
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 48));
      if ( !(unsigned __int8)CmpIsKeyDeleted(v33, 0LL) )
      {
        CmpUnlockKcb((char *)v33);
        v35 = v496;
        v504 = v33;
        goto LABEL_110;
      }
      CmpUnlockKcb((char *)v33);
      if ( v477 )
      {
        CmpUnlockHashEntryByKcb(v33);
        v477 = 0;
      }
      CmpDereferenceKeyControlBlock(v33);
      v13 = *a6;
      v501 = 0LL;
      LOWORD(v484) = 0;
      v505 = v13;
      CmpCleanupPathInfo((__int64)v544);
      memset(v544, 0, 0xA8uLL);
LABEL_50:
      v36 = 0;
      v506 = v13;
      v497 = v13;
      v33 = *(_QWORD *)(v489 + 8);
      v504 = v33;
      v474 = 0;
      v505.m128i_i16[0] = _mm_cvtsi128_si32(v13);
      if ( !v505.m128i_i16[0] )
      {
        v478[0] = 0;
LABEL_103:
        v35 = v478[0];
        v54 = 0;
        v496 = v478[0];
        if ( v478[0] )
        {
          do
          {
            v55 = v54 >= 8 ? (_WORD *)(*(_QWORD *)&v544[10] + 16 * (v54 - 8 + 6LL)) : &v544[v54 + 2];
            if ( *v55 > 0x200u )
              goto LABEL_81;
          }
          while ( ++v54 < v478[0] );
        }
        SymbolicLinkTarget = 0;
LABEL_110:
        v56 = ((*(_DWORD *)(v33 + 4) >> 21) & 0x3FF) - (__int16)v484;
        v494 = (__int16)v484;
        if ( v35 + v56 > 0x200 )
        {
          v18 = -1073741811;
          SymbolicLinkTarget = -1073741811;
          goto LABEL_571;
        }
        if ( !v473 )
        {
          if ( (*(_DWORD *)v485 & 0x400) != 0 )
          {
            CmpLockRegistryExclusive();
          }
          else if ( !CmpPuntBoot )
          {
            PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
          }
          v473 = 1;
        }
        v58 = *(_QWORD *)(v489 + 8);
        if ( (*(_DWORD *)(v58 + 4) & 0x100000) != 0 )
          *(_DWORD *)(v58 + 60) = CmpLockTableAdd(*(_QWORD *)(v489 + 8), 0);
        v59 = KeAbPreAcquire(v58 + 40, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 + 40), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)(v58 + 40), v59, v58 + 40);
        if ( v59 )
          *(_BYTE *)(v59 + 26) |= 1u;
        _InterlockedIncrement((volatile signed __int32 *)(v58 + 48));
        v543 = 0LL;
        v60 = *(_DWORD *)(v489 + 48);
        if ( (v60 & 9) != 0 )
        {
          v29 = (v60 & 1) == 0;
          v61 = -1073741444;
          if ( !v29 )
            v61 = -1073740763;
          SymbolicLinkTarget = v61;
          goto LABEL_955;
        }
        v62 = *(_QWORD *)(v489 + 8);
        v63 = (*(_DWORD *)(v62 + 4) & 0x80000) != 0;
        if ( *(struct _KTHREAD **)(v62 + 48) == KeGetCurrentThread() )
          *(_QWORD *)(v62 + 48) = 0LL;
        else
          _InterlockedDecrement((volatile signed __int32 *)(v62 + 48));
        _m_prefetchw((const void *)(v62 + 40));
        v64 = *(_QWORD *)(v62 + 40);
        v65 = v64 - 16;
        if ( (v64 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v65 = 0LL;
        if ( (v64 & 2) != 0
          || (v66 = *(_QWORD *)(v62 + 40),
              v66 != _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 40), v65, v64)) )
        {
          ExfReleasePushLock((_QWORD *)(v62 + 40));
        }
        KeAbPostRelease(v62 + 40);
        if ( (*(_DWORD *)(v62 + 4) & 0x100000) != 0 )
          CmpLockTableRemove(v62, *(_DWORD *)(v62 + 60));
        if ( v63 && (*(_DWORD *)(v62 + 4) & 0x80000) != 0 )
          CmpFreeKeyControlBlock(v62);
        v67 = v478[0];
        LOBYTE(v472) = 0;
        if ( (_WORD)v484 == v478[0] )
        {
          if ( CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v33) )
          {
            v68 = v33;
            v486 = v33;
            if ( (PVOID)v33 == v501 )
            {
              LOWORD(v33) = v484;
              v471 = v477;
              v477 = 0;
            }
            else
            {
              CmpLockHashEntrySharedByKcb(v33);
              LOWORD(v33) = v484;
              v471 = 1;
            }
            goto LABEL_158;
          }
          v18 = -1073741670;
          SymbolicLinkTarget = -1073741670;
          goto LABEL_571;
        }
        v69 = v33;
        v507 = v33;
        v480 = 0;
LABEL_148:
        v70 = *(_DWORD *)v69;
        v71 = 0;
        v72 = *(_QWORD *)(v69 + 24);
        BugCheckParameter2 = v72;
        v488 = 0;
        v73 = v70 + 1;
        v474 = 0;
        if ( v70 == -1 )
        {
LABEL_152:
          v18 = -1073741670;
          if ( v69 == v504 )
            goto LABEL_155;
          v75 = v69;
          goto LABEL_154;
        }
        while ( 1 )
        {
          if ( v73 == 1 )
            KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
          v74 = v70;
          v70 = _InterlockedCompareExchange((volatile signed __int32 *)v69, v73, v70);
          if ( v74 == v70 )
            break;
          v73 = v70 + 1;
          if ( v70 == -1 )
            goto LABEL_152;
        }
        v86 = (volatile signed __int32 *)v69;
        v87 = v494;
        v88 = *(_DWORD *)(v69 + 8);
        v510 = (volatile signed __int32 *)v69;
        v503 = v494;
        if ( v494 >= v496 )
          goto LABEL_286;
        v89 = v494;
        v506.m128i_i64[0] = v494;
LABEL_179:
        if ( v87 >= 8 )
          v90 = (_OWORD *)(*(_QWORD *)&v544[10] + 16 * (v87 - 8 + 6LL));
        else
          v90 = &v544[v87 + 2];
        v520 = v90;
        if ( v87 >= 8 )
          v91 = *(_DWORD *)(*(_QWORD *)&v544[10] + 4LL * (v87 - 8));
        else
          v91 = *((_DWORD *)v544 + v89);
        v92 = *(_DWORD *)(v72 + 2808) - 1;
        v88 = v91 + 37 * v88;
        v93 = 101027 * (v88 ^ (v88 >> 9));
        v94 = *(_QWORD *)(v72 + 2800);
        LODWORD(v493) = v93;
        v95 = (unsigned __int64 *)(v94 + 24LL * ((v93 ^ (v93 >> 9)) & v92));
        v96 = KeAbPreAcquire((ULONG_PTR)v95, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v95, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v95, v96, (ULONG_PTR)v95);
        if ( v96 )
          *(_BYTE *)(v96 + 26) |= 1u;
        v97 = BugCheckParameter2;
        if ( !CmpReferenceHive(BugCheckParameter2) )
          KeBugCheckEx(0x51u, 0x17uLL, v97, 9uLL, v88);
        v98 = *(_QWORD *)(*(_QWORD *)(v97 + 2800) + 24LL * ((v93 ^ (v93 >> 9)) & (*(_DWORD *)(v97 + 2808) - 1)) + 16);
        v519 = v98;
        if ( !v98 )
        {
LABEL_277:
          v144 = (signed __int64 *)(*(_QWORD *)(v97 + 2800)
                                  + 24LL
                                  * ((((101027 * (v88 ^ (v88 >> 9))) >> 9) ^ (101027 * (v88 ^ (v88 >> 9)))) & (*(_DWORD *)(v97 + 2808) - 1)));
          v144[1] = 0LL;
          _m_prefetchw(v144);
          v145 = *v144;
          v146 = *v144 - 16;
          if ( (*v144 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v146 = 0LL;
          if ( (v145 & 2) != 0 || (v147 = *v144, v147 != _InterlockedCompareExchange64(v144, v146, v145)) )
            ExfReleasePushLock(v144);
          KeAbPostRelease((ULONG_PTR)v144);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v97 + 5496), 0xFFFFFFFF) == 1 )
            CmpDeleteHive(v97);
LABEL_284:
          v86 = v510;
          v71 = v488;
          goto LABEL_285;
        }
        while ( 1 )
        {
          if ( *(_DWORD *)v98 == v88 )
          {
            v99 = (char *)(v98 - 8);
            v502 = (PVOID)(v98 - 8);
            if ( *(volatile signed __int32 **)(v98 - 8 + 64) == v510 )
            {
              v100 = *((_QWORD *)v99 + 9);
              if ( (*(_DWORD *)v100 & 1) != 0 )
              {
                v101 = (WCHAR *)*((_QWORD *)v90 + 1);
                v102 = (unsigned __int8 *)(v100 + 26);
                v103 = *(_WORD *)v90 >> 1;
                v104 = *(_WORD *)(v100 + 24);
                if ( v103 )
                {
                  while ( v104 )
                  {
                    v105 = *v101++;
                    v106 = *v102++;
                    v497.m128i_i64[0] = (__int64)v102;
                    if ( v105 != (_WORD)v106 )
                    {
                      if ( v105 >= 0x61u )
                      {
                        if ( v105 <= 0x7Au )
                          v105 -= 32;
                        else
                          v105 = RtlUpcaseUnicodeChar(v105);
                      }
                      v107 = v105 - v106;
                      if ( v105 != v106 )
                        goto LABEL_205;
                      v102 = (unsigned __int8 *)v497.m128i_i64[0];
                    }
                    --v104;
                    if ( !--v103 )
                      break;
                  }
                }
                v107 = v103 - v104;
LABEL_205:
                if ( !v107 )
                {
                  v99 = (char *)v502;
LABEL_211:
                  if ( !v99 )
                  {
LABEL_276:
                    v97 = BugCheckParameter2;
                    goto LABEL_277;
                  }
                  if ( (*((_DWORD *)v99 + 1) & 0x100000) != 0 )
                    *((_DWORD *)v99 + 15) = CmpLockTableAdd((__int64)v99, 1);
                  v108 = (signed __int64 *)(v99 + 40);
                  v109 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v99 + 40), 0LL, 0);
                  v110 = v109;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)v99 + 10, 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v99 + 5, v109, (ULONG_PTR)(v99 + 40));
                  if ( v110 )
                    v110[26] |= 1u;
                  *((_QWORD *)v99 + 6) = KeGetCurrentThread();
                  v111 = *(_DWORD *)v99;
                  v112 = *(_DWORD *)v99 + 1;
                  if ( *(_DWORD *)v99 == -1 )
                  {
LABEL_221:
                    CmpUnlockKcb(v99);
                    CmpUnlockHashEntry(BugCheckParameter2, v88);
                    goto LABEL_284;
                  }
                  while ( 1 )
                  {
                    v113 = v111;
                    v111 = _InterlockedCompareExchange((volatile signed __int32 *)v99, v112, v111);
                    if ( v113 == v111 )
                      break;
                    v112 = v111 + 1;
                    if ( v111 == -1 )
                      goto LABEL_221;
                  }
                  if ( (v99[56] & 1) == 0 )
                    goto LABEL_235;
                  v114 = 0;
                  v115 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0);
                  v116 = v115;
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
                    ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v115);
                  if ( v116 )
                    *(_BYTE *)(v116 + 26) |= 1u;
                  *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
                  v118 = CurrentIrql;
                  v99 = (char *)v502;
                  *((_DWORD *)&CmpDelayDerefKCBLock + 12) = v118;
                  if ( (*((_BYTE *)v502 + 56) & 1) != 0 )
                  {
                    v119 = (char *)v502 + 216;
                    v120 = *((_QWORD *)v502 + 27);
                    v121 = (_QWORD *)*((_QWORD *)v502 + 28);
                    if ( *(PVOID *)(v120 + 8) != (char *)v502 + 216 || (_QWORD *)*v121 != v119 )
                      __fastfail(3u);
                    *v121 = v120;
                    *(_QWORD *)(v120 + 8) = v121;
                    *((_QWORD *)v99 + 28) = v99 + 216;
                    *v119 = v119;
                    _InterlockedOr(v462, 0);
                    v99[56] &= ~1u;
                    v114 = 1;
                  }
                  v122 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
                  *(&CmpDelayDerefKCBLock + 1) = 0LL;
                  v123 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
                  if ( v123 )
                    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v123);
                  __writecr8(v122);
                  KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
                  if ( v114 )
                  {
                    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v99);
                  }
                  else
                  {
LABEL_235:
                    if ( (v99[56] & 2) != 0 )
                    {
                      v124 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
                      v125 = v124;
                      v126 = KeGetCurrentIrql();
                      __writecr8(1uLL);
                      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
                        ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v124);
                      if ( v125 )
                        *(_BYTE *)(v125 + 26) |= 1u;
                      *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
                      v127 = v126;
                      v99 = (char *)v502;
                      *((_DWORD *)&CmpDelayedCloseTableLock + 12) = v127;
                      v128 = *((_BYTE *)v502 + 56);
                      if ( (v128 & 2) != 0 )
                      {
                        v129 = (char *)v502 + 216;
                        if ( (v128 & 4) != 0 )
                        {
                          **(_BYTE **)v129 = 1;
                          v99[56] &= ~4u;
                        }
                        else
                        {
                          v130 = *(char **)v129;
                          v131 = (char **)*((_QWORD *)v502 + 28);
                          if ( *(char **)(*(_QWORD *)v129 + 8LL) != v129 || *v131 != v129 )
                            __fastfail(3u);
                          --CmpDelayedCloseElements;
                          *v131 = v130;
                          *((_QWORD *)v130 + 1) = v131;
                          --qword_1407481D8;
                        }
                        *((_QWORD *)v99 + 28) = v99 + 216;
                        *(_QWORD *)v129 = v129;
                        _InterlockedOr(v462, 0);
                        v99[56] &= ~2u;
                      }
                      v132 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
                      *(&CmpDelayedCloseTableLock + 1) = 0LL;
                      v133 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
                      if ( v133 )
                        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v133);
                      __writecr8(v132);
                      KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
                    }
                  }
                  v134 = (*((_DWORD *)v99 + 1) & 0x80000) != 0;
                  if ( *((struct _KTHREAD **)v99 + 6) == KeGetCurrentThread() )
                    *((_QWORD *)v99 + 6) = 0LL;
                  else
                    _InterlockedDecrement((volatile signed __int32 *)v99 + 12);
                  _m_prefetchw(v108);
                  v135 = *v108;
                  v136 = *v108 - 16;
                  if ( (*v108 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v136 = 0LL;
                  if ( (v135 & 2) != 0 || (v137 = *v108, v137 != _InterlockedCompareExchange64(v108, v136, v135)) )
                    ExfReleasePushLock(v108);
                  KeAbPostRelease((ULONG_PTR)v108);
                  if ( (*((_DWORD *)v99 + 1) & 0x100000) != 0 )
                    CmpLockTableRemove((__int64)v99, *((_DWORD *)v99 + 15));
                  if ( v134 && (*((_DWORD *)v99 + 1) & 0x80000) != 0 )
                    CmpFreeKeyControlBlock((unsigned __int64)v99);
                  v138 = v503;
                  if ( v503 == v496 - 1 )
                  {
                    v474 = 1;
                  }
                  else
                  {
                    v139 = BugCheckParameter2;
                    v140 = (signed __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800)
                                            + 24LL
                                            * ((((unsigned int)v493 >> 9) ^ (unsigned int)v493) & (*(_DWORD *)(BugCheckParameter2 + 2808)
                                                                                                 - 1)));
                    v140[1] = 0LL;
                    _m_prefetchw(v140);
                    v141 = *v140;
                    v142 = *v140 - 16;
                    if ( (*v140 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                      v142 = 0LL;
                    if ( (v141 & 2) != 0 || (v143 = *v140, v143 != _InterlockedCompareExchange64(v140, v142, v141)) )
                      ExfReleasePushLock(v140);
                    KeAbPostRelease((ULONG_PTR)v140);
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v139 + 5496), 0xFFFFFFFF) == 1 )
                      CmpDeleteHive(v139);
                    v138 = v503;
                  }
                  CmpDereferenceKeyControlBlockUnsafe(v510);
                  v86 = (volatile signed __int32 *)v99;
                  v71 = v488 + 1;
                  v510 = (volatile signed __int32 *)v99;
                  v29 = (v99[178] & 0x10) == 0;
                  ++v488;
                  if ( v29 )
                  {
                    v87 = v138 + 1;
                    v89 = v506.m128i_i64[0] + 1;
                    v503 = v87;
                    ++v506.m128i_i64[0];
                    if ( v87 < v496 )
                    {
                      v72 = BugCheckParameter2;
                      goto LABEL_179;
                    }
                  }
LABEL_285:
                  v69 = v507;
LABEL_286:
                  if ( v69 != v504 )
                    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v69);
                  v148 = v71 + v480;
                  v494 += v71;
                  v29 = (v86[1] & 0x100000) == 0;
                  v480 += v71;
                  if ( !v29 )
                    *((_DWORD *)v86 + 15) = CmpLockTableAdd((__int64)v86, 0);
                  v149 = KeAbPreAcquire((ULONG_PTR)(v86 + 10), 0LL, 0);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v86 + 5, 17LL, 0LL) )
                    ExfAcquirePushLockSharedEx((unsigned __int64 *)v86 + 5, v149, (ULONG_PTR)(v86 + 10));
                  if ( v149 )
                    *(_BYTE *)(v149 + 26) |= 1u;
                  _InterlockedIncrement(v86 + 12);
                  if ( (*((_BYTE *)v86 + 178) & 2) != 0 )
                  {
                    v69 = *((_QWORD *)v86 + 12);
                    v507 = v69;
                    v150 = *(_DWORD *)v69;
                    v151 = *(_DWORD *)v69 + 1;
                    if ( *(_DWORD *)v69 == -1 )
                    {
LABEL_299:
                      v18 = -1073741670;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        if ( v151 == 1 )
                          KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
                        v152 = v150;
                        v150 = _InterlockedCompareExchange((volatile signed __int32 *)v69, v151, v150);
                        if ( v152 == v150 )
                          break;
                        v151 = v150 + 1;
                        if ( v150 == -1 )
                          goto LABEL_299;
                      }
                      v153 = *(_QWORD *)(v69 + 24);
                      if ( (*(_DWORD *)(v153 + 144) & 0x20) != 0
                        && *(struct _KTHREAD **)(v153 + 5416) != KeGetCurrentThread() )
                      {
                        v18 = -1073741772;
                        if ( !CmpLoadingSystemHivesActive )
                          goto LABEL_340;
                        if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread() )
                          goto LABEL_340;
                        ComponentNameAtIndex = CmpGetComponentNameAtIndex((__int64)v544, v494 - 1);
                        v167 = (_DWORD *)v485;
                        if ( !(unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v168, v169, v485 + 144) )
                          goto LABEL_340;
                        *v167 |= 0x100u;
                        v18 = 259;
                        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v69);
                      }
                      else
                      {
                        if ( (*(_DWORD *)(v69 + 4) & 0x40000) == 0 )
                        {
                          v154 = (v86[1] & 0x80000) != 0;
                          if ( *((struct _KTHREAD **)v86 + 6) == KeGetCurrentThread() )
                            *((_QWORD *)v86 + 6) = 0LL;
                          else
                            _InterlockedDecrement(v86 + 12);
                          _m_prefetchw((const void *)(v86 + 10));
                          v155 = *((_QWORD *)v86 + 5);
                          v156 = v155 - 16;
                          if ( (v155 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                            v156 = 0LL;
                          if ( (v155 & 2) != 0
                            || (v157 = *((_QWORD *)v86 + 5),
                                v157 != _InterlockedCompareExchange64((volatile signed __int64 *)v86 + 5, v156, v155)) )
                          {
                            ExfReleasePushLock((_QWORD *)v86 + 5);
                          }
                          KeAbPostRelease((ULONG_PTR)(v86 + 10));
                          if ( (v86[1] & 0x100000) != 0 )
                            CmpLockTableRemove((__int64)v86, *((_DWORD *)v86 + 15));
                          if ( v154 && (v86[1] & 0x80000) != 0 )
                            CmpFreeKeyControlBlock((unsigned __int64)v86);
                          v158 = v474;
                          if ( v474 )
                            CmpUnlockHashEntryByKcb((__int64)v86);
                          v159 = *v86;
                          if ( *v86 <= 1u )
                          {
LABEL_325:
                            v161 = *((_DWORD *)v86 + 2);
                            v162 = *((_QWORD *)v86 + 3);
                            CmpLockHashEntryExclusiveByKcb((ULONG_PTR)v86);
                            CmpLockKcbExclusive((__int64)v86);
                            v163 = *((_QWORD *)v86 + 23);
                            v164 = 0LL;
                            if ( v163 )
                            {
                              v165 = *(_QWORD *)(v163 + 24);
                              if ( v165 )
                              {
                                v164 = *(char **)(v165 + 16);
                                CmpUnlockKcb((char *)v86);
                                CmpLockKcbExclusive((__int64)v164);
                                CmpLockKcbExclusive((__int64)v86);
                              }
                            }
                            CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v86, 0LL);
                            CmpUnlockKcb((char *)v86);
                            if ( v164 )
                              CmpUnlockKcb(v164);
                            CmpUnlockHashEntry(v162, v161);
                            v69 = v507;
                          }
                          else
                          {
                            while ( 1 )
                            {
                              v160 = v159 - 1;
                              v159 = _InterlockedCompareExchange(v86, v159 - 1, v159);
                              if ( v159 == v160 + 1 )
                                break;
                              if ( v159 <= 1 )
                                goto LABEL_325;
                            }
                          }
                          if ( v158 )
                          {
                            v86 = (volatile signed __int32 *)v69;
                            CmpLockHashEntrySharedByKcb(v69);
                            CmpLockKcbShared(v69);
                            v148 = v480;
                            goto LABEL_342;
                          }
                          goto LABEL_148;
                        }
                        v18 = -1073740763;
LABEL_340:
                        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v69);
                      }
                    }
                    CmpUnlockKcb((char *)v86);
                    if ( v474 )
                      CmpUnlockHashEntryByKcb((__int64)v86);
                    if ( !v86 )
                      goto LABEL_155;
                    v75 = (ULONG_PTR)v86;
LABEL_154:
                    CmpDereferenceKeyControlBlock(v75);
                    goto LABEL_155;
                  }
                  v158 = v474;
LABEL_342:
                  v170 = (v86[1] & 0x80000) != 0;
                  if ( *((struct _KTHREAD **)v86 + 6) == KeGetCurrentThread() )
                    *((_QWORD *)v86 + 6) = 0LL;
                  else
                    _InterlockedDecrement(v86 + 12);
                  _m_prefetchw((const void *)(v86 + 10));
                  v171 = *((_QWORD *)v86 + 5);
                  v172 = v171 - 16;
                  if ( (v171 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v172 = 0LL;
                  if ( (v171 & 2) != 0
                    || (v173 = *((_QWORD *)v86 + 5),
                        v173 != _InterlockedCompareExchange64((volatile signed __int64 *)v86 + 5, v172, v171)) )
                  {
                    ExfReleasePushLock((_QWORD *)v86 + 5);
                  }
                  KeAbPostRelease((ULONG_PTR)(v86 + 10));
                  if ( (v86[1] & 0x100000) != 0 )
                    CmpLockTableRemove((__int64)v86, *((_DWORD *)v86 + 15));
                  if ( v170 && (v86[1] & 0x80000) != 0 )
                    CmpFreeKeyControlBlock((unsigned __int64)v86);
                  v486 = (__int64)v86;
                  v18 = 0;
                  v471 = v158;
                  v480 = v148;
LABEL_155:
                  SymbolicLinkTarget = v18;
                  if ( v18 < 0 || v18 == 259 )
                    goto LABEL_569;
                  WORD1(v33) = HIWORD(v484);
                  LOWORD(v33) = v480 + v484;
                  v67 = v478[0];
                  v68 = v486;
                  v484 = v33;
LABEL_158:
                  v76 = v485;
                  if ( (_WORD)v33 == v67 && (*(_DWORD *)v485 & 1) == 0 )
                  {
                    v77 = *(_QWORD *)(v68 + 24);
                    *(_QWORD *)(*(_QWORD *)(v77 + 2800)
                              + 24LL
                              * (((101027 * (*(_DWORD *)(v68 + 8) ^ (*(_DWORD *)(v68 + 8) >> 9))) ^ ((unsigned int)(101027 * (*(_DWORD *)(v68 + 8) ^ (*(_DWORD *)(v68 + 8) >> 9))) >> 9)) & (*(_DWORD *)(v77 + 2808) - 1))
                              + 8) = 0LL;
                    v78 = (signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v68 + 24) + 2800LL)
                                           + 24LL
                                           * (((101027 * (*(_DWORD *)(v68 + 8) ^ (*(_DWORD *)(v68 + 8) >> 9))) ^ ((unsigned int)(101027 * (*(_DWORD *)(v68 + 8) ^ (*(_DWORD *)(v68 + 8) >> 9))) >> 9)) & (*(_DWORD *)(*(_QWORD *)(v68 + 24) + 2808LL) - 1)));
                    _m_prefetchw(v78);
                    v79 = *v78;
                    v80 = *v78 - 16;
                    if ( (*v78 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                      v80 = 0LL;
                    if ( (v79 & 2) != 0 || (v81 = *v78, v81 != _InterlockedCompareExchange64(v78, v80, v79)) )
                      ExfReleasePushLock(v78);
                    KeAbPostRelease((ULONG_PTR)v78);
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v77 + 5496), 0xFFFFFFFF) == 1 )
                      CmpDeleteHive(v77);
                    v76 = v485;
                    v471 = 0;
                  }
                  if ( (*(_DWORD *)(v68 + 4) & 0x100000) != 0 )
                    *(_DWORD *)(v68 + 60) = CmpLockTableAdd(v68, 0);
                  v82 = (signed __int64 *)(v68 + 40);
                  v504 = v68 + 40;
                  v83 = KeAbPreAcquire(v68 + 40, 0LL, 0);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 40), 17LL, 0LL) )
                    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v68 + 40), v83, v68 + 40);
                  if ( v83 )
                    *(_BYTE *)(v83 + 26) |= 1u;
                  _InterlockedIncrement((volatile signed __int32 *)(v68 + 48));
                  if ( (__int16)v33 >= v478[0] )
                  {
                    RtlInitUnicodeString(&DestinationString, 0LL);
                  }
                  else
                  {
                    v84 = (unsigned int)(__int16)v33;
                    if ( (unsigned int)v84 >= 8 )
                      v85 = (_OWORD *)(*(_QWORD *)&v544[10] + 16 * ((unsigned int)(v84 - 8) + 6LL));
                    else
                      v85 = &v544[v84 + 2];
                    DestinationString.Buffer = (wchar_t *)*((_QWORD *)v85 + 1);
                    DestinationString.Length = v505.m128i_i16[0]
                                             - 2 * (((__int64)DestinationString.Buffer - v505.m128i_i64[1]) >> 1);
                    DestinationString.MaximumLength = DestinationString.Length;
                  }
                  if ( !CmpVEEnabled )
                    goto LABEL_395;
                  if ( *(_WORD *)(v68 + 58) )
                    goto LABEL_395;
                  v174 = *(_QWORD *)(v68 + 24);
                  if ( v174 == CmpMasterHive )
                    goto LABEL_395;
                  v535[2] = 0LL;
                  v175 = 0;
                  v534 = 0LL;
                  v535[1] = 0LL;
                  v535[0] = v68;
                  while ( 1 )
                  {
                    if ( v175 < 2 )
                      v176 = v535[v175];
                    else
                      v176 = *(_QWORD *)(8LL * (v175 - 2));
                    if ( *(_WORD *)(v176 + 58) && *(_BYTE *)(v176 + 57) == 1 )
                      goto LABEL_373;
                    if ( *(_DWORD *)(v176 + 32) != -1 )
                      break;
                    if ( --v175 < 0 )
                      goto LABEL_373;
                  }
                  if ( (*(_DWORD *)(v174 + 5360) & 0x10) != 0 || (*(_WORD *)(v68 + 178) & 0x200) != 0 )
                  {
LABEL_373:
                    v177 = (int *)(v76 + 16);
                    v178 = 1;
                    if ( v76 != -16 && (*v177 & 1) != 0 )
                    {
                      if ( (*v177 & 2) == 0 )
                        goto LABEL_376;
LABEL_394:
                      v82 = (signed __int64 *)v504;
                      goto LABEL_395;
                    }
                    if ( KeGetCurrentThread()->PreviousMode )
                    {
                      v180 = KeGetCurrentThread();
                      v181 = (__int64)v180;
                      *(_DWORD *)TokenInformation = 0;
                      v506.m128i_i64[0] = (__int64)v180;
                      Process = (__int64)v180->ApcState.Process;
                      if ( (*(_DWORD *)(&v180[1].SwapListEntry + 1) & 8) != 0 )
                      {
                        v497.m128i_i64[0] = (__int64)KeGetCurrentThread();
                        PspLockThreadSecurityShared((__int64)v180, v497.m128i_i64[0]);
                        if ( (*(_DWORD *)(&v180[1].SwapListEntry + 1) & 8) != 0 )
                        {
                          v183 = (void *)(*(_QWORD *)&v180[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
                          ObfReferenceObject(v183);
                        }
                        else
                        {
                          v183 = 0LL;
                        }
                        PspUnlockThreadSecurityShared((__int64)v180, v497.m128i_i64[0]);
                        if ( v183 )
                        {
                          ObfDereferenceObject(v183);
                          goto LABEL_389;
                        }
                        v181 = v506.m128i_i64[0];
                      }
                      v184 = (void *)ObFastReferenceObject((signed __int64 *)(Process + 856));
                      if ( !v184 )
                      {
                        PspLockProcessShared(Process, v181);
                        v184 = (void *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
                        PspUnlockProcessShared(Process, v181);
                      }
                      SeQueryInformationToken(v184, TokenVirtualizationEnabled, (PVOID *)TokenInformation);
                      ObFastDereferenceObject(
                        (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
                        (unsigned __int64)v184);
                      v178 = TokenInformation[0] == 0;
LABEL_389:
                      v68 = v486;
                    }
                    if ( v177 )
                    {
                      v185 = *v177 | 1;
                      *v177 = v185;
                      if ( v178 )
                      {
                        *v177 = v185 | 2;
                        goto LABEL_393;
                      }
                      *v177 = v185 | 4;
                    }
                    else
                    {
LABEL_393:
                      if ( v178 )
                        goto LABEL_394;
                    }
LABEL_376:
                    v179 = v485;
                    if ( (*(_DWORD *)v485 & 8) != 0 )
                    {
                      v82 = (signed __int64 *)v504;
                      goto LABEL_396;
                    }
                    if ( (*(_WORD *)(v68 + 178) & 0x200) != 0 )
                      v188 = CmpVEExecuteVirtualStoreParseLogic(v68, &DestinationString, v485, String2);
                    else
                      v188 = CmpVEExecuteRealStoreParseLogic(
                               v68,
                               (__int64)&DestinationString,
                               (_DWORD *)v485,
                               (UNICODE_STRING *)String2);
                    v82 = (signed __int64 *)v504;
                    v186 = v188;
                  }
                  else
                  {
LABEL_395:
                    v179 = v485;
LABEL_396:
                    v186 = -1073741199;
                  }
                  v187 = (*(_DWORD *)(v68 + 4) & 0x80000) != 0;
                  SymbolicLinkTarget = v186;
                  if ( *(struct _KTHREAD **)(v68 + 48) == KeGetCurrentThread() )
                    *(_QWORD *)(v68 + 48) = 0LL;
                  else
                    _InterlockedDecrement((volatile signed __int32 *)(v68 + 48));
                  _m_prefetchw(v82);
                  v189 = *v82;
                  v190 = *v82 - 16;
                  if ( (*v82 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v190 = 0LL;
                  if ( (v189 & 2) != 0 || (v191 = *v82, v191 != _InterlockedCompareExchange64(v82, v190, v189)) )
                    ExfReleasePushLock(v82);
                  KeAbPostRelease((ULONG_PTR)v82);
                  if ( (*(_DWORD *)(v68 + 4) & 0x100000) != 0 )
                    CmpLockTableRemove(v68, *(_DWORD *)(v68 + 60));
                  if ( v187 && (*(_DWORD *)(v68 + 4) & 0x80000) != 0 )
                    CmpFreeKeyControlBlock(v68);
                  if ( v186 != -1073741199 )
                    goto LABEL_568;
                  v192 = *(_QWORD *)(v179 + 64);
                  v193 = *(_QWORD *)(v68 + 24);
                  if ( !v192 || v192 == v193 )
                    goto LABEL_439;
                  if ( (*(_DWORD *)(v193 + 5360) & 1) != 0 )
                  {
                    v194 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
                      ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v194, (ULONG_PTR)&CmpHiveListHeadLock);
                    if ( v194 )
                      *(_BYTE *)(v194 + 26) |= 1u;
                    v195 = *(_QWORD *)(v193 + 5368);
                    if ( v195 != v193 + 5368 )
                    {
                      while ( 1 )
                      {
                        v196 = v195 - 5368;
                        if ( v196 == v192 )
                          break;
                        v195 = *(_QWORD *)(v196 + 5368);
                        if ( v195 == v193 + 5368 )
                          goto LABEL_426;
                      }
                      _m_prefetchw(&CmpHiveListHeadLock);
                      v199 = CmpHiveListHeadLock - 16;
                      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                        v199 = 0LL;
                      if ( (CmpHiveListHeadLock & 2) != 0
                        || (v200 = CmpHiveListHeadLock,
                            v200 != _InterlockedCompareExchange64(
                                      (volatile signed __int64 *)&CmpHiveListHeadLock,
                                      v199,
                                      CmpHiveListHeadLock)) )
                      {
                        ExfReleasePushLock(&CmpHiveListHeadLock);
                      }
                      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
LABEL_439:
                      if ( !v15 && !v511 )
                      {
                        v201 = 0LL;
                        goto LABEL_451;
                      }
                      if ( *(_QWORD *)(v68 + 24) == CmpMasterHive )
                      {
                        v482 = 1;
                        v15 = 0LL;
                        v201 = 0LL;
LABEL_451:
                        if ( !CmpTransSilentIgnore() && (v15 || v201) )
                        {
                          if ( (int)CmpTransSearchAddTransFromHive(*(_QWORD *)(v68 + 24), v15, v201, 0, (__int64)&v491) < 0 )
                          {
                            if ( v471 )
                            {
                              CmpUnlockHashEntryByKcb(v68);
                              v471 = 0;
                            }
                            CmpUnlockRegistry();
                            v18 = CmpTransSearchAddTransFromHive(*(_QWORD *)(v68 + 24), v15, v201, 1, (__int64)&v491);
                            SymbolicLinkTarget = v18;
                            CmpLockRegistry();
                            v473 = 1;
                            if ( v18 >= 0 )
                            {
                              v18 = -1073741267;
                              SymbolicLinkTarget = -1073741267;
                            }
                            goto LABEL_569;
                          }
                        }
                        else
                        {
                          v68 = v486;
                          v491 = 0LL;
                        }
                        v203 = *(_WORD *)(v68 + 58);
                        v204 = 0LL;
                        if ( v203 >= 2 && v203 != 1 )
                        {
                          v205 = 8LL * (unsigned int)(v203 - 1);
                          TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                                            v202,
                                                                            v205,
                                                                            0x35364D43u);
                          v204 = TransientPoolWithTag;
                          if ( !TransientPoolWithTag )
                          {
                            v18 = -1073741670;
                            SymbolicLinkTarget = -1073741670;
                            goto LABEL_569;
                          }
                          memset(TransientPoolWithTag, 0, v205);
                        }
                        LOWORD(v528) = v203;
                        WORD1(v528) = -1;
                        Privileges = v204;
                        v207 = *(_WORD *)(v68 + 58);
                        v208 = 0LL;
                        if ( v207 >= 2 && v207 != 1 )
                        {
                          v209 = 8LL * (unsigned int)(v207 - 1);
                          v210 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v202, v209, 0x35364D43u);
                          v208 = v210;
                          if ( !v210 )
                          {
                            v18 = -1073741670;
                            SymbolicLinkTarget = -1073741670;
                            goto LABEL_569;
                          }
                          memset(v210, 0, v209);
                        }
                        WORD1(v532[0]) = -1;
                        LOWORD(v532[0]) = v207;
                        v533 = v208;
                        v211 = *(_WORD *)(v68 + 58);
                        v212 = &v528;
                        SymbolicLinkTarget = 0;
                        v213 = v532;
                        v493 = &v528;
                        v502 = v532;
                        WORD1(v528) = v211;
                        if ( v211 )
                        {
                          v214 = *(_QWORD *)(v68 + 184);
                          if ( v214 )
                          {
                            do
                            {
                              CmpSetKcbAtLayerHeight(&v528, v211, *(_QWORD *)(v214 + 16));
                              v214 = *(_QWORD *)(v215 + 24);
                              v211 = v216 - 1;
                            }
                            while ( v214 );
                            v213 = v532;
                          }
                        }
                        else
                        {
                          v529 = v68;
                        }
                        if ( (__int16)v484 < v478[0] )
                        {
                          while ( 1 )
                          {
                            v217 = *((_WORD *)v212 + 1);
                            v218 = 0;
                            v480 = v217;
                            if ( v217 >= 0 )
                            {
                              v219 = (__int64)v493;
                              v220 = v493 + 1;
                              do
                              {
                                if ( v218 < 2 )
                                  v221 = *v220;
                                else
                                  v221 = *(_QWORD *)(*(_QWORD *)(v219 + 24) + 8LL * (v218 - 2));
                                if ( (*(_DWORD *)(v221 + 4) & 0x100000) != 0 )
                                  *(_DWORD *)(v221 + 60) = CmpLockTableAdd(v221, 0);
                                v222 = KeAbPreAcquire(v221 + 40, 0LL, 0);
                                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v221 + 40), 17LL, 0LL) )
                                  ExfAcquirePushLockSharedEx((unsigned __int64 *)(v221 + 40), v222, v221 + 40);
                                if ( v222 )
                                  *(_BYTE *)(v222 + 26) |= 1u;
                                _InterlockedIncrement((volatile signed __int32 *)(v221 + 48));
                                ++v218;
                                ++v220;
                              }
                              while ( v218 <= v217 );
                              v212 = v493;
                              v9 = 0LL;
                              v179 = v485;
                            }
                            v521 = 0LL;
                            v223 = v217;
                            if ( v217 < 0 )
                              goto LABEL_497;
                            while ( 1 )
                            {
                              if ( v223 < 2 )
                                v224 = v212[v223 + 1];
                              else
                                v224 = *(_QWORD *)(v212[3] + 8LL * (v223 - 2));
                              if ( *(_WORD *)(v224 + 58) && *(_BYTE *)(v224 + 57) == 1 )
                                goto LABEL_497;
                              if ( *(_DWORD *)(v224 + 32) != -1 )
                                break;
                              if ( --v223 < 0 )
                                goto LABEL_497;
                            }
                            v228 = (ACCESS_MASK *)v491;
                            if ( v491 )
                            {
                              KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v212, 0);
                              NextElement = CmListGetNextElement((_QWORD *)(KcbAtLayerHeight + 200), &v521, 32);
                              if ( NextElement )
                              {
                                while ( 1 )
                                {
                                  v232 = *((_DWORD *)NextElement + 17);
                                  if ( v232 == 2 || v232 == 11 )
                                    break;
                                  NextElement = CmListGetNextElement(v231, &v521, 32);
                                  if ( !NextElement )
                                    goto LABEL_511;
                                }
                                if ( CmEqualTrans(*((_QWORD *)NextElement + 7), (__int64)v228) )
                                {
LABEL_497:
                                  if ( CmpLoadingSystemHivesActive )
                                  {
                                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                                      && *(_QWORD *)(v486 + 24) == CmpMasterHive
                                      && (*(_DWORD *)(v486 + 4) & 0x7FE00000) == 0x600000
                                      && (__int16)v484 > 0 )
                                    {
                                      v225 = CmpGetComponentNameAtIndex((__int64)v544, (__int16)v484 - 1);
                                      if ( (unsigned __int8)CmpWaitForHiveMount(v225, v226, v227, v179 + 144) )
                                      {
                                        *(_DWORD *)v179 |= 0x100u;
                                        v18 = 259;
                                        goto LABEL_912;
                                      }
                                    }
                                  }
                                  goto LABEL_911;
                                }
                              }
                            }
LABEL_511:
                            v233 = v480;
                            if ( v480 >= 0 )
                            {
                              while ( 1 )
                              {
                                v234 = v233 < 2 ? v212[v233 + 1] : *(_QWORD *)(v212[3] + 8LL * (v233 - 2));
                                if ( *(_DWORD *)(v234 + 32) != -1 )
                                  break;
                                if ( --v233 < 0 )
                                  goto LABEL_519;
                              }
                              if ( (*(_BYTE *)(v234 + 178) & 0x10) != 0 )
                              {
                                SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                                       (__int64)v212,
                                                       (__int64)v544,
                                                       v484,
                                                       v478[0],
                                                       (__int64)v228,
                                                       (__int64)String2,
                                                       (ULONG_PTR *)(v179 + 96));
                                v18 = SymbolicLinkTarget;
                                if ( SymbolicLinkTarget >= 0 )
                                {
                                  *(_DWORD *)v179 &= ~8u;
                                  if ( !*(_QWORD *)(v179 + 64) )
                                  {
                                    v254 = *(_QWORD *)(v486 + 24);
                                    if ( (*(_DWORD *)(v254 + 5360) & 1) != 0 )
                                      *(_QWORD *)(v179 + 64) = v254;
                                  }
                                  v18 = 260;
                                  SymbolicLinkTarget = 260;
                                }
                                goto LABEL_569;
                              }
                            }
LABEL_519:
                            v235 = 0;
                            if ( v480 >= 0 )
                            {
                              v236 = (unsigned __int64 *)(v212 + 1);
                              do
                              {
                                if ( v235 < 2 )
                                  v237 = *v236;
                                else
                                  v237 = *(_QWORD *)(v212[3] + 8LL * (v235 - 2));
                                v238 = (*(_DWORD *)(v237 + 4) & 0x80000) != 0;
                                if ( *(struct _KTHREAD **)(v237 + 48) == KeGetCurrentThread() )
                                  *(_QWORD *)(v237 + 48) = 0LL;
                                else
                                  _InterlockedDecrement((volatile signed __int32 *)(v237 + 48));
                                _m_prefetchw((const void *)(v237 + 40));
                                v239 = *(_QWORD *)(v237 + 40);
                                v240 = v239 - 16;
                                if ( (v239 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                                  v240 = 0LL;
                                if ( (v239 & 2) != 0
                                  || (v241 = *(_QWORD *)(v237 + 40),
                                      v241 != _InterlockedCompareExchange64(
                                                (volatile signed __int64 *)(v237 + 40),
                                                v240,
                                                v239)) )
                                {
                                  ExfReleasePushLock((_QWORD *)(v237 + 40));
                                }
                                KeAbPostRelease(v237 + 40);
                                if ( (*(_DWORD *)(v237 + 4) & 0x100000) != 0 )
                                  CmpLockTableRemove(v237, *(_DWORD *)(v237 + 60));
                                if ( v238 && (*(_DWORD *)(v237 + 4) & 0x80000) != 0 )
                                  CmpFreeKeyControlBlock(v237);
                                v212 = v493;
                                ++v235;
                                ++v236;
                              }
                              while ( v235 <= v480 );
                              v228 = (ACCESS_MASK *)v491;
                            }
                            v242 = v484;
                            v243 = (unsigned int)(__int16)v484;
                            if ( (unsigned int)v243 >= 8 )
                              v244 = (_OWORD *)(*(_QWORD *)&v544[10] + 16 * ((unsigned int)(v243 - 8) + 6LL));
                            else
                              v244 = &v544[(unsigned int)v243 + 2];
                            if ( (unsigned int)v243 >= 8 )
                              v245 = *(_DWORD *)(*(_QWORD *)&v544[10] + 4LL * (unsigned int)(v243 - 8));
                            else
                              v245 = *((_DWORD *)v544 + v243);
                            v179 = v485;
                            v246 = v245 + 37 * *(_DWORD *)(v486 + 8);
                            if ( (*(_DWORD *)v485 & 1) == 0 || (v247 = 1, (_DWORD)v243 != v496 - 1) )
                              v247 = 0;
                            v248 = (__int64 *)v502;
                            GrantedAccess = v228;
                            v249 = v486;
                            v250 = CmpWalkOneLevel(
                                     v486,
                                     (__int64)v212,
                                     &TokenInformation[4],
                                     (__int64)v502,
                                     &v481,
                                     (__int64)v244,
                                     v245,
                                     v246,
                                     (__int64)GrantedAccess,
                                     v247);
                            SymbolicLinkTarget = v250;
                            v18 = v250;
                            if ( v250 == -1073741772 )
                              break;
                            if ( v250 < 0 )
                              goto LABEL_569;
                            CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v249);
                            LOWORD(v242) = v242 + 1;
                            v68 = *(_QWORD *)&TokenInformation[4];
                            v471 = v481;
                            v213 = v212;
                            v212 = v248;
                            v486 = *(_QWORD *)&TokenInformation[4];
                            v493 = v248;
                            *(_QWORD *)&TokenInformation[4] = 0LL;
                            v481 = 0;
                            v502 = v213;
                            v484 = v242;
                            if ( (__int16)v242 >= v478[0] )
                              goto LABEL_551;
                          }
                          if ( !CmpLoadingSystemHivesActive )
                            goto LABEL_569;
                          if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                            && *(_QWORD *)(v249 + 24) == CmpMasterHive )
                          {
                            if ( (*(_DWORD *)(v249 + 4) & 0x7FE00000) == 0x600000
                              && (__int16)v242 > 0
                              && (v255 = CmpGetComponentNameAtIndex((__int64)v544, (__int16)v242 - 1),
                                  (unsigned __int8)CmpWaitForHiveMount(v255, v256, v257, v179 + 144))
                              || (*(_DWORD *)(v249 + 4) & 0x7FE00000) == 0x400000
                              && (v258 = CmpGetComponentNameAtIndex((__int64)v544, (__int16)v242),
                                  (unsigned __int8)CmpWaitForHiveMount(v258, v259, v260, v179 + 144)) )
                            {
                              *(_DWORD *)v179 |= 0x100u;
                              v18 = 259;
                              SymbolicLinkTarget = 259;
                              goto LABEL_569;
                            }
                          }
LABEL_568:
                          v18 = SymbolicLinkTarget;
                          goto LABEL_569;
                        }
LABEL_551:
                        v251 = *(_QWORD *)(v68 + 64);
                        v252 = v213;
                        v492 = v213;
                        if ( v251 )
                        {
                          v253 = *(_WORD *)(v251 + 58);
                          *((_WORD *)v213 + 1) = v253;
                          if ( v253 )
                          {
                            for ( i = *(_QWORD *)(v251 + 184); i; v213 = v502 )
                            {
                              CmpSetKcbAtLayerHeight(v213, v253, *(_QWORD *)(i + 16));
                              i = *(_QWORD *)(v263 + 24);
                              v253 = v264 - 1;
                            }
                          }
                          else
                          {
                            v213[1] = v251;
                          }
                        }
                        else
                        {
                          v252 = 0LL;
                          v492 = 0LL;
                        }
                        v265 = *(_QWORD *)(v489 + 8);
                        if ( *(_QWORD *)(v68 + 64) != v265 && v68 != v265 )
                        {
                          if ( (*(_DWORD *)(v265 + 4) & 0x100000) != 0 )
                            *(_DWORD *)(v265 + 60) = CmpLockTableAdd(*(_QWORD *)(v489 + 8), 0);
                          v266 = KeAbPreAcquire(v265 + 40, 0LL, 0);
                          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v265 + 40), 17LL, 0LL) )
                            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v265 + 40), v266, v265 + 40);
                          if ( v266 )
                            *(_BYTE *)(v266 + 26) |= 1u;
                          _InterlockedIncrement((volatile signed __int32 *)(v265 + 48));
                          LOBYTE(v472) = 1;
                        }
                        if ( v252 )
                        {
                          v267 = *((_WORD *)v252 + 1);
                          v268 = 0;
                          if ( v267 >= 0 )
                          {
                            v269 = (__int64)v492;
                            v270 = v492 + 1;
                            do
                            {
                              if ( v268 < 2 )
                                v271 = *v270;
                              else
                                v271 = *(_QWORD *)(*(_QWORD *)(v269 + 24) + 8LL * (v268 - 2));
                              if ( (*(_DWORD *)(v271 + 4) & 0x100000) != 0 )
                                *(_DWORD *)(v271 + 60) = CmpLockTableAdd(v271, 0);
                              v272 = KeAbPreAcquire(v271 + 40, 0LL, 0);
                              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v271 + 40), 17LL, 0LL) )
                                ExfAcquirePushLockSharedEx((unsigned __int64 *)(v271 + 40), v272, v271 + 40);
                              if ( v272 )
                                *(_BYTE *)(v272 + 26) |= 1u;
                              _InterlockedIncrement((volatile signed __int32 *)(v271 + 48));
                              ++v268;
                              ++v270;
                            }
                            while ( v268 <= v267 );
                            v9 = 0LL;
                          }
                          v476 = 1;
                        }
                        v273 = (__int64)v493;
                        v274 = 0;
                        v275 = *((_WORD *)v493 + 1);
                        if ( v275 >= 0 )
                        {
                          v276 = (__int64)v493;
                          v277 = v493 + 1;
                          do
                          {
                            if ( v274 < 2 )
                              v278 = *v277;
                            else
                              v278 = *(_QWORD *)(*(_QWORD *)(v276 + 24) + 8LL * (v274 - 2));
                            if ( (*(_DWORD *)(v278 + 4) & 0x100000) != 0 )
                              *(_DWORD *)(v278 + 60) = CmpLockTableAdd(v278, 0);
                            v279 = KeAbPreAcquire(v278 + 40, 0LL, 0);
                            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v278 + 40), 17LL, 0LL) )
                              ExfAcquirePushLockSharedEx((unsigned __int64 *)(v278 + 40), v279, v278 + 40);
                            if ( v279 )
                              *(_BYTE *)(v279 + 26) |= 1u;
                            _InterlockedIncrement((volatile signed __int32 *)(v278 + 48));
                            ++v274;
                            ++v277;
                          }
                          while ( v274 <= v275 );
                          v273 = (__int64)v493;
                          v9 = 0LL;
                        }
                        v280 = *(_DWORD *)(v489 + 48);
                        if ( (v280 & 9) != 0 )
                        {
LABEL_625:
                          v18 = -1073741444;
                          if ( (v280 & 1) != 0 )
                            v18 = -1073740763;
                          goto LABEL_912;
                        }
                        v281 = v486;
                        v282 = v484 - 1;
                        if ( (*(_BYTE *)(v486 + 178) & 2) != 0 )
                          goto LABEL_911;
                        v283 = v491;
                        if ( !(unsigned __int8)CmRmIsKcbStackVisible(v273, v491) )
                          goto LABEL_911;
                        v284 = v485;
                        if ( (*(_DWORD *)v485 & 2) != 0 )
                        {
                          CmpUnlockKcbStack(v273);
                          CmpUnlockKcbStack((__int64)v492);
                          v285 = v472;
                          v286 = v489;
                          if ( (_BYTE)v472 )
                            CmpUnlockKcb(*(char **)(v489 + 8));
                          v483 = CmpTryToLockHashEntryExclusive(*(_QWORD *)(v284 + 48));
                          if ( v285 )
                            CmpLockKcbShared(*(_QWORD *)(v286 + 8));
                          v287 = (__int64)v492;
                          CmpLockKcbStackTopExclusiveRestShared((__int64)v492);
                          CmpLockKcbStackTopExclusiveRestShared(v273);
                          v289 = (UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v544, v282);
                          ComponentHashAtIndex = CmpGetComponentHashAtIndex(v544, v288);
                          if ( CmpIsKeyDeletedForKeyBody(v489, 0LL) )
                          {
                            LOBYTE(v280) = *(_BYTE *)(v489 + 48);
                            goto LABEL_625;
                          }
                          if ( !CmpIsKeyStackDeleted(v287, v283) )
                          {
                            if ( !CmpIsKeyStackDeleted(v273, v283) )
                            {
                              v18 = -1073741790;
                              goto LABEL_912;
                            }
                            v291 = v486;
                            v292 = *(_QWORD *)(v486 + 64);
                            if ( *(_QWORD *)(v292 + 24) != CmpMasterHive )
                            {
                              v18 = -1073741790;
                              goto LABEL_912;
                            }
                            if ( (*(_BYTE *)(v292 + 178) & 2) == 0 )
                            {
                              v293 = *(_DWORD *)(v284 + 40);
                              v294 = (_DWORD *)(v284 + 40);
                              v295 = *(_QWORD *)(v284 + 48);
                              if ( v293 == -1 )
                                HiveRootCell = CmpCreateHiveRootCell(
                                                 v295,
                                                 (__int64)AccessState,
                                                 &v289->Length,
                                                 v284,
                                                 (unsigned int *)(v284 + 40));
                              else
                                HiveRootCell = CmpUpdateHiveRootCellFlags(v295, v293);
                              SymbolicLinkTarget = HiveRootCell;
                              v18 = HiveRootCell;
                              if ( HiveRootCell < 0 )
                                goto LABEL_913;
                              *(_WORD *)(v291 + 178) |= 2u;
                              *(_DWORD *)AccessMode = 0;
                              LODWORD(GenericMapping) = ComponentHashAtIndex;
                              v297 = CmpCreateKeyControlBlock(
                                       *(_QWORD *)(v485 + 48),
                                       -1,
                                       v291,
                                       *(void **)(v485 + 88),
                                       1,
                                       &v289->Length,
                                       GenericMapping,
                                       *(_QWORD *)AccessMode,
                                       &v522);
                              SymbolicLinkTarget = v297;
                              *(_WORD *)(v291 + 178) &= ~2u;
                              v18 = v297;
                              if ( v297 < 0 )
                                goto LABEL_913;
                              v298 = v291;
                              v299 = v522;
                              v486 = v522;
                              CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v298);
                              CmpUnlockHashEntryByKcb(v298);
                              v471 = 0;
                              SymbolicLinkTarget = CmpStartKcbStackForTopLayerKcb((__int64)v536, v299);
                              v18 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget < 0 )
                                goto LABEL_913;
                              *(_WORD *)(v298 + 178) |= 2u;
                              CmpLockKcbStackTopExclusiveRestShared((__int64)v536);
                              v300 = v485;
                              v301 = v470;
                              *(_WORD *)(v298 + 178) &= ~2u;
                              v487 = 1;
                              SymbolicLinkTarget = CmpCreateKeyBody(
                                                     v299,
                                                     v301,
                                                     v300,
                                                     v283,
                                                     0,
                                                     (__int64)&Object,
                                                     (__int64)&v475);
                              v18 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget < 0 )
                                goto LABEL_910;
                              ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v298 + 24) + 2848LL), 1u);
                              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(v299 + 24) + 2848LL), 1u);
                              v302 = *(_QWORD *)(v299 + 24);
                              v303 = *(_DWORD *)(v302 + 88) == 0;
                              if ( !(unsigned __int8)HvpMarkCellDirty(v302, (unsigned int)*v294) )
                              {
                                v18 = -1073741443;
                                SymbolicLinkTarget = -1073741443;
                                goto LABEL_652;
                              }
                              SymbolicLinkTarget = CmpCreateChild(
                                                     (__int64)v492,
                                                     (__int64)v493,
                                                     (__int64)AccessState,
                                                     v289,
                                                     v485,
                                                     10,
                                                     0,
                                                     1,
                                                     v283);
                              v18 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget < 0 )
                              {
LABEL_652:
                                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v486 + 24) + 2848LL));
                                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v298 + 24) + 2848LL));
                                CmpUnlockKcbStack((__int64)v536);
                                goto LABEL_913;
                              }
                              v281 = v486;
                              v304 = v486;
                              *(_DWORD *)(v486 + 32) = *v294;
                              KeyNodeForKcb = CmpGetKeyNodeForKcb(v304, (__int64)v526, 1);
                              *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v298 + 32);
                              CmpRebuildKcbCacheFromNode(v281, KeyNodeForKcb);
                              (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v281 + 24) + 16LL))(
                                *(_QWORD *)(v281 + 24),
                                v526);
                              if ( v303 )
                                HvResetDirtyData(*(_QWORD *)(v281 + 24));
                              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v281 + 24) + 2848LL));
                              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v298 + 24) + 2848LL));
                              *(_WORD *)(v298 + 4) |= 8u;
                              CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v281);
                              v306 = v485;
                              *(_QWORD *)(v298 + 96) = v281;
                              CmpUnlockHashEntry(*(_QWORD *)(v306 + 48), 0);
                              v483 = 0;
                              *(_DWORD *)(v306 + 32) = 1;
LABEL_657:
                              v307 = AccessState;
LABEL_658:
                              v308 = v470;
LABEL_659:
                              if ( *(_DWORD *)(v306 + 32) == 1 )
                              {
                                *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 58LL);
                                goto LABEL_905;
                              }
                              v309 = Object;
                              v310 = *(_QWORD *)(*((_QWORD *)Object + 1) + 24LL);
                              if ( (*(_DWORD *)(v310 + 144) & 0x100000) != 0
                                && (v307->OriginalDesiredAccess & 0xD0026) != 0 )
                              {
                                v18 = -1073741790;
                                goto LABEL_908;
                              }
                              if ( (*(_DWORD *)(v306 + 24) & 4) != 0 )
                              {
                                *(_QWORD *)&v307->RemainingDesiredAccess = 0LL;
                                if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v308) )
                                  v307->PreviouslyGrantedAccess |= 0x1020019u;
                                if ( SeSinglePrivilegeCheck(SeRestorePrivilege, v308) )
                                  v307->PreviouslyGrantedAccess |= 0x10F0026u;
                                if ( !v307->PreviouslyGrantedAccess )
                                {
                                  v18 = -1073741790;
                                  goto LABEL_908;
                                }
LABEL_905:
                                v414 = Object;
                                Object = 0LL;
                                *v539 = v414;
                                if ( !*(_DWORD *)(v306 + 32) )
                                  *(_DWORD *)(v306 + 32) = 2;
                                v18 = v475 ? 0x40000016 : 0;
LABEL_908:
                                SymbolicLinkTarget = v18;
LABEL_909:
                                if ( v487 )
LABEL_910:
                                  CmpUnlockKcbStack((__int64)v536);
LABEL_913:
                                v415 = (__int64)v493;
                                v416 = 0;
                                v417 = *((_WORD *)v493 + 1);
                                if ( v417 >= 0 )
                                {
                                  v418 = (unsigned __int64 *)(v493 + 1);
                                  do
                                  {
                                    if ( v416 < 2 )
                                      v419 = *v418;
                                    else
                                      v419 = *(_QWORD *)(*(_QWORD *)(v415 + 24) + 8LL * (v416 - 2));
                                    v420 = (*(_DWORD *)(v419 + 4) & 0x80000) != 0;
                                    if ( *(struct _KTHREAD **)(v419 + 48) == KeGetCurrentThread() )
                                      *(_QWORD *)(v419 + 48) = 0LL;
                                    else
                                      _InterlockedDecrement((volatile signed __int32 *)(v419 + 48));
                                    _m_prefetchw((const void *)(v419 + 40));
                                    v421 = *(_QWORD *)(v419 + 40);
                                    v422 = v421 - 16;
                                    if ( (v421 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                                      v422 = 0LL;
                                    if ( (v421 & 2) != 0
                                      || (v423 = *(_QWORD *)(v419 + 40),
                                          v423 != _InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)(v419 + 40),
                                                    v422,
                                                    v421)) )
                                    {
                                      ExfReleasePushLock((_QWORD *)(v419 + 40));
                                    }
                                    KeAbPostRelease(v419 + 40);
                                    if ( (*(_DWORD *)(v419 + 4) & 0x100000) != 0 )
                                      CmpLockTableRemove(v419, *(_DWORD *)(v419 + 60));
                                    if ( v420 && (*(_DWORD *)(v419 + 4) & 0x80000) != 0 )
                                      CmpFreeKeyControlBlock(v419);
                                    v415 = (__int64)v493;
                                    ++v416;
                                    ++v418;
                                  }
                                  while ( v416 <= v417 );
                                  v18 = SymbolicLinkTarget;
                                }
LABEL_933:
                                if ( v476 )
                                {
                                  v424 = (__int64)v492;
                                  v425 = 0;
                                  v426 = *((_WORD *)v492 + 1);
                                  if ( v426 >= 0 )
                                  {
                                    v427 = v492 + 1;
                                    do
                                    {
                                      if ( v425 < 2 )
                                        v428 = *v427;
                                      else
                                        v428 = *(_QWORD *)(*(_QWORD *)(v424 + 24) + 8LL * (v425 - 2));
                                      v429 = (*(_DWORD *)(v428 + 4) & 0x80000) != 0;
                                      if ( *(struct _KTHREAD **)(v428 + 48) == KeGetCurrentThread() )
                                        *(_QWORD *)(v428 + 48) = 0LL;
                                      else
                                        _InterlockedDecrement((volatile signed __int32 *)(v428 + 48));
                                      _m_prefetchw((const void *)(v428 + 40));
                                      v430 = *(_QWORD *)(v428 + 40);
                                      v431 = v430 - 16;
                                      if ( (v430 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                                        v431 = 0LL;
                                      if ( (v430 & 2) != 0
                                        || (v432 = *(_QWORD *)(v428 + 40),
                                            v432 != _InterlockedCompareExchange64(
                                                      (volatile signed __int64 *)(v428 + 40),
                                                      v431,
                                                      v430)) )
                                      {
                                        ExfReleasePushLock((_QWORD *)(v428 + 40));
                                      }
                                      KeAbPostRelease(v428 + 40);
                                      if ( (*(_DWORD *)(v428 + 4) & 0x100000) != 0 )
                                        CmpLockTableRemove(v428, *(_DWORD *)(v428 + 60));
                                      if ( v429 && (*(_DWORD *)(v428 + 4) & 0x80000) != 0 )
                                        CmpFreeKeyControlBlock(v428);
                                      v424 = (__int64)v492;
                                      ++v425;
                                      ++v427;
                                    }
                                    while ( v425 <= v426 );
                                    v18 = SymbolicLinkTarget;
                                  }
                                }
LABEL_954:
                                if ( (_BYTE)v472 )
                                {
LABEL_955:
                                  v433 = *(_QWORD *)(v489 + 8);
                                  v434 = (*(_DWORD *)(v433 + 4) & 0x80000) != 0;
                                  if ( *(struct _KTHREAD **)(v433 + 48) == KeGetCurrentThread() )
                                    *(_QWORD *)(v433 + 48) = 0LL;
                                  else
                                    _InterlockedDecrement((volatile signed __int32 *)(v433 + 48));
                                  _m_prefetchw((const void *)(v433 + 40));
                                  v435 = *(_QWORD *)(v433 + 40);
                                  v436 = v435 - 16;
                                  if ( (v435 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                                    v436 = 0LL;
                                  if ( (v435 & 2) != 0
                                    || (v437 = *(_QWORD *)(v433 + 40),
                                        v437 != _InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)(v433 + 40),
                                                  v436,
                                                  v435)) )
                                  {
                                    ExfReleasePushLock((_QWORD *)(v433 + 40));
                                  }
                                  KeAbPostRelease(v433 + 40);
                                  if ( (*(_DWORD *)(v433 + 4) & 0x100000) != 0 )
                                    CmpLockTableRemove(v433, *(_DWORD *)(v433 + 60));
                                  if ( v434 && (*(_DWORD *)(v433 + 4) & 0x80000) != 0 )
                                    CmpFreeKeyControlBlock(v433);
                                  v18 = SymbolicLinkTarget;
                                }
                                if ( v483 )
                                  CmpUnlockHashEntry(*(_QWORD *)(v485 + 48), 0);
                                goto LABEL_569;
                              }
                              if ( !v307->OriginalDesiredAccess && (*(_DWORD *)v306 & 0x1000) != 0 )
                                goto LABEL_905;
                              v382 = Object;
                              v383 = 0LL;
                              v384 = *((_QWORD *)Object + 1);
                              v515 = 4294901760LL;
                              v385 = *((_DWORD *)Object + 12);
                              v516 = 0LL;
                              v517 = 0LL;
                              v518 = 0LL;
                              v524 = 0LL;
                              if ( (v385 & 9) != 0 )
                                goto LABEL_892;
                              v386 = v491;
                              if ( !v491 )
                                goto LABEL_869;
                              v387 = CmListGetNextElement((_QWORD *)(v384 + 200), &v524, 32);
                              if ( !v387 )
                                goto LABEL_869;
                              while ( 1 )
                              {
                                v389 = *((_DWORD *)v387 + 17);
                                if ( v389 == 2 || v389 == 11 )
                                  break;
                                v387 = CmListGetNextElement((_QWORD *)(v388 + 200), &v524, 32);
                                if ( !v387 )
                                  goto LABEL_869;
                              }
                              if ( CmEqualTrans(*((_QWORD *)v387 + 7), v386) )
                              {
LABEL_892:
                                v498 = -1073741444;
LABEL_893:
                                v407 = 0;
                              }
                              else
                              {
LABEL_869:
                                v390 = v309[1];
                                v391 = 0LL;
                                v392 = *(_WORD *)(v390 + 58);
                                if ( v392 >= 2 && v392 != 1 )
                                {
                                  v393 = 8LL * (unsigned int)(v392 - 1);
                                  v394 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                                    v310,
                                                                    v393,
                                                                    0x35364D43u);
                                  v391 = v394;
                                  if ( !v394 )
                                  {
                                    v281 = v486;
                                    v498 = -1073741670;
                                    goto LABEL_893;
                                  }
                                  memset(v394, 0, v393);
                                }
                                v395 = *(_WORD *)(v390 + 58);
                                LOWORD(v515) = v392;
                                v518 = v391;
                                WORD1(v515) = v395;
                                if ( v395 )
                                {
                                  for ( j = *(_QWORD *)(v390 + 184); j; v395 = v398 - 1 )
                                  {
                                    CmpSetKcbAtLayerHeight(&v515, v395, *(_QWORD *)(j + 16));
                                    j = *(_QWORD *)(v397 + 24);
                                  }
                                }
                                else
                                {
                                  v516 = v390;
                                }
                                v498 = 0;
                                SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStackEx();
                                v400 = KeGetCurrentThread();
                                v401 = (void *)SecurityDescriptorForKcbStack;
                                v402 = AccessState;
                                --v400->KernelApcDisable;
                                ExAcquireResourceSharedLite(
                                  *((PERESOURCE *)v402->SubjectSecurityContext.PrimaryToken + 6),
                                  1u);
                                if ( v402->SubjectSecurityContext.ClientToken )
                                {
                                  v403 = KeGetCurrentThread();
                                  --v403->KernelApcDisable;
                                  ExAcquireResourceSharedLite(
                                    *((PERESOURCE *)v402->SubjectSecurityContext.ClientToken + 6),
                                    1u);
                                }
                                RemainingDesiredAccess = v402->RemainingDesiredAccess;
                                AccessStatus = &v498;
                                v513 = 0;
                                GrantedAccess = &v513;
                                AccessMode[0] = v470;
                                GenericMapping = (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76);
                                *(_QWORD *)ObjectCreated = &v525;
                                PreviouslyGrantedAccess[0] = v402->PreviouslyGrantedAccess;
                                v525 = 0LL;
                                v405 = SeAccessCheck(
                                         v401,
                                         &v402->SubjectSecurityContext,
                                         1u,
                                         RemainingDesiredAccess,
                                         PreviouslyGrantedAccess[0],
                                         &v525,
                                         (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                                         v470,
                                         &v513,
                                         &v498);
                                v406 = v525;
                                v407 = v405;
                                if ( v525 )
                                {
                                  SeAppendPrivileges(v402, v525);
                                  MiDeleteSubsection(v406);
                                }
                                if ( v407 )
                                {
                                  v408 = v513;
                                  v402->PreviouslyGrantedAccess |= v513;
                                  v402->RemainingDesiredAccess &= ~(v408 | 0x2000000);
                                }
                                v382[24] |= 2u;
                                if ( v491 )
                                {
                                  AccessStatus = (PNTSTATUS)&v402->GenerateOnClose;
                                  GrantedAccess = (PACCESS_MASK)(v491 + 88);
                                  AccessMode[0] = v470;
                                  goto LABEL_888;
                                }
                                if ( v470 )
                                {
                                  AccessStatus = (PNTSTATUS)&v402->GenerateOnClose;
                                  GrantedAccess = 0LL;
                                  AccessMode[0] = v470;
LABEL_888:
                                  SeOpenObjectAuditAlarmWithTransaction(
                                    (PUNICODE_STRING)CmKeyObjectType + 1,
                                    Object,
                                    0LL,
                                    v401,
                                    v402,
                                    0,
                                    v407,
                                    AccessMode[0],
                                    (GUID *)GrantedAccess,
                                    (PBOOLEAN)AccessStatus);
                                }
                                v382[24] &= ~2u;
                                ExReleaseResourceLite(*((PERESOURCE *)v402->SubjectSecurityContext.PrimaryToken + 6));
                                KeLeaveCriticalRegion();
                                ClientToken = (PERESOURCE *)v402->SubjectSecurityContext.ClientToken;
                                if ( ClientToken )
                                {
                                  ExReleaseResourceLite(ClientToken[6]);
                                  KeLeaveCriticalRegion();
                                }
                                v383 = v518;
                                v281 = v486;
                              }
                              if ( v383 )
                                MiDeleteSubsection(v383);
                              v306 = v485;
                              if ( v407 )
                                goto LABEL_905;
                              v410 = AccessState;
                              SymbolicLinkTarget = CmpVEPerformOpenAccessCheck(Object, v485, v498);
                              if ( SymbolicLinkTarget >= 0 )
                                goto LABEL_905;
                              if ( KeGetCurrentThread()->PreviousMode == 1 )
                              {
                                SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                                if ( SessionId != RtlGetCurrentServiceSessionId()
                                  && (v410->RemainingDesiredAccess & 0xD0026) != 0
                                  && (unsigned __int8)CmpCheckKeyOwnerForPca(v493, v491) )
                                {
                                  v413 = *(_QWORD *)(v281 + 64);
                                  v479 = 1;
                                  P = (PVOID)CmpConstructName(v413, v412);
                                }
                              }
                              v18 = SymbolicLinkTarget;
                              goto LABEL_909;
                            }
                          }
LABEL_911:
                          v18 = -1073741772;
                          goto LABEL_912;
                        }
                        if ( (*(_DWORD *)v485 & 0x20) != 0 )
                        {
                          CmpUnlockKcbStack(v273);
                          v311 = (__int64)v492;
                          CmpUnlockKcbStack((__int64)v492);
                          CmpLockKcbStackTopExclusiveRestShared(v311);
                          CmpLockKcbStackTopExclusiveRestShared(v273);
                          if ( CmpIsKeyStackDeleted(v311, v283) || (*(_BYTE *)(*(_QWORD *)(v281 + 64) + 178LL) & 2) != 0 )
                            goto LABEL_911;
                          v312 = CmpGetComponentNameAtIndex((__int64)v544, v282);
                          v306 = v485;
                          v313 = v312;
                          if ( CmpCheckCreateAccessOnKcbStack(
                                 *(unsigned int *)(v485 + 24),
                                 v311,
                                 (__int64)AccessState,
                                 v470,
                                 16 * (*(_DWORD *)(v485 + 24) & 2),
                                 (*(_DWORD *)(v485 + 24) & 4) != 0,
                                 v283,
                                 &SymbolicLinkTarget) )
                          {
                            CmpCleanUpKcbValueCache(v281);
                            *(_WORD *)(v281 + 178) |= 0x40u;
                            v314 = v470;
                            *(_DWORD *)(v281 + 88) = *(_DWORD *)(v306 + 56);
                            SymbolicLinkTarget = CmpCreateKeyBody(
                                                   v281,
                                                   v314,
                                                   v306,
                                                   v283,
                                                   1,
                                                   (__int64)&Object,
                                                   (__int64)&v475);
                            v18 = SymbolicLinkTarget;
                            if ( SymbolicLinkTarget < 0 )
                              goto LABEL_913;
                            if ( !CmpIsKeyStackDeleted(v273, v283) )
                              goto LABEL_657;
                            v315 = 64;
                            goto LABEL_670;
                          }
LABEL_814:
                          v18 = SymbolicLinkTarget;
                          goto LABEL_913;
                        }
                        v523 = 0LL;
                        v317 = v275;
                        if ( v275 >= 0 )
                        {
                          while ( 1 )
                          {
                            if ( v317 < 2 )
                              v318 = *(_QWORD *)(v273 + 8LL * v317 + 8);
                            else
                              v318 = *(_QWORD *)(*(_QWORD *)(v273 + 24) + 8LL * (v317 - 2));
                            if ( *(_WORD *)(v318 + 58) && *(_BYTE *)(v318 + 57) == 1 )
                              goto LABEL_680;
                            if ( *(_DWORD *)(v318 + 32) != -1 )
                              break;
                            if ( --v317 < 0 )
                              goto LABEL_680;
                          }
                          if ( !v283 )
                            goto LABEL_689;
                          v319 = CmpGetKcbAtLayerHeight(v273, 0);
                          v320 = CmListGetNextElement((_QWORD *)(v319 + 200), &v523, 32);
                          if ( !v320 )
                            goto LABEL_689;
                          do
                          {
                            v322 = *((_DWORD *)v320 + 17);
                            if ( v322 == 2 || v322 == 11 )
                            {
                              if ( !CmEqualTrans(*((_QWORD *)v320 + 7), v283) )
                                break;
                              goto LABEL_680;
                            }
                            v320 = CmListGetNextElement(v321, &v523, 32);
                          }
                          while ( v320 );
LABEL_689:
                          while ( 1 )
                          {
                            v323 = v275 < 2
                                 ? *(_QWORD *)(v273 + 8LL * v275 + 8)
                                 : *(_QWORD *)(*(_QWORD *)(v273 + 24) + 8LL * (v275 - 2));
                            if ( *(_DWORD *)(v323 + 32) != -1 )
                              break;
                            if ( --v275 < 0 )
                            {
                              v324 = v284;
                              goto LABEL_695;
                            }
                          }
                          v324 = v284;
                          if ( (*(_BYTE *)(v323 + 178) & 0x10) != 0 && (*(_DWORD *)v284 & 0x200) == 0 )
                          {
                            if ( (*(_DWORD *)(v284 + 24) & 2) != 0 )
                            {
                              v18 = -1073741771;
                              goto LABEL_912;
                            }
                            if ( v476 )
                            {
                              CmpUnlockKcbStack((__int64)v492);
                              v476 = 0;
                            }
                            if ( (_BYTE)v472 )
                            {
                              CmpUnlockKcb(*(char **)(v489 + 8));
                              LOBYTE(v472) = 0;
                            }
                            if ( v471 )
                            {
                              CmpUnlockHashEntryByKcb(v281);
                              v471 = 0;
                            }
                            SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                                   v273,
                                                   (__int64)v544,
                                                   0,
                                                   0,
                                                   v283,
                                                   (__int64)String2,
                                                   (ULONG_PTR *)(v284 + 96));
                            v18 = SymbolicLinkTarget;
                            if ( SymbolicLinkTarget >= 0 )
                            {
                              *(_DWORD *)v324 &= ~8u;
                              if ( !*(_QWORD *)(v324 + 64) )
                              {
                                v325 = *(_QWORD *)(v281 + 24);
                                if ( (*(_DWORD *)(v325 + 5360) & 1) != 0 )
                                  *(_QWORD *)(v324 + 64) = v325;
                              }
                              v18 = 260;
                              SymbolicLinkTarget = 260;
                            }
                            goto LABEL_933;
                          }
LABEL_695:
                          if ( v482 )
                            goto LABEL_696;
                          if ( (*(_BYTE *)(v281 + 178) & 2) != 0 )
                            goto LABEL_911;
                          if ( (*(_DWORD *)(v324 + 24) & 2) != 0 )
                          {
                            v18 = -1073741771;
                            goto LABEL_912;
                          }
                          SymbolicLinkTarget = CmpVEExecuteOpenLogic(v281, (_DWORD *)v324, 0, (__int64)String2);
                          v18 = SymbolicLinkTarget;
                          if ( SymbolicLinkTarget != -1073741199 )
                            goto LABEL_913;
                          v326 = *(_DWORD *)v281;
                          v327 = 0LL;
                          v506.m128i_i64[0] = 0LL;
                          v328 = 0LL;
                          v329 = v326 + 1;
                          if ( v326 == -1 )
                          {
LABEL_720:
                            v18 = -1073741670;
                            goto LABEL_912;
                          }
                          while ( 1 )
                          {
                            if ( v329 == 1 )
                              KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
                            v330 = v326;
                            v326 = _InterlockedCompareExchange((volatile signed __int32 *)v281, v329, v326);
                            if ( v330 == v326 )
                              break;
                            v329 = v326 + 1;
                            if ( v326 == -1 )
                              goto LABEL_720;
                          }
                          if ( v491 )
                          {
                            if ( *(_QWORD *)(v491 + 56) )
                            {
                              v327 = *(_QWORD *)(v491 + 56);
                              v18 = CmpTransReferenceTransaction(v327);
                              if ( v18 < 0 )
                                goto LABEL_734;
                            }
                            else
                            {
                              v506.m128i_i64[0] = v491 + 88;
                            }
                          }
                          CurrentPrcb = KeGetCurrentPrcb();
                          v332 = CmKeyObjectType;
                          v499 = 1;
                          v333 = CurrentPrcb->PPLookasideList[4].P;
                          ++v333->TotalAllocates;
                          v334 = RtlpInterlockedPopEntrySList(&v333->ListHead);
                          if ( !v334 )
                          {
                            ++v333->AllocateMisses;
                            L = CurrentPrcb->PPLookasideList[4].L;
                            ++L->TotalAllocates;
                            v334 = RtlpInterlockedPopEntrySList(&L->ListHead);
                            if ( !v334 )
                            {
                              Size = L->Size;
                              Tag = L->Tag;
                              Type = (unsigned int)L->Type;
                              ++L->AllocateMisses;
                              v334 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(
                                                     Type,
                                                     Size,
                                                     Tag);
                              if ( !v334 )
                              {
                                v18 = -1073741670;
                                goto LABEL_730;
                              }
                            }
                          }
                          v340 = v470;
                          Number = CurrentPrcb->Number;
                          v342 = v470;
                          v343 = v470;
                          *(_DWORD *)ObjectCreated = 0;
                          LODWORD(v334->Next) = Number;
                          v344 = ObpCaptureObjectCreateInformation(
                                   v343,
                                   v342,
                                   0LL,
                                   &v542,
                                   (__int64)v334,
                                   *(unsigned int *)ObjectCreated);
                          if ( v344 < 0 )
                          {
                            v345 = KeGetCurrentPrcb();
                            v346 = v345->PPLookasideList[4].P;
                            ++v346->TotalFrees;
                            if ( LOWORD(v346->ListHead.Alignment) >= v346->Depth )
                            {
                              ++v346->FreeMisses;
                              v346 = v345->PPLookasideList[4].L;
                              goto LABEL_740;
                            }
                            goto LABEL_742;
                          }
                          if ( ((__int64)v334->Next & (_DWORD)v332[9]) != 0 )
                          {
                            v344 = -1073741811;
                            goto LABEL_749;
                          }
                          if ( ((__int64)v334->Next & 0x10) != 0
                            && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, v340) )
                          {
                            v344 = -1073741727;
                            goto LABEL_749;
                          }
                          v347 = *((_DWORD *)v332 + 27);
                          HIDWORD(v334[1].Next) = *((_DWORD *)v332 + 26);
                          *((_DWORD *)&v334[1].Next + 2) = v347;
                          v344 = ObpAllocateObject(v334, v340, (__int64)v332, &v542, 88, &v538, &v499);
                          if ( v344 >= 0 )
                          {
                            v350 = v538;
                            if ( ObpTraceFlags )
                            {
                              ObpRegisterObject(v538);
                              ObpPushStackInfo(v350, 1, 1u, 1953261124);
                            }
                            v328 = (unsigned __int64 *)(v350 + 48);
                          }
                          else
                          {
LABEL_749:
                            if ( *((_QWORD *)&v542 + 1) )
                              ObpFreeObjectNameBuffer((__int64)&v542);
                            Next = v334[2].Next;
                            if ( Next )
                            {
                              SeReleaseSecurityDescriptor(Next, (char)v334[1].Next, 1);
                              v334[2].Next = 0LL;
                            }
                            v349 = KeGetCurrentPrcb();
                            v346 = v349->PPLookasideList[4].P;
                            ++v346->TotalFrees;
                            if ( LOWORD(v346->ListHead.Alignment) < v346->Depth )
                              goto LABEL_742;
                            ++v346->FreeMisses;
                            v346 = v349->PPLookasideList[4].L;
LABEL_740:
                            ++v346->TotalFrees;
                            if ( LOWORD(v346->ListHead.Alignment) < v346->Depth )
                            {
LABEL_742:
                              RtlpInterlockedPushEntrySList(&v346->ListHead, v334);
                            }
                            else
                            {
                              ++v346->FreeMisses;
                              ((void (__fastcall *)(PSLIST_ENTRY))v346->FreeEx)(v334);
                            }
                          }
                          v18 = v344;
                          if ( v344 < 0 )
                          {
LABEL_730:
                            v281 = v486;
                            v339 = 1;
                          }
                          else
                          {
                            memset(v328, 0, 0x58uLL);
                            v351 = v485;
                            v281 = v486;
                            *((_WORD *)v328 + 25) = *(_WORD *)(v485 + 20);
                            v328[1] = v281;
                            v328[3] = PsGetCurrentThreadProcessId();
                            *((_WORD *)v328 + 2) = 0;
                            if ( (*(_BYTE *)(v281 + 178) & 0x40) != 0 )
                            {
                              v352 = *(int *)(v281 + 88);
                              *(_DWORD *)v328 = v352;
                              *(_QWORD *)(v351 + 56) = v352;
                            }
                            else
                            {
                              *(_DWORD *)v328 = 1803104306;
                            }
                            if ( v491 )
                            {
                              v353 = v506.m128i_i64[0];
                              v328[7] = v327;
                              v327 = 0LL;
                              v328[8] = v353;
                            }
                            v328[10] = (unsigned __int64)(v328 + 9);
                            v328[9] = (unsigned __int64)(v328 + 9);
                            if ( (*(_BYTE *)(v281 + 178) & 0x40) == 0 )
                            {
                              v354 = (__int64 *)(v328 + 4);
                              v355 = 0;
                              v328[5] = (unsigned __int64)(v328 + 4);
                              v328[4] = (unsigned __int64)(v328 + 4);
                              while ( _InterlockedCompareExchange64(
                                        (volatile signed __int64 *)(v328[1] + 8LL * v355 + 128),
                                        (signed __int64)v328,
                                        0LL) )
                              {
                                if ( ++v355 >= 4 )
                                {
                                  v356 = v328[1];
                                  v357 = (*(_DWORD *)(v356 + 4) & 0x80000) != 0;
                                  if ( *(struct _KTHREAD **)(v356 + 48) == KeGetCurrentThread() )
                                    *(_QWORD *)(v356 + 48) = 0LL;
                                  else
                                    _InterlockedDecrement((volatile signed __int32 *)(v356 + 48));
                                  _m_prefetchw((const void *)(v356 + 40));
                                  v358 = *(_QWORD *)(v356 + 40);
                                  v359 = v358 - 16;
                                  if ( (v358 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                                    v359 = 0LL;
                                  if ( (v358 & 2) != 0
                                    || (v360 = *(_QWORD *)(v356 + 40),
                                        v360 != _InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)(v356 + 40),
                                                  v359,
                                                  v358)) )
                                  {
                                    ExfReleasePushLock((_QWORD *)(v356 + 40));
                                  }
                                  KeAbPostRelease(v356 + 40);
                                  if ( (*(_DWORD *)(v356 + 4) & 0x100000) != 0 )
                                    CmpLockTableRemove(v356, *(_DWORD *)(v356 + 60));
                                  if ( v357 && (*(_DWORD *)(v356 + 4) & 0x80000) != 0 )
                                    CmpFreeKeyControlBlock(v356);
                                  v361 = v328[1];
                                  if ( (*(_DWORD *)(v361 + 4) & 0x100000) != 0 )
                                    *(_DWORD *)(v361 + 60) = CmpLockTableAdd(v328[1], 1);
                                  v362 = (_BYTE *)KeAbPreAcquire(v361 + 40, 0LL, 0);
                                  v363 = v362;
                                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v361 + 40), 0LL) )
                                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v361 + 40), v362, v361 + 40);
                                  if ( v363 )
                                    v363[26] |= 1u;
                                  *(_QWORD *)(v361 + 48) = KeGetCurrentThread();
                                  v364 = v328[1] + 112;
                                  v365 = *(__int64 ***)(v328[1] + 120);
                                  if ( *v365 != (__int64 *)v364 )
                                    __fastfail(3u);
                                  *v354 = v364;
                                  v328[5] = (unsigned __int64)v365;
                                  *v365 = v354;
                                  *(_QWORD *)(v364 + 8) = v354;
                                  break;
                                }
                              }
                            }
                            v366 = *(_BYTE *)(v281 + 178);
                            v18 = 0;
                            Object = v328;
                            v339 = 0;
                            v475 = (v366 & 0x40) != 0;
                          }
                          if ( v327 )
                            CmpTransDereferenceTransaction(v327);
                          if ( v339 )
LABEL_734:
                            CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v281);
                          SymbolicLinkTarget = v18;
                          if ( v18 < 0 )
                            goto LABEL_913;
                          v306 = v485;
                          goto LABEL_657;
                        }
LABEL_680:
                        if ( v482 )
                        {
                          v18 = -1073741811;
                          goto LABEL_912;
                        }
                        v367 = (__int64)v492;
                        if ( CmpIsKeyStackDeleted((__int64)v492, v283)
                          || !(unsigned __int8)CmRmIsKcbStackVisible(v367, v283)
                          || (*(_BYTE *)(*(_QWORD *)(v281 + 64) + 178LL) & 2) != 0 )
                        {
                          goto LABEL_911;
                        }
                        v306 = v485;
                        if ( (*(_DWORD *)v485 & 1) == 0 )
                        {
                          if ( CmpLoadingSystemHivesActive )
                          {
                            if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                              && *(_QWORD *)(v281 + 24) == CmpMasterHive
                              && (*(_DWORD *)(v281 + 4) & 0x7FE00000) == 0x600000 )
                            {
                              v368 = CmpGetComponentNameAtIndex((__int64)v544, v282);
                              if ( (unsigned __int8)CmpWaitForHiveMount(v368, v369, v370, v306 + 144) )
                              {
                                *(_DWORD *)v306 |= 0x100u;
                                v18 = 259;
                                goto LABEL_912;
                              }
                            }
                          }
                          goto LABEL_911;
                        }
                        if ( *(_QWORD *)(v281 + 24) == CmpMasterHive && CmpNoMasterCreates )
                        {
                          if ( CmpLoadingSystemHivesActive
                            && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
                            && (*(_DWORD *)(v281 + 4) & 0x7FE00000) == 0x600000
                            && (v371 = CmpGetComponentNameAtIndex((__int64)v544, v282),
                                (unsigned __int8)CmpWaitForHiveMount(v371, v372, v373, v306 + 144)) )
                          {
                            *(_DWORD *)v306 |= 0x100u;
                            v18 = 259;
                          }
                          else
                          {
LABEL_696:
                            v18 = -1073741811;
                          }
LABEL_912:
                          SymbolicLinkTarget = v18;
                          goto LABEL_913;
                        }
                        v313 = CmpGetComponentNameAtIndex((__int64)v544, v282);
                        if ( *(_DWORD *)(v374 + 32) == -1 )
                        {
                          if ( !CmpCheckCreateAccessOnKcbStack(
                                  *(unsigned int *)(v306 + 24),
                                  v367,
                                  (__int64)AccessState,
                                  v470,
                                  16 * (*(_DWORD *)(v306 + 24) & 2),
                                  (*(_DWORD *)(v306 + 24) & 4) != 0,
                                  v283,
                                  &SymbolicLinkTarget) )
                          {
LABEL_810:
                            if ( KeGetCurrentThread()->PreviousMode == 1 )
                            {
                              v375 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                              if ( v375 != RtlGetCurrentServiceSessionId() )
                              {
                                if ( (unsigned __int8)CmpCheckKeyOwnerForPca(v367, v491) )
                                {
                                  v377 = *(_QWORD *)(v281 + 64);
                                  v479 = 1;
                                  P = (PVOID)CmpConstructName(v377, v376);
                                }
                              }
                            }
                            goto LABEL_814;
                          }
                          CmpUnlockKcbStack(v273);
                          CmpUnlockKcbStack(v367);
                          if ( (_BYTE)v472 )
                          {
                            CmpUnlockKcb(*(char **)(v489 + 8));
                            LOBYTE(v472) = 0;
                          }
                          SymbolicLinkTarget = CmpPromoteKey(v367, 0, 1);
                          v18 = SymbolicLinkTarget;
                          if ( SymbolicLinkTarget < 0 )
                          {
                            if ( SymbolicLinkTarget == -1073741444 )
                            {
                              v18 = -1073741772;
                              SymbolicLinkTarget = -1073741772;
                            }
                            goto LABEL_933;
                          }
                          v476 = 1;
                          CmpLockKcbStackTopExclusiveRestShared(v273);
                          v367 = (__int64)v492;
                        }
                        else
                        {
                          CmpUnlockKcbStack(v273);
                          CmpUnlockKcbStack(v367);
                          CmpLockKcbStackTopExclusiveRestShared(v367);
                          v476 = 1;
                          CmpLockKcbStackTopExclusiveRestShared(v273);
                        }
                        if ( !(unsigned __int8)CmRmIsKcbStackVisible(v273, v283) )
                          goto LABEL_911;
                        if ( !CmpIsKeyStackDeleted(v273, v283) )
                        {
                          if ( CmpIsKeyStackSymlink(v273) && (*(_DWORD *)v306 & 0x200) == 0 )
                          {
                            if ( (*(_DWORD *)(v306 + 24) & 2) != 0 )
                            {
                              v18 = -1073741771;
                              goto LABEL_912;
                            }
                            CmpUnlockKcbStack(v367);
                            if ( (_BYTE)v472 )
                            {
                              CmpUnlockKcb(*(char **)(v489 + 8));
                              LOBYTE(v472) = 0;
                            }
                            if ( v471 )
                            {
                              CmpUnlockHashEntryByKcb(v281);
                              v471 = 0;
                            }
                            SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                                   v273,
                                                   (__int64)v544,
                                                   0,
                                                   0,
                                                   v283,
                                                   (__int64)String2,
                                                   (ULONG_PTR *)(v306 + 96));
                            v18 = SymbolicLinkTarget;
                            if ( SymbolicLinkTarget >= 0 )
                            {
                              *(_DWORD *)v306 &= ~8u;
                              if ( !*(_QWORD *)(v306 + 64) )
                              {
                                v380 = *(_QWORD *)(v281 + 24);
                                if ( (*(_DWORD *)(v380 + 5360) & 1) != 0 )
                                  *(_QWORD *)(v306 + 64) = v380;
                              }
                              v18 = 260;
                              SymbolicLinkTarget = 260;
                            }
                            goto LABEL_954;
                          }
                          if ( (*(_BYTE *)(v281 + 178) & 2) == 0 )
                          {
                            if ( (*(_DWORD *)(v306 + 24) & 2) != 0 )
                            {
                              v18 = -1073741771;
                              goto LABEL_912;
                            }
                            SymbolicLinkTarget = CmpVEExecuteOpenLogic(v281, (_DWORD *)v306, 1, (__int64)String2);
                            v18 = SymbolicLinkTarget;
                            if ( SymbolicLinkTarget == -1073741199 )
                            {
                              v381 = v283;
                              v308 = v470;
                              SymbolicLinkTarget = CmpCreateKeyBody(
                                                     v281,
                                                     v470,
                                                     v306,
                                                     v381,
                                                     1,
                                                     (__int64)&Object,
                                                     (__int64)&v475);
                              v18 = SymbolicLinkTarget;
                              if ( SymbolicLinkTarget >= 0 )
                              {
                                v307 = AccessState;
                                goto LABEL_659;
                              }
                            }
                            goto LABEL_913;
                          }
                          goto LABEL_911;
                        }
                        if ( CmpIsKeyStackDeleted(v367, v283) )
                          goto LABEL_911;
                        if ( !(unsigned __int8)CmRmIsKcbStackVisible(v367, v283) )
                          goto LABEL_911;
                        v378 = *(_BYTE **)(v281 + 64);
                        if ( (v378[178] & 2) != 0 )
                          goto LABEL_911;
                        Logic = CmpVEExecuteCreateLogic(
                                  v378,
                                  (PVOID)v281,
                                  16 * (*(_BYTE *)(v306 + 24) & 2u),
                                  v283,
                                  v306,
                                  (__int64)String2);
                        SymbolicLinkTarget = Logic;
                        v18 = Logic;
                        if ( Logic == -1073741739 )
                        {
                          *(_DWORD *)v306 |= 0x400u;
                          v18 = -1073741267;
                          goto LABEL_912;
                        }
                        if ( Logic != -1073741199 )
                          goto LABEL_913;
                        v367 = (__int64)v492;
                        if ( CmpCheckCreateAccessOnKcbStack(
                               16 * (*(_DWORD *)(v306 + 24) & 2u),
                               (__int64)v492,
                               (__int64)AccessState,
                               v470,
                               16 * (*(_DWORD *)(v306 + 24) & 2),
                               (*(_DWORD *)(v306 + 24) & 4) != 0,
                               v283,
                               &SymbolicLinkTarget) )
                        {
                          SymbolicLinkTarget = CmpCreateKeyBody(
                                                 v281,
                                                 v470,
                                                 v306,
                                                 v283,
                                                 1,
                                                 (__int64)&Object,
                                                 (__int64)&v475);
                          v18 = SymbolicLinkTarget;
                          if ( SymbolicLinkTarget < 0 )
                            goto LABEL_913;
                          v315 = 8 * (*(_BYTE *)(v306 + 24) & 2);
LABEL_670:
                          v316 = (const UNICODE_STRING *)v313;
                          v307 = AccessState;
                          SymbolicLinkTarget = CmpCreateChild(
                                                 (__int64)v492,
                                                 v273,
                                                 (__int64)AccessState,
                                                 v316,
                                                 v306,
                                                 v315,
                                                 0,
                                                 0,
                                                 v283);
                          v18 = SymbolicLinkTarget;
                          if ( SymbolicLinkTarget >= 0 )
                          {
                            *(_DWORD *)(v306 + 32) = 1;
                            goto LABEL_658;
                          }
                          goto LABEL_913;
                        }
                        goto LABEL_810;
                      }
                      if ( !v15 && !v511 || !*(_WORD *)(v68 + 58) )
                      {
                        v201 = v511;
                        goto LABEL_451;
                      }
                      CmpLogUnsupportedOperation(8LL);
                      if ( PsIsCurrentThreadInServerSilo() )
                      {
                        v15 = 0LL;
                        v201 = 0LL;
                        goto LABEL_451;
                      }
                      v18 = -1072103419;
                      SymbolicLinkTarget = -1072103419;
LABEL_569:
                      v12 = v486;
                      if ( v471 )
                        CmpUnlockHashEntryByKcb(v486);
LABEL_571:
                      if ( v477 )
                        CmpUnlockHashEntryByKcb((__int64)v501);
                      if ( Object )
                        ObDereferenceObjectDeferDelete(Object);
                      goto LABEL_575;
                    }
LABEL_426:
                    _m_prefetchw(&CmpHiveListHeadLock);
                    v197 = CmpHiveListHeadLock - 16;
                    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                      v197 = 0LL;
                    if ( (CmpHiveListHeadLock & 2) != 0
                      || (v198 = CmpHiveListHeadLock,
                          v198 != _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&CmpHiveListHeadLock,
                                    v197,
                                    CmpHiveListHeadLock)) )
                    {
                      ExfReleasePushLock(&CmpHiveListHeadLock);
                    }
                    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
                  }
                  v18 = -1073741790;
                  SymbolicLinkTarget = -1073741790;
                  goto LABEL_569;
                }
                v98 = v519;
              }
              else
              {
                v541 = v100 + 26;
                v540[0] = *(_WORD *)(v100 + 24);
                v540[1] = v540[0];
                if ( !(unsigned int)CmpCompareUnicodeString(v90, v540, 2LL) )
                  goto LABEL_211;
              }
            }
          }
          v98 = *(_QWORD *)(v98 + 8);
          v519 = v98;
          if ( !v98 )
            goto LABEL_276;
          v90 = v520;
        }
      }
      v37 = v497.m128i_i16[0];
      v38 = 0LL;
      v39 = (_WORD *)v497.m128i_i64[1];
      v40 = v497.m128i_i16[1];
      do
      {
        if ( (__int16)v38 >= 32 )
          break;
        if ( *v39 == 92 )
        {
          LOWORD(v38) = v38 + 1;
          v41 = v506.m128i_i16[0] - v37;
          v472 = v38;
          v506.m128i_i16[0] = v41;
          v506.m128i_i16[1] = v41;
          if ( (__int16)v38 > 8 && !v36 )
          {
            v18 = CmpExpandPathInfo(v544, v38, 65534LL);
            if ( v18 < 0 )
              goto LABEL_101;
            LOWORD(v38) = v472;
            v474 = 1;
          }
          v42 = v506;
          v43 = (__int16)v38 - 1;
          v494 = v43;
          if ( v43 >= 8 )
            *(__m128i *)(16 * (v43 - 8 + 6LL) + *(_QWORD *)&v544[10]) = v506;
          else
            v544[v43 + 2] = v506;
          v506 = v42;
          v44 = 0;
          if ( v41 )
          {
            v45 = (unsigned __int16)(((unsigned __int16)(v41 - 1) >> 1) + 1);
            v46 = (WCHAR *)v506.m128i_i64[1];
            v502 = (PVOID)v45;
            do
            {
              v47 = *v46;
              if ( *v46 >= 0x61u )
              {
                if ( v47 <= 0x7Au )
                {
                  v47 -= 32;
                }
                else
                {
                  v47 = RtlUpcaseUnicodeChar(v47);
                  v45 = (unsigned __int64)v502;
                }
              }
              ++v46;
              v44 = v47 + 37 * v44;
              v502 = (PVOID)--v45;
            }
            while ( v45 );
            v43 = v494;
          }
          if ( v43 >= 8 )
            *(_DWORD *)(*(_QWORD *)&v544[10] + 4LL * (v43 - 8)) = v44;
          else
            *((_DWORD *)v544 + v43) = v44;
          if ( v37 )
          {
            do
            {
              if ( *v39 != 92 )
                break;
              ++v39;
              v40 -= 2;
              v37 -= 2;
            }
            while ( v37 );
            v497.m128i_i16[0] = v37;
            v497.m128i_i64[1] = (__int64)v39;
            v497.m128i_i16[1] = v40;
          }
          v13 = v497;
          v38 = v472;
          v36 = v474;
          v506 = v497;
        }
        else
        {
          ++v39;
          v37 -= 2;
          v40 -= 2;
          v497.m128i_i64[1] = (__int64)v39;
          v497.m128i_i16[1] = v40;
          v497.m128i_i16[0] = v37;
        }
      }
      while ( v37 );
      v12 = 0LL;
      if ( v37 )
      {
LABEL_81:
        v18 = -1073741811;
        SymbolicLinkTarget = -1073741811;
        goto LABEL_571;
      }
      LOWORD(v38) = v38 + 1;
      v472 = v38;
      if ( (__int16)v38 > 8 && !v36 )
      {
        v18 = CmpExpandPathInfo(v544, v38, 65534LL);
        if ( v18 < 0 )
        {
LABEL_101:
          SymbolicLinkTarget = v18;
          v12 = 0LL;
          if ( v18 < 0 )
            goto LABEL_571;
          v33 = v504;
          goto LABEL_103;
        }
        LOWORD(v38) = v472;
      }
      v48 = (unsigned int)((__int16)v38 - 1);
      if ( (unsigned int)v48 >= 8 )
        *(__m128i *)(*(_QWORD *)&v544[10] + 16 * ((unsigned int)((__int16)v38 - 9) + 6LL)) = v13;
      else
        v544[(unsigned int)v48 + 2] = v13;
      v49 = _mm_cvtsi128_si32(v13);
      v50 = 0;
      v497 = v13;
      if ( v49 )
      {
        v51 = (WCHAR *)v497.m128i_i64[1];
        v52 = (unsigned __int16)(((unsigned __int16)(v49 - 1) >> 1) + 1);
        do
        {
          v53 = *v51;
          if ( *v51 >= 0x61u )
          {
            if ( v53 <= 0x7Au )
              v53 -= 32;
            else
              v53 = RtlUpcaseUnicodeChar(v53);
          }
          ++v51;
          v50 = v53 + 37 * v50;
          --v52;
        }
        while ( v52 );
        LOWORD(v38) = v472;
      }
      if ( (unsigned int)v48 >= 8 )
        *(_DWORD *)(*(_QWORD *)&v544[10] + 4LL * (unsigned int)(v48 - 8)) = v50;
      else
        *((_DWORD *)v544 + v48) = v50;
      v478[0] = v38;
      v18 = 0;
      goto LABEL_101;
    }
  }
LABEL_575:
  if ( Privileges )
    MiDeleteSubsection(Privileges);
  if ( v533 )
    MiDeleteSubsection(v533);
  if ( v537 )
    MiDeleteSubsection(v537);
  v261 = *(_QWORD *)&TokenInformation[4];
  if ( *(_QWORD *)&TokenInformation[4] )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v12);
    CmpDereferenceKeyControlBlock(v261);
  }
  else if ( v12 )
  {
    v438 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 <= 1u )
    {
LABEL_975:
      v440 = *(_DWORD *)(v12 + 8);
      v441 = *(_QWORD *)(v12 + 24);
      CmpLockHashEntryExclusiveByKcb(v12);
      if ( (*(_DWORD *)(v12 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v12 + 60) = CmpLockTableAdd(v12, 1);
      v442 = (_BYTE *)KeAbPreAcquire(v12 + 40, 0LL, 0);
      v443 = v442;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v12 + 40), v442, v12 + 40);
      if ( v443 )
        v443[26] |= 1u;
      v444 = 0LL;
      *(_QWORD *)(v12 + 48) = KeGetCurrentThread();
      v445 = *(_QWORD *)(v12 + 184);
      if ( v445 )
      {
        v446 = *(_QWORD *)(v445 + 24);
        if ( v446 )
        {
          v444 = *(char **)(v446 + 16);
          CmpUnlockKcb((char *)v12);
          CmpLockKcbExclusive((__int64)v444);
          CmpLockKcbExclusive(v12);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v12, 0LL);
      v447 = (*(_DWORD *)(v12 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v12 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v12 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 48));
      _m_prefetchw((const void *)(v12 + 40));
      v448 = *(_QWORD *)(v12 + 40);
      v449 = v448 - 16;
      if ( (v448 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v449 = 0LL;
      if ( (v448 & 2) != 0
        || (v450 = *(_QWORD *)(v12 + 40),
            v450 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 40), v449, v448)) )
      {
        ExfReleasePushLock((_QWORD *)(v12 + 40));
      }
      KeAbPostRelease(v12 + 40);
      if ( (*(_DWORD *)(v12 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(v12, *(_DWORD *)(v12 + 60));
      if ( v447 && (*(_DWORD *)(v12 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v12);
      if ( v444 )
        CmpUnlockKcb(v444);
      v451 = (signed __int64 *)(*(_QWORD *)(v441 + 2800)
                              + 24LL
                              * ((((101027 * (v440 ^ (v440 >> 9))) >> 9) ^ (101027 * (v440 ^ (v440 >> 9)))) & (*(_DWORD *)(v441 + 2808) - 1)));
      v451[1] = 0LL;
      _m_prefetchw(v451);
      v452 = *v451;
      if ( (*v451 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v9 = v452 - 16;
      if ( (v452 & 2) != 0 || (v453 = *v451, v453 != _InterlockedCompareExchange64(v451, v9, v452)) )
        ExfReleasePushLock(v451);
      KeAbPostRelease((ULONG_PTR)v451);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v441 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive(v441);
    }
    else
    {
      while ( 1 )
      {
        v439 = v438 - 1;
        v438 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v438 - 1, v438);
        if ( v438 == v439 + 1 )
          break;
        if ( v438 <= 1 )
          goto LABEL_975;
      }
    }
    v18 = SymbolicLinkTarget;
  }
  if ( v501 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v501);
  v454 = v485;
  v455 = *(_DWORD *)(v485 + 104);
  if ( v455 && (v455 & 2) != 0 )
  {
    CmpSearchKeyControlBlockTreeEx(
      (__int64 (__fastcall *)(_QWORD *, ULONG_PTR, __int64))CmpSyncKcbCacheForHive,
      *(_QWORD *)(v485 + 120),
      0LL,
      1);
    *(_DWORD *)(v454 + 104) &= ~2u;
  }
  if ( v473 && !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v456) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v456);
    v18 = SymbolicLinkTarget;
  }
  v457 = P;
  if ( v479 )
  {
    if ( !P )
      goto LABEL_1021;
    if ( (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v457);
  }
  if ( v457 )
    CmpFreeTransientPoolWithTag(v457, 0x624E4D43u);
LABEL_1021:
  v458 = *(_SLIST_ENTRY **)&v544[10];
  if ( *(_QWORD *)&v544[10] )
  {
    v459 = KeGetCurrentPrcb();
    v460 = v459->PPLookasideList[8].P;
    ++v460->TotalFrees;
    if ( LOWORD(v460->ListHead.Alignment) < v460->Depth
      || (++v460->FreeMisses,
          v460 = v459->PPLookasideList[8].L,
          ++v460->TotalFrees,
          LOWORD(v460->ListHead.Alignment) < v460->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v460->ListHead, v458);
    }
    else
    {
      ++v460->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v460->FreeEx)(v458);
    }
    return (unsigned int)SymbolicLinkTarget;
  }
  return (unsigned int)v18;
}
