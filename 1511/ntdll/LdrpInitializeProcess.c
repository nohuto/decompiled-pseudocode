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

int __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  _PEB *ProcessEnvironmentBlock; // rsi
  _QWORD *ImageBaseAddress; // rax
  unsigned int NumberOfProcessors; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  unsigned __int16 *v10; // rax
  __int16 v11; // r8
  PIMAGE_NT_HEADERS v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int SizeOfImage; // ebx
  int v16; // r13d
  int result; // eax
  char v18; // cl
  const char *v19; // rax
  int v20; // edx
  int v21; // eax
  _BYTE *v22; // rax
  ULONG v23; // r12d
  int *v24; // r13
  unsigned int v25; // edx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // al
  _QWORD *v32; // rcx
  char v33; // al
  __int64 v34; // r12
  ULONG v35; // ecx
  SIZE_T SizeOfHeapCommit; // r9
  SIZE_T SizeOfHeapReserve; // r8
  PVOID Heap; // rax
  void *v39; // r12
  char v40; // al
  const char *v41; // rax
  int v42; // edx
  unsigned __int16 v43; // r13
  unsigned __int16 *v44; // rax
  SIZE_T v45; // r13
  PVOID v46; // rax
  __m128i *v47; // r13
  __m128i v48; // xmm0
  unsigned __int16 *v49; // xmm0_8
  unsigned __int16 *v50; // rax
  __int64 v51; // r12
  char *ModuleEntry; // rax
  char *v53; // r13
  _UNICODE_STRING *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  char *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  char *v60; // r10
  char v61; // r11
  int v62; // eax
  _WORD *v63; // r9
  _WORD *v64; // rax
  __int16 v65; // r8
  void *v66; // rcx
  int inited; // eax
  char v68; // cl
  char *v69; // rax
  __int64 v70; // r13
  __int64 v71; // r12
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v72; // rdx
  PRTL_DYNAMIC_HASH_TABLE v73; // rbx
  char v74; // r12
  const WCHAR *v75; // rax
  char v76; // al
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v77; // rdx
  PRTL_DYNAMIC_HASH_TABLE v78; // r12
  __int64 v79; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v80; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v81; // rbx
  void (*PostProcessInitRoutine)(void); // rbx
  __int64 v83; // [rsp+30h] [rbp-3B8h]
  _UNICODE_STRING *p_UnicodeString; // [rsp+38h] [rbp-3B0h]
  _UNICODE_STRING *v85; // [rsp+40h] [rbp-3A8h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-398h] BYREF
  int v87; // [rsp+54h] [rbp-394h]
  char v88; // [rsp+58h] [rbp-390h] BYREF
  char v89[7]; // [rsp+59h] [rbp-38Fh] BYREF
  ULONG Flags[2]; // [rsp+60h] [rbp-388h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp-380h] BYREF
  HANDLE v92; // [rsp+70h] [rbp-378h] BYREF
  int v93; // [rsp+78h] [rbp-370h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-368h] BYREF
  unsigned int Buffer; // [rsp+90h] [rbp-358h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-350h] BYREF
  ULONG v97; // [rsp+A0h] [rbp-348h] BYREF
  int v98; // [rsp+A4h] [rbp-344h]
  _UNICODE_STRING v99; // [rsp+A8h] [rbp-340h] BYREF
  _UNICODE_STRING SubKey; // [rsp+B8h] [rbp-330h] BYREF
  PVOID BaseOfImage; // [rsp+C8h] [rbp-320h]
  struct _TEB *v102; // [rsp+D0h] [rbp-318h]
  _UNICODE_STRING Destination; // [rsp+D8h] [rbp-310h] BYREF
  __m128i ImagePathName; // [rsp+E8h] [rbp-300h] BYREF
  PCWSTR SourceString; // [rsp+F8h] [rbp-2F0h]
  __int64 v106; // [rsp+100h] [rbp-2E8h]
  ULONG ReturnedLength; // [rsp+108h] [rbp-2E0h] BYREF
  PVOID BaseAddress; // [rsp+110h] [rbp-2D8h]
  PVOID DllHandle; // [rsp+118h] [rbp-2D0h] BYREF
  PIMAGE_NT_HEADERS v110[2]; // [rsp+120h] [rbp-2C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+130h] [rbp-2B8h] BYREF
  HANDLE LinkHandle; // [rsp+140h] [rbp-2A8h] BYREF
  PVOID ProcedureAddress; // [rsp+148h] [rbp-2A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+150h] [rbp-298h] BYREF
  ULONG Size; // [rsp+180h] [rbp-268h] BYREF
  __int64 ProcessInformation; // [rsp+188h] [rbp-260h] BYREF
  __int64 v117; // [rsp+190h] [rbp-258h] BYREF
  PIMAGE_NT_HEADERS v118; // [rsp+198h] [rbp-250h] BYREF
  _QWORD v119[4]; // [rsp+1A0h] [rbp-248h] BYREF
  _OWORD v120[10]; // [rsp+1C0h] [rbp-228h] BYREF
  __int64 v121; // [rsp+260h] [rbp-188h] BYREF
  int v122; // [rsp+268h] [rbp-180h]
  _BYTE v123[56]; // [rsp+270h] [rbp-178h] BYREF
  _QWORD *MemoryInformation; // [rsp+2B0h] [rbp-138h] BYREF
  _QWORD Parameters[12]; // [rsp+2D0h] [rbp-118h] BYREF
  _QWORD v126[16]; // [rsp+330h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v106 = a1;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v102 = NtCurrentTeb();
  ProcessEnvironmentBlock = v102->ProcessEnvironmentBlock;
  if ( (ProcessEnvironmentBlock->BitField & 1) != 0 )
  {
    ZwQueryVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      ProcessEnvironmentBlock->ImageBaseAddress,
      MemoryRegionInformation,
      &MemoryInformation,
      0x20uLL,
      0LL);
    ImageBaseAddress = ProcessEnvironmentBlock->ImageBaseAddress;
    if ( MemoryInformation != ImageBaseAddress )
      *MemoryInformation = ImageBaseAddress;
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
  v10 = ProcessParameters->ImagePathName.Buffer;
  if ( (ProcessParameters->Flags & 1) == 0 )
    v10 = (unsigned __int16 *)((char *)v10 + (_QWORD)ProcessParameters);
  SubKey.Buffer = v10;
  SubKey.Length = ProcessParameters->ImagePathName.Length;
  v11 = SubKey.Length + 2;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v10 == 92 && v10[1] == 63 && v10[2] == 63 && v10[3] == 92 )
  {
    SubKey.Length -= 8;
    SubKey.MaximumLength = v11 - 8;
    SubKey.Buffer = v10 + 4;
    ProcessParameters->ImagePathName.Length -= 8;
    ProcessParameters->ImagePathName.MaximumLength -= 8;
    ProcessParameters->ImagePathName.Buffer += 4;
  }
  v98 = 1;
  UseCOR = 0;
  LOBYTE(v87) = 0;
  v93 = 0;
  RtlImageNtHeaderEx(3u, ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &OutHeaders);
  v12 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
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
  RtlImageNtHeaderEx(3u, a2, 0LL, &v118);
  SizeOfImage = v118->OptionalHeader.SizeOfImage;
  RtlInsertInvertedFunctionTable(a2, SizeOfImage);
  RtlCreateInvertedFunctionTableCacheEntry(a2, SizeOfImage);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  v16 = 0;
  result = LdrpInitializeExecutionOptions(
             (unsigned int)&SubKey,
             (_DWORD)ProcessEnvironmentBlock,
             (_DWORD)a2,
             (unsigned int)&Handle,
             (__int64)&v92,
             (__int64)&v117);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_25;
    v19 = "Initializing the execution options for the process %lx failed with status 0x%08lx\n";
    v20 = 3514;
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
  v21 = UseWOW64;
  if ( ProcessInformation )
    v21 = 1;
  UseWOW64 = v21;
  if ( v12 && v12->OptionalHeader.Magic == 267 && !v21 )
  {
    UseCOR = 1;
    LOBYTE(v12) = 1;
    v87 = (int)v12;
    v16 = 1;
    result = LdrpCorFixupImage(ProcessEnvironmentBlock->ImageBaseAddress);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v12) = v87;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v22 = RtlImageDirectoryEntryToData(ProcessEnvironmentBlock->ImageBaseAddress, 1u, 0xEu, &Size);
    if ( v22 )
    {
      UseCOR = 1;
      LODWORD(v12) = (unsigned __int8)v12;
      if ( (v22[16] & 1) != 0 )
        LODWORD(v12) = 1;
      v87 = (int)v12;
    }
  }
  LdrpSystemDllBase = (__int64)BaseOfImage;
  if ( !UseWOW64 )
    SourceString = (PCWSTR)ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout.QuadPart;
  ImagePathName = (__m128i)RtlNormalizeProcessParams(ProcessEnvironmentBlock->ProcessParameters)->ImagePathName;
  v23 = 0;
  v97 = 0;
  if ( UseWOW64 || UseCOR && v16 )
  {
    v24 = 0LL;
  }
  else
  {
    v24 = (int *)RtlImageDirectoryEntryToData(ProcessEnvironmentBlock->ImageBaseAddress, 1u, 0xAu, &v97);
    v23 = v97;
  }
  memset(Parameters, 0, sizeof(Parameters));
  v25 = 2;
  Flags[0] = 2;
  LODWORD(Parameters[0]) = 96;
  if ( v24 && v23 && (v23 == 64 || v23 == *v24) )
  {
    if ( v23 >= 0x10 )
      ProcessEnvironmentBlock->NtGlobalFlag &= ~v24[3];
    if ( v23 >= 0x14 )
      ProcessEnvironmentBlock->NtGlobalFlag |= v24[4];
    if ( v23 >= 0x18 && v24[5] )
      RtlpTimeout = -10000LL * v24[5];
    if ( v23 >= 0x4C )
    {
      v26 = v24[18];
      if ( v26 )
      {
        if ( (v26 & 0xFFFF0FFF) != 0 )
          v25 = v26 & 0xFFFF0FFF;
        Flags[0] = v25;
        RtlHeapProcessFlags = v26 & 0xF000;
      }
    }
    if ( v23 >= 0x20 )
    {
      v27 = Parameters[3];
      if ( *((_QWORD *)v24 + 3) )
        v27 = *((_QWORD *)v24 + 3);
      Parameters[3] = v27;
    }
    if ( v23 >= 0x28 )
    {
      v28 = Parameters[4];
      if ( *((_QWORD *)v24 + 4) )
        v28 = *((_QWORD *)v24 + 4);
      Parameters[4] = v28;
    }
    if ( v23 >= 0x38 )
    {
      v29 = Parameters[5];
      if ( *((_QWORD *)v24 + 6) )
        v29 = *((_QWORD *)v24 + 6);
      Parameters[5] = v29;
    }
    if ( v23 >= 0x40 )
    {
      v30 = Parameters[6];
      if ( *((_QWORD *)v24 + 7) )
        v30 = *((_QWORD *)v24 + 7);
      Parameters[6] = v30;
    }
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  v31 = RtlpTimeoutDisable;
  if ( RtlpTimeout < -36000000000LL )
    v31 = 1;
  RtlpTimeoutDisable = v31;
  RtlFailedCriticalDebugAllocations = 0;
  RtlInitializeSListHead(&RtlCriticalSectionDebugSList);
  v32 = &RtlpStaticDebugInfo;
  do
  {
    *v32 = v32 + 6;
    v32 += 6;
  }
  while ( v32 <= qword_180144D60 );
  *v32 = 0LL;
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
    RtlSetBits((PRTL_BITMAP)ProcessEnvironmentBlock->TlsBitmap, 0, 0x13u);
  RtlSetBits((PRTL_BITMAP)ProcessEnvironmentBlock->TlsBitmap, 4u, 1u);
  RtlSetBits((PRTL_BITMAP)ProcessEnvironmentBlock->TlsBitmap, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v33 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    Buffer = 24;
    if ( LdrQueryImageFileExecutionOptions(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL) >= 0
      && Buffer >= 0x18 )
    {
      if ( Buffer <= 0x80 )
        v34 = Buffer << 20;
      else
        v34 = 0x8000000LL;
    }
    else
    {
      v34 = 25165824LL;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3911,
        (unsigned int)"LdrpInitializeProcess",
        2,
        (__int64)"Stack trace database size is %Id Mb\n");
    v119[0] = 0LL;
    v119[1] = 0LL;
    v119[2] = v34;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v119);
    v33 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v33 )
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
  ProcessEnvironmentBlock->FastPebLock = &FastPebLock;
  RtlInitializeHeapManager();
  if ( (LdrSystemDllInitBlock.Wow64SharedInformation[8] & 0x3000) == 0x1000LL )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( UseWOW64 || OutHeaders->OptionalHeader.Magic == 267 )
  {
    SizeOfHeapCommit = 0LL;
    SizeOfHeapReserve = 0LL;
    v35 = Flags[0];
  }
  else
  {
    v35 = Flags[0];
    if ( OutHeaders->OptionalHeader.MajorSubsystemVersion <= 3u
      && OutHeaders->OptionalHeader.MinorSubsystemVersion < 0x33u )
    {
      v35 = Flags[0] | 0x10000;
    }
    SizeOfHeapCommit = OutHeaders->OptionalHeader.SizeOfHeapCommit;
    SizeOfHeapReserve = OutHeaders->OptionalHeader.SizeOfHeapReserve;
  }
  Heap = RtlCreateHeap(v35, 0LL, SizeOfHeapReserve, SizeOfHeapCommit, 0LL, Parameters);
  v39 = Heap;
  if ( !Heap )
  {
    v40 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_123;
    v41 = "Creating the process heap failed\n";
    v42 = 4006;
    goto LABEL_122;
  }
  ProcessEnvironmentBlock->ProcessHeap = Heap;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  result = RtlAllocateActivationContextStack(&v102->ActivationContextStackPointer);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpHeap = v39;
  RtlInitializeSListHead(&EtwpFreeRegistrationList);
  NtdllBaseTag = RtlCreateTagHeap(v39, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
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
  *(_QWORD *)Flags = ProcessEnvironmentBlock->ProcessParameters;
  ImagePathName = *(__m128i *)(*(_QWORD *)Flags + 96LL);
  SubKey.Buffer = (unsigned __int16 *)_mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v92 )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v92,
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v93,
                             4,
                             v83,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_1801420A8 && v93 )
    {
      dword_1801420A8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)0x7FFE0030);
  v43 = DestinationString.Length + 40;
  v44 = (unsigned __int16 *)RtlAllocateHeap(v39, 0, DestinationString.Length + 38 + 2LL);
  if ( !v44 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v43;
  Destination.Buffer = v44;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 0x42) != 2 )
  {
    v45 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180106040;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( UseWOW64
        && (ObjectAttributes.Length = 48,
            ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.Attributes = 64,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180106030,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle32, 3u, &ObjectAttributes),
            ApplicationKeyOption = result,
            result < 0) )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v20 = 4248;
          goto LABEL_143;
        }
      }
      else
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180106050;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
        ApplicationKeyOption = result;
        if ( result >= 0 )
        {
          while ( 1 )
          {
            v46 = RtlAllocateHeap(v39, 0, v45);
            BaseAddress = v46;
            if ( !v46 )
              return -1073741801;
            LdrpKnownDllPath.Length = 0;
            LdrpKnownDllPath.MaximumLength = v45;
            LdrpKnownDllPath.Buffer = (unsigned __int16 *)v46;
            result = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
            ApplicationKeyOption = result;
            if ( result >= 0 )
            {
              NtClose(LinkHandle);
              goto LABEL_158;
            }
            if ( result != -1073741789 )
            {
              v18 = LdrpDebugFlags;
              if ( (LdrpDebugFlags & 3) == 0 )
                goto LABEL_25;
              v19 = "Querying the known DLL directory link object failed with status 0x%08lx\n";
              v20 = 4309;
              goto LABEL_23;
            }
            RtlFreeHeap(v39, 0, BaseAddress);
            v45 = ReturnedLength;
          }
        }
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v20 = 4274;
          goto LABEL_143;
        }
      }
    }
    else
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v20 = 4218;
LABEL_143:
        v19 = "Failed to open %wZ with status 0x%08lx\n";
