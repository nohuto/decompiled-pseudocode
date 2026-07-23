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

int __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  struct _TEB *v3; // r12
  __int64 ProcessEnvironmentBlock; // rsi
  _QWORD *v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  __int16 v12; // r8
  PIMAGE_NT_HEADERS v13; // r13
  unsigned int i; // ecx
  _QWORD *v15; // rax
  int v16; // ebx
  int result; // eax
  char v18; // cl
  int v19; // eax
  _BYTE *v20; // rax
  ULONG v21; // r13d
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  _QWORD *v31; // rcx
  char v32; // al
  unsigned __int64 v33; // r13
  ULONG v34; // ecx
  SIZE_T SizeOfHeapCommit; // r9
  SIZE_T SizeOfHeapReserve; // r8
  PVOID Heap; // rax
  void *v38; // r13
  char v39; // al
  unsigned __int16 *v40; // rcx
  void *v41; // rax
  int v42; // edx
  SIZE_T v43; // rax
  PVOID v44; // rcx
  __int64 v45; // rcx
  __m128i v46; // xmm0
  unsigned __int16 *v47; // xmm0_8
  unsigned __int16 *v48; // rax
  __int64 v49; // r13
  _UNICODE_STRING *v50; // r13
  char *ModuleEntry; // rax
  char *v52; // r13
  _UNICODE_STRING *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  char *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  char *v59; // r11
  char v60; // r13
  int v61; // eax
  _WORD *v62; // r9
  unsigned __int16 *v63; // rcx
  unsigned __int16 *v64; // rax
  __int16 v65; // r8
  void *v66; // rcx
  int inited; // eax
  char v68; // cl
  char *v69; // rax
  __int64 v70; // r13
  __int64 v71; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v72; // rdx
  PRTL_DYNAMIC_HASH_TABLE v73; // rbx
  char v74; // r13
  const WCHAR *v75; // rax
  char v76; // al
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v77; // rdx
  PRTL_DYNAMIC_HASH_TABLE v78; // r13
  __int64 v79; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v80; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v81; // rbx
  void (*v82)(void); // rbx
  PSIZE_T ReturnLength; // [rsp+28h] [rbp-3C0h]
  __int64 v84; // [rsp+30h] [rbp-3B8h]
  __int64 v85; // [rsp+38h] [rbp-3B0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-398h] BYREF
  int v87; // [rsp+54h] [rbp-394h]
  char v88; // [rsp+58h] [rbp-390h] BYREF
  _BYTE v89[7]; // [rsp+59h] [rbp-38Fh] BYREF
  ULONG Flags[2]; // [rsp+60h] [rbp-388h]
  __int64 v91; // [rsp+68h] [rbp-380h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp-378h] BYREF
  int v93; // [rsp+78h] [rbp-370h] BYREF
  int v94; // [rsp+7Ch] [rbp-36Ch]
  _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-368h] BYREF
  ULONG v96; // [rsp+90h] [rbp-358h] BYREF
  HANDLE v97; // [rsp+98h] [rbp-350h] BYREF
  unsigned int Buffer; // [rsp+A0h] [rbp-348h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-340h] BYREF
  _UNICODE_STRING v100; // [rsp+B0h] [rbp-338h] BYREF
  _UNICODE_STRING SubKey; // [rsp+C0h] [rbp-328h] BYREF
  PVOID BaseOfImage; // [rsp+D0h] [rbp-318h]
  _UNICODE_STRING Destination; // [rsp+D8h] [rbp-310h] BYREF
  _UNICODE_STRING ImagePathName; // [rsp+E8h] [rbp-300h] BYREF
  PCWSTR SourceString; // [rsp+F8h] [rbp-2F0h]
  PVOID DllHandle; // [rsp+100h] [rbp-2E8h] BYREF
  __int64 v107; // [rsp+108h] [rbp-2E0h]
  PVOID BaseAddress; // [rsp+110h] [rbp-2D8h]
  ULONG ReturnedLength; // [rsp+118h] [rbp-2D0h] BYREF
  PIMAGE_NT_HEADERS v110[2]; // [rsp+120h] [rbp-2C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+130h] [rbp-2B8h] BYREF
  __int64 v112; // [rsp+140h] [rbp-2A8h] BYREF
  struct _TEB *v113; // [rsp+148h] [rbp-2A0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+150h] [rbp-298h] BYREF
  PVOID ProcedureAddress; // [rsp+180h] [rbp-268h] BYREF
  HANDLE LinkHandle; // [rsp+188h] [rbp-260h] BYREF
  ULONG Size; // [rsp+190h] [rbp-258h] BYREF
  __int64 ProcessInformation; // [rsp+198h] [rbp-250h] BYREF
  PIMAGE_NT_HEADERS v119; // [rsp+1A0h] [rbp-248h] BYREF
  _QWORD v120[3]; // [rsp+1A8h] [rbp-240h] BYREF
  _OWORD v121[10]; // [rsp+1C0h] [rbp-228h] BYREF
  __int64 v122; // [rsp+260h] [rbp-188h] BYREF
  int v123; // [rsp+268h] [rbp-180h]
  _BYTE v124[56]; // [rsp+270h] [rbp-178h] BYREF
  _QWORD *MemoryInformation; // [rsp+2B0h] [rbp-138h] BYREF
  _QWORD Parameters[12]; // [rsp+2D0h] [rbp-118h] BYREF
  __int64 v127[16]; // [rsp+330h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v107 = a1;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v113 = v3;
  ProcessEnvironmentBlock = (__int64)v3->ProcessEnvironmentBlock;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 1) != 0 )
  {
    ZwQueryVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      *(PVOID *)(ProcessEnvironmentBlock + 16),
      MemoryRegionInformation,
      &MemoryInformation,
      0x20uLL,
      0LL);
    v5 = *(_QWORD **)(ProcessEnvironmentBlock + 16);
    if ( MemoryInformation != v5 )
      *MemoryInformation = v5;
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
  LdrpInitializeNlsInfo((PUSHORT *)ProcessEnvironmentBlock);
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
  v11 = *(unsigned __int16 **)(v10 + 104);
  if ( (*(_BYTE *)(v10 + 8) & 1) == 0 )
    v11 = (unsigned __int16 *)((char *)v11 + v10);
  SubKey.Buffer = v11;
  SubKey.Length = *(_WORD *)(v10 + 96);
  v12 = SubKey.Length + 2;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v11 == 92 && v11[1] == 63 && v11[2] == 63 && v11[3] == 92 )
  {
    SubKey.Length -= 8;
    SubKey.MaximumLength = v12 - 8;
    SubKey.Buffer = v11 + 4;
    *(_WORD *)(v10 + 96) -= 8;
    *(_WORD *)(v10 + 98) -= 8;
    *(_QWORD *)(v10 + 104) += 8LL;
  }
  v94 = 1;
  UseCOR = 0;
  LOBYTE(v87) = 0;
  v93 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v13 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  for ( i = 0; i < 0x20; ++i )
  {
    v15 = (_QWORD *)((char *)&LdrpHashTable + 16 * i);
    v15[1] = v15;
    *v15 = v15;
  }
  RtlImageNtHeaderEx(3u, a2, 0LL, &v119);
  RtlInsertInvertedFunctionTable(a2, v119->OptionalHeader.SizeOfImage);
  RtlCreateInvertedFunctionTableCacheEntry(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  v16 = 0;
  result = LdrpInitializeExecutionOptions(
             &SubKey.Length,
             ProcessEnvironmentBlock,
             (__int64)a2,
             &Handle,
             &v97,
             (__int64)&v112);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
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
      v18 = LdrpDebugFlags;
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
  v19 = UseWOW64;
  if ( ProcessInformation )
    v19 = 1;
  UseWOW64 = v19;
  if ( v13 && v13->OptionalHeader.Magic == 267 && !v19 )
  {
    UseCOR = 1;
    LOBYTE(v13) = 1;
    v87 = (int)v13;
    v16 = 1;
    result = LdrpCorFixupImage(*(void **)(ProcessEnvironmentBlock + 16));
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v13) = v87;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v20 = RtlImageDirectoryEntryToData(*(PVOID *)(ProcessEnvironmentBlock + 16), 1u, 0xEu, &Size);
    if ( v20 )
    {
      UseCOR = 1;
      LODWORD(v13) = (unsigned __int8)v13;
      if ( (v20[16] & 1) != 0 )
        LODWORD(v13) = 1;
      v87 = (int)v13;
    }
  }
  LdrpSystemDllBase = (__int64)BaseOfImage;
  if ( !UseWOW64 )
    SourceString = *(PCWSTR *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  ImagePathName = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32))->ImagePathName;
  v21 = 0;
  v96 = 0;
  if ( UseWOW64 || UseCOR && v16 )
  {
    v91 = 0LL;
  }
  else
  {
    v91 = (__int64)RtlImageDirectoryEntryToData(*(PVOID *)(ProcessEnvironmentBlock + 16), 1u, 0xAu, &v96);
    v21 = v96;
  }
  memset(Parameters, 0, sizeof(Parameters));
  v22 = 2;
  Flags[0] = 2;
  LODWORD(Parameters[0]) = 96;
  v23 = v91;
  if ( v91 && v21 && (v21 == 64 || v21 == *(_DWORD *)v91) )
  {
    if ( v21 >= 0x10 )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~*(_DWORD *)(v91 + 12);
    if ( v21 >= 0x14 )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= *(_DWORD *)(v23 + 16);
    if ( v21 >= 0x18 )
    {
      v24 = *(int *)(v23 + 20);
      if ( (_DWORD)v24 )
      {
        RtlpTimeout = -10000 * v24;
        v23 = v91;
      }
    }
    if ( v21 >= 0x4C )
    {
      v25 = *(_DWORD *)(v23 + 72);
      if ( v25 )
      {
        if ( (v25 & 0xFFFF0FFF) != 0 )
          v22 = v25 & 0xFFFF0FFF;
        Flags[0] = v22;
        RtlHeapProcessFlags = v25 & 0xF000;
      }
    }
    if ( v21 >= 0x20 )
    {
      v26 = Parameters[3];
      if ( *(_QWORD *)(v23 + 24) )
        v26 = *(_QWORD *)(v23 + 24);
      Parameters[3] = v26;
    }
    if ( v21 >= 0x28 )
    {
      v27 = Parameters[4];
      if ( *(_QWORD *)(v23 + 32) )
        v27 = *(_QWORD *)(v23 + 32);
      Parameters[4] = v27;
    }
    if ( v21 >= 0x38 )
    {
      v28 = Parameters[5];
      if ( *(_QWORD *)(v23 + 48) )
        v28 = *(_QWORD *)(v23 + 48);
      Parameters[5] = v28;
    }
    if ( v21 >= 0x40 )
    {
      v29 = Parameters[6];
      if ( *(_QWORD *)(v23 + 56) )
        v29 = *(_QWORD *)(v23 + 56);
      Parameters[6] = v29;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v30 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v30 = 1;
  RtlpTimeoutDisable = v30;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v31 = &RtlpStaticDebugInfo;
  do
  {
    *v31 = v31 + 6;
    v31 += 6;
  }
  while ( v31 <= qword_180145D20 );
  *v31 = 0LL;
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
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    Buffer = 24;
    if ( LdrQueryImageFileExecutionOptions(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL) >= 0
      && Buffer >= 0x18 )
    {
      if ( Buffer <= 0x80 )
        v33 = Buffer << 20;
      else
        v33 = 0x8000000LL;
    }
    else
    {
      v33 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3912,
        "LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v33 >> 20);
    v120[0] = 0LL;
    v120[1] = 0LL;
    v120[2] = v33;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v120);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v32 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  RtlInitializeHeapManager(&SubKey);
  if ( (LdrSystemDllInitBlock.Wow64SharedInformation[8] & 0x3000) == 0x1000LL )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( UseWOW64 || OutHeaders->OptionalHeader.Magic == 267 )
  {
    SizeOfHeapCommit = 0LL;
    SizeOfHeapReserve = 0LL;
    v34 = Flags[0];
  }
  else
  {
    v34 = Flags[0];
    if ( OutHeaders->OptionalHeader.MajorSubsystemVersion <= 3u
      && OutHeaders->OptionalHeader.MinorSubsystemVersion < 0x33u )
    {
      v34 = Flags[0] | 0x10000;
    }
    SizeOfHeapCommit = OutHeaders->OptionalHeader.SizeOfHeapCommit;
    SizeOfHeapReserve = OutHeaders->OptionalHeader.SizeOfHeapReserve;
  }
  Heap = RtlCreateHeap(v34, 0LL, SizeOfHeapReserve, SizeOfHeapCommit, 0LL, Parameters);
  v38 = Heap;
  if ( !Heap )
  {
    v39 = LdrpDebugFlags;
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
  result = RtlAllocateActivationContextStack(&v113->ActivationContextStackPointer);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpHeap = v38;
  RtlInitializeSListHead(&EtwpFreeRegistrationList);
  NtdllBaseTag = RtlCreateTagHeap(v38, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
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
  *(_QWORD *)Flags = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  ImagePathName = *(_UNICODE_STRING *)(*(_QWORD *)Flags + 96LL);
  SubKey.Buffer = (unsigned __int16 *)_mm_srli_si128((__m128i)ImagePathName, 8).m128i_u64[0];
  if ( Handle || v97 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v97,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v93,
                             4,
                             v84,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_180143C88 && v93 )
    {
      dword_180143C88 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)0x7FFE0030);
  v91 = DestinationString.Length + 38 + 2LL;
  v40 = (unsigned __int16 *)RtlAllocateHeap(v38, 0, v91);
  if ( !v40 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v91;
  Destination.Buffer = v40;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v91 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18010CCE8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_24;
      LODWORD(v84) = result;
      v41 = &unk_18010CCE8;
      v42 = 4219;
      goto LABEL_142;
    }
    if ( UseWOW64
      && (ObjectAttributes.Length = 48,
          ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.Attributes = 64,
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18010CCD0,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle32, 3u, &ObjectAttributes),
          ApplicationKeyOption = result,
          result < 0) )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v84) = result;
        v41 = &unk_18010CCD0;
        v42 = 4249;
LABEL_142:
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          v42,
          "LdrpInitializeProcess",
          0,
          "Failed to open %wZ with status 0x%08lx\n",
          v41,
          v84);
