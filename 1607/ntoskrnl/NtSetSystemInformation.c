/*
 * XREFs of NtSetSystemInformation @ 0x1403EB59C
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x1407BCC28 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     ExpUpdateTimerConfiguration @ 0x140007194 (ExpUpdateTimerConfiguration.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140110550 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011131C (KeSetSystemAllowedCpuSets.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     IoConfigureCrashDump @ 0x140143410 (IoConfigureCrashDump.c)
 *     xKdEnumerateDebuggingDevices @ 0x14014CF94 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ZwLoadDriver @ 0x14015C110 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x14015D4D0 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x14015D830 (ZwUnloadDriver.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     KdUpdateTimeSlipEvent @ 0x1401D1670 (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x1401D2760 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x1401D7774 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1401DA370 (KeIntSteerAssignCpuSetForGsiv.c)
 *     MiGetThreadPartition @ 0x1401E815C (MiGetThreadPartition.c)
 *     PsSetCpuQuotaInformation @ 0x14020EBA4 (PsSetCpuQuotaInformation.c)
 *     ExpCompleteSoftReboot @ 0x14022C9DC (ExpCompleteSoftReboot.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SmSetStoreInformation @ 0x1403E472C (SmSetStoreInformation.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1403EC51C (PfSnSetPrefetcherInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     ExHandleSPCall2 @ 0x1404B35D4 (ExHandleSPCall2.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404B5D6C (KeSynchronizeWithDynamicProcessors.c)
 *     PsLookupProcessThreadByCid @ 0x1404B6B78 (PsLookupProcessThreadByCid.c)
 *     PsChangeQuantumTable @ 0x1405455D4 (PsChangeQuantumTable.c)
 *     MmUnloadSystemImage @ 0x1405462A8 (MmUnloadSystemImage.c)
 *     MmIssueMemoryListCommand @ 0x140546D28 (MmIssueMemoryListCommand.c)
 *     ExpInitializeSessionDriver @ 0x140548294 (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14057B01C (ExpRegisterFirmwareTableInformationHandler.c)
 *     DbgkRegisterErrorPort @ 0x14057BE30 (DbgkRegisterErrorPort.c)
 *     KeInitializeEntropySystem @ 0x14057E110 (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x140581758 (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1405FC3E4 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x140603138 (CmReconcileAndValidateAllHives.c)
 *     MmAddVerifierThunks @ 0x1406587A4 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x14065907C (MmCreateMirror.c)
 *     MiCombineIdenticalPages @ 0x140663C88 (MiCombineIdenticalPages.c)
 *     MmScrubMemory @ 0x140665370 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x140667780 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1406ABB78 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1406AC3B4 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1406AC408 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1406AC7A8 (ExpUpdateComPlusPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x1406B7B6C (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x140702898 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140702A08 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140702A38 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140710F7C (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140721048 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140721060 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140721158 (VfSetVerifierInformationEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  SYSTEM_INFORMATION_CLASS v5; // ebx
  __int64 v6; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v8; // rdx
  int v9; // eax
  NTSTATUS updated; // edi
  __int64 v11; // rcx
  int v12; // eax
  NTSTATUS result; // eax
  __int32 v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  int v18; // ebx
  int SystemImage; // eax
  char *v20; // rbx
  PVOID v21; // rsi
  PIMAGE_NT_HEADERS v22; // rax
  __int64 AddressOfEntryPoint; // rdx
  __int32 v24; // ebx
  PVOID v25; // rbx
  __int64 v26; // rcx
  char *v27; // rbx
  PIMAGE_NT_HEADERS v28; // rax
  __int32 v29; // ebx
  __int32 v30; // ebx
  __int32 v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int32 v39; // ebx
  int v40; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v42; // rax
  _BYTE *v43; // rdi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int32 v48; // ebx
  __int32 v49; // ebx
  ULONG ActiveProcessorCount; // eax
  __int64 *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  PVOID v54; // rcx
  __int32 v55; // ebx
  NTSTATUS v56; // eax
  char *v57; // rcx
  int v58; // ebx
  int v59; // ebx
  __int64 v60; // rbx
  void (__stdcall *v61)(); // rax
  int v62; // edi
  __int64 v63; // rax
  __int32 v64; // ebx
  __int32 v65; // ebx
  int v66; // ebx
  __int64 v67; // rax
  unsigned int v68; // ebx
  NTSTATUS v69; // ebx
  unsigned int v70; // eax
  int *ThreadPartition; // rax
  __int64 v72; // r9
  __int64 v73; // rcx
  __int128 v74; // xmm6
  __m128i v75; // xmm1
  __int128 v76; // xmm7
  unsigned __int16 v77; // di
  char *v78; // rax
  PVOID PoolWithTag; // rax
  PVOID v80; // r15
  __int32 v81; // ebx
  __int32 v82; // ebx
  __int32 v83; // ebx
  int v84; // ebx
  ULONG v85; // r15d
  __int64 v86; // rbx
  char v87[23]; // [rsp+30h] [rbp-438h] BYREF
  char v88; // [rsp+47h] [rbp-421h] BYREF
  LUID PrivilegeValue; // [rsp+50h] [rbp-418h]
  ULONG v91; // [rsp+58h] [rbp-410h] BYREF
  int v92; // [rsp+5Ch] [rbp-40Ch]
  int SessionId; // [rsp+60h] [rbp-408h] BYREF
  void *Buf1[2]; // [rsp+68h] [rbp-400h] BYREF
  __int64 v95; // [rsp+78h] [rbp-3F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-3E8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+88h] [rbp-3E0h] BYREF
  int v98; // [rsp+98h] [rbp-3D0h]
  ULONG Size[8]; // [rsp+A0h] [rbp-3C8h] BYREF
  PVOID v100; // [rsp+C0h] [rbp-3A8h] BYREF
  PVOID v101[2]; // [rsp+E0h] [rbp-388h] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp-378h] BYREF
  __int64 v103; // [rsp+F8h] [rbp-370h] BYREF
  PVOID Object[4]; // [rsp+100h] [rbp-368h] BYREF
  __int64 v105[3]; // [rsp+138h] [rbp-330h] BYREF
  __int64 v106[9]; // [rsp+150h] [rbp-318h] BYREF
  int v107; // [rsp+19Ch] [rbp-2CCh]
  __int128 v108; // [rsp+1B0h] [rbp-2B8h]
  unsigned int v109; // [rsp+1C0h] [rbp-2A8h]
  __int64 v110; // [rsp+1C8h] [rbp-2A0h] BYREF
  unsigned int v111; // [rsp+1D8h] [rbp-290h]
  _WORD v112[8]; // [rsp+1E0h] [rbp-288h] BYREF
  __int128 v113; // [rsp+1F0h] [rbp-278h] BYREF
  __int128 v114; // [rsp+200h] [rbp-268h] BYREF
  __int64 v115; // [rsp+210h] [rbp-258h]
  PVOID v116; // [rsp+218h] [rbp-250h]
  __int64 v117; // [rsp+220h] [rbp-248h]
  __int128 v118; // [rsp+240h] [rbp-228h] BYREF
  __int128 v119; // [rsp+250h] [rbp-218h] BYREF
  void *Src[2]; // [rsp+260h] [rbp-208h]
  __int128 v121; // [rsp+280h] [rbp-1E8h] BYREF
  __int64 v122; // [rsp+290h] [rbp-1D8h]
  __int128 v123; // [rsp+298h] [rbp-1D0h]
  __int128 v124; // [rsp+2A8h] [rbp-1C0h]
  __int128 v125; // [rsp+2B8h] [rbp-1B0h]
  char v126[160]; // [rsp+2D0h] [rbp-198h] BYREF
  char v127[160]; // [rsp+370h] [rbp-F8h] BYREF

  v3 = SystemInformationLength;
  v5 = SystemInformationClass;
  v6 = 1LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 4LL;
  if ( PreviousMode )
  {
    v9 = 2;
    if ( SystemInformationClass != SystemErrorPortInformation )
      v9 = 4;
    if ( SystemInformationLength )
    {
      if ( ((v9 - 1) & (unsigned int)SystemInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&SystemInformationClass = (char *)SystemInformation + SystemInformationLength;
      if ( *(_QWORD *)&SystemInformationClass > 0x7FFFFFFF0000uLL
        || *(_QWORD *)&SystemInformationClass < (unsigned __int64)SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  updated = 0;
  if ( v5 > SystemSpecialPoolInformation )
  {
    if ( v5 > SystemCriticalProcessErrorLogInformation )
    {
      if ( v5 > SystemVmGenerationCountInformation )
      {
        v24 = v5 - 168;
        if ( v24 )
        {
          v48 = v24 - 2;
          if ( v48 )
          {
            v49 = v48 - 6;
            if ( v49 )
            {
              if ( v49 != 1 )
                return -1073741821;
              SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
              if ( SessionId == -1 )
                return 0;
              return PsInvokeWin32Callout(32LL, 0LL, 1LL, &SessionId);
            }
            else
            {
              if ( SystemInformationLength < 8 )
                return -1073741820;
              v85 = SystemInformationLength - 8;
              if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v85 > 0xA0 )
                return -1073741820;
              v116 = SystemInformation;
              v86 = *(_QWORD *)SystemInformation;
              v117 = *(_QWORD *)SystemInformation;
              memmove(v126, (char *)SystemInformation + 8, v85);
              updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
              if ( updated < 0 )
                return updated;
              return KeSetTagCpuSets(v85 >> 3, v126, v86);
            }
          }
          else
          {
            if ( SystemInformationLength != 16 )
              return -1073741820;
            if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
              return -1073741727;
            return KeIntSteerAssignCpuSetForGsiv(
                     *(_OWORD *)SystemInformation,
                     WORD2(*(_QWORD *)SystemInformation),
                     *((_QWORD *)SystemInformation + 1));
          }
        }
        else
        {
          if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0xA0 )
            return -1073741820;
          memmove(v127, SystemInformation, SystemInformationLength);
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
          return KeSetSystemAllowedCpuSets((unsigned int)v3 >> 3, v127);
        }
      }
      if ( v5 == SystemVmGenerationCountInformation )
      {
        if ( PreviousMode )
          return -1073741790;
        if ( SystemInformationLength != 8 )
          return -1073741820;
        return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
      }
      v81 = v5 - 150;
      if ( !v81 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        if ( !(_DWORD)v3 )
        {
          if ( ExBootLoaderMetadata )
            _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
          return updated;
        }
        return -1073741820;
      }
      v82 = v81 - 1;
      if ( !v82 )
      {
        PrivilegeValue = (LUID)19LL;
        if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
          return -1073741727;
        if ( (_DWORD)v3 != 1 )
          return -1073741820;
        if ( *(_BYTE *)SystemInformation && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        return ExpCompleteSoftReboot();
      }
      v83 = v82 - 1;
      if ( !v83 )
      {
        if ( SystemInformationLength != 8 )
          return -1073741820;
        if ( PreviousMode )
          return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, 4LL, SystemInformationLength, 1LL);
        return -1073741811;
      }
      v84 = v83 - 3;
      if ( !v84 )
        return CmReconcileAndValidateAllHives(*(_QWORD *)&SystemInformationClass, 4LL, SystemInformationLength, 1LL);
      if ( v84 != 4 )
        return -1073741821;
      return -1073741637;
    }
    if ( v5 == SystemCriticalProcessErrorLogInformation )
    {
      if ( SystemInformationLength != 48 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
        return -1073741727;
      if ( (_DWORD)CriticalProcessExceptionData )
        return 0;
      v74 = *(_OWORD *)SystemInformation;
      v123 = *(_OWORD *)SystemInformation;
      v75 = *((__m128i *)SystemInformation + 1);
      v124 = (__int128)v75;
      v76 = *((_OWORD *)SystemInformation + 2);
      v125 = v76;
      *(__m128i *)Src = v75;
      v124 = 0uLL;
      v77 = _mm_cvtsi128_si32(v75);
      if ( v77 && (v77 & 1) == 0 )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v78 = (char *)Src[1] + v77;
        if ( (unsigned __int64)v78 > 0x7FFFFFFF0000LL || v78 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v77, 0x50535845u);
        v80 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Src[1], v77);
          *((_QWORD *)&v124 + 1) = v80;
          LOWORD(v124) = v77;
          WORD1(v124) = v77;
        }
      }
      CriticalProcessExceptionData = v74;
      xmmword_1402FCFF0 = v124;
      xmmword_1402FD000 = v76;
      return 0;
    }
    if ( v5 > SystemStoreInformation )
    {
      v29 = v5 - 110;
      if ( !v29 )
        return -1073741822;
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 2;
        if ( !v31 )
          return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
        v32 = v31 - 14;
        if ( !v32 )
        {
          if ( SystemInformationLength == 16 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              updated = MmScrubMemory(v73, *(_QWORD *)SystemInformation, v106);
              PrivilegeValue.LowPart = updated;
              *((_QWORD *)SystemInformation + 1) = v106[0];
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v33 = v32 - 2;
        if ( !v33 )
          return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
        v34 = v33 - 1;
        if ( !v34 )
        {
          if ( ((SystemInformationLength - 16) & 0xFFFFFFF7) == 0 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              memmove(&v110, SystemInformation, v3);
              v70 = v111;
              if ( (_DWORD)v3 == 16 )
                v70 = 0;
              v111 = v70;
              v95 = v110;
              ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
              LOBYTE(v72) = KeGetCurrentThread()->PreviousMode;
              updated = MiCombineIdenticalPages(ThreadPartition, v110, v111, v72, v105);
              PrivilegeValue.LowPart = updated;
              *((_QWORD *)SystemInformation + 1) = v105[0];
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          v40 = v35 - 1;
          if ( v40 )
          {
            if ( v40 != 2 )
              return -1073741821;
            if ( SystemInformationLength != 32 )
              return -1073741820;
            return ExHandleSPCall2(*(_QWORD *)&SystemInformationClass, SystemInformation, 32, 1LL);
          }
          else
          {
            if ( SystemInformationLength != 4 )
              return -1073741820;
            *(_DWORD *)&DriverServiceName.Length = 7733364;
            DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
            if ( *(_BYTE *)SystemInformation & 1 )
            {
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v42 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpConDrvLoadLock, 0LL, 0);
              v43 = v42;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpConDrvLoadLock, 0LL) )
                ExfAcquirePushLockExclusiveEx(&ExpConDrvLoadLock, v42, (ULONG_PTR)&ExpConDrvLoadLock);
              if ( v43 )
                v43[26] |= 1u;
              updated = ZwLoadDriver(&DriverServiceName);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
              KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v45, v46, v47);
              return updated;
            }
            if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              return -1073741727;
            return ZwUnloadDriver(&DriverServiceName);
          }
        }
        else
        {
          if ( PreviousMode )
            return -1073741790;
          if ( SystemInformationLength != 24 )
            return -1073741820;
          return KeInitializeEntropySystem(
                   *(_QWORD *)SystemInformation,
                   *((_QWORD *)SystemInformation + 1),
                   *((_QWORD *)SystemInformation + 2),
                   1LL);
        }
      }
      if ( SystemInformationLength != 4 )
        return -1073741820;
      if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
      {
        MEMORY[0xFFFFF78000000248] = *(_DWORD *)SystemInformation;
        return 0;
      }
      return -1073741790;
    }
    if ( v5 == SystemStoreInformation )
      return SmSetStoreInformation(
               *(__int64 *)&SystemInformationClass,
               (__int128 *)SystemInformation,
               SystemInformationLength,
               PreviousMode);
    if ( v5 > SystemCoverageInformation )
    {
      if ( v5 == SystemVerifierFaultsInformation )
      {
        if ( SystemInformationLength != 40 )
          return -1073741820;
        if ( PreviousMode )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          v113 = *(_OWORD *)SystemInformation;
          v114 = *((_OWORD *)SystemInformation + 1);
          v115 = *((_QWORD *)SystemInformation + 4);
          result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v113 + 8, 1LL);
          if ( result < 0 )
            return result;
          v69 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v114 + 8, 1LL);
          if ( v69 < 0 )
          {
            VfFreeCapturedUnicodeString((char *)&v113 + 8);
            return v69;
          }
          SystemInformation = &v113;
        }
        updated = VfFaultsSetParameters(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
        if ( !PreviousMode )
          return updated;
        VfFreeCapturedUnicodeString((char *)SystemInformation + 8);
        v57 = (char *)SystemInformation + 24;
LABEL_202:
        VfFreeCapturedUnicodeString(v57);
        return updated;
      }
      if ( v5 != SystemDynamicTimeZoneInformation )
      {
        if ( v5 == SystemProcessorMicrocodeUpdateInformation )
        {
          LOBYTE(SystemInformationLength) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(
                   SystemInformation,
                   (unsigned int)v3,
                   SystemInformationLength,
                   1LL);
        }
        return -1073741821;
      }
      v68 = 432;
    }
    else
    {
      if ( v5 == SystemCoverageInformation )
      {
        if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (unsigned int)v3 < 0x18 )
          return -1073741820;
        return ExpCovResetInformation(SystemInformation, (unsigned int)v3);
      }
      v39 = v5 - 89;
      if ( !v39 )
      {
        if ( PreviousMode == 1 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
            return -1073741727;
          if ( !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
            return DbgkRegisterErrorPort(SystemInformation, (unsigned int)v3);
        }
        return -1073741637;
      }
      v64 = v39 - 2;
      if ( !v64 )
      {
        if ( !PreviousMode )
        {
          if ( SystemInformationLength )
            return -1073741584;
          else
            return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
        }
        return -1073741790;
      }
      v65 = v64 - 1;
      if ( !v65 )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 != 40 )
          return -1073741820;
        return VfSetVerifierInformationEx(SystemInformation);
      }
      v66 = v65 - 1;
      if ( v66 )
      {
        if ( v66 != 1 )
          return -1073741821;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( (_DWORD)v3 == 8 )
          {
            v67 = *(_QWORD *)SystemInformation;
            _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(_QWORD *)SystemInformation);
            _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~HIDWORD(v67));
            return updated;
          }
          return -1073741820;
        }
        return -1073741790;
      }
      v68 = 172;
    }
    if ( SystemInformationLength != v68 )
      return -1073741820;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
      return -1073741727;
    return ExpSetTimeZoneInformation(SystemInformation, v68, *(_QWORD *)&SystemInformationLength, v6);
  }
  if ( v5 == SystemSpecialPoolInformation )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    {
      if ( (_DWORD)v3 == 8 )
      {
        v63 = *(_QWORD *)SystemInformation;
        MmSpecialPoolTag = *(_QWORD *)SystemInformation;
        MmSpecialPoolCatchOverruns = BYTE4(v63) & 1;
        return updated;
      }
      return -1073741820;
    }
    return -1073741790;
  }
  if ( v5 > SystemSessionDetach )
  {
    if ( v5 > SystemWatchdogTimerInformation )
    {
      switch ( v5 )
      {
        case SystemWow64SharedInformationObsolete:
          return -1073741822;
        case SystemRegisterFirmwareTableInformationHandler:
          LOBYTE(SystemInformationLength) = PreviousMode;
          return ExpRegisterFirmwareTableInformationHandler(
                   SystemInformation,
                   (unsigned int)v3,
                   SystemInformationLength,
                   1LL);
        case SystemSuperfetchInformation:
          LOBYTE(v6) = PreviousMode;
          return PfSetSuperfetchInformation(0LL, SystemInformation, SystemInformationLength, v6);
        case SystemMemoryListInformation:
          LOBYTE(SystemInformationLength) = PreviousMode;
          return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, SystemInformationLength, 1LL);
        case SystemFileCacheInformationEx:
LABEL_248:
          if ( SystemInformationLength < 0x40 )
            return -1073741820;
          if ( v5 == SystemFileCacheInformation )
          {
            v62 = 0;
            v92 = 0;
          }
          else
          {
            v92 = *((_DWORD *)SystemInformation + 15);
            v62 = v92;
            if ( (v92 & 0xFFFFFFF0) != 0 || (v92 & 0xC) == 0xC || (v92 & 3) == 3 )
              return -1073741584;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(
                     *((_QWORD *)SystemInformation + 3),
                     *((_QWORD *)SystemInformation + 4),
                     2,
                     1,
                     v62,
                     &v88);
          return -1073741790;
      }
      if ( v5 != SystemThreadPriorityClientIdInformation )
      {
        if ( v5 == SystemRefTraceInformation )
          return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
        return -1073741821;
      }
      if ( SystemInformationLength < 0x18 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return -1073741727;
      if ( PreviousMode )
      {
        v121 = *(_OWORD *)SystemInformation;
        v122 = *((_QWORD *)SystemInformation + 2);
        SystemInformation = &v121;
      }
      if ( (unsigned int)(*((_DWORD *)SystemInformation + 4) - 1) <= 0x1E )
      {
        v119 = *(_OWORD *)SystemInformation;
        updated = PsLookupProcessThreadByCid(&v119, 0LL, Object);
        if ( updated >= 0 )
        {
          v25 = Object[0];
          if ( *((_BYTE *)Object[0] + 4) )
          {
            updated = -1073741749;
          }
          else
          {
            KeSetActualBasePriorityThread((__int64)Object[0], *((_DWORD *)SystemInformation + 4));
            updated = 259;
          }
          ObfDereferenceObject(v25);
        }
        return updated;
      }
      return -1073741811;
    }
    if ( v5 != SystemWatchdogTimerInformation )
    {
      v15 = v5 - 51;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          if ( PreviousMode )
            return -1073741727;
          return MmAddVerifierThunks(SystemInformation, SystemInformationLength);
        }
        v17 = v16 - 2;
        if ( !v17 )
        {
          LODWORD(v6) = 0;
          goto LABEL_51;
        }
        v18 = v17 - 2;
        if ( !v18 )
        {
          LOBYTE(v6) = PreviousMode;
          return PfSnSetPrefetcherInformation(
                   *(_QWORD *)&SystemInformationClass,
                   SystemInformation,
                   SystemInformationLength,
                   v6);
        }
        v58 = v18 - 3;
        if ( !v58 )
        {
          if ( SystemInformationLength == 4 )
          {
            v60 = *(unsigned int *)SystemInformation;
            updated = ExpUpdateComPlusPackage(v60, 4LL, 4, 1LL);
            if ( updated >= 0 )
              MEMORY[0xFFFFF780000002E0] = v60;
            return updated;
          }
          return -1073741820;
        }
        v59 = v58 - 10;
        if ( v59 )
        {
          if ( v59 == 2 )
            return -1073741637;
          return -1073741821;
        }
        return -1073741637;
      }
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return VfSetVerifierInformation(SystemInformation, (unsigned int)v3, 0LL);
      return -1073741790;
    }
    if ( PreviousMode || !SystemInformation || SystemInformationLength != 8 )
      return -1073741811;
    if ( *(_DWORD *)SystemInformation )
    {
      switch ( *(_DWORD *)SystemInformation )
      {
        case 1:
          off_1402F25D0();
          return 0;
        case 2:
          v61 = (void (__stdcall *)())off_1402F25D8;
          break;
        case 3:
          v61 = (void (__stdcall *)())off_1402F25C8;
          break;
        case 4:
          return -1073741637;
        case 6:
          return off_1402F25E8();
        case 7:
          updated = 0;
          if ( off_1402F25E8 == xKdEnumerateDebuggingDevices )
            return -1073741822;
          return updated;
        default:
          return -1073741811;
      }
      v61();
      return 0;
    }
    return -1073741637;
  }
  if ( v5 == SystemSessionDetach )
    return -1073741822;
  if ( v5 <= SystemPerformanceTraceInformation )
  {
    if ( v5 == SystemPerformanceTraceInformation )
    {
      LOBYTE(SystemInformationLength) = PreviousMode;
      return EtwSetPerformanceTraceInformation(SystemInformation, (unsigned int)v3, SystemInformationLength, 1LL);
    }
    if ( v5 == SystemFlagsInformation )
    {
      if ( SystemInformationLength != 4 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      NtGlobalFlag = *(_DWORD *)SystemInformation ^ (NtGlobalFlag ^ *(_DWORD *)SystemInformation) & 0x6DCE640F;
      *(_DWORD *)SystemInformation = NtGlobalFlag;
      return updated;
    }
    if ( v5 != SystemFileCacheInformation )
    {
      if ( v5 == SystemDpcBehaviorInformation )
      {
        if ( SystemInformationLength == 20 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
          {
            v108 = *(_OWORD *)SystemInformation;
            v109 = *((_DWORD *)SystemInformation + 4);
            KiMinimumDpcRate = DWORD2(v108);
            KiMaximumDpcQueueDepth = DWORD1(v108);
            KiAdjustDpcThreshold = HIDWORD(v108);
            KiIdealDpcRate = v109;
            KeSynchronizeWithDynamicProcessors(v109, v8, *(_QWORD *)&SystemInformationLength, v6);
            ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
            if ( ActiveProcessorCount )
            {
              v51 = KiProcessorBlock;
              v52 = ActiveProcessorCount;
              do
              {
                v53 = *v51;
                *(_DWORD *)(v53 + 11736) = KiMaximumDpcQueueDepth;
                *(_DWORD *)(v53 + 11744) = KiMinimumDpcRate;
                ++v51;
                --v52;
              }
              while ( v52 );
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      if ( v5 != SystemLoadGdiDriverInformation )
      {
        if ( v5 != SystemUnloadGdiDriverInformation )
        {
          v11 = (unsigned int)(v5 - 28);
          if ( v5 == SystemTimeAdjustmentInformation )
          {
            if ( SystemInformationLength == 8 )
            {
              if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              {
                v87[0] = *((_BYTE *)SystemInformation + 4);
                v12 = *(_DWORD *)SystemInformation;
                v91 = *(_DWORD *)SystemInformation;
                if ( v87[0] )
                {
                  v91 = KeMaximumIncrement;
                  goto LABEL_29;
                }
                if ( (unsigned int)(v12 - 1) <= 0x98967E )
                {
LABEL_29:
                  LOBYTE(v11) = 1;
                  ExAcquireTimeRefreshLock(v11);
                  updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v91, (__int64)v87);
                  ExReleaseResourceLite(&ExpTimeRefreshLock);
                  KeLeaveCriticalRegion();
                  return updated;
                }
                return -1073741584;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( v5 == SystemMirrorMemoryInformation )
            return MmCreateMirror();
          return -1073741821;
        }
        if ( SystemInformationLength != 8 )
          return -1073741820;
        if ( PreviousMode )
          return -1073741727;
        MmUnloadSystemImage(*(_QWORD *)SystemInformation);
        return 0;
      }
LABEL_51:
      if ( SystemInformationLength == 56 )
      {
        if ( !PreviousMode )
        {
          v118 = *(_OWORD *)SystemInformation;
          SystemImage = MmLoadSystemImage((unsigned int)&v118, 0, 0, v6, (__int64)&v103, (__int64)&BaseAddress);
          updated = SystemImage;
          if ( SystemImage < 0 )
          {
            if ( SystemImage == -1073741411 )
              return -1073741554;
          }
          else
          {
            v20 = (char *)BaseAddress;
            v21 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0, Size);
            v22 = RtlImageNtHeader(v20);
            *((_QWORD *)SystemInformation + 5) = v21;
            AddressOfEntryPoint = v22->OptionalHeader.AddressOfEntryPoint;
            *((_QWORD *)SystemInformation + 2) = v20;
            *((_QWORD *)SystemInformation + 3) = v103;
            *((_QWORD *)SystemInformation + 4) = &v20[AddressOfEntryPoint];
            *((_DWORD *)SystemInformation + 12) = v22->OptionalHeader.SizeOfImage;
          }
          return updated;
        }
        return -1073741727;
      }
      return -1073741820;
    }
    goto LABEL_248;
  }
  if ( v5 != SystemExtendServiceTableInformation )
  {
    if ( v5 != SystemCrashDumpStateInformation )
    {
      if ( v5 != SystemRegistryQuotaInformation )
      {
        if ( v5 == SystemPrioritySeperation )
        {
          if ( SystemInformationLength != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          v107 = *(_DWORD *)SystemInformation;
          LOBYTE(v26) = 1;
          PsChangeQuantumTable(v26);
          return 0;
        }
        if ( v5 <= SystemPrioritySeperation )
          return -1073741821;
        if ( v5 > SystemVerifierRemoveDriverInformation )
        {
          if ( v5 == SystemTimeSlipNotification )
          {
            if ( SystemInformationLength == 8 )
            {
              if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              {
                if ( *(_QWORD *)SystemInformation )
                {
                  updated = ObReferenceObjectByHandle(
                              *(HANDLE *)SystemInformation,
                              2u,
                              (POBJECT_TYPE)ExEventObjectType,
                              PreviousMode,
                              &v100,
                              0LL);
                  v54 = v100;
                  if ( updated < 0 )
                    return updated;
                }
                else
                {
                  v54 = 0LL;
                  updated = 0;
                }
                KdUpdateTimeSlipEvent(v54);
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( v5 != SystemSessionCreate )
            return -1073741821;
          return -1073741822;
        }
        if ( SystemInformationLength != 16 )
          return -1073741820;
        if ( PreviousMode )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = VfProbeAndCaptureUnicodeString(v112, SystemInformation, 1LL);
          if ( result < 0 )
            return result;
          SystemInformation = v112;
          if ( !v112[0] )
            return -1073741585;
        }
        v55 = v5 - 40;
        if ( v55 )
        {
          if ( v55 != 1 )
          {
            updated = -1073741821;
LABEL_200:
            if ( !PreviousMode )
              return updated;
            v57 = (char *)SystemInformation;
            goto LABEL_202;
          }
          v56 = VfRemoveVerifierEntry(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
        }
        else
        {
          v56 = VfAddVerifierEntry((PCUNICODE_STRING)SystemInformation);
        }
        updated = v56;
        goto LABEL_200;
      }
      if ( SystemInformationLength != 16 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
        return -1073741727;
      return CmSetRegistryQuotaInformation(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
    }
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return -1073741727;
    if ( (_DWORD)v3 != 4 )
      goto LABEL_211;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SystemInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SystemInformation + 4 > 0x7FFFFFFF0000LL
        || (char *)SystemInformation + 4 < SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      v36 = *(_DWORD *)SystemInformation;
      v98 = *(_DWORD *)SystemInformation;
    }
    else
    {
      v36 = *(_DWORD *)SystemInformation;
    }
    if ( !v36 )
    {
      v37 = 0;
      return IoConfigureCrashDump(v37, 0);
    }
    v38 = v36 - 1;
    if ( !v38 )
    {
LABEL_211:
      v37 = 1;
      return IoConfigureCrashDump(v37, 0);
    }
    if ( v38 == 1 )
      return WheaCrashDumpInitializationComplete();
    return -1073741811;
  }
  if ( SystemInformationLength != 16 )
    return -1073741820;
  if ( PreviousMode )
  {
    if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return -1073741727;
    }
    if ( (unsigned __int64)SystemInformation >= 0x7FFFFFFF0000LL )
      SystemInformation = (PVOID)0x7FFFFFFF0000LL;
    LODWORD(Buf1[0]) = *(_DWORD *)SystemInformation;
    Buf1[1] = *((void **)SystemInformation + 1);
    if ( LOWORD(Buf1[0]) == 62 )
    {
      if ( !memcmp(Buf1[1], Win32kFullPath, 0x3EuLL) )
      {
        Buf1[1] = Win32kFullPath;
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10uLL);
      }
      else
      {
        return -1073741727;
      }
    }
    else
    {
      return -1073741727;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
    result = MmLoadSystemImage((unsigned int)Buf1, 0, 0, 1, (__int64)&BugCheckParameter2, (__int64)v101);
    if ( result >= 0 )
    {
      v27 = (char *)v101[0];
      v28 = RtlImageNtHeader(v101[0]);
      if ( !v28 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver(&v27[v28->OptionalHeader.AddressOfEntryPoint], v27);
      if ( updated < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