LABEL_23:
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          v20,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)v19);
LABEL_24:
        result = ApplicationKeyOption;
        v18 = LdrpDebugFlags;
      }
    }
LABEL_25:
    if ( (v18 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
LABEL_158:
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
    v47 = *(__m128i **)Flags;
  }
  else
  {
    v47 = *(__m128i **)Flags;
    v48 = *(__m128i *)(*(_QWORD *)Flags + 56LL);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(*(_QWORD *)Flags + 56LL);
    v49 = (unsigned __int16 *)_mm_srli_si128(v48, 8).m128i_u64[0];
    UnicodeString.Buffer = v49;
    if ( !v49 || !UnicodeString.Length || !*v49 )
    {
      v50 = (unsigned __int16 *)RtlAllocateHeap(v39, 0, 8uLL);
      UnicodeString.Buffer = v50;
      if ( !v50 )
      {
        v40 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v41 = "Allocating a buffer to hold the current working directory failed\n";
          v42 = 4359;
LABEL_122:
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            v42,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)v41);
          v40 = LdrpDebugFlags;
          goto LABEL_123;
        }
        goto LABEL_123;
      }
      v98 = 0;
      *(_DWORD *)v50 = MEMORY[0x7FFE0030];
      v50[2] = MEMORY[0x7FFE0034];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  if ( (ProcessEnvironmentBlock->BitField & 0x10) != 0 && v47[5].m128i_i16[0] )
  {
    LdrpAppPackagesPath = (_UNICODE_STRING)v47[5];
    LdrSetDefaultDllDirectories(0x1000u);
  }
  else
  {
    RtlInitUnicodeString(&LdrpAppPackagesPath, 0LL);
    v51 = Destination.Length + 2 * (DestinationString.Length + 10LL);
    if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
      v51 += Destination.Length + 22LL;
    v99.Buffer = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v51);
    if ( !v99.Buffer )
    {
      v40 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v41 = "Failed to allocate the system dirs string!\n";
        v42 = 4425;
        goto LABEL_122;
      }