LABEL_143:
        result = ApplicationKeyOption;
        v18 = LdrpDebugFlags;
      }
    }
    else
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18010CCF8;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      ApplicationKeyOption = result;
      if ( result >= 0 )
      {
        v43 = 48LL;
        while ( 1 )
        {
          v44 = RtlAllocateHeap(v38, 0, v43);
          BaseAddress = v44;
          if ( !v44 )
            return -1073741801;
          LdrpKnownDllPath.Length = 0;
          LdrpKnownDllPath.MaximumLength = v91;
          LdrpKnownDllPath.Buffer = (unsigned __int16 *)v44;
          result = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
          ApplicationKeyOption = result;
          if ( result >= 0 )
          {
            NtClose(LinkHandle);
            goto LABEL_159;
          }
          if ( result != -1073741789 )
          {
            v18 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_24;
            LODWORD(ReturnLength) = result;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              4310,
              "LdrpInitializeProcess",
              0,
              "Querying the known DLL directory link object failed with status 0x%08lx\n",
              ReturnLength);
            goto LABEL_143;
          }
          RtlFreeHeap(v38, 0, BaseAddress);
          v43 = ReturnedLength;
          v91 = ReturnedLength;
        }
      }
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v84) = result;
        v41 = &unk_18010CCF8;
        v42 = 4275;
        goto LABEL_142;
      }
    }
