/*
 * XREFs of LdrpInitializeProcess @ 0x180091E34
 * Callers:
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpAllocateModuleEntry @ 0x18000F710 (LdrpAllocateModuleEntry.c)
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     LdrLoadDll @ 0x180011F30 (LdrLoadDll.c)
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016370 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpMapAndSnapDependency @ 0x180016434 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018750 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     EtwEventRegister @ 0x18002A3C0 (EtwEventRegister.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B290 (RtlInitializeCriticalSectionEx.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     LdrpAcquireLoaderLock @ 0x18002D51C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA88 (LdrpPrepareModuleForExecution.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     LdrpInsertDataTableEntry @ 0x18002F158 (LdrpInsertDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x18002F938 (LdrpProcessMappedModule.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetBits @ 0x1800506C0 (RtlSetBits.c)
 *     LdrpInitializeTls @ 0x180051188 (LdrpInitializeTls.c)
 *     RtlInitializeHeapManager @ 0x18005D72C (RtlInitializeHeapManager.c)
 *     LdrpInitializePolicy @ 0x18005DE2C (LdrpInitializePolicy.c)
 *     RtlpInitEnvironmentBlock @ 0x18005EE48 (RtlpInitEnvironmentBlock.c)
 *     RtlInitializeCriticalSection @ 0x180066F90 (RtlInitializeCriticalSection.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B6A4 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeGraphRecurse @ 0x1800722B8 (LdrpInitializeGraphRecurse.c)
 *     LdrpEnableParallelLoading @ 0x180072C64 (LdrpEnableParallelLoading.c)
 *     RtlEncodePointer @ 0x180074C40 (RtlEncodePointer.c)
 *     TpInitializePackage @ 0x180075CE8 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x180075D90 (RtlCreateTagHeap.c)
 *     LdrpLoadWow64 @ 0x180075DF0 (LdrpLoadWow64.c)
 *     LdrGetProcedureAddress @ 0x180075ED0 (LdrGetProcedureAddress.c)
 *     RtlWow64GetCurrentCpuArea @ 0x1800764B0 (RtlWow64GetCurrentCpuArea.c)
 *     RtlInitializeSListHead @ 0x180076C90 (RtlInitializeSListHead.c)
 *     RtlpInitCurrentDir @ 0x1800793F8 (RtlpInitCurrentDir.c)
 *     RtlAllocateActivationContextStack @ 0x18007A4E0 (RtlAllocateActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     RtlInitializeHistoryTable @ 0x18007C080 (RtlInitializeHistoryTable.c)
 *     LdrpInitShimEngine @ 0x18007DB94 (LdrpInitShimEngine.c)
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EFA0 (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x18007F040 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x18008020C (LdrpCodeAuthzInitialize.c)
 *     RtlpInitParameterBlock @ 0x180080F98 (RtlpInitParameterBlock.c)
 *     LdrpCreateLoaderEvents @ 0x180081C90 (LdrpCreateLoaderEvents.c)
 *     SbObtainTraceHandle @ 0x1800827E4 (SbObtainTraceHandle.c)
 *     LdrpInsertModuleToIndex @ 0x1800828D8 (LdrpInsertModuleToIndex.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C40 (LdrpProtectAndRelocateImage.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D2C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     LdrpCorProcessImports @ 0x180087948 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x1800885AC (LdrpCorValidateImage.c)
 *     LdrpCaptureCriticalThunks @ 0x18008A034 (LdrpCaptureCriticalThunks.c)
 *     RtlNormalizeProcessParams @ 0x18008CE70 (RtlNormalizeProcessParams.c)
 *     LdrpCorFixupImage @ 0x1800908B0 (LdrpCorFixupImage.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C48 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x180094344 (LdrpInitializeNlsInfo.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x1800A6F20 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A87D0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A8D70 (NtQuerySymbolicLinkObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     InterlockedPushListSList @ 0x1800A9DE0 (InterlockedPushListSList.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     LdrpCheckAppDirType @ 0x1800D1E74 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D20A0 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExceptionTable @ 0x1800D25A4 (LdrpInitializeExceptionTable.c)
 *     AVrfInitializeVerifier @ 0x1800D5F68 (AVrfInitializeVerifier.c)
 *     RtlControlStackTraceDataBase @ 0x1800F251C (RtlControlStackTraceDataBase.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r14
  _PEB *ProcessEnvironmentBlock; // rdi
  _QWORD *ImageBaseAddress; // rax
  unsigned int NumberOfProcessors; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  wchar_t *Buffer; // rax
  __int16 v12; // r8
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // r13d
  int result; // eax
  char v18; // cl
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // r12d
  __int64 v22; // r13
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  _QWORD *v31; // rcx
  char v32; // al
  unsigned __int64 v33; // r12
  int v34; // ecx
  __int64 v35; // r9
  unsigned __int64 v36; // r8
  __int64 Heap; // rax
  void *v38; // r13
  char v39; // al
  void *v40; // rax
  __int64 v41; // rcx
  __int16 v42; // r12
  __int64 v43; // rax
  unsigned __int64 v44; // r12
  UNICODE_STRING *v45; // rax
  int v46; // edx
  const WCHAR *v47; // rdx
  __int64 v48; // rax
  __m128i DosPath; // xmm0
  wchar_t *v50; // xmm0_8
  wchar_t *v51; // rax
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r13
  __int16 v54; // dx
  __int64 v55; // r12
  __int64 ModuleEntry; // rax
  __int64 v57; // r13
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r10
  __int64 v67; // rdx
  __int64 v68; // rdx
  char v69; // r11
  int v70; // eax
  _WORD *v71; // r9
  _WORD *v72; // rax
  __int16 v73; // r8
  void *v74; // rcx
  __int64 v75; // r13
  __int64 v76; // r8
  __int64 v77; // r9
  int inited; // eax
  char v79; // cl
  __int64 v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // r13
  __int64 v83; // r12
  __int64 v84; // r8
  __int64 v85; // r9
  const WCHAR *v86; // r13
  char v87; // al
  __int64 v88; // rcx
  __int64 v89; // [rsp+28h] [rbp-3E0h]
  __int64 v90; // [rsp+28h] [rbp-3E0h]
  __int64 v91; // [rsp+30h] [rbp-3D8h]
  __int64 v92; // [rsp+38h] [rbp-3D0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3B8h] BYREF
  int v94; // [rsp+54h] [rbp-3B4h]
  char v95; // [rsp+58h] [rbp-3B0h] BYREF
  char v96; // [rsp+59h] [rbp-3AFh] BYREF
  char v97[6]; // [rsp+5Ah] [rbp-3AEh] BYREF
  _RTL_USER_PROCESS_PARAMETERS *v98; // [rsp+60h] [rbp-3A8h]
  __int16 v99[2]; // [rsp+68h] [rbp-3A0h] BYREF
  int v100; // [rsp+6Ch] [rbp-39Ch] BYREF
  __int128 v101; // [rsp+70h] [rbp-398h] BYREF
  unsigned int v102; // [rsp+80h] [rbp-388h] BYREF
  int v103; // [rsp+84h] [rbp-384h] BYREF
  int v104; // [rsp+88h] [rbp-380h]
  HANDLE v105[2]; // [rsp+90h] [rbp-378h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-368h] BYREF
  unsigned __int16 Length; // [rsp+B0h] [rbp-358h] BYREF
  __int16 v108; // [rsp+B2h] [rbp-356h]
  unsigned __int64 v109; // [rsp+B8h] [rbp-350h]
  __int64 v110; // [rsp+C0h] [rbp-348h] BYREF
  HANDLE v111; // [rsp+C8h] [rbp-340h] BYREF
  __int128 v112; // [rsp+D0h] [rbp-338h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-328h] BYREF
  unsigned int v114; // [rsp+F0h] [rbp-318h] BYREF
  char *v115; // [rsp+F8h] [rbp-310h] BYREF
  __int64 v116; // [rsp+100h] [rbp-308h]
  unsigned __int64 v117; // [rsp+108h] [rbp-300h] BYREF
  __int64 v118; // [rsp+110h] [rbp-2F8h]
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp-2F0h] BYREF
  UNICODE_STRING v120; // [rsp+130h] [rbp-2D8h] BYREF
  struct _TEB *v121; // [rsp+140h] [rbp-2C8h]
  __int64 v122; // [rsp+148h] [rbp-2C0h] BYREF
  PCWSTR SourceString; // [rsp+150h] [rbp-2B8h]
  __int64 (__fastcall *v124)(_BYTE *, __int64); // [rsp+158h] [rbp-2B0h] BYREF
  HANDLE Handle; // [rsp+160h] [rbp-2A8h] BYREF
  int v126; // [rsp+168h] [rbp-2A0h] BYREF
  __int64 v127; // [rsp+170h] [rbp-298h]
  UNICODE_STRING *p_DestinationString; // [rsp+178h] [rbp-290h]
  int v129; // [rsp+180h] [rbp-288h]
  __int128 v130; // [rsp+188h] [rbp-280h]
  unsigned __int64 v131; // [rsp+198h] [rbp-270h]
  __int64 v132; // [rsp+1A0h] [rbp-268h] BYREF
  int v133; // [rsp+1A8h] [rbp-260h] BYREF
  __int64 ProcessInformation; // [rsp+1B0h] [rbp-258h] BYREF
  __int64 SystemInformation; // [rsp+1B8h] [rbp-250h] BYREF
  _QWORD v136[4]; // [rsp+1C0h] [rbp-248h] BYREF
  _OWORD v137[10]; // [rsp+1E0h] [rbp-228h] BYREF
  __int64 v138; // [rsp+280h] [rbp-188h] BYREF
  int v139; // [rsp+288h] [rbp-180h]
  _BYTE v140[56]; // [rsp+290h] [rbp-178h] BYREF
  _QWORD *v141; // [rsp+2D0h] [rbp-138h] BYREF
  _QWORD v142[12]; // [rsp+2F0h] [rbp-118h] BYREF
  __int64 v143[16]; // [rsp+350h] [rbp-B8h] BYREF

  v116 = a2;
  v118 = a1;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v121 = v3;
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( (ProcessEnvironmentBlock->BitField & 1) != 0 )
  {
    ZwQueryVirtualMemory(-1LL, ProcessEnvironmentBlock->ImageBaseAddress, 3LL, &v141);
    ImageBaseAddress = ProcessEnvironmentBlock->ImageBaseAddress;
    if ( v141 != ImageBaseAddress )
      *v141 = ImageBaseAddress;
  }
  PebLdr = 88;
  byte_1801523C4 = 1;
  qword_1801523D8 = (__int64)&qword_1801523D0;
  qword_1801523D0 = (__int64)&qword_1801523D0;
  qword_1801523E8 = (__int64)&qword_1801523E0;
  qword_1801523E0 = (__int64)&qword_1801523E0;
  qword_1801523F8 = (__int64)&qword_1801523F0;
  qword_1801523F0 = (__int64)&qword_1801523F0;
  byte_180152408 = 0;
  qword_180152410 = 0LL;
  ProcessEnvironmentBlock->Ldr = (_PEB_LDR_DATA *)&PebLdr;
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  NumberOfProcessors = ProcessEnvironmentBlock->NumberOfProcessors;
  v7 = 0;
  if ( NumberOfProcessors > 1 )
    v7 = 1024;
  SRWLockSpinCount = v7;
  v8 = 0;
  if ( NumberOfProcessors > 1 )
    v8 = 1024;
  ConditionVariableSpinCount = v8;
  v9 = RtlpWaitOnAddressSpinCount;
  if ( NumberOfProcessors == 1 )
    v9 = 0;
  RtlpWaitOnAddressSpinCount = v9;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  Buffer = ProcessParameters->ImagePathName.Buffer;
  if ( (ProcessParameters->Flags & 1) == 0 )
    Buffer = (wchar_t *)((char *)Buffer + (_QWORD)ProcessParameters);
  v109 = (unsigned __int64)Buffer;
  Length = ProcessParameters->ImagePathName.Length;
  v12 = Length + 2;
  v108 = Length + 2;
  if ( Length >= 8u && *Buffer == 92 && Buffer[1] == 63 && Buffer[2] == 63 && Buffer[3] == 92 )
  {
    Length -= 8;
    v108 = v12 - 8;
    v109 = (unsigned __int64)(Buffer + 4);
    ProcessParameters->ImagePathName.Length -= 8;
    ProcessParameters->ImagePathName.MaximumLength -= 8;
    ProcessParameters->ImagePathName.Buffer += 4;
  }
  v104 = 1;
  UseCOR = 0;
  LOBYTE(v94) = 0;
  v103 = 0;
  RtlImageNtHeaderEx(3, (unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &v110);
  v13 = v110;
  LdrpAppHeaders = v110;
  v14 = &LdrpHashTable;
  v15 = 32LL;
  v100 = 32;
  do
  {
    v14[1] = v14;
    *v14 = v14;
    v14 += 2;
    --v15;
  }
  while ( v15 );
  LdrpInitializeExceptionTable(a2);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  v16 = 0;
  result = LdrpInitializeExecutionOptions(
             (unsigned int)&Length,
             (_DWORD)ProcessEnvironmentBlock,
             a2,
             (unsigned int)&v111,
             (__int64)v105,
             (__int64)&v132);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_24;
    LODWORD(v89) = v3->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3518,
      (unsigned int)"LdrpInitializeProcess",
      0,
      (__int64)"Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v89,
      result);
    goto LABEL_23;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3559,
      (unsigned int)"LdrpInitializeProcess",
      2,
      (__int64)"Initializing process 0x%p\n",
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
  if ( v13 && *(_WORD *)(v13 + 24) == 267 && !v19 )
  {
    UseCOR = 1;
    LOBYTE(v13) = 1;
    v94 = v13;
    v16 = 1;
    result = LdrpCorFixupImage((__int64)ProcessEnvironmentBlock->ImageBaseAddress);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v13) = v94;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v20 = RtlImageDirectoryEntryToData((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 1, 0xEu, &v133);
    if ( v20 )
    {
      UseCOR = 1;
      LODWORD(v13) = (unsigned __int8)v13;
      if ( (*(_BYTE *)(v20 + 16) & 1) != 0 )
        LODWORD(v13) = 1;
      v94 = v13;
    }
  }
  LdrpSystemDllBase = v116;
  if ( !UseWOW64 )
    SourceString = (PCWSTR)ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout.QuadPart;
  ImagePathName = *(__m128i *)(RtlNormalizeProcessParams((__int64)ProcessEnvironmentBlock->ProcessParameters) + 96);
  v21 = 0;
  v100 = 0;
  if ( UseWOW64 || UseCOR && v16 )
  {
    v22 = 0LL;
  }
  else
  {
    v22 = RtlImageDirectoryEntryToData((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 1, 0xAu, &v100);
    v21 = v100;
  }
  memset(v142, 0, sizeof(v142));
  v23 = 2;
  LODWORD(v98) = 2;
  LODWORD(v142[0]) = 96;
  if ( v22 && v21 && (v21 == 64 || v21 == *(_DWORD *)v22) )
  {
    if ( v21 >= 0x10 )
      ProcessEnvironmentBlock->NtGlobalFlag &= ~*(_DWORD *)(v22 + 12);
    if ( v21 >= 0x14 )
      ProcessEnvironmentBlock->NtGlobalFlag |= *(_DWORD *)(v22 + 16);
    if ( v21 >= 0x18 && *(_DWORD *)(v22 + 20) )
    {
      RtlpTimeout = -10000LL * *(int *)(v22 + 20);
      v23 = 2;
    }
    if ( v21 >= 0x4C )
    {
      v24 = *(_DWORD *)(v22 + 72);
      if ( v24 )
      {
        v25 = v24 & 0xFFFF0FFF;
        if ( v25 )
          v23 = v25;
        LODWORD(v98) = v23;
      }
    }
    if ( v21 >= 0x20 )
    {
      v26 = v142[3];
      if ( *(_QWORD *)(v22 + 24) )
        v26 = *(_QWORD *)(v22 + 24);
      v142[3] = v26;
    }
    if ( v21 >= 0x28 )
    {
      v27 = v142[4];
      if ( *(_QWORD *)(v22 + 32) )
        v27 = *(_QWORD *)(v22 + 32);
      v142[4] = v27;
    }
    if ( v21 >= 0x38 )
    {
      v28 = v142[5];
      if ( *(_QWORD *)(v22 + 48) )
        v28 = *(_QWORD *)(v22 + 48);
      v142[5] = v28;
    }
    if ( v21 >= 0x40 )
    {
      v29 = v142[6];
      if ( *(_QWORD *)(v22 + 56) )
        v29 = *(_QWORD *)(v22 + 56);
      v142[6] = v29;
    }
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
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
  while ( v31 <= qword_180151E60 );
  *v31 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, &RtlpStaticDebugInfo, &unk_180151E90, 8LL);
  ApplicationKeyOption = 0;
  ProcessEnvironmentBlock->FlsBitmap = &FlsBitMap;
  ProcessEnvironmentBlock->TlsBitmap = &TlsBitMap;
  ProcessEnvironmentBlock->TlsExpansionBitmap = &TlsExpansionBitMap;
  FlsBitMap = 128;
  qword_180152378 = (__int64)ProcessEnvironmentBlock->FlsBitmapBits;
  ProcessEnvironmentBlock->FlsBitmapBits[0] |= 1u;
  ProcessEnvironmentBlock->FlsListHead.Blink = &ProcessEnvironmentBlock->FlsListHead;
  ProcessEnvironmentBlock->FlsListHead.Flink = &ProcessEnvironmentBlock->FlsListHead;
  TlsBitMap = 64;
  qword_180152328 = (__int64)ProcessEnvironmentBlock->TlsBitmapBits;
  ProcessEnvironmentBlock->TlsBitmapBits[0] |= 1u;
  TlsExpansionBitMap = 1024;
  qword_1801522F8 = (__int64)ProcessEnvironmentBlock->TlsExpansionBitmapBits;
  ProcessEnvironmentBlock->TlsExpansionBitmapBits[0] |= 1u;
  if ( UseWOW64 )
    RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 0, 0x13u);
  RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 4u, 1u);
  RtlSetBits((__int64)ProcessEnvironmentBlock->TlsBitmap, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v102 = 24;
    if ( (int)LdrQueryImageFileExecutionOptions((int)&Length, (int)L"StackTraceDatabaseSizeInMb", 4, (int)&v102, 4, 0LL) >= 0
      && v102 >= 0x18 )
    {
      if ( v102 <= 0x80 )
        v33 = v102 << 20;
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
        3915,
        (unsigned int)"LdrpInitializeProcess",
        2,
        (__int64)"Stack trace database size is %Id Mb\n",
        v33 >> 20);
    v136[0] = 0LL;
    v136[1] = 0LL;
    v136[2] = v33;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v136);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v32 )
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
  if ( (qword_180163308 & 0x3000) == 0x1000 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( UseWOW64 || *(_WORD *)(v110 + 24) == 267 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v34 = (int)v98;
  }
  else
  {
    v34 = (int)v98;
    if ( *(_WORD *)(v110 + 72) <= 3u && *(_WORD *)(v110 + 74) < 0x33u )
      v34 = (unsigned int)v98 | 0x10000;
    v35 = *(_QWORD *)(v110 + 120);
    v36 = *(_QWORD *)(v110 + 112);
  }
  Heap = RtlCreateHeap(v34, 0LL, v36, v35, 0LL, (__int64)v142);
  v38 = (void *)Heap;
  if ( !Heap )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_122;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4010,
      (unsigned int)"LdrpInitializeProcess",
      0,
      (__int64)"Creating the process heap failed\n");
    goto LABEL_121;
  }
  ProcessEnvironmentBlock->ProcessHeap = (void *)Heap;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
  {
    v40 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
    RtlpExceptionLog2 = (__int64)v40;
    if ( v40 )
      memset(v40, 0, 0x11620uLL);
  }
  result = RtlAllocateActivationContextStack((__int64 *)&v121->ActivationContextStackPointer);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpHeap = (__int64)v38;
  RtlInitializeSListHead(&EtwpFreeRegistrationList);
  ApplicationKeyOption = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)184, &SystemInformation, 8u, 0LL);
  v41 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v41 = SystemInformation;
  RtlpHypervisorSharedUserVa = v41;
  NtdllBaseTag = RtlCreateTagHeap(v38, 0, (__int64)L"NTDLL!", L"!Process");
  result = TpInitializePackage();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  result = RtlpInitEnvironmentBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  v98 = ProcessEnvironmentBlock->ProcessParameters;
  ImagePathName = (__m128i)v98->ImagePathName;
  v109 = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( v111 || v105[0] )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             (__int64)v105[0],
                             (__int64)v111,
                             (__int64)L"DebugProcessHeapOnly",
                             4u,
                             (__int64)&v103,
                             4,
                             v91,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_18014C3F8 && v103 )
    {
      dword_18014C3F8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  RtlInitUnicodeStringEx((__int64)&v120, 2147352624LL);
  v42 = v120.Length + 40;
  v43 = RtlAllocateHeap((__int64)v38, 0, v120.Length + 38 + 2LL);
  if ( !v43 )
    return -1073741801;
  LOWORD(v112) = 0;
  WORD1(v112) = v42;
  *((_QWORD *)&v112 + 1) = v43;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v112, (__int16 *)&v120);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v112, SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 0x42) != 2 )
  {
    v44 = 48LL;
    v126 = 48;
    v127 = 0LL;
    v129 = 64;
    p_DestinationString = (UNICODE_STRING *)&unk_180108AF8;
    v130 = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3LL, &v126);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v91) = result;
        v45 = (UNICODE_STRING *)&unk_180108AF8;
        v46 = 4246;
LABEL_145:
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          v46,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)"Failed to open %wZ with status 0x%08lx\n",
          v45,
          v91);
LABEL_23:
        result = ApplicationKeyOption;
        v18 = LdrpDebugFlags;
        goto LABEL_24;
      }
      goto LABEL_24;
    }
    if ( !UseWOW64 )
    {
LABEL_155:
      v126 = 48;
      v127 = LdrpKnownDllDirectoryHandle;
      v129 = 64;
      p_DestinationString = (UNICODE_STRING *)&unk_180108AD8;
      v130 = 0LL;
      result = ZwOpenSymbolicLinkObject(&Handle, 1LL, &v126);
      ApplicationKeyOption = result;
      if ( result >= 0 )
      {
        while ( 1 )
        {
          v48 = RtlAllocateHeap((__int64)v38, 0, v44);
          v131 = v48;
          if ( !v48 )
            return -1073741801;
          LdrpKnownDllPath = 0;
          word_180151F32 = v44;
          qword_180151F38 = v48;
          result = NtQuerySymbolicLinkObject(Handle, &LdrpKnownDllPath, &v114);
          ApplicationKeyOption = result;
          if ( result >= 0 )
          {
            NtClose(Handle);
            goto LABEL_165;
          }
          if ( result != -1073741789 )
          {
            v18 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_24;
            LODWORD(v90) = result;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              4348,
              (unsigned int)"LdrpInitializeProcess",
              0,
              (__int64)"Querying the known DLL directory link object failed with status 0x%08lx\n",
              v90);
            goto LABEL_23;
          }
          RtlFreeHeap((__int64)v38, 0, v131);
          v44 = v114;
        }
      }
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v91) = result;
        v45 = (UNICODE_STRING *)&unk_180108AD8;
        v46 = 4313;
        goto LABEL_145;
      }
      goto LABEL_24;
    }
    DestinationString.Length = 0;
    *(_QWORD *)&DestinationString.MaximumLength = 0LL;
    *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
    HIWORD(DestinationString.Buffer) = 0;
    RtlWow64GetCurrentCpuArea(v99, 0LL, 0LL);
    if ( v99[0] == 332 )
    {
      v47 = L"\\KnownDlls32";
    }
    else
    {
      if ( v99[0] != 452 )
        goto LABEL_152;
      v47 = L"\\KnownDllsArm32";
    }
    RtlInitUnicodeString(&DestinationString, v47);
LABEL_152:
    v126 = 48;
    v127 = 0LL;
    v129 = 64;
    p_DestinationString = &DestinationString;
    v130 = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle32, 3LL, &v126);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v91) = result;
        v45 = &DestinationString;
        v46 = 4287;
        goto LABEL_145;
      }
LABEL_24:
      if ( (v18 & 0x10) != 0 )
        __debugbreak();
      return result;
    }
    goto LABEL_155;
  }
LABEL_165:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v120;
  }
  else
  {
    DosPath = (__m128i)v98->CurrentDirectory.DosPath;
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)&v98->CurrentDirectory.DosPath.Length;
    v50 = (wchar_t *)_mm_srli_si128(DosPath, 8).m128i_u64[0];
    UnicodeString.Buffer = v50;
    if ( !v50 || !UnicodeString.Length || !*v50 )
    {
      v51 = (wchar_t *)RtlAllocateHeap((__int64)v38, 0, 8uLL);
      UnicodeString.Buffer = v51;
      if ( !v51 )
      {
        v39 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            4398,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Allocating a buffer to hold the current working directory failed\n");
LABEL_121:
          v39 = LdrpDebugFlags;
          goto LABEL_122;
        }
        goto LABEL_122;
      }
      v104 = 0;
      *(_DWORD *)v51 = MEMORY[0x7FFE0030];
      v51[2] = MEMORY[0x7FFE0034];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v52 = (unsigned __int16)v112;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
    v52 = 2LL * (unsigned __int16)v112 + 22;
  v53 = v52;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v53 = v52 + 2 * (v120.Length + 9LL);
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v98->DllPath.Length = 0;
  }
  *((_QWORD *)&v101 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v53);
  if ( !*((_QWORD *)&v101 + 1) )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4481,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Failed to allocate the system dirs string!\n");
      goto LABEL_121;
    }
LABEL_122:
    if ( (v39 & 0x10) != 0 )
      __debugbreak();
    return -1073741801;
  }
  LOWORD(v101) = 0;
  WORD1(v101) = v53;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v101, (__int16 *)&v112);
  v54 = v101;
  *(_WORD *)(*((_QWORD *)&v101 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v101 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v101;
  LdrpSystem32 = v101;
  LOWORD(LdrpSystem32) = v54 - 2;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v101, (__int16 *)&v112);
    RtlAppendUnicodeToString((unsigned __int16 *)&v101, L"forwarders;");
  }
  if ( v53 > v52 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v101, (__int16 *)&v120);
    RtlAppendUnicodeToString((unsigned __int16 *)&v101, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v101, (__int16 *)&v120);
    RtlAppendUnicodeToString((unsigned __int16 *)&v101, L";");
    RtlpSystemDirs = v101;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  v55 = v116;
  RtlImageNtHeaderEx(3, v116, 0LL, &v115);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v57 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4588,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Allocating a data table entry for the system DLL failed\n");
      goto LABEL_121;
    }
    goto LABEL_122;
  }
  LdrpNtDllDataTableEntry = ModuleEntry;
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v58 = LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  *(_QWORD *)(v58 + 248) -= qword_1801632B8;
  v58 += 72LL;
  *(_OWORD *)v58 = v112;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v58, NtDllName);
  v59 = LdrpNtDllDataTableEntry;
  *(_OWORD *)(LdrpNtDllDataTableEntry + 88) = *(_OWORD *)NtDllName;
  *(_QWORD *)(v59 + 48) = v55;
  LdrpInsertDataTableEntry(v59, v60);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, v115, v61, v62);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v63 = (_QWORD *)(v57 + 32);
  v64 = qword_1801523F0;
  if ( *(__int64 **)(qword_1801523F0 + 8) != &qword_1801523F0 )
    __fastfail(3u);
  *v63 = qword_1801523F0;
  *(_QWORD *)(v57 + 40) = &qword_1801523F0;
  *(_QWORD *)(v64 + 8) = v63;
  qword_1801523F0 = v57 + 32;
  qword_1801522B8 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  RtlInitializeCriticalSection((__int64)&LdrpWorkQueueLock);
  result = LdrpCreateLoaderEvents();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v90) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4666,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Failed to initialize Parallel loader, st = 0x%x\n",
        v90);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v143);
  memset(v137, 0, 0x98uLL);
  *(_QWORD *)&v137[1] = v143;
  DWORD2(v137[1]) = 512;
  v137[0] = ImagePathName;
  *(_QWORD *)&v137[2] = &ApplicationKeyOption;
  v65 = LdrpAllocateModuleEntry((__int64)v137);
  v66 = v65;
  if ( !v65 )
  {
    v39 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4687,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Allocating a data table entry for the executable failed\n");
      goto LABEL_121;
    }
    goto LABEL_122;
  }
  LdrpImageEntry = v65;
  v67 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v67;
  }
  while ( v67 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v68 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v68 + 104) |= 4u;
  v69 = v94;
  if ( UseCOR )
  {
    v70 = *(_DWORD *)(v68 + 104) | 0x400000;
    *(_DWORD *)(v68 + 104) = v70;
    if ( v69 )
      *(_DWORD *)(v68 + 104) = v70 | 0x1000000;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(v68 + 248) = 0LL;
  v71 = 0LL;
  v72 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v72 )
  {
    while ( (unsigned __int64)v72 > ImagePathName.m128i_i64[1] )
    {
      if ( *--v72 == 92 )
      {
        v71 = v72 + 1;
        break;
      }
    }
  }
  if ( v71 )
  {
    v73 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - (_WORD)v71;
    *(_WORD *)(v68 + 88) = v73;
    if ( (unsigned __int64)(ImagePathName.m128i_u16[1] - ImagePathName.m128i_u16[0]) >= 2 )
      v73 += 2;
    *(_WORD *)(v68 + 90) = v73;
    *(_QWORD *)(v68 + 96) = v71;
  }
  else
  {
    *(_OWORD *)(v68 + 88) = *(_OWORD *)(v66 + 72);
  }
  v74 = ProcessEnvironmentBlock->ImageBaseAddress;
  v75 = v110;
  if ( *(void **)(v110 + 48) != v74 && !v69 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v74);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v68 = LdrpImageEntry;
  }
  *(_QWORD *)(v68 + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v68, v68);
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4807,
      (unsigned int)"LdrpInitializeProcess",
      2,
      (__int64)"Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      LdrpImageEntry + 88,
      LdrpImageEntry + 72,
      &UnicodeString,
      &LdrpAppPackagesPath);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpImageEntry, (char *)v75, v76, v77);
  result = LdrpProcessMappedModule(LdrpImageEntry, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  inited = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v79 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v91) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4844,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v91);
      v79 = LdrpDebugFlags;
    }
    if ( (v79 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v104 )
    RtlFreeAnsiString(&UnicodeString);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
  {
    v80 = LdrpAllocateModuleEntry(0LL);
    v82 = (_QWORD *)v80;
    if ( !v80 )
    {
      v39 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4867,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)"Allocating a data table entry for the application verifier DLL failed\n");
        goto LABEL_121;
      }
      goto LABEL_122;
    }
    *(_DWORD *)(*(_QWORD *)(v80 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v80 + 152) - 52LL) = -1;
    v83 = v132;
    *(_DWORD *)(v80 + 104) |= *(_DWORD *)(v132 + 104);
    *(_QWORD *)(v80 + 248) = *(_QWORD *)(v83 + 248);
    *(_WORD *)(v80 + 110) = 0;
    *(_OWORD *)(v80 + 72) = *(_OWORD *)(v83 + 72);
    *(_OWORD *)(v80 + 88) = *(_OWORD *)(v83 + 88);
    *(_DWORD *)(v80 + 128) = *(_DWORD *)(v83 + 128);
    *(_QWORD *)(v80 + 48) = *(_QWORD *)(v83 + 48);
    LdrpInsertDataTableEntry(v80, v81);
    LdrpLogDllState(v82[6], (__int64)(v82 + 9), 0x14A5u);
    result = RtlImageNtHeaderEx(3, v82[6], 0LL, &v115);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex((__int64)v82, v115, v84, v85);
    result = LdrpProcessMappedModule((__int64)v82, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v82[7] = *(_QWORD *)(v83 + 56);
    LdrpLogDllState(v82[6], (__int64)(v82 + 9), 0x14ADu);
    *(_DWORD *)(v82[19] + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) != 0 )
    {
      result = AVrfInitializeVerifier(0, 0, 0, 1, v116, 0LL);
    }
    else
    {
      v97[0] = 0;
      result = LdrpInitializeGraphRecurse(v82[19], 0LL, v97);
    }
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v75 = v110;
  }
  LdrpDropLastInProgressCount();
  if ( UseWOW64 )
  {
    if ( v111 )
    {
      NtClose(v111);
      v111 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v105[0] )
    {
      NtClose(v105[0]);
      v105[0] = 0LL;
    }
    result = LdrpLoadWow64((__int16 *)&v112);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      _guard_dispatch_icall_fptr();
LABEL_314:
      if ( v111 )
        NtClose(v111);
      if ( v105[0] )
        NtClose(v105[0]);
      return 0;
    }
    return result;
  }
  v122 = 0LL;
  if ( UseCOR )
  {
    result = LdrpCorInitialize(&v122);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    if ( (_BYTE)v94 )
    {
      result = LdrpCorValidateImage((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v121->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v118 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  result = LdrpInitializeTls();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v90) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5083,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Initializing TLS slots failed with status 0x%08lx\n",
        v90);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( v122 )
  {
    v95 = 0;
    result = LdrpInitializeGraphRecurse(*(_QWORD *)(v122 + 152), 0LL, &v95);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v90) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5102,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)"DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          v90);
        goto LABEL_23;
      }
      goto LABEL_24;
    }
  }
  v124 = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v75 + 92) - 2) <= 1u )
  {
    result = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v117);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v91) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5243,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            LdrpKernel32DllName,
            v91);
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      result = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v117);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v91) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5216,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v91);
          goto LABEL_23;
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
          LODWORD(v90) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5232,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v90);
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      ApplicationKeyOption = 0;
    }
    else
    {
      result = LdrGetProcedureAddress(v117, &qword_180108AE8, 0LL, (__int64)&Kernel32ThreadInitThunkFunction);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v92) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5148,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_180108AE8,
            LdrpKernel32DllName,
            v92);
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      LdrGetProcedureAddress(v117, &qword_180108B08, 0LL, (__int64)&v124);
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
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v86, (__int64)v86);
  }
  v87 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v87 = 1;
  RtlpForceCSDebugInfoCreation = v87;
  LdrpEnableParallelLoading(v98->LoaderThreads);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **(_DWORD **)&v137[2] = 0;
  if ( (_BYTE)v94 )
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
      goto LABEL_297;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *(__int64 *)&v137[2]);
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_297:
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v90) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5449,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        v90);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  LdrInitState = 2;
  if ( ProcessEnvironmentBlock->BeingDebugged )
    LdrpDoDebuggerBreak();
  LdrpDropLastInProgressCount();
  if ( !Kernel32ThreadInitThunkFunction
    || (result = _guard_dispatch_icall_fptr(), ApplicationKeyOption = result, result >= 0)
    && (result = LdrpInitializePerUserWindowsDirectory(v124), ApplicationKeyOption = result, result >= 0) )
  {
    LdrpProcessInitContextRecord = v118;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v96 = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), *(__int64 *)&v137[2], &v96);
    LdrpReleaseLoaderLock(v88, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *(__int64 *)&v137[2]);
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    LdrpReleaseDllPath((__int64)v143);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v90) = ApplicationKeyOption;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5584,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)"Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v90);
        goto LABEL_23;
      }
      goto LABEL_24;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v138 = 72LL;
      v139 = 1;
      memset(v140, 0, sizeof(v140));
      RtlActivateActivationContextUnsafeFast((__int64)&v138, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v138);
    }
    if ( g_ShimsEnabled && !(unsigned __int8)_guard_dispatch_icall_fptr() )
    {
      g_ShimsEnabled = 0;
      LdrUnloadDll(g_pShimEngineModule);
      g_pShimEngineModule = 0LL;
    }
    if ( ProcessEnvironmentBlock->PostProcessInitRoutine )
      _guard_dispatch_icall_fptr();
    goto LABEL_314;
  }
  return result;
}