LABEL_123:
      if ( (v40 & 0x10) != 0 )
        __debugbreak();
      return -1073741801;
    }
    v99.Length = 0;
    v99.MaximumLength = v51;
    RtlAppendUnicodeStringToString(&v99, &Destination);
    RtlAppendUnicodeToString(&v99, L";");
    if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
    {
      RtlAppendUnicodeStringToString(&v99, &Destination);
      RtlAppendUnicodeToString(&v99, L"forwarders;");
    }
    RtlAppendUnicodeStringToString(&v99, &DestinationString);
    RtlAppendUnicodeToString(&v99, L"\\system;");
    RtlAppendUnicodeStringToString(&v99, &DestinationString);
    RtlAppendUnicodeToString(&v99, L";");
    RtlpSystemDirs = v99;
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v47[5].m128i_i16[0] = 0;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  if ( (ProcessEnvironmentBlock->BitField & 0x10) == 0 && v47[5].m128i_i16[0] )
    LdrSetDllDirectory((PUNICODE_STRING)&v47[5]);
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, v110);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v53 = ModuleEntry;
  if ( !ModuleEntry )
  {
    v40 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v41 = "Allocating a data table entry for the system DLL failed\n";
      v42 = 4524;
      goto LABEL_122;
    }
    goto LABEL_123;
  }
  LdrpNtDllDataTableEntry = (__int64)ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v54 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  v54[15].Buffer = (unsigned __int16 *)((char *)v54[15].Buffer - LdrSystemDllInitBlock.SystemDllWowRelocation);
  v54 = (_UNICODE_STRING *)((char *)v54 + 72);
  *v54 = Destination;
  RtlAppendUnicodeStringToString(v54, &NtDllName);
  v55 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)(LdrpNtDllDataTableEntry + 88) = NtDllName;
  *(_QWORD *)(v55 + 48) = BaseOfImage;
  LdrpInsertDataTableEntry(v55);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, (__int64)v110[0]);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v56 = qword_180145230;
  *((_QWORD *)v53 + 4) = qword_180145230;
  *((_QWORD *)v53 + 5) = &qword_180145230;
  if ( *(__int64 **)(v56 + 8) != &qword_180145230 )
    __fastfail(3u);
  *(_QWORD *)(v56 + 8) = v53 + 32;
  qword_180145230 = (__int64)(v53 + 32);
  qword_180145198 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  RtlInitializeCriticalSection(&LdrpWorkQueueLock);
  result = LdrpCreateLoaderEvents();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v19 = "Failed to initialize Parallel loader, st = 0x%x\n";
      v20 = 4602;
      goto LABEL_23;
    }
    goto LABEL_25;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v126);
  memset(v120, 0, 0x98uLL);
  *(_QWORD *)&v120[1] = v126;
  DWORD2(v120[1]) = 512;
  v120[0] = ImagePathName;
  *(_QWORD *)&v120[2] = &ApplicationKeyOption;
  v57 = LdrpAllocateModuleEntry((__int64)v120);
  BaseAddress = v57;
  if ( !v57 )
  {
    v40 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v41 = "Allocating a data table entry for the executable failed\n";
      v42 = 4623;
      goto LABEL_122;
    }
    goto LABEL_123;
  }
  LdrpImageEntry = (__int64)v57;
  v58 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v58;
  }
  while ( v58 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v59 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v59 + 104) |= 4u;
  v60 = (char *)BaseAddress;
  v61 = v87;
  if ( UseCOR )
  {
    v62 = *(_DWORD *)(v59 + 104) | 0x400000;
    *(_DWORD *)(v59 + 104) = v62;
    if ( v61 )
      *(_DWORD *)(v59 + 104) = v62 | 0x1000000;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(v59 + 248) = 0LL;
  v63 = 0LL;
  v64 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v64 )
  {
    while ( (unsigned __int64)v64 > ImagePathName.m128i_i64[1] )
    {
      if ( *--v64 == 92 )
      {
        v63 = v64 + 1;
        break;
      }
    }
  }
  if ( v63 )
  {
    v65 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - (_WORD)v63;
    *(_WORD *)(v59 + 88) = v65;
    if ( (unsigned __int64)(ImagePathName.m128i_u16[1] - ImagePathName.m128i_u16[0]) >= 2 )
      v65 += 2;
    *(_WORD *)(v59 + 90) = v65;
    *(_QWORD *)(v59 + 96) = v63;
  }
  else
  {
    *(_OWORD *)(v59 + 88) = *(_OWORD *)(v60 + 72);
  }
  v66 = ProcessEnvironmentBlock->ImageBaseAddress;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v66 && !v61 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v66);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v59 = LdrpImageEntry;
  }
  *(_QWORD *)(v59 + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v59);
  if ( (LdrpDebugFlags & 5) != 0 )
  {
    v85 = &LdrpAppPackagesPath;
    p_UnicodeString = &UnicodeString;
    v83 = LdrpImageEntry + 72;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4743,
      (unsigned int)"LdrpInitializeProcess",
      2,
      (__int64)"Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n");
  }
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
      LODWORD(v83) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4780,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n");
      v68 = LdrpDebugFlags;
    }
    if ( (v68 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v98 )
    RtlFreeAnsiString(&UnicodeString);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
  {
    v69 = LdrpAllocateModuleEntry(0LL);
    v70 = (__int64)v69;
    if ( !v69 )
    {
      v40 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v41 = "Allocating a data table entry for the application verifier DLL failed\n";
        v42 = 4803;
        goto LABEL_122;
      }
      goto LABEL_123;
    }
    *(_DWORD *)(*((_QWORD *)v69 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v69 + 19) - 52LL) = -1;
    v71 = v117;
    *((_DWORD *)v69 + 26) |= *(_DWORD *)(v117 + 104);
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
    *(_QWORD *)(v70 + 56) = *(_QWORD *)(v71 + 56);
    LdrpLogDllState(*(_QWORD *)(v70 + 48), v70 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v70 + 152) + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) != 0 )
    {
      result = AVrfInitializeVerifier(0LL, 0LL, 0LL, 1LL, BaseOfImage, 0LL, v83, p_UnicodeString, v85);
    }
    else
    {
      v88 = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v70 + 152), 0LL, &v88);
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
    if ( v92 )
    {
      NtClose(v92);
      v92 = 0LL;
    }
    result = LdrpLoadWow64(&Destination);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      v73 = Wow64LdrpInitialize;
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        Wow64LdrpInitialize,
        v72);
      ((void (__fastcall *)(__int64))v73)(v106);