LABEL_24:
    if ( (v18 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
LABEL_159:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
LABEL_169:
    v45 = *(_QWORD *)Flags;
    goto LABEL_170;
  }
  v45 = *(_QWORD *)Flags;
  v46 = *(__m128i *)(*(_QWORD *)Flags + 56LL);
  *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(*(_QWORD *)Flags + 56LL);
  v47 = (unsigned __int16 *)_mm_srli_si128(v46, 8).m128i_u64[0];
  UnicodeString.Buffer = v47;
  if ( !v47 || !UnicodeString.Length || !*v47 )
  {
    v48 = (unsigned __int16 *)RtlAllocateHeap(v38, 0, 8uLL);
    UnicodeString.Buffer = v48;
    if ( !v48 )
    {
      v39 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4360,
          "LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
LABEL_121:
        v39 = LdrpDebugFlags;
        goto LABEL_122;
      }
      goto LABEL_122;
    }
    v94 = 0;
    *(_DWORD *)v48 = MEMORY[0x7FFE0030];
    v48[2] = MEMORY[0x7FFE0034];
    UnicodeString.Buffer[3] = 0;
    *(_DWORD *)&UnicodeString.Length = 524294;
    goto LABEL_169;
  }
LABEL_170:
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 && *(_WORD *)(v45 + 80) )
  {
    LdrpAppPackagesPath = *(_UNICODE_STRING *)(v45 + 80);
    LdrSetDefaultDllDirectories(0x1000u);
  }
  else
  {
    RtlInitUnicodeString(&LdrpAppPackagesPath, 0LL);
    v49 = Destination.Length + 2 * (DestinationString.Length + 10LL);
    if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
      v49 += Destination.Length + 22LL;
    v100.Buffer = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v49);
    if ( !v100.Buffer )
    {
      v39 = LdrpDebugFlags;
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
      if ( (v39 & 0x10) != 0 )
        __debugbreak();
      return -1073741801;
    }
    v100.Length = 0;
    v100.MaximumLength = v49;
    RtlAppendUnicodeStringToString(&v100, &Destination);
    RtlAppendUnicodeToString(&v100, L";");
    if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    {
      RtlAppendUnicodeStringToString(&v100, &Destination);
      RtlAppendUnicodeToString(&v100, L"forwarders;");
    }
    RtlAppendUnicodeStringToString(&v100, &DestinationString);
    RtlAppendUnicodeToString(&v100, L"\\system;");
    RtlAppendUnicodeStringToString(&v100, &DestinationString);
    RtlAppendUnicodeToString(&v100, L";");
    RtlpSystemDirs = v100;
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
    {
      v50 = *(_UNICODE_STRING **)Flags;
      *(_WORD *)(*(_QWORD *)Flags + 80LL) = 0;
      goto LABEL_183;
    }
  }
  v50 = *(_UNICODE_STRING **)Flags;
