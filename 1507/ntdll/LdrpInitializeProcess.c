/*
 * XREFs of LdrpInitializeProcess @ 0x1800BEA44
 * Callers:
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180003478 (LdrpLoadWow64.c)
 *     LdrGetProcedureAddress @ 0x180003560 (LdrGetProcedureAddress.c)
 *     TpInitializePackage @ 0x180003584 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x180003610 (RtlCreateTagHeap.c)
 *     LdrpInitParallelLoadingSupport @ 0x18000489C (LdrpInitParallelLoadingSupport.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeHistoryTable @ 0x180011520 (RtlInitializeHistoryTable.c)
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocateModuleEntry @ 0x1800402B4 (LdrpAllocateModuleEntry.c)
 *     LdrpPrepareModuleForExecution @ 0x180040558 (LdrpPrepareModuleForExecution.c)
 *     LdrpInsertDataTableEntry @ 0x180040A6C (LdrpInsertDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800413CC (RtlInsertInvertedFunctionTable.c)
 *     SbObtainTraceHandle @ 0x180043F78 (SbObtainTraceHandle.c)
 *     LdrpInitializeGraphRecurse @ 0x180044D18 (LdrpInitializeGraphRecurse.c)
 *     LdrpCallTlsInitializers @ 0x1800450A4 (LdrpCallTlsInitializers.c)
 *     RtlpInitEnvironmentBlock @ 0x180046728 (RtlpInitEnvironmentBlock.c)
 *     LdrpInitializeTls @ 0x180055594 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180056540 (RtlSetBits.c)
 *     LdrpFreeLoadContextOfNode @ 0x180062030 (LdrpFreeLoadContextOfNode.c)
 *     RtlInitializeSListHead @ 0x1800663A0 (RtlInitializeSListHead.c)
 *     RtlEncodePointer @ 0x180067200 (RtlEncodePointer.c)
 *     RtlAllocateActivationContextStack @ 0x18006CD80 (RtlAllocateActivationContextStack.c)
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 *     RtlpInitCurrentDir @ 0x18006FD88 (RtlpInitCurrentDir.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 *     RtlpInitParameterBlock @ 0x180070FE4 (RtlpInitParameterBlock.c)
 *     LdrQueryImageFileExecutionOptions @ 0x180071180 (LdrQueryImageFileExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x18007146C (RtlQueryApplicationKeyOption.c)
 *     LdrpInsertModuleToIndex @ 0x1800731A4 (LdrpInsertModuleToIndex.c)
 *     LdrpProtectAndRelocateImage @ 0x1800733E4 (LdrpProtectAndRelocateImage.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180074FC8 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrSetDefaultDllDirectories @ 0x180077DA0 (LdrSetDefaultDllDirectories.c)
 *     LdrpCorProcessImports @ 0x1800781A8 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x180078A1C (LdrpCorValidateImage.c)
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpEnableParallelLoading @ 0x18007B59C (LdrpEnableParallelLoading.c)
 *     RtlNormalizeProcessParams @ 0x180080710 (RtlNormalizeProcessParams.c)
 *     LdrpCorFixupImage @ 0x180083A50 (LdrpCorFixupImage.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     ZwOpenDirectoryObject @ 0x180093E80 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180094A80 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180094D40 (NtQuerySymbolicLinkObject.c)
 *     InterlockedPushListSList @ 0x180095610 (InterlockedPushListSList.c)
 *     memset @ 0x180098540 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpCheckAppDirType @ 0x1800BDC24 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800BDE50 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800BEA04 (LdrpInitializeNlsInfo.c)
 *     LdrpCaptureCriticalThunks @ 0x1800C0C48 (LdrpCaptureCriticalThunks.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800CAD74 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlInitializeHeapManager @ 0x1800D8010 (RtlInitializeHeapManager.c)
 *     RtlInitializeExceptionLog @ 0x1800E3F18 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x1800E46B0 (RtlControlStackTraceDataBase.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r12
  __int64 ProcessEnvironmentBlock; // rsi
  _QWORD *v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  _WORD *v11; // rax
  __int16 v12; // r8
  char *v13; // r13
  unsigned int i; // ecx
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  int result; // eax
  char v24; // cl
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // r13d
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // al
  _QWORD *v37; // rcx
  char v38; // al
  unsigned __int64 v39; // r13
  unsigned int v40; // ecx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r8
  __int64 Heap; // rax
  _DWORD *v44; // r13
  char v45; // al
  __int64 v46; // rcx
  void *v47; // rax
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __m128i v52; // xmm0
  unsigned __int16 *v53; // xmm0_8
  unsigned __int16 *v54; // rax
  __int64 v55; // r13
  __int64 v56; // r13
  unsigned __int64 ModuleEntry; // rax
  unsigned __int64 v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  unsigned __int64 v67; // r11
  char v68; // r13
  int v69; // eax
  _WORD *v70; // r9
  _WORD *v71; // rcx
  unsigned __int64 v72; // rax
  __int16 v73; // r8
  const void *v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  int inited; // eax
  char v78; // cl
  unsigned __int64 v79; // rax
  _QWORD *v80; // r13
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  void (__fastcall *v84)(__int64); // rbx
  char v85; // r13
  const WCHAR *v86; // rax
  char v87; // al
  __int64 (__fastcall *v88)(__int64, _QWORD, _QWORD); // r13
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned __int8 (__fastcall *v92)(unsigned __int16 *, PCWSTR); // rbx
  void (*v93)(void); // rbx
  __int64 v94; // [rsp+28h] [rbp-3C0h]
  __int64 v95; // [rsp+30h] [rbp-3B8h]
  __int64 v96; // [rsp+38h] [rbp-3B0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-398h] BYREF
  int v98; // [rsp+54h] [rbp-394h]
  char v99; // [rsp+58h] [rbp-390h] BYREF
  _BYTE v100[7]; // [rsp+59h] [rbp-38Fh] BYREF
  __int64 v101; // [rsp+60h] [rbp-388h]
  __int64 v102; // [rsp+68h] [rbp-380h]
  char *v103; // [rsp+70h] [rbp-378h] BYREF
  int v104; // [rsp+78h] [rbp-370h] BYREF
  int v105; // [rsp+7Ch] [rbp-36Ch]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-368h] BYREF
  unsigned int v107; // [rsp+90h] [rbp-358h] BYREF
  HANDLE v108; // [rsp+98h] [rbp-350h] BYREF
  unsigned int v109; // [rsp+A0h] [rbp-348h] BYREF
  HANDLE v110; // [rsp+A8h] [rbp-340h] BYREF
  __int128 v111; // [rsp+B0h] [rbp-338h] BYREF
  unsigned __int16 v112; // [rsp+C0h] [rbp-328h] BYREF
  __int16 v113; // [rsp+C2h] [rbp-326h]
  unsigned __int64 v114; // [rsp+C8h] [rbp-320h]
  __int64 v115; // [rsp+D0h] [rbp-318h]
  __int128 v116; // [rsp+D8h] [rbp-310h] BYREF
  __m128i v117; // [rsp+E8h] [rbp-300h] BYREF
  PCWSTR SourceString; // [rsp+F8h] [rbp-2F0h]
  __int64 v119; // [rsp+100h] [rbp-2E8h] BYREF
  __int64 v120; // [rsp+108h] [rbp-2E0h]
  unsigned __int64 v121; // [rsp+110h] [rbp-2D8h]
  unsigned int v122; // [rsp+118h] [rbp-2D0h]
  char *v123[2]; // [rsp+120h] [rbp-2C8h] BYREF
  UNICODE_STRING v124; // [rsp+130h] [rbp-2B8h] BYREF
  __int64 v125; // [rsp+140h] [rbp-2A8h] BYREF
  struct _TEB *v126; // [rsp+148h] [rbp-2A0h]
  int v127; // [rsp+150h] [rbp-298h]
  __int64 v128; // [rsp+158h] [rbp-290h]
  void *v129; // [rsp+160h] [rbp-288h]
  int v130; // [rsp+168h] [rbp-280h]
  __int128 v131; // [rsp+170h] [rbp-278h]
  __int64 (__fastcall *v132[2])(_BYTE *, __int64); // [rsp+180h] [rbp-268h] BYREF
  int v133; // [rsp+190h] [rbp-258h] BYREF
  __int64 ProcessInformation; // [rsp+198h] [rbp-250h] BYREF
  __int64 v135; // [rsp+1A0h] [rbp-248h] BYREF
  _QWORD v136[3]; // [rsp+1A8h] [rbp-240h] BYREF
  _OWORD v137[10]; // [rsp+1C0h] [rbp-228h] BYREF
  __int64 v138; // [rsp+260h] [rbp-188h] BYREF
  int v139; // [rsp+268h] [rbp-180h]
  _BYTE v140[56]; // [rsp+270h] [rbp-178h] BYREF
  _QWORD *v141; // [rsp+2B0h] [rbp-138h]
  _QWORD v142[12]; // [rsp+2D0h] [rbp-118h] BYREF
  __int64 v143[16]; // [rsp+330h] [rbp-B8h] BYREF

  v115 = a2;
  v120 = a1;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v126 = v3;
  ProcessEnvironmentBlock = (__int64)v3->ProcessEnvironmentBlock;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 1) != 0 )
  {
    ZwQueryVirtualMemory();
    v5 = *(_QWORD **)(ProcessEnvironmentBlock + 16);
    if ( v141 != v5 )
      *v141 = v5;
  }
  PebLdr = 88;
  byte_1801461C4 = 1;
  qword_1801461D8 = (__int64)&qword_1801461D0;
  qword_1801461D0 = (__int64)&qword_1801461D0;
  qword_1801461E8 = (__int64)&qword_1801461E0;
  qword_1801461E0 = (__int64)&qword_1801461E0;
  qword_1801461F8 = (__int64)&qword_1801461F0;
  qword_1801461F0 = (__int64)&qword_1801461F0;
  byte_180146208 = 0;
  qword_180146210 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &PebLdr;
  LdrpInitializeNlsInfo((_QWORD *)ProcessEnvironmentBlock);
  v6 = *(_DWORD *)(ProcessEnvironmentBlock + 184);
  v7 = 0;
  if ( v6 > 1 )
    v7 = 1024;
  SRWLockSpinCount = v7;
  v8 = 0;
  if ( v6 > 1 )
    v8 = 1024;
  ConditionVariableSpinCount = v8;
  v9 = RtlpWaitOnAddressSpinCount;
  if ( v6 == 1 )
    v9 = 0;
  RtlpWaitOnAddressSpinCount = v9;
  v10 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v11 = *(_WORD **)(v10 + 104);
  if ( (*(_BYTE *)(v10 + 8) & 1) == 0 )
    v11 = (_WORD *)((char *)v11 + v10);
  v114 = (unsigned __int64)v11;
  v112 = *(_WORD *)(v10 + 96);
  v12 = v112 + 2;
  v113 = v112 + 2;
  if ( v112 >= 8u && *v11 == 92 && v11[1] == 63 && v11[2] == 63 && v11[3] == 92 )
  {
    v112 -= 8;
    v113 = v12 - 8;
    v114 = (unsigned __int64)(v11 + 4);
    *(_WORD *)(v10 + 96) -= 8;
    *(_WORD *)(v10 + 98) -= 8;
    *(_QWORD *)(v10 + 104) += 8LL;
  }
  v105 = 1;
  UseCOR = 0;
  LOBYTE(v98) = 0;
  v104 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v103);
  v13 = v103;
  LdrpAppHeaders = (__int64)v103;
  for ( i = 0; i < 0x20; ++i )
  {
    v15 = (_QWORD *)((char *)&LdrpHashTable + 16 * i);
    v15[1] = v15;
    *v15 = v15;
  }
  RtlImageNtHeaderEx(3, a2, 0LL, &v135);
  v16 = *(_DWORD *)(v135 + 80);
  RtlInsertInvertedFunctionTable(a2, v16);
  RtlCreateInvertedFunctionTableCacheEntry(a2, v16);
  LdrpCaptureCriticalThunks(v18, v17);
  LdrProtectMrdata(1, v19, v20, v21);
  v22 = 0;
  result = LdrpInitializeExecutionOptions(&v112, ProcessEnvironmentBlock, a2, &v110, &v108, (__int64)&v125);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3515,
        "LdrpInitializeProcess",
        0,
        "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
        LODWORD(v3->ClientId.UniqueProcess),
        result);
      result = ApplicationKeyOption;
      v24 = LdrpDebugFlags;
    }
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3556,
      "LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v3->ClientId.UniqueProcess);
  SourceString = 0LL;
  result = NtQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessWow64Information,
             &ProcessInformation,
             8u,
             0LL);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v25 = UseWOW64;
  if ( ProcessInformation )
    v25 = 1;
  UseWOW64 = v25;
  if ( v13 && *((_WORD *)v13 + 12) == 267 && !v25 )
  {
    UseCOR = 1;
    LOBYTE(v13) = 1;
    v98 = (int)v13;
    v22 = 1;
    result = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v13) = v98;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v26 = RtlImageDirectoryEntryToData(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v133);
    if ( v26 )
    {
      UseCOR = 1;
      LODWORD(v13) = (unsigned __int8)v13;
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        LODWORD(v13) = 1;
      v98 = (int)v13;
    }
  }
  LdrpSystemDllBase = v115;
  if ( !UseWOW64 )
    SourceString = *(PCWSTR *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v117 = *(__m128i *)(RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32)) + 96);
  v27 = 0;
  v107 = 0;
  if ( UseWOW64 || UseCOR && v22 )
  {
    v102 = 0LL;
  }
  else
  {
    v102 = RtlImageDirectoryEntryToData(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xAu, &v107);
    v27 = v107;
  }
  memset(v142, 0, sizeof(v142));
  v28 = 2;
  LODWORD(v101) = 2;
  LODWORD(v142[0]) = 96;
  v29 = v102;
  if ( v102 && v27 && (v27 == 64 || v27 == *(_DWORD *)v102) )
  {
    if ( v27 >= 0x10 )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~*(_DWORD *)(v102 + 12);
    if ( v27 >= 0x14 )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= *(_DWORD *)(v29 + 16);
    if ( v27 >= 0x18 )
    {
      v30 = *(int *)(v29 + 20);
      if ( (_DWORD)v30 )
      {
        RtlpTimeout = -10000 * v30;
        v29 = v102;
      }
    }
    if ( v27 >= 0x4C )
    {
      v31 = *(_DWORD *)(v29 + 72);
      if ( v31 )
      {
        if ( (v31 & 0xFFFF0FFF) != 0 )
          v28 = v31 & 0xFFFF0FFF;
        LODWORD(v101) = v28;
        RtlHeapProcessFlags = v31 & 0xF000;
      }
    }
    if ( v27 >= 0x20 )
    {
      v32 = v142[3];
      if ( *(_QWORD *)(v29 + 24) )
        v32 = *(_QWORD *)(v29 + 24);
      v142[3] = v32;
    }
    if ( v27 >= 0x28 )
    {
      v33 = v142[4];
      if ( *(_QWORD *)(v29 + 32) )
        v33 = *(_QWORD *)(v29 + 32);
      v142[4] = v33;
    }
    if ( v27 >= 0x38 )
    {
      v34 = v142[5];
      if ( *(_QWORD *)(v29 + 48) )
        v34 = *(_QWORD *)(v29 + 48);
      v142[5] = v34;
    }
    if ( v27 >= 0x40 )
    {
      v35 = v142[6];
      if ( *(_QWORD *)(v29 + 56) )
        v35 = *(_QWORD *)(v29 + 56);
      v142[6] = v35;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v36 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v36 = 1;
  RtlpTimeoutDisable = v36;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v37 = &RtlpStaticDebugInfo;
  do
  {
    *v37 = v37 + 6;
    v37 += 6;
  }
  while ( v37 <= qword_180145D20 );
  *v37 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_180145D50, 8);
  ApplicationKeyOption = 0;
  *(_QWORD *)(ProcessEnvironmentBlock + 824) = &FlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &TlsBitMap;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &TlsExpansionBitMap;
  FlsBitMap = 128;
  qword_1801462D8 = ProcessEnvironmentBlock + 832;
  *(_DWORD *)(ProcessEnvironmentBlock + 832) |= 1u;
  *(_QWORD *)(ProcessEnvironmentBlock + 816) = ProcessEnvironmentBlock + 808;
  *(_QWORD *)(ProcessEnvironmentBlock + 808) = ProcessEnvironmentBlock + 808;
  TlsBitMap = 64;
  qword_180146268 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  TlsExpansionBitMap = 1024;
  qword_180146288 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( UseWOW64 )
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v38 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v109 = 24;
    if ( (int)LdrQueryImageFileExecutionOptions((int)&v112, (int)L"StackTraceDatabaseSizeInMb", 4, (int)&v109, 4, 0LL) >= 0
      && v109 >= 0x18 )
    {
      if ( v109 <= 0x80 )
        v39 = v109 << 20;
      else
        v39 = 0x8000000LL;
    }
    else
    {
      v39 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3912,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v39 >> 20);
    v136[0] = 0LL;
    v136[1] = 0LL;
    v136[2] = v39;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v136);
    v38 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v38 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0, 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  RtlInitializeHeapManager(&v112);
  if ( (qword_1801572E8 & 0x3000) == 0x1000 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( UseWOW64 || *((_WORD *)v103 + 12) == 267 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v40 = v101;
  }
  else
  {
    v40 = v101;
    if ( *((_WORD *)v103 + 36) <= 3u && *((_WORD *)v103 + 37) < 0x33u )
      v40 = v101 | 0x10000;
    v41 = *((_QWORD *)v103 + 15);
    v42 = *((_QWORD *)v103 + 14);
  }
  Heap = RtlCreateHeap(v40, 0LL, v42, v41, 0LL, (__int64)v142);
  v44 = (_DWORD *)Heap;
  if ( !Heap )
  {
    v45 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_122;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4007,
      "LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_121;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  result = RtlAllocateActivationContextStack((__int64 *)&v126->ActivationContextStackPointer);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpHeap = (__int64)v44;
  RtlInitializeSListHead(&EtwpFreeRegistrationList);
  NtdllBaseTag = RtlCreateTagHeap(v44, 0, (__int64)L"NTDLL!", L"!Process");
  result = TpInitializePackage();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  result = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v101 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v117 = *(__m128i *)(v101 + 96);
  v114 = _mm_srli_si128(v117, 8).m128i_u64[0];
  if ( v110 || v108 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v108,
                             (__int64)v110,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v104,
                             4,
                             v95,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_180143C88 && v104 )
    {
      dword_180143C88 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  RtlInitUnicodeStringEx((__int64)&v124, 2147352624LL);
  v102 = v124.Length + 38 + 2LL;
  v46 = RtlAllocateHeap((__int64)v44, 0, v102);
  if ( !v46 )
    return -1073741801;
  LOWORD(v116) = 0;
  WORD1(v116) = v102;
  *((_QWORD *)&v116 + 1) = v46;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v116, (__int16 *)&v124);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v116, SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v102 = 48LL;
    v127 = 48;
    v128 = 0LL;
    v130 = 64;
    v129 = &unk_18010CCE8;
    v131 = 0LL;
    result = ZwOpenDirectoryObject();
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_24;
      LODWORD(v95) = result;
      v47 = &unk_18010CCE8;
      v48 = 4219;
      goto LABEL_142;
    }
    if ( UseWOW64
      && (v127 = 48,
          v128 = 0LL,
          v130 = 64,
          v129 = &unk_18010CCD0,
          v131 = 0LL,
          result = ZwOpenDirectoryObject(),
          ApplicationKeyOption = result,
          result < 0) )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v95) = result;
        v47 = &unk_18010CCD0;
        v48 = 4249;
LABEL_142:
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          v48,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          v47,
          v95);
LABEL_143:
        result = ApplicationKeyOption;
        v24 = LdrpDebugFlags;
      }
    }
    else
    {
      v127 = 48;
      v128 = LdrpKnownDllDirectoryHandle;
      v130 = 64;
      v129 = &unk_18010CCF8;
      v131 = 0LL;
      result = ZwOpenSymbolicLinkObject();
      ApplicationKeyOption = result;
      if ( result >= 0 )
      {
        v49 = 48LL;
        while ( 1 )
        {
          v50 = RtlAllocateHeap((__int64)v44, 0, v49);
          v121 = v50;
          if ( !v50 )
            return -1073741801;
          LdrpKnownDllPath = 0;
          word_180145E92 = v102;
          qword_180145E98 = v50;
          result = NtQuerySymbolicLinkObject();
          ApplicationKeyOption = result;
          if ( result >= 0 )
          {
            NtClose(v132[1]);
            goto LABEL_159;
          }
          if ( result != -1073741789 )
          {
            v24 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_24;
            LODWORD(v94) = result;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              4310,
              "LdrpInitializeProcess",
              0,
              "Querying the known DLL directory link object failed with status 0x%08lx\n",
              v94);
            goto LABEL_143;
          }
          RtlFreeHeap((__int64)v44, 0, v121);
          v49 = v122;
          v102 = v122;
        }
      }
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v95) = result;
        v47 = &unk_18010CCF8;
        v48 = 4275;
        goto LABEL_142;
      }
    }
LABEL_24:
    if ( (v24 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
LABEL_159:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v124;
LABEL_169:
    v51 = v101;
    goto LABEL_170;
  }
  v51 = v101;
  v52 = *(__m128i *)(v101 + 56);
  *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v101 + 56);
  v53 = (unsigned __int16 *)_mm_srli_si128(v52, 8).m128i_u64[0];
  UnicodeString.Buffer = v53;
  if ( !v53 || !UnicodeString.Length || !*v53 )
  {
    v54 = (unsigned __int16 *)RtlAllocateHeap((__int64)v44, 0, 8LL);
    UnicodeString.Buffer = v54;
    if ( !v54 )
    {
      v45 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4360,
          "LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
LABEL_121:
        v45 = LdrpDebugFlags;
        goto LABEL_122;
      }
      goto LABEL_122;
    }
    v105 = 0;
    *(_DWORD *)v54 = MEMORY[0x7FFE0030];
    v54[2] = MEMORY[0x7FFE0034];
    UnicodeString.Buffer[3] = 0;
    *(_DWORD *)&UnicodeString.Length = 524294;
    goto LABEL_169;
  }
LABEL_170:
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 && *(_WORD *)(v51 + 80) )
  {
    LdrpAppPackagesPath = *(UNICODE_STRING *)(v51 + 80);
    LdrSetDefaultDllDirectories(4096LL);
  }
  else
  {
    RtlInitUnicodeString(&LdrpAppPackagesPath, 0LL);
    v55 = (unsigned __int16)v116 + 2 * (v124.Length + 10LL);
    if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
      v55 += (unsigned __int16)v116 + 22LL;
    *((_QWORD *)&v111 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v55);
    if ( !*((_QWORD *)&v111 + 1) )
    {
      v45 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4426,
          "LdrpInitializeProcess",
          0,
          "Failed to allocate the system dirs string!\n");
        goto LABEL_121;
      }
LABEL_122:
      if ( (v45 & 0x10) != 0 )
        __debugbreak();
      return -1073741801;
    }
    LOWORD(v111) = 0;
    WORD1(v111) = v55;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v111, (__int16 *)&v116);
    RtlAppendUnicodeToString((unsigned __int16 *)&v111, L";");
    if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v111, (__int16 *)&v116);
      RtlAppendUnicodeToString((unsigned __int16 *)&v111, L"forwarders;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v111, (__int16 *)&v124);
    RtlAppendUnicodeToString((unsigned __int16 *)&v111, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v111, (__int16 *)&v124);
    RtlAppendUnicodeToString((unsigned __int16 *)&v111, L";");
    RtlpSystemDirs = v111;
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
    {
      v56 = v101;
      *(_WORD *)(v101 + 80) = 0;
      goto LABEL_183;
    }
  }
  v56 = v101;
LABEL_183:
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType((__int128 *)v117.m128i_i8);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) == 0 && *(_WORD *)(v56 + 80) )
    LdrSetDllDirectory(v56 + 80);
  RtlImageNtHeaderEx(3, v115, 0LL, v123);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v58 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v45 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4525,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the system DLL failed\n");
      goto LABEL_121;
    }
    goto LABEL_122;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v59 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v59 + 248) -= qword_180157298;
  v59 += 72LL;
  *(_OWORD *)v59 = v116;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v59, NtDllName);
  v60 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)NtDllName;
  *(_QWORD *)(v60 + 48) = v115;
  LdrpInsertDataTableEntry(v60);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v123[0], v61, v62);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v63 = qword_1801461F0;
  *(_QWORD *)(v58 + 32) = qword_1801461F0;
  *(_QWORD *)(v58 + 40) = &qword_1801461F0;
  if ( *(__int64 **)(v63 + 8) != &qword_1801461F0 )
    __fastfail(3u);
  *(_QWORD *)(v63 + 8) = v58 + 32;
  qword_1801461F0 = v58 + 32;
  result = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v94) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4603,
        "LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        v94);
      goto LABEL_143;
    }
    goto LABEL_24;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v143);
  memset(v137, 0, 0x98uLL);
  *(_QWORD *)&v137[1] = v143;
  DWORD2(v137[1]) = 512;
  v137[0] = v117;
  *(_QWORD *)&v137[2] = &ApplicationKeyOption;
  v64 = LdrpAllocateModuleEntry((__int64)v137);
  v121 = v64;
  if ( !v64 )
  {
    v45 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4624,
        "LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the executable failed\n");
      goto LABEL_121;
    }
    goto LABEL_122;
  }
  LdrpImageEntry = v64;
  v65 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v65;
  }
  while ( v65 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v66 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v117;
  *(_DWORD *)(v66 + 104) |= 4u;
  v67 = v121;
  v68 = v98;
  if ( UseCOR )
  {
    v69 = *(_DWORD *)(v66 + 104) | 0x400000;
    *(_DWORD *)(v66 + 104) = v69;
    if ( v68 )
      *(_DWORD *)(v66 + 104) = v69 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v66 + 248) = 0LL;
  v70 = 0LL;
  v71 = (_WORD *)(v117.m128i_i64[1] + v117.m128i_u16[0]);
  if ( v71 )
  {
    while ( 1 )
    {
      v72 = (unsigned __int64)v71--;
      if ( v72 <= v117.m128i_i64[1] )
        break;
      if ( *v71 == 92 )
      {
        v70 = v71 + 1;
        break;
      }
    }
  }
  if ( v70 )
  {
    v73 = v117.m128i_i16[4] + v117.m128i_i16[0] - (_WORD)v70;
    *(_WORD *)(v66 + 88) = v73;
    if ( (unsigned __int64)(v117.m128i_u16[1] - v117.m128i_u16[0]) >= 2 )
      v73 += 2;
    *(_WORD *)(v66 + 90) = v73;
    *(_QWORD *)(v66 + 96) = v70;
  }
  else
  {
    *(_OWORD *)(v66 + 88) = *(_OWORD *)(v67 + 72);
  }
  v74 = *(const void **)(ProcessEnvironmentBlock + 16);
  if ( *((const void **)v103 + 6) != v74 && !v68 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v74);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v66 = LdrpImageEntry;
  }
  *(_QWORD *)(v66 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v66);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4744,
      "LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v103, v75, v76);
  result = LdrpProcessMappedModule(LdrpImageEntry, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  inited = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v78 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v95) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4781,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v95);
      v78 = LdrpDebugFlags;
    }
    if ( (v78 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v105 )
    RtlFreeAnsiString(&UnicodeString);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x2000100) != 0 )
  {
    v79 = LdrpAllocateModuleEntry(0LL);
    v80 = (_QWORD *)v79;
    if ( !v79 )
    {
      v45 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4804,
          "LdrpInitializeProcess",
          0,
          "Allocating a data table entry for the application verifier DLL failed\n");
        goto LABEL_121;
      }
      goto LABEL_122;
    }
    *(_DWORD *)(*(_QWORD *)(v79 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v79 + 152) - 52LL) = -1;
    v81 = v125;
    *(_DWORD *)(v79 + 104) |= *(_DWORD *)(v125 + 104);
    *(_QWORD *)(v79 + 248) = *(_QWORD *)(v81 + 248);
    *(_WORD *)(v79 + 110) = 0;
    *(_OWORD *)(v79 + 72) = *(_OWORD *)(v81 + 72);
    *(_OWORD *)(v79 + 88) = *(_OWORD *)(v81 + 88);
    *(_DWORD *)(v79 + 128) = *(_DWORD *)(v81 + 128);
    *(_QWORD *)(v79 + 48) = *(_QWORD *)(v81 + 48);
    LdrpInsertDataTableEntry(v79);
    LdrpLogDllState(v80[6], (__int64)(v80 + 9), 0x14A5u);
    result = RtlImageNtHeaderEx(3, v80[6], 0LL, v123);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex((__int64)v80, v123[0], v82, v83);
    result = LdrpProcessMappedModule((__int64)v80, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v80[7] = *(_QWORD *)(v125 + 56);
    LdrpLogDllState(v80[6], (__int64)(v80 + 9), 0x14ADu);
    *(_DWORD *)(v80[19] + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, v115, 0LL);
    }
    else
    {
      v100[0] = 0;
      result = LdrpInitializeGraphRecurse(v80[19], 0LL, v100);
    }
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v110 )
    {
      NtClose(v110);
      v110 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v108 )
    {
      NtClose(v108);
      v108 = 0LL;
    }
    result = LdrpLoadWow64((__int64)&v116);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      v84 = (void (__fastcall *)(__int64))Wow64LdrpInitialize;
      _guard_check_icall_fptr();
      v84(v120);
LABEL_307:
      if ( v110 )
        NtClose(v110);
      if ( v108 )
        NtClose(v108);
      return 0;
    }
    return result;
  }
  if ( UseCOR )
  {
    result = LdrpCorInitialize();
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v85 = v98;
    if ( (_BYTE)v98 )
    {
      result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v126->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v120 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v85 = v98;
  }
  result = LdrpInitializeTls();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v94) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5019,
        "LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        v94);
      goto LABEL_143;
    }
    goto LABEL_24;
  }
  v132[0] = 0LL;
  if ( (unsigned __int16)(*((_WORD *)v103 + 46) - 2) <= 1u )
  {
    result = LdrLoadDll(2049LL, 0LL, (__int64)LdrpKernel32DllName, &v119);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v95) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5159,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernel32DllName,
            v95);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      result = LdrLoadDll(2049LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v119);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v95) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5132,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v95);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v94) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5148,
            "LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v94);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      ApplicationKeyOption = 0;
    }
    else
    {
      result = LdrGetProcedureAddress(v119, (int)&unk_18010CCB0, 0, (int)&Kernel32ThreadInitThunkFunction);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v24 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v96) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5064,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &unk_18010CCB0,
            LdrpKernel32DllName,
            v96);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      LdrGetProcedureAddress(v119, (int)&unk_18010CCC0, 0, (int)v132);
      result = LdrpSnapKernelBaseExtensions();
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v86 = SourceString;
  if ( SourceString && *SourceString )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v86, (__int64)v86);
  }
  v87 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v87 = 1;
  RtlpForceCSDebugInfoCreation = v87;
  LdrpEnableParallelLoading(*(_DWORD *)(v101 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **(_DWORD **)&v137[2] = 0;
  if ( v85 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    DWORD2(v137[1]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v137);
    LdrpDrainWorkQueue(1);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
      goto LABEL_290;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *(__int64 *)&v137[2]);
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_290:
    v24 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v94) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5365,
        "LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        v94);
      goto LABEL_143;
    }
    goto LABEL_24;
  }
  LdrInitState = 2;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrpDropLastInProgressCount();
  v88 = Kernel32ThreadInitThunkFunction;
  if ( !Kernel32ThreadInitThunkFunction
    || (_guard_check_icall_fptr(), result = v88(1LL, 0LL, 0LL), ApplicationKeyOption = result, result >= 0)
    && (result = LdrpInitializePerUserWindowsDirectory(v132[0]), ApplicationKeyOption = result, result >= 0) )
  {
    LdrpProcessInitContextRecord = v120;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v99 = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), *(__int64 *)&v137[2], &v99);
    LdrpReleaseLoaderLock(v89, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *(__int64 *)&v137[2]);
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    LdrpReleaseDllPath((__int64)v143);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v24 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v94) = ApplicationKeyOption;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5500,
          "LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v94);
        goto LABEL_143;
      }
      goto LABEL_24;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v138 = 72LL;
      v139 = 1;
      memset(v140, 0, sizeof(v140));
      RtlActivateActivationContextUnsafeFast((__int64)&v138, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1u, LdrpImageEntry, v90, v91);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v138);
    }
    if ( g_ShimsEnabled )
    {
      v92 = (unsigned __int8 (__fastcall *)(unsigned __int16 *, PCWSTR))(__ROR8__(
                                                                           g_pfnSE_InstallAfterInit,
                                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
      _guard_check_icall_fptr();
      if ( !v92(&v112, SourceString) )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
    }
    v93 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
    if ( v93 )
    {
      _guard_check_icall_fptr();
      v93();
    }
    goto LABEL_307;
  }
  return result;
}