LABEL_306:
      if ( Handle )
        NtClose(Handle);
      if ( v92 )
        NtClose(v92);
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
      result = LdrpCorValidateImage(ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v102->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v106 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330];
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
      v19 = "Initializing TLS slots failed with status 0x%08lx\n";
      v20 = 5018;
      goto LABEL_23;
    }
    goto LABEL_25;
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
          v19 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
          v20 = 5158;
          goto LABEL_23;
        }
        goto LABEL_25;
      }
      result = LdrLoadDll((PWSTR)0x801, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v19 = "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n";
          v20 = 5131;
          goto LABEL_23;
        }
        goto LABEL_25;
      }
      result = LdrpCodeAuthzInitialize();
      ApplicationKeyOption = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          v19 = "LdrpCodeAuthzInitialize failed with status 0x%08lx\n";
          v20 = 5147;
          goto LABEL_23;
        }
        goto LABEL_25;
      }
      ApplicationKeyOption = 0;
    }
    else
    {
      result = LdrGetProcedureAddress(
                 DllHandle,
                 (PANSI_STRING)&stru_180106010,
                 0,
                 (PVOID *)&Kernel32ThreadInitThunkFunction);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
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
      LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180106020, 0, &ProcedureAddress);
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
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v75, (__int64)v75);
  }
  v76 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v76 = 1;
  RtlpForceCSDebugInfoCreation = v76;
  LdrpEnableParallelLoading(*(_DWORD *)(*(_QWORD *)Flags + 1036LL));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **(_DWORD **)&v120[2] = 0;
  if ( v74 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    DWORD2(v120[1]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v120);
    LdrpDrainWorkQueue(1);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
      goto LABEL_289;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *(__int64 *)&v120[2]);
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_289:
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v19 = "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n";
      v20 = 5364;
      goto LABEL_23;
    }
    goto LABEL_25;
  }
  LdrInitState = 2;
  if ( ProcessEnvironmentBlock->BeingDebugged )
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
    LdrpProcessInitContextRecord = v106;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v89[0] = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), *(__int64 *)&v120[2], v89);
    LdrpReleaseLoaderLock(v79, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *(__int64 *)&v120[2]);
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    LdrpReleaseDllPath((__int64)v126);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v19 = "Running the init routines of the executable's static imports failed with status 0x%08lx\n";
        v20 = 5499;
        goto LABEL_23;
      }
      goto LABEL_25;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v121 = 72LL;
      v122 = 1;
      memset(v123, 0, sizeof(v123));
      RtlActivateActivationContextUnsafeFast((__int64)&v121, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1LL, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v121);
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
    PostProcessInitRoutine = ProcessEnvironmentBlock->PostProcessInitRoutine;
    if ( PostProcessInitRoutine )
    {
      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
        (PRTL_DYNAMIC_HASH_TABLE)ProcessEnvironmentBlock->PostProcessInitRoutine,
        v80);
      PostProcessInitRoutine();
    }
    goto LABEL_306;
  }
  return result;
}