LABEL_183:
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) == 0 && v50[5].Length )
    LdrSetDllDirectory(v50 + 5);
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, v110);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v52 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v39 = LdrpDebugFlags;
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
  LdrpNtDllDataTableEntry = (__int64)ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v53 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  v53[15].Buffer = (unsigned __int16 *)((char *)v53[15].Buffer - LdrSystemDllInitBlock.SystemDllWowRelocation);
  v53 = (_UNICODE_STRING *)((char *)v53 + 72);
  *v53 = Destination;
  RtlAppendUnicodeStringToString(v53, &NtDllName);
  v54 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)(LdrpNtDllDataTableEntry + 88) = NtDllName;
  *(_QWORD *)(v54 + 48) = BaseOfImage;
  LdrpInsertDataTableEntry(v54);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, (__int64)v110[0]);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v55 = qword_1801461F0;
  *((_QWORD *)v52 + 4) = qword_1801461F0;
  *((_QWORD *)v52 + 5) = &qword_1801461F0;
  if ( *(__int64 **)(v55 + 8) != &qword_1801461F0 )
    __fastfail(3u);
  *(_QWORD *)(v55 + 8) = v52 + 32;
  qword_1801461F0 = (__int64)(v52 + 32);
  result = LdrpInitParallelLoadingSupport();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(ReturnLength) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4603,
        "LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        ReturnLength);
      goto LABEL_143;
    }
    goto LABEL_24;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v127);
  memset(v121, 0, 0x98uLL);
  *(_QWORD *)&v121[1] = v127;
  DWORD2(v121[1]) = 512;
  v121[0] = ImagePathName;
  *(_QWORD *)&v121[2] = &ApplicationKeyOption;
  v56 = LdrpAllocateModuleEntry((__int64)v121);
  BaseAddress = v56;
  if ( !v56 )
  {
    v39 = LdrpDebugFlags;
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
  LdrpImageEntry = (__int64)v56;
  v57 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v57;
  }
  while ( v57 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v58 = LdrpImageEntry;
  *(_UNICODE_STRING *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v58 + 104) |= 4u;
  v59 = (char *)BaseAddress;
  v60 = v87;
  if ( UseCOR )
  {
    v61 = *(_DWORD *)(v58 + 104) | 0x400000;
    *(_DWORD *)(v58 + 104) = v61;
    if ( v60 )
      *(_DWORD *)(v58 + 104) = v61 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v58 + 248) = 0LL;
  v62 = 0LL;
  v63 = (unsigned __int16 *)((char *)ImagePathName.Buffer + ImagePathName.Length);
  if ( v63 )
  {
    while ( 1 )
    {
      v64 = v63--;
      if ( v64 <= ImagePathName.Buffer )
        break;
      if ( *v63 == 92 )
      {
        v62 = v63 + 1;
        break;
      }
    }
  }
  if ( v62 )
  {
    v65 = LOWORD(ImagePathName.Buffer) + ImagePathName.Length - (_WORD)v62;
    *(_WORD *)(v58 + 88) = v65;
    if ( (unsigned __int64)(ImagePathName.MaximumLength - ImagePathName.Length) >= 2 )
      v65 += 2;
    *(_WORD *)(v58 + 90) = v65;
    *(_QWORD *)(v58 + 96) = v62;
  }
  else
  {
    *(_OWORD *)(v58 + 88) = *(_OWORD *)(v59 + 72);
  }
  v66 = *(void **)(ProcessEnvironmentBlock + 16);
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v66 && !v60 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v66);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v58 = LdrpImageEntry;
  }
  *(_QWORD *)(v58 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v58);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, (__int64)OutHeaders);
  result = LdrpProcessMappedModule(LdrpImageEntry, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  inited = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v68 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v84) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4781,
        "LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v84);
      v68 = LdrpDebugFlags;
    }
    if ( (v68 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v94 )
    RtlFreeAnsiString(&UnicodeString);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x2000100) != 0 )
  {
    v69 = LdrpAllocateModuleEntry(0LL);
    v70 = (__int64)v69;
    if ( !v69 )
    {
      v39 = LdrpDebugFlags;
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
    *(_DWORD *)(*((_QWORD *)v69 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v69 + 19) - 52LL) = -1;
    v71 = v112;
    *((_DWORD *)v69 + 26) |= *(_DWORD *)(v112 + 104);
    *((_QWORD *)v69 + 31) = *(_QWORD *)(v71 + 248);
    *((_WORD *)v69 + 55) = 0;
    *(_OWORD *)(v69 + 72) = *(_OWORD *)(v71 + 72);
    *(_OWORD *)(v69 + 88) = *(_OWORD *)(v71 + 88);
    *((_DWORD *)v69 + 32) = *(_DWORD *)(v71 + 128);
    *((_QWORD *)v69 + 6) = *(_QWORD *)(v71 + 48);
    LdrpInsertDataTableEntry((__int64)v69);
    LdrpLogDllState(*(_QWORD *)(v70 + 48), v70 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v70 + 48), 0LL, v110);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v70, (__int64)v110[0]);
    result = LdrpProcessMappedModule(v70, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v70 + 56) = *(_QWORD *)(v112 + 56);
    LdrpLogDllState(*(_QWORD *)(v70 + 48), v70 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v70 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 )
    {
      result = AVrfInitializeVerifier(0LL, 0LL, 0LL, 1LL, BaseOfImage, 0LL);
    }
    else
    {
      v89[0] = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v70 + 152), 0LL, v89);
    }
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v97 )
    {
      NtClose(v97);
      v97 = 0LL;
    }
    result = LdrpLoadWow64(&Destination);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      v73 = Wow64LdrpInitialize;
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        Wow64LdrpInitialize,
        v72);
      ((void (__fastcall *)(__int64))v73)(v107);
