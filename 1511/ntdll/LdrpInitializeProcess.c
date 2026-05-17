/*
 * XREFs of LdrpInitializeProcess @ 0x18008E534
 * Callers:
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x180001750 (LdrSetDllDirectory.c)
 *     LdrpEnableParallelLoading @ 0x180004A10 (LdrpEnableParallelLoading.c)
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x18000BAC0 (LdrpPrepareModuleForExecution.c)
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     LdrpInsertDataTableEntry @ 0x18000EB38 (LdrpInsertDataTableEntry.c)
 *     RtlInsertInvertedFunctionTable @ 0x18000F9C4 (RtlInsertInvertedFunctionTable.c)
 *     LdrpAllocateModuleEntry @ 0x18000FB30 (LdrpAllocateModuleEntry.c)
 *     LdrpProcessMappedModule @ 0x1800102F0 (LdrpProcessMappedModule.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpCallTlsInitializers @ 0x1800114E4 (LdrpCallTlsInitializers.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     LdrpInitializeTls @ 0x1800407A4 (LdrpInitializeTls.c)
 *     RtlSetBits @ 0x180041A70 (RtlSetBits.c)
 *     RtlInitializeHeapManager @ 0x18004BCAC (RtlInitializeHeapManager.c)
 *     RtlpInitEnvironmentBlock @ 0x18004D7D8 (RtlpInitEnvironmentBlock.c)
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x18004ED50 (LdrpLoadWow64.c)
 *     LdrGetProcedureAddress @ 0x18004EE30 (LdrGetProcedureAddress.c)
 *     TpInitializePackage @ 0x18004EE54 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x18004EF00 (RtlCreateTagHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlInitializeCriticalSection @ 0x18006D220 (RtlInitializeCriticalSection.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006E804 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeGraphRecurse @ 0x180071E9C (LdrpInitializeGraphRecurse.c)
 *     RtlInitializeSListHead @ 0x180072510 (RtlInitializeSListHead.c)
 *     RtlEncodePointer @ 0x180072AD0 (RtlEncodePointer.c)
 *     RtlpInitCurrentDir @ 0x180077FD0 (RtlpInitCurrentDir.c)
 *     RtlAllocateActivationContextStack @ 0x180078390 (RtlAllocateActivationContextStack.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x180078754 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlInitializeHistoryTable @ 0x180079104 (RtlInitializeHistoryTable.c)
 *     RtlSetHeapInformation @ 0x18007AD60 (RtlSetHeapInformation.c)
 *     LdrpCodeAuthzInitialize @ 0x18007BC30 (LdrpCodeAuthzInitialize.c)
 *     RtlpInitParameterBlock @ 0x18007CB74 (RtlpInitParameterBlock.c)
 *     LdrQueryImageFileExecutionOptions @ 0x18007CE50 (LdrQueryImageFileExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x18007D13C (RtlQueryApplicationKeyOption.c)
 *     SbObtainTraceHandle @ 0x18007E850 (SbObtainTraceHandle.c)
 *     LdrpInsertModuleToIndex @ 0x18007EDC4 (LdrpInsertModuleToIndex.c)
 *     LdrpProtectAndRelocateImage @ 0x1800803C0 (LdrpProtectAndRelocateImage.c)
 *     LdrpInitShimEngine @ 0x180080A94 (LdrpInitShimEngine.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081A3C (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpCorProcessImports @ 0x180083680 (LdrpCorProcessImports.c)
 *     LdrSetDefaultDllDirectories @ 0x180083DD0 (LdrSetDefaultDllDirectories.c)
 *     LdrpCorValidateImage @ 0x180084488 (LdrpCorValidateImage.c)
 *     LdrpCaptureCriticalThunks @ 0x18008619C (LdrpCaptureCriticalThunks.c)
 *     RtlNormalizeProcessParams @ 0x180088970 (RtlNormalizeProcessParams.c)
 *     LdrpCorFixupImage @ 0x18008DE80 (LdrpCorFixupImage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x1800909D0 (LdrpInitializeNlsInfo.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     ZwOpenDirectoryObject @ 0x1800A5BC0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A7410 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A7990 (NtQuerySymbolicLinkObject.c)
 *     InterlockedPushListSList @ 0x1800A89A0 (InterlockedPushListSList.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpCheckAppDirType @ 0x1800CA8C4 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800CAAF0 (LdrpDoDebuggerBreak.c)
 *     LdrpCreateLoaderEvents @ 0x1800CB424 (LdrpCreateLoaderEvents.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 *     RtlInitializeExceptionLog @ 0x1800E8A74 (RtlInitializeExceptionLog.c)
 *     RtlControlStackTraceDataBase @ 0x1800E9210 (RtlControlStackTraceDataBase.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, unsigned __int64 a2)
{
  _PEB *ProcessEnvironmentBlock; // rsi
  _QWORD *ImageBaseAddress; // rax
  unsigned int NumberOfProcessors; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  unsigned __int16 *Buffer; // rax
  __int16 v11; // r8
  char *v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  int result; // eax
  char v23; // cl
  const char *v24; // rax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // r13
  unsigned int v30; // edx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // al
  _QWORD *v37; // rcx
  char v38; // al
  __int64 v39; // r12
  unsigned int v40; // ecx
  __int64 v41; // r9
  unsigned __int64 v42; // r8
  __int64 Heap; // rax
  void *v44; // r12
  char v45; // al
  const char *v46; // rax
  int v47; // edx
  __int16 v48; // r13
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rax
  _RTL_USER_PROCESS_PARAMETERS *v52; // r13
  __m128i DosPath; // xmm0
  unsigned __int16 *v54; // xmm0_8
  unsigned __int16 *v55; // rax
  __int64 v56; // r12
  __int64 ModuleEntry; // rax
  __int64 v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  char *v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  unsigned __int64 v71; // r10
  char v72; // r11
  int v73; // eax
  _WORD *v74; // r9
  _WORD *v75; // rax
  __int16 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  char v80; // cl
  __int64 v81; // rax
  _QWORD *v82; // r13
  __int64 v83; // r12
  __int64 v84; // r8
  __int64 v85; // r9
  void (__fastcall *v86)(__int64); // rbx
  char v87; // r12
  const WCHAR *v88; // rax
  char v89; // al
  __int64 (__fastcall *v90)(__int64, _QWORD, _QWORD); // r12
  __int64 v91; // rcx
  unsigned __int8 (__fastcall *v92)(unsigned __int16 *, PCWSTR); // rbx
  void (*PostProcessInitRoutine)(void); // rbx
  int v94; // [rsp+30h] [rbp-3B8h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-398h] BYREF
  int v96; // [rsp+54h] [rbp-394h]
  char v97; // [rsp+58h] [rbp-390h] BYREF
  char v98[7]; // [rsp+59h] [rbp-38Fh] BYREF
  _RTL_USER_PROCESS_PARAMETERS *v99; // [rsp+60h] [rbp-388h]
  char *v100; // [rsp+68h] [rbp-380h] BYREF
  HANDLE v101; // [rsp+70h] [rbp-378h] BYREF
  int v102; // [rsp+78h] [rbp-370h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-368h] BYREF
  unsigned int v104; // [rsp+90h] [rbp-358h] BYREF
  HANDLE v105; // [rsp+98h] [rbp-350h] BYREF
  unsigned int v106; // [rsp+A0h] [rbp-348h] BYREF
  int v107; // [rsp+A4h] [rbp-344h]
  __int128 v108; // [rsp+A8h] [rbp-340h] BYREF
  unsigned __int16 Length; // [rsp+B8h] [rbp-330h] BYREF
  __int16 v110; // [rsp+BAh] [rbp-32Eh]
  unsigned __int64 v111; // [rsp+C0h] [rbp-328h]
  __int64 v112; // [rsp+C8h] [rbp-320h]
  struct _TEB *v113; // [rsp+D0h] [rbp-318h]
  __int128 v114; // [rsp+D8h] [rbp-310h] BYREF
  __m128i ImagePathName; // [rsp+E8h] [rbp-300h] BYREF
  PCWSTR SourceString; // [rsp+F8h] [rbp-2F0h]
  __int64 v117; // [rsp+100h] [rbp-2E8h]
  unsigned int v118; // [rsp+108h] [rbp-2E0h] BYREF
  unsigned __int64 v119; // [rsp+110h] [rbp-2D8h]
  unsigned __int64 v120; // [rsp+118h] [rbp-2D0h] BYREF
  char *v121[2]; // [rsp+120h] [rbp-2C8h] BYREF
  UNICODE_STRING v122; // [rsp+130h] [rbp-2B8h] BYREF
  HANDLE Handle; // [rsp+140h] [rbp-2A8h] BYREF
  __int64 (__fastcall *v124)(_BYTE *, __int64); // [rsp+148h] [rbp-2A0h] BYREF
  int v125; // [rsp+150h] [rbp-298h] BYREF
  __int64 v126; // [rsp+158h] [rbp-290h]
  void *v127; // [rsp+160h] [rbp-288h]
  int v128; // [rsp+168h] [rbp-280h]
  __int128 v129; // [rsp+170h] [rbp-278h]
  int v130; // [rsp+180h] [rbp-268h] BYREF
  __int64 ProcessInformation; // [rsp+188h] [rbp-260h] BYREF
  __int64 v132; // [rsp+190h] [rbp-258h] BYREF
  __int64 v133; // [rsp+198h] [rbp-250h] BYREF
  _QWORD v134[4]; // [rsp+1A0h] [rbp-248h] BYREF
  _OWORD v135[10]; // [rsp+1C0h] [rbp-228h] BYREF
  __int64 v136; // [rsp+260h] [rbp-188h] BYREF
  int v137; // [rsp+268h] [rbp-180h]
  _BYTE v138[56]; // [rsp+270h] [rbp-178h] BYREF
  _QWORD *v139; // [rsp+2B0h] [rbp-138h] BYREF
  _QWORD v140[12]; // [rsp+2D0h] [rbp-118h] BYREF
  _QWORD v141[16]; // [rsp+330h] [rbp-B8h] BYREF

  v112 = a2;
  v117 = a1;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v113 = NtCurrentTeb();
  ProcessEnvironmentBlock = v113->ProcessEnvironmentBlock;
  if ( (ProcessEnvironmentBlock->BitField & 1) != 0 )
  {
    ZwQueryVirtualMemory(-1LL, ProcessEnvironmentBlock->ImageBaseAddress, 3LL, &v139);
    ImageBaseAddress = ProcessEnvironmentBlock->ImageBaseAddress;
    if ( v139 != ImageBaseAddress )
      *v139 = ImageBaseAddress;
  }
  PebLdr = 88;
  byte_180145204 = 1;
  qword_180145218 = (__int64)&qword_180145210;
  qword_180145210 = (__int64)&qword_180145210;
  qword_180145228 = (__int64)&qword_180145220;
  qword_180145220 = (__int64)&qword_180145220;
  qword_180145238 = (__int64)&qword_180145230;
  qword_180145230 = (__int64)&qword_180145230;
  byte_180145248 = 0;
  qword_180145250 = 0LL;
  ProcessEnvironmentBlock->Ldr = (_PEB_LDR_DATA *)&PebLdr;
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  NumberOfProcessors = ProcessEnvironmentBlock->NumberOfProcessors;
  v6 = 0;
  if ( NumberOfProcessors > 1 )
    v6 = 1024;
  SRWLockSpinCount = v6;
  v7 = 0;
  if ( NumberOfProcessors > 1 )
    v7 = 1024;
  ConditionVariableSpinCount = v7;
  v8 = RtlpWaitOnAddressSpinCount;
  if ( NumberOfProcessors == 1 )
    v8 = 0;
  RtlpWaitOnAddressSpinCount = v8;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  Buffer = ProcessParameters->ImagePathName.Buffer;
  if ( (ProcessParameters->Flags & 1) == 0 )
    Buffer = (unsigned __int16 *)((char *)Buffer + (_QWORD)ProcessParameters);
  v111 = (unsigned __int64)Buffer;
  Length = ProcessParameters->ImagePathName.Length;
  v11 = Length + 2;
  v110 = Length + 2;
  if ( Length >= 8u && *Buffer == 92 && Buffer[1] == 63 && Buffer[2] == 63 && Buffer[3] == 92 )
  {
    Length -= 8;
    v110 = v11 - 8;
    v111 = (unsigned __int64)(Buffer + 4);
    ProcessParameters->ImagePathName.Length -= 8;
    ProcessParameters->ImagePathName.MaximumLength -= 8;
    ProcessParameters->ImagePathName.Buffer += 4;
  }
  v107 = 1;
  UseCOR = 0;
  LOBYTE(v96) = 0;
  v102 = 0;
  RtlImageNtHeaderEx(3, (unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &v100);
  v12 = v100;
  LdrpAppHeaders = (__int64)v100;
  v13 = &LdrpHashTable;
  v14 = 32LL;
  do
  {
    v13[1] = v13;
    *v13 = v13;
    v13 += 2;
    --v14;
  }
  while ( v14 );
  RtlImageNtHeaderEx(3, a2, 0LL, &v133);
  v15 = *(_DWORD *)(v133 + 80);
  RtlInsertInvertedFunctionTable(a2, v15);
  RtlCreateInvertedFunctionTableCacheEntry(a2, (char *)v15, v16, v17);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1, v18, v19, v20);
  v21 = 0;
  result = LdrpInitializeExecutionOptions(
             (unsigned int)&Length,
             (_DWORD)ProcessEnvironmentBlock,
             a2,
             (unsigned int)&v105,
             (__int64)&v101,
             (__int64)&v132);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v23 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_25;
    v24 = "Initializing the execution options for the process %lx failed with status 0x%08lx\n";
    v25 = 3514;
    goto LABEL_23;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3555,
      (unsigned int)"LdrpInitializeProcess",
      2,
      (__int64)"Initializing process 0x%p\n");
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
  v26 = UseWOW64;
  if ( ProcessInformation )
    v26 = 1;
  UseWOW64 = v26;
  if ( v12 && *((_WORD *)v12 + 12) == 267 && !v26 )
  {
    UseCOR = 1;
    LOBYTE(v12) = 1;
    v96 = (int)v12;
    v21 = 1;
    result = LdrpCorFixupImage((__int64)ProcessEnvironmentBlock->ImageBaseAddress);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v12) = v96;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v27 = RtlImageDirectoryEntryToData((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 1, 0xEu, &v130);
    if ( v27 )
    {
      UseCOR = 1;
      LODWORD(v12) = (unsigned __int8)v12;
      if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
        LODWORD(v12) = 1;
      v96 = (int)v12;
    }
  }
  LdrpSystemDllBase = v112;
  if ( !UseWOW64 )
    SourceString = (PCWSTR)ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout.QuadPart;
  ImagePathName = *(__m128i *)(RtlNormalizeProcessParams((__int64)ProcessEnvironmentBlock->ProcessParameters) + 96);
  v28 = 0;
  v106 = 0;
  if ( UseWOW64 || UseCOR && v21 )
  {
    v29 = 0LL;
  }
  else
  {
    v29 = RtlImageDirectoryEntryToData((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 1, 0xAu, &v106);
    v28 = v106;
  }
  memset(v140, 0, sizeof(v140));
  v30 = 2;
  LODWORD(v99) = 2;
  LODWORD(v140[0]) = 96;
  if ( v29 && v28 && (v28 == 64 || v28 == *(_DWORD *)v29) )
  {
    if ( v28 >= 0x10 )
      ProcessEnvironmentBlock->NtGlobalFlag &= ~*(_DWORD *)(v29 + 12);
    if ( v28 >= 0x14 )
      ProcessEnvironmentBlock->NtGlobalFlag |= *(_DWORD *)(v29 + 16);
    if ( v28 >= 0x18 && *(_DWORD *)(v29 + 20) )
      RtlpTimeout = -10000LL * *(int *)(v29 + 20);
    if ( v28 >= 0x4C )
    {
      v31 = *(_DWORD *)(v29 + 72);
      if ( v31 )
      {
        if ( (v31 & 0xFFFF0FFF) != 0 )
          v30 = v31 & 0xFFFF0FFF;
        LODWORD(v99) = v30;
        RtlHeapProcessFlags = v31 & 0xF000;
      }
    }
    if ( v28 >= 0x20 )
    {
      v32 = v140[3];
      if ( *(_QWORD *)(v29 + 24) )
        v32 = *(_QWORD *)(v29 + 24);
      v140[3] = v32;
    }
    if ( v28 >= 0x28 )
    {
      v33 = v140[4];
      if ( *(_QWORD *)(v29 + 32) )
        v33 = *(_QWORD *)(v29 + 32);
      v140[4] = v33;
    }
    if ( v28 >= 0x38 )
    {
      v34 = v140[5];
      if ( *(_QWORD *)(v29 + 48) )
        v34 = *(_QWORD *)(v29 + 48);
      v140[5] = v34;
    }
    if ( v28 >= 0x40 )
    {
      v35 = v140[6];
      if ( *(_QWORD *)(v29 + 56) )
        v35 = *(_QWORD *)(v29 + 56);
      v140[6] = v35;
    }
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
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
  while ( v37 <= qword_180144D60 );
  *v37 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, &RtlpStaticDebugInfo, &unk_180144D90, 8LL);
  ApplicationKeyOption = 0;
  ProcessEnvironmentBlock->FlsBitmap = &FlsBitMap;
  ProcessEnvironmentBlock->TlsBitmap = &TlsBitMap;
  ProcessEnvironmentBlock->TlsExpansionBitmap = &TlsExpansionBitMap;
  FlsBitMap = 128;
  qword_180145318 = (__int64)ProcessEnvironmentBlock->FlsBitmapBits;
  ProcessEnvironmentBlock->FlsBitmapBits[0] |= 1u;
  ProcessEnvironmentBlock->FlsListHead.Blink = &ProcessEnvironmentBlock->FlsListHead;
  ProcessEnvironmentBlock->FlsListHead.Flink = &ProcessEnvironmentBlock->FlsListHead;
  TlsBitMap = 64;
  qword_1801452A8 = (__int64)ProcessEnvironmentBlock->TlsBitmapBits;
  ProcessEnvironmentBlock->TlsBitmapBits[0] |= 1u;
  TlsExpansionBitMap = 1024;
  qword_1801452C8 = (__int64)ProcessEnvironmentBlock->TlsExpansionBitmapBits;
  ProcessEnvironmentBlock->TlsExpansionBitmapBits[0] |= 1u;
  if ( UseWOW64 )
    RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 0, 0x13u);
  RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 4u, 1u);
  RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v38 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v104 = 24;
    if ( (int)LdrQueryImageFileExecutionOptions((int)&Length, (int)L"StackTraceDatabaseSizeInMb", 4, (int)&v104, 4, 0LL) >= 0
      && v104 >= 0x18 )
    {
      if ( v104 <= 0x80 )
        v39 = v104 << 20;
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
        3911,
        (unsigned int)"LdrpInitializeProcess",
        2,
        (__int64)"Stack trace database size is %Id Mb\n");
    v134[0] = 0LL;
    v134[1] = 0LL;
    v134[2] = v39;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v134);
    v38 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v38 )
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
  ProcessEnvironmentBlock->FastPebLock = (_RTL_CRITICAL_SECTION *)&FastPebLock;
  RtlInitializeHeapManager();
  if ( (qword_1801552E8 & 0x3000) == 0x1000 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( UseWOW64 || *((_WORD *)v100 + 12) == 267 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v40 = (unsigned int)v99;
  }
  else
  {
    v40 = (unsigned int)v99;
    if ( *((_WORD *)v100 + 36) <= 3u && *((_WORD *)v100 + 37) < 0x33u )
      v40 = (unsigned int)v99 | 0x10000;
    v41 = *((_QWORD *)v100 + 15);
    v42 = *((_QWORD *)v100 + 14);
  }
  Heap = RtlCreateHeap(v40, 0LL, v42, v41, 0LL, (__int64)v140);
  v44 = (void *)Heap;
  if ( !Heap )
  {
    v45 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_123;
    v46 = "Creating the process heap failed\n";
    v47 = 4006;
    goto LABEL_122;
  }
  ProcessEnvironmentBlock->ProcessHeap = (void *)Heap;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  result = RtlAllocateActivationContextStack((__int64 *)&v113->ActivationContextStackPointer);
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
  v99 = ProcessEnvironmentBlock->ProcessParameters;
  ImagePathName = (__m128i)v99->ImagePathName;
  v111 = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( v105 || v101 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v101,
                             (__int64)v105,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v102,
                             4,
                             v94,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801420A8 && v102 )
    {
      dword_1801420A8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  RtlInitUnicodeStringEx((__int64)&v122, 2147352624LL);
  v48 = v122.Length + 40;
  v49 = RtlAllocateHeap((__int64)v44, 0, v122.Length + 38 + 2LL);
  if ( !v49 )
    return -1073741801;
  LOWORD(v114) = 0;
  WORD1(v114) = v48;
  *((_QWORD *)&v114 + 1) = v49;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v114, (__int16 *)&v122);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v114, (__int16 *)SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 0x42) != 2 )
  {
    v50 = 48LL;
    v125 = 48;
    v126 = 0LL;
    v128 = 64;
    v127 = &unk_180106040;
    v129 = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3LL, &v125);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( UseWOW64
        && (v125 = 48,
            v126 = 0LL,
            v128 = 64,
            v127 = &unk_180106030,
            v129 = 0LL,
            result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle32, 3LL, &v125),
            ApplicationKeyOption = result,
            result < 0) )
      {
        v23 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v25 = 4248;
          goto LABEL_143;
        }
      }
      else
      {
        v125 = 48;
        v126 = LdrpKnownDllDirectoryHandle;
        v128 = 64;
        v127 = &unk_180106050;
        v129 = 0LL;
        result = ZwOpenSymbolicLinkObject(&Handle, 1LL, &v125);
        ApplicationKeyOption = result;
        if ( result >= 0 )
        {
          while ( 1 )
          {
            v51 = RtlAllocateHeap((__int64)v44, 0, v50);
            v119 = v51;
            if ( !v51 )
              return -1073741801;
            LdrpKnownDllPath = 0;
            word_180144ED2 = v50;
            qword_180144ED8 = v51;
            result = NtQuerySymbolicLinkObject(Handle, &LdrpKnownDllPath, &v118);
            ApplicationKeyOption = result;
            if ( result >= 0 )
            {
              NtClose(Handle);
              goto LABEL_158;
            }
            if ( result != -1073741789 )
            {
              v23 = LdrpDebugFlags;
              if ( (LdrpDebugFlags & 3) == 0 )
                goto LABEL_25;
              v24 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
              v25 = 4309;
              goto LABEL_23;
            }
            RtlFreeHeap((__int64)v44, 0, v119);
            v50 = v118;
          }
        }
        v23 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v25 = 4274;
          goto LABEL_143;
        }
      }
    }
    else
    {
      v23 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v25 = 4218;
LABEL_143:
        v24 = "Failed to open %wZ with status 0x%08lx\n";
LABEL_23:
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          v25,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)v24);
LABEL_24:
        result = ApplicationKeyOption;
        v23 = LdrpDebugFlags;
      }
    }
LABEL_25:
    if ( (v23 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
LABEL_158:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v122;
    v52 = v99;
  }
  else
  {
    v52 = v99;
    DosPath = (__m128i)v99->CurrentDirectory.DosPath;
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)&v99->CurrentDirectory.DosPath.Length;
    v54 = (unsigned __int16 *)_mm_srli_si128(DosPath, 8).m128i_u64[0];
    UnicodeString.Buffer = v54;
    if ( !v54 || !UnicodeString.Length || !*v54 )
    {
      v55 = (unsigned __int16 *)RtlAllocateHeap((__int64)v44, 0, 8LL);
      UnicodeString.Buffer = v55;
      if ( !v55 )
      {
        v45 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v46 = "Allocating a buffer to hold the current working directory failed\n";
          v47 = 4359;
LABEL_122:
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            v47,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)v46);
          v45 = LdrpDebugFlags;
          goto LABEL_123;
        }
        goto LABEL_123;
      }
      v107 = 0;
      *(_DWORD *)v55 = MEMORY[0x7FFE0030];
      v55[2] = MEMORY[0x7FFE0034];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  if ( (ProcessEnvironmentBlock->BitField & 0x10) != 0 && v52->DllPath.Length )
  {
    LdrpAppPackagesPath = v52->DllPath;
    LdrSetDefaultDllDirectories(4096LL);
  }
  else
  {
    RtlInitUnicodeString(&LdrpAppPackagesPath, 0LL);
    v56 = (unsigned __int16)v114 + 2 * (v122.Length + 10LL);
    if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
      v56 += (unsigned __int16)v114 + 22LL;
    *((_QWORD *)&v108 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v56);
    if ( !*((_QWORD *)&v108 + 1) )
    {
      v45 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v46 = "Failed to allocate the system dirs string!\n";
        v47 = 4425;
        goto LABEL_122;
      }
LABEL_123:
      if ( (v45 & 0x10) != 0 )
        __debugbreak();
      return -1073741801;
    }
    LOWORD(v108) = 0;
    WORD1(v108) = v56;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v108, (__int16 *)&v114);
    RtlAppendUnicodeToString((unsigned __int16 *)&v108, L";");
    if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v108, (__int16 *)&v114);
      RtlAppendUnicodeToString((unsigned __int16 *)&v108, L"forwarders;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v108, (__int16 *)&v122);
    RtlAppendUnicodeToString((unsigned __int16 *)&v108, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v108, (__int16 *)&v122);
    RtlAppendUnicodeToString((unsigned __int16 *)&v108, L";");
    RtlpSystemDirs = v108;
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v52->DllPath.Length = 0;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  if ( (ProcessEnvironmentBlock->BitField & 0x10) == 0 && v52->DllPath.Length )
    LdrSetDllDirectory((__int64)&v52->DllPath);
  RtlImageNtHeaderEx(3, v112, 0LL, v121);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v58 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v45 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v46 = "Allocating a data table entry for the system DLL failed\n";
      v47 = 4524;
      goto LABEL_122;
    }
    goto LABEL_123;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v59 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v59 + 248) -= qword_180155298;
  v59 += 72LL;
  *(_OWORD *)v59 = v114;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v59, NtDllName);
  v60 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)NtDllName;
  *(_QWORD *)(v60 + 48) = v112;
  LdrpInsertDataTableEntry(v60);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v121[0], v61, v62);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  v63 = *(_QWORD *)(LdrpNtDllDataTableEntry + 152);
  *(_DWORD *)(v63 + 56) = 9;
  RtlInitializeHistoryTable(v63, v64, v65, v66);
  v67 = qword_180145230;
  *(_QWORD *)(v58 + 32) = qword_180145230;
  *(_QWORD *)(v58 + 40) = &qword_180145230;
  if ( *(__int64 **)(v67 + 8) != &qword_180145230 )
    __fastfail(3u);
  *(_QWORD *)(v67 + 8) = v58 + 32;
  qword_180145230 = v58 + 32;
  qword_180145198 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  RtlInitializeCriticalSection((__int64)&LdrpWorkQueueLock);
  result = LdrpCreateLoaderEvents();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v23 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v24 = "Failed to initialize Parallel loader, st = 0x%x\n";
      v25 = 4602;
      goto LABEL_23;
    }
    goto LABEL_25;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v141);
  memset(v135, 0, 0x98uLL);
  *(_QWORD *)&v135[1] = v141;
  DWORD2(v135[1]) = 512;
  v135[0] = ImagePathName;
  *(_QWORD *)&v135[2] = &ApplicationKeyOption;
  v68 = LdrpAllocateModuleEntry((__int64)v135);
  v119 = v68;
  if ( !v68 )
  {
    v45 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v46 = "Allocating a data table entry for the executable failed\n";
      v47 = 4623;
      goto LABEL_122;
    }
    goto LABEL_123;
  }
  LdrpImageEntry = v68;
  v69 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v69;
  }
  while ( v69 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v70 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v70 + 104) |= 4u;
  v71 = v119;
  v72 = v96;
  if ( UseCOR )
  {
    v73 = *(_DWORD *)(v70 + 104) | 0x400000;
    *(_DWORD *)(v70 + 104) = v73;
    if ( v72 )
      *(_DWORD *)(v70 + 104) = v73 | 0x1000000;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(v70 + 248) = 0LL;
  v74 = 0LL;
  v75 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v75 )
  {
    while ( (unsigned __int64)v75 > ImagePathName.m128i_i64[1] )
    {
      if ( *--v75 == 92 )
      {
        v74 = v75 + 1;
        break;
      }
    }
  }
  if ( v74 )
  {
    v76 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - (_WORD)v74;
    *(_WORD *)(v70 + 88) = v76;
    if ( (unsigned __int64)(ImagePathName.m128i_u16[1] - ImagePathName.m128i_u16[0]) >= 2 )
      v76 += 2;
    *(_WORD *)(v70 + 90) = v76;
    *(_QWORD *)(v70 + 96) = v74;
  }
  else
  {
    *(_OWORD *)(v70 + 88) = *(_OWORD *)(v71 + 72);
  }
  v77 = (__int64)ProcessEnvironmentBlock->ImageBaseAddress;
  if ( *((_QWORD *)v100 + 6) != v77 && !v72 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v77);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v70 = LdrpImageEntry;
  }
  *(_QWORD *)(v70 + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v70);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4743,
      (unsigned int)"LdrpInitializeProcess",
      2,
      (__int64)"Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n");
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, v100, v78, v79);
  result = LdrpProcessMappedModule(LdrpImageEntry, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  ApplicationKeyOption = RtlpInitCurrentDir(&UnicodeString.Length);
  if ( ApplicationKeyOption < 0 )
  {
    v80 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4780,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n");
      v80 = LdrpDebugFlags;
    }
    if ( (v80 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v107 )
    RtlFreeAnsiString(&UnicodeString);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
  {
    v81 = LdrpAllocateModuleEntry(0LL);
    v82 = (_QWORD *)v81;
    if ( !v81 )
    {
      v45 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v46 = "Allocating a data table entry for the application verifier DLL failed\n";
        v47 = 4803;
        goto LABEL_122;
      }
      goto LABEL_123;
    }
    *(_DWORD *)(*(_QWORD *)(v81 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v81 + 152) - 52LL) = -1;
    v83 = v132;
    *(_DWORD *)(v81 + 104) |= *(_DWORD *)(v132 + 104);
    *(_QWORD *)(v81 + 248) = *(_QWORD *)(v83 + 248);
    *(_WORD *)(v81 + 110) = 0;
    *(_OWORD *)(v81 + 72) = *(_OWORD *)(v83 + 72);
    *(_OWORD *)(v81 + 88) = *(_OWORD *)(v83 + 88);
    *(_DWORD *)(v81 + 128) = *(_DWORD *)(v83 + 128);
    *(_QWORD *)(v81 + 48) = *(_QWORD *)(v83 + 48);
    LdrpInsertDataTableEntry(v81);
    LdrpLogDllState(v82[6], (__int64)(v82 + 9), 0x14A5u);
    result = RtlImageNtHeaderEx(3, v82[6], 0LL, v121);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex((__int64)v82, v121[0], v84, v85);
    result = LdrpProcessMappedModule((__int64)v82, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v82[7] = *(_QWORD *)(v83 + 56);
    LdrpLogDllState(v82[6], (__int64)(v82 + 9), 0x14ADu);
    *(_DWORD *)(v82[19] + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, v112, 0LL);
    }
    else
    {
      v97 = 0;
      result = LdrpInitializeGraphRecurse(v82[19], 0LL, &v97);
    }
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v105 )
    {
      NtClose(v105);
      v105 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v101 )
    {
      NtClose(v101);
      v101 = 0LL;
    }
    result = LdrpLoadWow64((__int16 *)&v114);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      v86 = (void (__fastcall *)(__int64))Wow64LdrpInitialize;
      _guard_check_icall_fptr();
      v86(v117);
LABEL_306:
      if ( v105 )
        NtClose(v105);
      if ( v101 )
        NtClose(v101);
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
    v87 = v96;
    if ( (_BYTE)v96 )
    {
      result = LdrpCorValidateImage((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v113->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v117 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v87 = v96;
  }
  result = LdrpInitializeTls();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v23 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v24 = "Initializing TLS slots failed with status 0x%08lx\n";
      v25 = 5018;
      goto LABEL_23;
    }
    goto LABEL_25;
  }
  v124 = 0LL;
  if ( (unsigned __int16)(*((_WORD *)v100 + 46) - 2) <= 1u )
  {
    result = LdrLoadDll(2049LL, 0LL, (__int64)&LdrpKernel32DllName, &v120);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v23 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v24 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
          v25 = 5158;
          goto LABEL_23;
        }
        goto LABEL_25;
      }
      result = LdrLoadDll(2049LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v120);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v23 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v24 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
          v25 = 5131;
          goto LABEL_23;
        }
        goto LABEL_25;
      }
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v23 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v24 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
          v25 = 5147;
          goto LABEL_23;
        }
        goto LABEL_25;
      }
      ApplicationKeyOption = 0;
    }
    else
    {
      result = LdrGetProcedureAddress(v120, &qword_180106010, 0LL, (__int64)&Kernel32ThreadInitThunkFunction);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v23 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5063,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n");
          goto LABEL_24;
        }
        goto LABEL_25;
      }
      LdrGetProcedureAddress(v120, &qword_180106020, 0LL, (__int64)&v124);
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
  v88 = SourceString;
  if ( SourceString && *SourceString )
  {
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v88, (__int64)v88);
  }
  v89 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v89 = 1;
  RtlpForceCSDebugInfoCreation = v89;
  LdrpEnableParallelLoading(v99->LoaderThreads);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **(_DWORD **)&v135[2] = 0;
  if ( v87 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    DWORD2(v135[1]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v135);
    LdrpDrainWorkQueue(1);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
      goto LABEL_289;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *(__int64 *)&v135[2]);
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_289:
    v23 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v24 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v25 = 5364;
      goto LABEL_23;
    }
    goto LABEL_25;
  }
  LdrInitState = 2;
  if ( ProcessEnvironmentBlock->BeingDebugged )
    LdrpDoDebuggerBreak();
  LdrpDropLastInProgressCount();
  v90 = Kernel32ThreadInitThunkFunction;
  if ( !Kernel32ThreadInitThunkFunction
    || (_guard_check_icall_fptr(), result = v90(1LL, 0LL, 0LL), ApplicationKeyOption = result, result >= 0)
    && (result = LdrpInitializePerUserWindowsDirectory(v124), ApplicationKeyOption = result, result >= 0) )
  {
    LdrpProcessInitContextRecord = v117;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v98[0] = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), *(__int64 *)&v135[2], v98);
    LdrpReleaseLoaderLock(v91, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *(__int64 *)&v135[2]);
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    LdrpReleaseDllPath((__int64)v141);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v23 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v24 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v25 = 5499;
        goto LABEL_23;
      }
      goto LABEL_25;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v136 = 72LL;
      v137 = 1;
      memset(v138, 0, sizeof(v138));
      RtlActivateActivationContextUnsafeFast((__int64)&v136, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v136);
    }
    if ( g_ShimsEnabled )
    {
      v92 = (unsigned __int8 (__fastcall *)(unsigned __int16 *, PCWSTR))(__ROR8__(
                                                                           g_pfnSE_InstallAfterInit,
                                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
      _guard_check_icall_fptr();
      if ( !v92(&Length, SourceString) )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
    }
    PostProcessInitRoutine = ProcessEnvironmentBlock->PostProcessInitRoutine;
    if ( PostProcessInitRoutine )
    {
      _guard_check_icall_fptr();
      PostProcessInitRoutine();
    }
    goto LABEL_306;
  }
  return result;
}
