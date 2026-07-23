/*
 * XREFs of LdrpInitializeProcess @ 0x180091E24
 * Callers:
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpAllocateModuleEntry @ 0x18000F700 (LdrpAllocateModuleEntry.c)
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     LdrLoadDll @ 0x180011F20 (LdrLoadDll.c)
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     EtwEventRegister @ 0x18002A3B0 (EtwEventRegister.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B280 (RtlInitializeCriticalSectionEx.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DA78 (LdrpPrepareModuleForExecution.c)
 *     LdrUnloadDll @ 0x18002EF60 (LdrUnloadDll.c)
 *     LdrpInsertDataTableEntry @ 0x18002F148 (LdrpInsertDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSetBits @ 0x1800506B0 (RtlSetBits.c)
 *     LdrpInitializeTls @ 0x180051178 (LdrpInitializeTls.c)
 *     RtlInitializeHeapManager @ 0x18005D71C (RtlInitializeHeapManager.c)
 *     LdrpInitializePolicy @ 0x18005DE1C (LdrpInitializePolicy.c)
 *     RtlpInitEnvironmentBlock @ 0x18005EE38 (RtlpInitEnvironmentBlock.c)
 *     RtlInitializeCriticalSection @ 0x180066F80 (RtlInitializeCriticalSection.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B694 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeGraphRecurse @ 0x1800722A8 (LdrpInitializeGraphRecurse.c)
 *     LdrpEnableParallelLoading @ 0x180072C54 (LdrpEnableParallelLoading.c)
 *     RtlEncodePointer @ 0x180074C30 (RtlEncodePointer.c)
 *     TpInitializePackage @ 0x180075CD8 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x180075D80 (RtlCreateTagHeap.c)
 *     LdrpLoadWow64 @ 0x180075DE0 (LdrpLoadWow64.c)
 *     LdrGetProcedureAddress @ 0x180075EC0 (LdrGetProcedureAddress.c)
 *     RtlWow64GetCurrentCpuArea @ 0x1800764A0 (RtlWow64GetCurrentCpuArea.c)
 *     RtlInitializeSListHead @ 0x180076C80 (RtlInitializeSListHead.c)
 *     RtlpInitCurrentDir @ 0x1800793E8 (RtlpInitCurrentDir.c)
 *     RtlAllocateActivationContextStack @ 0x18007A4D0 (RtlAllocateActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     RtlInitializeHistoryTable @ 0x18007C070 (RtlInitializeHistoryTable.c)
 *     LdrpInitShimEngine @ 0x18007DB84 (LdrpInitShimEngine.c)
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EF90 (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x18007F030 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpCodeAuthzInitialize @ 0x1800801FC (LdrpCodeAuthzInitialize.c)
 *     RtlpInitParameterBlock @ 0x180080F88 (RtlpInitParameterBlock.c)
 *     LdrpCreateLoaderEvents @ 0x180081C80 (LdrpCreateLoaderEvents.c)
 *     SbObtainTraceHandle @ 0x1800827D4 (SbObtainTraceHandle.c)
 *     LdrpInsertModuleToIndex @ 0x1800828C8 (LdrpInsertModuleToIndex.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C30 (LdrpProtectAndRelocateImage.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D1C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 *     LdrpCorProcessImports @ 0x180087938 (LdrpCorProcessImports.c)
 *     LdrpCorValidateImage @ 0x18008859C (LdrpCorValidateImage.c)
 *     LdrpCaptureCriticalThunks @ 0x18008A024 (LdrpCaptureCriticalThunks.c)
 *     RtlNormalizeProcessParams @ 0x18008CE60 (RtlNormalizeProcessParams.c)
 *     LdrpCorFixupImage @ 0x1800908A0 (LdrpCorFixupImage.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeNlsInfo @ 0x180094334 (LdrpInitializeNlsInfo.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
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
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpCheckAppDirType @ 0x1800D1F34 (LdrpCheckAppDirType.c)
 *     LdrpDoDebuggerBreak @ 0x1800D2160 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeExceptionTable @ 0x1800D2664 (LdrpInitializeExceptionTable.c)
 *     AVrfInitializeVerifier @ 0x1800D6028 (AVrfInitializeVerifier.c)
 *     RtlControlStackTraceDataBase @ 0x1800F251C (RtlControlStackTraceDataBase.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  struct _TEB *v3; // r14
  _PEB *ProcessEnvironmentBlock; // rdi
  _QWORD *ImageBaseAddress; // rax
  unsigned int NumberOfProcessors; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  wchar_t *v11; // rax
  __int16 v12; // r8
  PIMAGE_NT_HEADERS v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // r13d
  int result; // eax
  char v18; // cl
  int v19; // eax
  _BYTE *v20; // rax
  ULONG v21; // r12d
  int *v22; // r13
  ULONG v23; // ecx
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
  ULONG v34; // ecx
  SIZE_T SizeOfHeapCommit; // r9
  SIZE_T SizeOfHeapReserve; // r8
  PVOID Heap; // rax
  void *v38; // r13
  char v39; // al
  PVOID v40; // rax
  __int64 v41; // rcx
  unsigned __int16 v42; // r12
  wchar_t *v43; // rax
  SIZE_T v44; // r12
  _UNICODE_STRING *v45; // rax
  int v46; // edx
  const WCHAR *v47; // rdx
  PVOID v48; // rax
  __m128i v49; // xmm0
  wchar_t *v50; // xmm0_8
  wchar_t *v51; // rax
  unsigned __int64 Length; // r12
  SIZE_T v53; // r13
  unsigned __int16 v54; // dx
  PVOID v55; // r12
  char *ModuleEntry; // rax
  char *v57; // r13
  _UNICODE_STRING *v58; // rcx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  char *v62; // rax
  char *v63; // r10
  __int64 v64; // rdx
  __int64 v65; // rdx
  char v66; // r11
  int v67; // eax
  _WORD *v68; // r9
  _WORD *v69; // rax
  __int16 v70; // r8
  void *v71; // rcx
  PIMAGE_NT_HEADERS v72; // r13
  int inited; // eax
  char v74; // cl
  char *v75; // rax
  __int64 v76; // r13
  __int64 v77; // r12
  const WCHAR *v78; // r13
  char v79; // al
  __int64 v80; // rcx
  PSIZE_T ReturnLength; // [rsp+28h] [rbp-3E0h]
  PSIZE_T ReturnLengtha; // [rsp+28h] [rbp-3E0h]
  __int64 v83; // [rsp+30h] [rbp-3D8h]
  __int64 v84; // [rsp+38h] [rbp-3D0h]
  int ApplicationKeyOption; // [rsp+50h] [rbp-3B8h] BYREF
  int v86; // [rsp+54h] [rbp-3B4h]
  char v87; // [rsp+58h] [rbp-3B0h] BYREF
  char v88; // [rsp+59h] [rbp-3AFh] BYREF
  char v89[6]; // [rsp+5Ah] [rbp-3AEh] BYREF
  ULONG Flags[2]; // [rsp+60h] [rbp-3A8h]
  __int16 v91[2]; // [rsp+68h] [rbp-3A0h] BYREF
  ULONG v92; // [rsp+6Ch] [rbp-39Ch] BYREF
  _UNICODE_STRING v93; // [rsp+70h] [rbp-398h] BYREF
  unsigned int Buffer; // [rsp+80h] [rbp-388h] BYREF
  int v95; // [rsp+84h] [rbp-384h] BYREF
  int v96; // [rsp+88h] [rbp-380h]
  HANDLE v97[2]; // [rsp+90h] [rbp-378h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-368h] BYREF
  _UNICODE_STRING SubKey; // [rsp+B0h] [rbp-358h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+C0h] [rbp-348h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-340h] BYREF
  _UNICODE_STRING Destination; // [rsp+D0h] [rbp-338h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-328h] BYREF
  ULONG ReturnedLength; // [rsp+F0h] [rbp-318h] BYREF
  PIMAGE_NT_HEADERS v105; // [rsp+F8h] [rbp-310h] BYREF
  PVOID BaseOfImage; // [rsp+100h] [rbp-308h]
  PVOID DllHandle; // [rsp+108h] [rbp-300h] BYREF
  __int64 v108; // [rsp+110h] [rbp-2F8h]
  _UNICODE_STRING v109; // [rsp+118h] [rbp-2F0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+130h] [rbp-2D8h] BYREF
  struct _TEB *v111; // [rsp+140h] [rbp-2C8h]
  _QWORD *v112; // [rsp+148h] [rbp-2C0h] BYREF
  PCWSTR SourceString; // [rsp+150h] [rbp-2B8h]
  PVOID ProcedureAddress; // [rsp+158h] [rbp-2B0h] BYREF
  HANDLE LinkHandle; // [rsp+160h] [rbp-2A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+168h] [rbp-2A0h] BYREF
  PVOID BaseAddress; // [rsp+198h] [rbp-270h]
  __int64 v118; // [rsp+1A0h] [rbp-268h] BYREF
  ULONG Size; // [rsp+1A8h] [rbp-260h] BYREF
  __int64 ProcessInformation; // [rsp+1B0h] [rbp-258h] BYREF
  __int64 SystemInformation; // [rsp+1B8h] [rbp-250h] BYREF
  _QWORD v122[4]; // [rsp+1C0h] [rbp-248h] BYREF
  _OWORD v123[10]; // [rsp+1E0h] [rbp-228h] BYREF
  __int64 v124; // [rsp+280h] [rbp-188h] BYREF
  int v125; // [rsp+288h] [rbp-180h]
  _BYTE v126[56]; // [rsp+290h] [rbp-178h] BYREF
  _QWORD *MemoryInformation; // [rsp+2D0h] [rbp-138h] BYREF
  _QWORD Parameters[12]; // [rsp+2F0h] [rbp-118h] BYREF
  const WCHAR *v129[16]; // [rsp+350h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v108 = a1;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v111 = v3;
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
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
  v11 = ProcessParameters->ImagePathName.Buffer;
  if ( (ProcessParameters->Flags & 1) == 0 )
    v11 = (wchar_t *)((char *)v11 + (_QWORD)ProcessParameters);
  SubKey.Buffer = v11;
  SubKey.Length = ProcessParameters->ImagePathName.Length;
  v12 = SubKey.Length + 2;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v11 == 92 && v11[1] == 63 && v11[2] == 63 && v11[3] == 92 )
  {
    SubKey.Length -= 8;
    SubKey.MaximumLength = v12 - 8;
    SubKey.Buffer = v11 + 4;
    ProcessParameters->ImagePathName.Length -= 8;
    ProcessParameters->ImagePathName.MaximumLength -= 8;
    ProcessParameters->ImagePathName.Buffer += 4;
  }
  v96 = 1;
  UseCOR = 0;
  LOBYTE(v86) = 0;
  v95 = 0;
  RtlImageNtHeaderEx(3u, ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &OutHeaders);
  v13 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v14 = &LdrpHashTable;
  v15 = 32LL;
  v92 = 32;
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
             (unsigned int)&SubKey,
             (_DWORD)ProcessEnvironmentBlock,
             (_DWORD)a2,
             (unsigned int)&Handle,
             (__int64)v97,
             (__int64)&v118);
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) == 0 )
      goto LABEL_24;
    LODWORD(ReturnLength) = v3->ClientId.UniqueProcess;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3518,
      (unsigned int)"LdrpInitializeProcess",
      0,
      (__int64)"Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      ReturnLength,
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
  if ( v13 && v13->OptionalHeader.Magic == 267 && !v19 )
  {
    UseCOR = 1;
    LOBYTE(v13) = 1;
    v86 = (int)v13;
    v16 = 1;
    result = LdrpCorFixupImage(ProcessEnvironmentBlock->ImageBaseAddress);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v13) = v86;
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v20 = RtlImageDirectoryEntryToData(ProcessEnvironmentBlock->ImageBaseAddress, 1u, 0xEu, &Size);
    if ( v20 )
    {
      UseCOR = 1;
      LODWORD(v13) = (unsigned __int8)v13;
      if ( (v20[16] & 1) != 0 )
        LODWORD(v13) = 1;
      v86 = (int)v13;
    }
  }
  LdrpSystemDllBase = (__int64)BaseOfImage;
  if ( !UseWOW64 )
    SourceString = (PCWSTR)ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout.QuadPart;
  ImagePathName = (__m128i)RtlNormalizeProcessParams(ProcessEnvironmentBlock->ProcessParameters)->ImagePathName;
  v21 = 0;
  v92 = 0;
  if ( UseWOW64 || UseCOR && v16 )
  {
    v22 = 0LL;
  }
  else
  {
    v22 = (int *)RtlImageDirectoryEntryToData(ProcessEnvironmentBlock->ImageBaseAddress, 1u, 0xAu, &v92);
    v21 = v92;
  }
  memset(Parameters, 0, sizeof(Parameters));
  v23 = 2;
  Flags[0] = 2;
  LODWORD(Parameters[0]) = 96;
  if ( v22 && v21 && (v21 == 64 || v21 == *v22) )
  {
    if ( v21 >= 0x10 )
      ProcessEnvironmentBlock->NtGlobalFlag &= ~v22[3];
    if ( v21 >= 0x14 )
      ProcessEnvironmentBlock->NtGlobalFlag |= v22[4];
    if ( v21 >= 0x18 && v22[5] )
    {
      RtlpTimeout = -10000LL * v22[5];
      v23 = 2;
    }
    if ( v21 >= 0x4C )
    {
      v24 = v22[18];
      if ( v24 )
      {
        v25 = v24 & 0xFFFF0FFF;
        if ( v25 )
          v23 = v25;
        Flags[0] = v23;
      }
    }
    if ( v21 >= 0x20 )
    {
      v26 = Parameters[3];
      if ( *((_QWORD *)v22 + 3) )
        v26 = *((_QWORD *)v22 + 3);
      Parameters[3] = v26;
    }
    if ( v21 >= 0x28 )
    {
      v27 = Parameters[4];
      if ( *((_QWORD *)v22 + 4) )
        v27 = *((_QWORD *)v22 + 4);
      Parameters[4] = v27;
    }
    if ( v21 >= 0x38 )
    {
      v28 = Parameters[5];
      if ( *((_QWORD *)v22 + 6) )
        v28 = *((_QWORD *)v22 + 6);
      Parameters[5] = v28;
    }
    if ( v21 >= 0x40 )
    {
      v29 = Parameters[6];
      if ( *((_QWORD *)v22 + 7) )
        v29 = *((_QWORD *)v22 + 7);
      Parameters[6] = v29;
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
    RtlSetBits((PRTL_BITMAP)ProcessEnvironmentBlock->TlsBitmap, 0, 0x13u);
  RtlSetBits((PRTL_BITMAP)ProcessEnvironmentBlock->TlsBitmap, 4u, 1u);
  RtlSetBits((PRTL_BITMAP)ProcessEnvironmentBlock->TlsBitmap, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v32 = LdrpShouldCreateStackTraceDb) != 0 )
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
        3915,
        (unsigned int)"LdrpInitializeProcess",
        2,
        (__int64)"Stack trace database size is %Id Mb\n",
        v33 >> 20);
    v122[0] = 0LL;
    v122[1] = 0LL;
    v122[2] = v33;
    ApplicationKeyOption = RtlControlStackTraceDataBase(0LL, 24LL, v122);
    v32 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v32 )
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
      4010,
      (unsigned int)"LdrpInitializeProcess",
      0,
      (__int64)"Creating the process heap failed\n");
    goto LABEL_121;
  }
  ProcessEnvironmentBlock->ProcessHeap = Heap;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
  {
    v40 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
    RtlpExceptionLog2 = (__int64)v40;
    if ( v40 )
      memset(v40, 0, 0x11620uLL);
  }
  result = RtlAllocateActivationContextStack(&v111->ActivationContextStackPointer);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpHeap = v38;
  RtlInitializeSListHead(&EtwpFreeRegistrationList);
  ApplicationKeyOption = NtQuerySystemInformation(SystemPhysicalMemoryInformation, &SystemInformation, 8u, 0LL);
  v41 = RtlpHypervisorSharedUserVa;
  if ( ApplicationKeyOption >= 0 )
    v41 = SystemInformation;
  RtlpHypervisorSharedUserVa = v41;
  NtdllBaseTag = RtlCreateTagHeap(v38, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = TpInitializePackage();
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
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
  SubKey.Buffer = (wchar_t *)_mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v97[0] )
  {
    ApplicationKeyOption = RtlQueryApplicationKeyOption(
                             v97[0],
                             Handle,
                             (__int64)L"DebugProcessHeapOnly",
                             4LL,
                             (__int64)&v95,
                             4,
                             v83,
                             0LL);
    if ( ApplicationKeyOption >= 0 && dword_18014C3F8 && v95 )
    {
      dword_18014C3F8 = 0;
      *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
    }
  }
  RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)0x7FFE0030);
  v42 = DestinationString.Length + 40;
  v43 = (wchar_t *)RtlAllocateHeap(v38, 0, DestinationString.Length + 38 + 2LL);
  if ( !v43 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v42;
  Destination.Buffer = v43;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 0x42) != 2 )
  {
    v44 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180108AF8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v83) = result;
        v45 = (_UNICODE_STRING *)&unk_180108AF8;
        v46 = 4246;
LABEL_145:
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          v46,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)"Failed to open %wZ with status 0x%08lx\n",
          v45,
          v83);
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
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180108AD8;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      ApplicationKeyOption = result;
      if ( result >= 0 )
      {
        while ( 1 )
        {
          v48 = RtlAllocateHeap(v38, 0, v44);
          BaseAddress = v48;
          if ( !v48 )
            return -1073741801;
          LdrpKnownDllPath.Length = 0;
          LdrpKnownDllPath.MaximumLength = v44;
          LdrpKnownDllPath.Buffer = (wchar_t *)v48;
          result = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &ReturnedLength);
          ApplicationKeyOption = result;
          if ( result >= 0 )
          {
            NtClose(LinkHandle);
            goto LABEL_165;
          }
          if ( result != -1073741789 )
          {
            v18 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) == 0 )
              goto LABEL_24;
            LODWORD(ReturnLengtha) = result;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              4348,
              (unsigned int)"LdrpInitializeProcess",
              0,
              (__int64)"Querying the known DLL directory link object failed with status 0x%08lx\n",
              ReturnLengtha);
            goto LABEL_23;
          }
          RtlFreeHeap(v38, 0, BaseAddress);
          v44 = ReturnedLength;
        }
      }
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v83) = result;
        v45 = (_UNICODE_STRING *)&unk_180108AD8;
        v46 = 4313;
        goto LABEL_145;
      }
      goto LABEL_24;
    }
    v109.Length = 0;
    *(_QWORD *)&v109.MaximumLength = 0LL;
    *(_DWORD *)((char *)&v109.Buffer + 2) = 0;
    HIWORD(v109.Buffer) = 0;
    RtlWow64GetCurrentCpuArea(v91, 0LL, 0LL);
    if ( v91[0] == 332 )
    {
      v47 = L"\\KnownDlls32";
    }
    else
    {
      if ( v91[0] != 452 )
        goto LABEL_152;
      v47 = L"\\KnownDllsArm32";
    }
    RtlInitUnicodeString(&v109, v47);
LABEL_152:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &v109;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle32, 3u, &ObjectAttributes);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v83) = result;
        v45 = &v109;
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
    UnicodeString = DestinationString;
  }
  else
  {
    v49 = *(__m128i *)(*(_QWORD *)Flags + 56LL);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(*(_QWORD *)Flags + 56LL);
    v50 = (wchar_t *)_mm_srli_si128(v49, 8).m128i_u64[0];
    UnicodeString.Buffer = v50;
    if ( !v50 || !UnicodeString.Length || !*v50 )
    {
      v51 = (wchar_t *)RtlAllocateHeap(v38, 0, 8uLL);
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
      v96 = 0;
      *(_DWORD *)v51 = MEMORY[0x7FFE0030];
      v51[2] = MEMORY[0x7FFE0034];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  Length = Destination.Length;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
    Length = 2LL * Destination.Length + 22;
  v53 = Length;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v53 = Length + 2 * (DestinationString.Length + 9LL);
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      *(_WORD *)(*(_QWORD *)Flags + 80LL) = 0;
  }
  v93.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v53);
  if ( !v93.Buffer )
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
  v93.Length = 0;
  v93.MaximumLength = v53;
  RtlAppendUnicodeStringToString(&v93, &Destination);
  v54 = v93.Length;
  v93.Buffer[((unsigned __int64)v93.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v93;
  LdrpSystem32 = (__int128)v93;
  LOWORD(LdrpSystem32) = v54 - 2;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString(&v93, &Destination);
    RtlAppendUnicodeToString(&v93, L"forwarders;");
  }
  if ( v53 > Length )
  {
    RtlAppendUnicodeStringToString(&v93, &DestinationString);
    RtlAppendUnicodeToString(&v93, L"\\system;");
    RtlAppendUnicodeStringToString(&v93, &DestinationString);
    RtlAppendUnicodeToString(&v93, L";");
    RtlpSystemDirs = v93;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  v55 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v105);
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
  LdrpNtDllDataTableEntry = (__int64)ModuleEntry;
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(LdrpNtDllDataTableEntry + 152) - 52LL) = -1;
  v58 = (_UNICODE_STRING *)LdrpNtDllDataTableEntry;
  *(_DWORD *)(LdrpNtDllDataTableEntry + 104) |= 0x204u;
  v58[15].Buffer = (wchar_t *)((char *)v58[15].Buffer - LdrSystemDllInitBlock.SystemDllWowRelocation);
  v58 = (_UNICODE_STRING *)((char *)v58 + 72);
  *v58 = Destination;
  RtlAppendUnicodeStringToString(v58, &NtDllName);
  v59 = LdrpNtDllDataTableEntry;
  *(UNICODE_STRING *)(LdrpNtDllDataTableEntry + 88) = NtDllName;
  *(_QWORD *)(v59 + 48) = v55;
  LdrpInsertDataTableEntry(v59);
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14A5u);
  LdrpInsertModuleToIndex(LdrpNtDllDataTableEntry, (__int64)v105);
  result = LdrpProcessMappedModule(LdrpNtDllDataTableEntry, 1);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  LdrpLogDllState(*(_QWORD *)(LdrpNtDllDataTableEntry + 48), LdrpNtDllDataTableEntry + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL) = 9;
  RtlInitializeHistoryTable();
  v60 = v57 + 32;
  v61 = qword_1801523F0;
  if ( *(__int64 **)(qword_1801523F0 + 8) != &qword_1801523F0 )
    __fastfail(3u);
  *v60 = qword_1801523F0;
  *((_QWORD *)v57 + 5) = &qword_1801523F0;
  *(_QWORD *)(v61 + 8) = v60;
  qword_1801523F0 = (__int64)(v57 + 32);
  qword_1801522B8 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  RtlInitializeCriticalSection(&LdrpWorkQueueLock);
  result = LdrpCreateLoaderEvents();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(ReturnLengtha) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4666,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Failed to initialize Parallel loader, st = 0x%x\n",
        ReturnLengtha);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, v129);
  memset(v123, 0, 0x98uLL);
  *(_QWORD *)&v123[1] = v129;
  DWORD2(v123[1]) = 512;
  v123[0] = ImagePathName;
  *(_QWORD *)&v123[2] = &ApplicationKeyOption;
  v62 = LdrpAllocateModuleEntry((__int64)v123);
  v63 = v62;
  if ( !v62 )
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
  LdrpImageEntry = (__int64)v62;
  v64 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v64;
  }
  while ( v64 );
  *(_WORD *)(**(_QWORD **)(LdrpImageEntry + 152) - 52LL) = -1;
  v65 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  *(_DWORD *)(v65 + 104) |= 4u;
  v66 = v86;
  if ( UseCOR )
  {
    v67 = *(_DWORD *)(v65 + 104) | 0x400000;
    *(_DWORD *)(v65 + 104) = v67;
    if ( v66 )
      *(_DWORD *)(v65 + 104) = v67 | 0x1000000;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(v65 + 248) = 0LL;
  v68 = 0LL;
  v69 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v69 )
  {
    while ( (unsigned __int64)v69 > ImagePathName.m128i_i64[1] )
    {
      if ( *--v69 == 92 )
      {
        v68 = v69 + 1;
        break;
      }
    }
  }
  if ( v68 )
  {
    v70 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - (_WORD)v68;
    *(_WORD *)(v65 + 88) = v70;
    if ( (unsigned __int64)(ImagePathName.m128i_u16[1] - ImagePathName.m128i_u16[0]) >= 2 )
      v70 += 2;
    *(_WORD *)(v65 + 90) = v70;
    *(_QWORD *)(v65 + 96) = v68;
  }
  else
  {
    *(_OWORD *)(v65 + 88) = *(_OWORD *)(v63 + 72);
  }
  v71 = ProcessEnvironmentBlock->ImageBaseAddress;
  v72 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v71 && !v66 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(v71);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v65 = LdrpImageEntry;
  }
  *(_QWORD *)(v65 + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v65);
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
  LdrpInsertModuleToIndex(LdrpImageEntry, (__int64)v72);
  result = LdrpProcessMappedModule(LdrpImageEntry, UseWOW64 == 0);
  ApplicationKeyOption = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  inited = RtlpInitCurrentDir(&UnicodeString.Length);
  ApplicationKeyOption = inited;
  if ( inited < 0 )
  {
    v74 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v83) = inited;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4844,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v83);
      v74 = LdrpDebugFlags;
    }
    if ( (v74 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v96 )
    RtlFreeAnsiString(&UnicodeString);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x2000100) != 0 )
  {
    v75 = LdrpAllocateModuleEntry(0LL);
    v76 = (__int64)v75;
    if ( !v75 )
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
    *(_DWORD *)(*((_QWORD *)v75 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v75 + 19) - 52LL) = -1;
    v77 = v118;
    *((_DWORD *)v75 + 26) |= *(_DWORD *)(v118 + 104);
    *((_QWORD *)v75 + 31) = *(_QWORD *)(v77 + 248);
    *((_WORD *)v75 + 55) = 0;
    *(_OWORD *)(v75 + 72) = *(_OWORD *)(v77 + 72);
    *(_OWORD *)(v75 + 88) = *(_OWORD *)(v77 + 88);
    *((_DWORD *)v75 + 32) = *(_DWORD *)(v77 + 128);
    *((_QWORD *)v75 + 6) = *(_QWORD *)(v77 + 48);
    LdrpInsertDataTableEntry((__int64)v75);
    LdrpLogDllState(*(_QWORD *)(v76 + 48), v76 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v76 + 48), 0LL, &v105);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v76, (__int64)v105);
    result = LdrpProcessMappedModule(v76, 1);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v76 + 56) = *(_QWORD *)(v77 + 56);
    LdrpLogDllState(*(_QWORD *)(v76 + 48), v76 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v76 + 152) + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) != 0 )
    {
      result = AVrfInitializeVerifier(0LL, 0LL, 0LL, 1LL, BaseOfImage, 0LL);
    }
    else
    {
      v89[0] = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v76 + 152), 0LL, v89);
    }
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    v72 = OutHeaders;
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
    if ( v97[0] )
    {
      NtClose(v97[0]);
      v97[0] = 0LL;
    }
    result = LdrpLoadWow64(&Destination);
    ApplicationKeyOption = result;
    if ( result >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      _guard_dispatch_icall_fptr();
LABEL_314:
      if ( Handle )
        NtClose(Handle);
      if ( v97[0] )
        NtClose(v97[0]);
      return 0;
    }
    return result;
  }
  v112 = 0LL;
  if ( UseCOR )
  {
    result = LdrpCorInitialize((PVOID *)&v112);
    ApplicationKeyOption = result;
    if ( result < 0 )
      return result;
    if ( (_BYTE)v86 )
    {
      result = LdrpCorValidateImage(ProcessEnvironmentBlock->ImageBaseAddress);
      ApplicationKeyOption = result;
      if ( result < 0 )
        return result;
    }
    if ( (v111->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v108 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  result = LdrpInitializeTls();
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(ReturnLengtha) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5083,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Initializing TLS slots failed with status 0x%08lx\n",
        ReturnLengtha);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( v112 )
  {
    v87 = 0;
    result = LdrpInitializeGraphRecurse(v112[19], 0LL, &v87);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(ReturnLengtha) = result;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5102,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)"DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          ReturnLengtha);
        goto LABEL_23;
      }
      goto LABEL_24;
    }
  }
  ProcedureAddress = 0LL;
  if ( (unsigned __int16)(v72->OptionalHeader.Subsystem - 2) <= 1u )
  {
    result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
    ApplicationKeyOption = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v83) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5243,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernel32DllName,
            v83);
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v83) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5216,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &LdrpKernelbaseDllName,
            v83);
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
          LODWORD(ReturnLengtha) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5232,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            ReturnLengtha);
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      ApplicationKeyOption = 0;
    }
    else
    {
      result = LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180108AE8, 0, &Kernel32ThreadInitThunkFunction);
      ApplicationKeyOption = result;
      if ( result < 0 )
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LODWORD(v84) = result;
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5148,
            (unsigned int)"LdrpInitializeProcess",
            0,
            (__int64)"Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_180108AE8,
            &LdrpKernel32DllName,
            v84);
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180108B08, 0, &ProcedureAddress);
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
  v78 = SourceString;
  if ( SourceString && *SourceString )
  {
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v78, (__int64)v78);
  }
  v79 = RtlpForceCSDebugInfoCreation;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v79 = 1;
  RtlpForceCSDebugInfoCreation = v79;
  LdrpEnableParallelLoading(*(_DWORD *)(*(_QWORD *)Flags + 1036LL));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  **(_DWORD **)&v123[2] = 0;
  if ( (_BYTE)v86 )
  {
    result = LdrpCorProcessImports(LdrpImageEntry);
  }
  else
  {
    DWORD2(v123[1]) |= 1u;
    LdrpMapAndSnapDependency((__int64)v123);
    LdrpDrainWorkQueue(1);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
      goto LABEL_297;
    result = LdrpPrepareModuleForExecution(LdrpImageEntry, *(__int64 *)&v123[2]);
  }
  ApplicationKeyOption = result;
  if ( result < 0 )
  {
LABEL_297:
    v18 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(ReturnLengtha) = result;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5449,
        (unsigned int)"LdrpInitializeProcess",
        0,
        (__int64)"Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        ReturnLengtha);
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
    && (result = LdrpInitializePerUserWindowsDirectory((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress),
        ApplicationKeyOption = result,
        result >= 0) )
  {
    LdrpProcessInitContextRecord = v108;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    v88 = 0;
    ApplicationKeyOption = LdrpInitializeGraphRecurse(*(_QWORD *)(LdrpImageEntry + 152), *(__int64 *)&v123[2], &v88);
    LdrpReleaseLoaderLock(v80, 9, ApplicationKeyOption);
    LdrpFreeLoadContextOfNode(*(_QWORD **)(LdrpImageEntry + 152), *(__int64 *)&v123[2]);
    LdrpDropLastInProgressCount();
    LdrpProcessInitContextRecord = 0LL;
    LdrpReleaseDllPath((__int64)v129);
    result = ApplicationKeyOption;
    if ( ApplicationKeyOption < 0 )
    {
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(ReturnLengtha) = ApplicationKeyOption;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5584,
          (unsigned int)"LdrpInitializeProcess",
          0,
          (__int64)"Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          ReturnLengtha);
        goto LABEL_23;
      }
      goto LABEL_24;
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v124 = 72LL;
      v125 = 1;
      memset(v126, 0, sizeof(v126));
      RtlActivateActivationContextUnsafeFast((__int64)&v124, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(1u, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v124);
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