LABEL_307:
      if ( Handle )
        NtClose(Handle);
      if ( v97 )
        NtClose(v97);
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
    v74 = v87;
    if ( (_BYTE)v87 )
    {
      result = LdrpCorValidateImage(*(void **)(ProcessEnvironmentBlock + 16));
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v113->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v107 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330];
  }
  else
  {
    v74 = v87;
  }
  result = LdrpInitializeTls();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(ReturnLength) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5019,
        "LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        ReturnLength);
      goto LABEL_143;
    }
    goto LABEL_24;
  }
  ProcedureAddress = 0LL;
  if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) <= 1u )
  {
    result = LdrLoadDll((PWSTR)0x801, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v84) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5159,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernel32DllName,
            v84);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      result = LdrLoadDll((PWSTR)0x801, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v84) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5132,
            "LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v84);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(ReturnLength) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5148,
            "LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            ReturnLength);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      ApplicationKeyOption = 0;
    }
    else
    {
      result = LdrGetProcedureAddress(
                 DllHandle,
                 (PANSI_STRING)&stru_18010CCB0,
                 0,
                 (PVOID *)&Kernel32ThreadInitThunkFunction);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v85) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5064,
            "LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_18010CCB0,
            &LdrpKernel32DllName,
            v85);
          goto LABEL_143;
        }
        goto LABEL_24;
      }
      LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_18010CCC0, 0, &ProcedureAddress);
      result = (unsigned int)LdrpSnapKernelBaseExtensions();
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
  v75 = SourceString;
  if ( SourceString && *SourceString )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v75, (__int64)v75);
  }
  v76 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v76 = 1;
  RtlpForceCSDebugInfoCreation = v76;
  LdrpEnableParallelLoading(*(_DWORD *)(*(_QWORD *)Flags + 1036LL));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **(_DWORD **)&v121[2] = 0;
  if ( v74 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    DWORD2(v121[1]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v121);
    LdrpDrainWorkQueue(1);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
      goto LABEL_290;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *(__int64 *)&v121[2]);
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_290:
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(ReturnLength) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5365,
        "LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        ReturnLength);
      goto LABEL_143;
    }
    goto LABEL_24;
  }
  LdrInitState = 2;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    LdrpDoDebuggerBreak();
  LdrpDropLastInProgressCount();
  v78 = Kernel32ThreadInitThunkFunction;
  if ( !Kernel32ThreadInitThunkFunction
    || (((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
          Kernel32ThreadInitThunkFunction,
          v77),
        result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v78)(1LL, 0LL, 0LL),
        ApplicationKeyOption = result,
        result >= 0)
    && (result = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress),
        ApplicationKeyOption = result,
        result >= 0) )
  {
    LdrpProcessInitContextRecord = v107;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v88 = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), *(__int64 *)&v121[2], &v88);
    LdrpReleaseLoaderLock(v79, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *(__int64 *)&v121[2]);
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    LdrpReleaseDllPath((__int64)v127);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(ReturnLength) = ApplicationKeyOption;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5500,
          "LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          ReturnLength);
        goto LABEL_143;
      }
      goto LABEL_24;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v122 = 72LL;
      v123 = 1;
      memset(v124, 0, sizeof(v124));
      RtlActivateActivationContextUnsafeFast((__int64)&v122, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v122);
    }
    if ( g_ShimsEnabled )
    {
      v81 = (_RTL_DYNAMIC_HASH_TABLE *)(__ROR8__(
                                          g_pfnSE_InstallAfterInit,
                                          64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]);
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v81, v80);
      if ( !((unsigned __int8 (__fastcall *)(_UNICODE_STRING *, PCWSTR))v81)(&SubKey, SourceString) )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
    }
    v82 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
    if ( v82 )
    {
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        *(PRTL_DYNAMIC_HASH_TABLE *)(ProcessEnvironmentBlock + 560),
        v80);
      v82();
    }
    goto LABEL_307;
  }
  return result;
}
