/*
 * XREFs of NtSetSystemInformation @ 0x1404D4654
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140771D78 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KdUpdateTimeSlipEvent @ 0x140001BA0 (KdUpdateTimeSlipEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     ExpUpdateTimerConfiguration @ 0x1400EB410 (ExpUpdateTimerConfiguration.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14010579C (ExCpuSetResourceManagerAccessCheck.c)
 *     KeSetSystemAllowedCpuSets @ 0x1401068D0 (KeSetSystemAllowedCpuSets.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     MiGetThreadPartition @ 0x140127940 (MiGetThreadPartition.c)
 *     IoConfigureCrashDump @ 0x14013A5A8 (IoConfigureCrashDump.c)
 *     xKdEnumerateDebuggingDevices @ 0x140142AF0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     xHalTimerWatchdogStop @ 0x140148598 (xHalTimerWatchdogStop.c)
 *     ZwLoadDriver @ 0x140152500 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x140153840 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x140153BA0 (ZwUnloadDriver.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     KeProcessorProfileControlArea @ 0x1401C3D8C (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x1401C8888 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1401CA914 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1401F50E0 (PsSetCpuQuotaInformation.c)
 *     ExpCompleteSoftReboot @ 0x14021364C (ExpCompleteSoftReboot.c)
 *     MmUnloadSystemImage @ 0x1403CBF50 (MmUnloadSystemImage.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     SmSetStoreInformation @ 0x1404ACFC0 (SmSetStoreInformation.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404AE288 (KeSynchronizeWithDynamicProcessors.c)
 *     sub_1404AE668 @ 0x1404AE668 (sub_1404AE668.c)
 *     PsLookupProcessThreadByCid @ 0x1404AFDB0 (PsLookupProcessThreadByCid.c)
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1404D55E4 (PfSnSetPrefetcherInformation.c)
 *     MmIssueMemoryListCommand @ 0x1404F9CC0 (MmIssueMemoryListCommand.c)
 *     PsChangeQuantumTable @ 0x14050B020 (PsChangeQuantumTable.c)
 *     ExpInitializeSessionDriver @ 0x14050CB84 (ExpInitializeSessionDriver.c)
 *     MiCombineIdenticalPages @ 0x14050E19C (MiCombineIdenticalPages.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405460C0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x14054770C (KeInitializeEntropySystem.c)
 *     DbgkRegisterErrorPort @ 0x140547930 (DbgkRegisterErrorPort.c)
 *     WheaCrashDumpInitializationComplete @ 0x14054B4F4 (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1405DE488 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x1405E36CC (CmReconcileAndValidateAllHives.c)
 *     MmAddVerifierThunks @ 0x140623260 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x140623954 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x14062D224 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x14062F5B8 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x14066BA04 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14066BA58 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x14066BDD0 (ExpUpdateComPlusPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x1406750E8 (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x1406B7080 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1406B71F0 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1406B7220 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x1406C4EDC (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x1406D4C98 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x1406D4E50 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1406D4E68 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1406D4F60 (VfSetVerifierInformationEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  ULONG v3; // r15d
  SYSTEM_INFORMATION_CLASS v5; // ebx
  __int64 v6; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v8; // rdx
  int v9; // eax
  int updated; // edi
  NTSTATUS result; // eax
  __int32 v13; // ebx
  __int32 v14; // ebx
  __int32 v15; // ebx
  int v16; // ebx
  int v17; // eax
  char *v18; // rbx
  PVOID v19; // rsi
  PIMAGE_NT_HEADERS v20; // rax
  __int64 AddressOfEntryPoint; // rdx
  __int64 v22; // rcx
  __int32 v23; // ebx
  __int32 v24; // ebx
  __int32 v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int *ThreadPartition; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  PVOID v32; // rbx
  __int32 v33; // ebx
  __int32 v34; // ebx
  __int32 v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  char *v39; // rbx
  PIMAGE_NT_HEADERS v40; // rax
  int v41; // ecx
  int v42; // ebx
  int v43; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  int v48; // ecx
  __int64 v49; // rcx
  __int32 v50; // ebx
  PVOID v51; // rcx
  int v52; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int32 v57; // ebx
  int v58; // eax
  char *v59; // rcx
  int v60; // ebx
  int v61; // ebx
  __int64 v62; // rbx
  int v63; // edi
  __int64 v64; // rax
  __int32 v65; // ebx
  __int32 v66; // ebx
  int v67; // ebx
  __int64 v68; // rax
  unsigned int v69; // ebx
  NTSTATUS v70; // ebx
  __int64 v71; // rcx
  int v72; // ebx
  int v73; // ebx
  ULONG v74; // r15d
  __int64 v75; // rbx
  char v76[19]; // [rsp+33h] [rbp-3B5h] BYREF
  char v77; // [rsp+46h] [rbp-3A2h] BYREF
  LUID PrivilegeValue; // [rsp+50h] [rbp-398h]
  ULONG v80; // [rsp+58h] [rbp-390h] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-388h] BYREF
  __int64 v82; // [rsp+70h] [rbp-378h]
  int v83; // [rsp+78h] [rbp-370h]
  int SessionId; // [rsp+7Ch] [rbp-36Ch] BYREF
  char *v85; // [rsp+80h] [rbp-368h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+88h] [rbp-360h] BYREF
  char *v87; // [rsp+108h] [rbp-2E0h] BYREF
  __int128 v88; // [rsp+120h] [rbp-2C8h]
  int v89; // [rsp+130h] [rbp-2B8h]
  PVOID v90; // [rsp+138h] [rbp-2B0h] BYREF
  int v91; // [rsp+148h] [rbp-2A0h]
  PVOID v92; // [rsp+158h] [rbp-290h] BYREF
  PVOID BaseAddress; // [rsp+168h] [rbp-280h] BYREF
  __int64 v94; // [rsp+170h] [rbp-278h] BYREF
  PVOID Object[3]; // [rsp+178h] [rbp-270h] BYREF
  __int64 v96; // [rsp+190h] [rbp-258h] BYREF
  int v97; // [rsp+19Ch] [rbp-24Ch]
  ULONG Size[4]; // [rsp+1A0h] [rbp-248h] BYREF
  _WORD v99[8]; // [rsp+1C8h] [rbp-220h] BYREF
  __int128 v100; // [rsp+1D8h] [rbp-210h] BYREF
  __int128 v101; // [rsp+1E8h] [rbp-200h] BYREF
  __int64 v102; // [rsp+1F8h] [rbp-1F0h]
  __int128 v103; // [rsp+208h] [rbp-1E0h] BYREF
  __int64 v104; // [rsp+220h] [rbp-1C8h]
  __int128 v105; // [rsp+230h] [rbp-1B8h] BYREF
  __int64 v106; // [rsp+240h] [rbp-1A8h]
  UNICODE_STRING v107; // [rsp+248h] [rbp-1A0h] BYREF
  PVOID v108; // [rsp+260h] [rbp-188h]
  char v109[160]; // [rsp+270h] [rbp-178h] BYREF
  char v110[160]; // [rsp+310h] [rbp-D8h] BYREF

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
      if ( *(_QWORD *)&SystemInformationClass > MmUserProbeAddress
        || *(_QWORD *)&SystemInformationClass < (unsigned __int64)SystemInformation )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
  }
  updated = 0;
  if ( v5 > SystemSpecialPoolInformation )
  {
    if ( v5 > SystemBootMetadataInformation )
    {
      v33 = v5 - 151;
      if ( !v33 )
      {
        PrivilegeValue = (LUID)19LL;
        if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
          return -1073741727;
        if ( v3 == 1 )
        {
          if ( !*(_BYTE *)SystemInformation || SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return ExpCompleteSoftReboot();
          return -1073741727;
        }
        return -1073741820;
      }
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 3;
        if ( !v35 )
          return CmReconcileAndValidateAllHives(*(_QWORD *)&SystemInformationClass, 4LL, SystemInformationLength, 1LL);
        v36 = v35 - 4;
        if ( !v36 )
          return -1073741637;
        v37 = v36 - 2;
        if ( !v37 )
        {
          if ( !PreviousMode )
          {
            if ( SystemInformationLength == 8 )
              return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
            return -1073741820;
          }
          return -1073741790;
        }
        v38 = v37 - 7;
        if ( v38 )
        {
          v72 = v38 - 2;
          if ( !v72 )
          {
            if ( SystemInformationLength == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return KeIntSteerAssignCpuSetForGsiv(
                         *(_OWORD *)SystemInformation,
                         WORD2(*(_QWORD *)SystemInformation),
                         *((_QWORD *)SystemInformation + 1));
              return -1073741727;
            }
            return -1073741820;
          }
          v73 = v72 - 6;
          if ( !v73 )
          {
            if ( SystemInformationLength >= 8 )
            {
              v74 = SystemInformationLength - 8;
              if ( (((_BYTE)SystemInformationLength - 8) & 7) == 0 && v74 <= 0xA0 )
              {
                v108 = SystemInformation;
                v75 = *(_QWORD *)SystemInformation;
                v104 = *(_QWORD *)SystemInformation;
                memmove(v109, (char *)SystemInformation + 8, v74);
                updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
                if ( updated < 0 )
                  return updated;
                return KeSetTagCpuSets(v74 >> 3, v109, v75);
              }
            }
            return -1073741820;
          }
          if ( v73 != 1 )
            return -1073741821;
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          if ( SessionId != -1 )
            return PsInvokeWin32Callout((_KPROCESS *)0x20, 0LL, 1, (int)&SessionId);
          return 0;
        }
        if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0xA0 )
          return -1073741820;
        memmove(v110, SystemInformation, SystemInformationLength);
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result >= 0 )
          return KeSetSystemAllowedCpuSets(v3 >> 3, v110);
        return result;
      }
      if ( SystemInformationLength != 8 )
        return -1073741820;
      if ( PreviousMode )
        return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, 4LL, SystemInformationLength, 1LL);
      return -1073741811;
    }
    if ( v5 == SystemBootMetadataInformation )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      if ( !v3 )
      {
        if ( ExBootLoaderMetadata )
          _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
        return updated;
      }
      return -1073741820;
    }
    if ( v5 > SystemStoreInformation )
    {
      v23 = v5 - 110;
      if ( !v23 )
        return -1073741822;
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 2;
        if ( !v25 )
          return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
        v26 = v25 - 14;
        if ( !v26 )
        {
          if ( SystemInformationLength == 16 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              updated = MmScrubMemory(v71, *(_QWORD *)SystemInformation, &v94);
              PrivilegeValue.LowPart = updated;
              *((_QWORD *)SystemInformation + 1) = v94;
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v27 = v26 - 2;
        if ( !v27 )
          return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
        v28 = v27 - 1;
        if ( !v28 )
        {
          if ( SystemInformationLength == 16 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              v82 = *(_QWORD *)SystemInformation;
              ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
              LOBYTE(v30) = KeGetCurrentThread()->PreviousMode;
              updated = MiCombineIdenticalPages(ThreadPartition, v82, 0LL, v30, &v96);
              PrivilegeValue.LowPart = updated;
              *((_QWORD *)SystemInformation + 1) = v96;
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v42 = v28 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( !v43 )
          {
            if ( SystemInformationLength == 4 )
            {
              *(_DWORD *)&DriverServiceName.Length = 7733364;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              if ( *(_BYTE *)SystemInformation & 1 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v45 = KeAbPreAcquire((ULONG_PTR)&ExpConDrvLoadLock, 0LL, 0LL);
                v46 = v45;
                if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpConDrvLoadLock, 0LL) )
                  ExfAcquirePushLockExclusiveEx(&ExpConDrvLoadLock, v45, (ULONG_PTR)&ExpConDrvLoadLock);
                if ( v46 )
                  *(_BYTE *)(v46 + 26) |= 1u;
                updated = ZwLoadDriver(&DriverServiceName);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
                KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                return updated;
              }
              if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                return ZwUnloadDriver(&DriverServiceName);
              return -1073741727;
            }
            return -1073741820;
          }
          if ( v43 == 2 )
          {
            if ( SystemInformationLength == 32 )
              return sub_1404AE668(*(__int64 *)&SystemInformationClass, (unsigned __int64)SystemInformation);
            return -1073741820;
          }
          return -1073741821;
        }
        if ( !PreviousMode )
        {
          if ( SystemInformationLength == 24 )
            return KeInitializeEntropySystem(
                     *(_QWORD *)SystemInformation,
                     *((_QWORD *)SystemInformation + 1),
                     *((_QWORD *)SystemInformation + 2),
                     1LL);
          return -1073741820;
        }
        return -1073741790;
      }
      if ( SystemInformationLength != 4 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
        return -1073741790;
      MEMORY[0xFFFFF78000000248] = *(_DWORD *)SystemInformation;
      return 0;
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
          v100 = *(_OWORD *)SystemInformation;
          v101 = *((_OWORD *)SystemInformation + 1);
          v102 = *((_QWORD *)SystemInformation + 4);
          result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v100 + 8, 1LL);
          if ( result < 0 )
            return result;
          v70 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v101 + 8, 1LL);
          if ( v70 < 0 )
          {
            VfFreeCapturedUnicodeString((char *)&v100 + 8);
            return v70;
          }
          SystemInformation = &v100;
        }
        updated = VfFaultsSetParameters(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
        if ( !PreviousMode )
          return updated;
        VfFreeCapturedUnicodeString((char *)SystemInformation + 8);
        v59 = (char *)SystemInformation + 24;
        goto LABEL_202;
      }
      if ( v5 != SystemDynamicTimeZoneInformation )
      {
        if ( v5 == SystemProcessorMicrocodeUpdateInformation )
        {
          LOBYTE(SystemInformationLength) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(SystemInformation, v3, SystemInformationLength, 1LL);
        }
        return -1073741821;
      }
      v69 = 432;
    }
    else
    {
      if ( v5 == SystemCoverageInformation )
      {
        if ( PreviousMode && SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          if ( v3 >= 0x18 )
            return ExpCovResetInformation(SystemInformation, v3);
          return -1073741820;
        }
        return -1073741790;
      }
      v50 = v5 - 89;
      if ( !v50 )
      {
        if ( PreviousMode == 1 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
            return -1073741727;
          if ( !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
            return DbgkRegisterErrorPort(SystemInformation, v3);
        }
        return -1073741637;
      }
      v65 = v50 - 2;
      if ( !v65 )
      {
        if ( !PreviousMode )
        {
          if ( SystemInformationLength )
            return -1073741584;
          else
            return (HvlpFlags & 1) == 0 ? 0xC0351000 : 0;
        }
        return -1073741790;
      }
      v66 = v65 - 1;
      if ( !v66 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          if ( v3 == 40 )
            return VfSetVerifierInformationEx(SystemInformation);
          return -1073741820;
        }
        return -1073741790;
      }
      v67 = v66 - 1;
      if ( v67 )
      {
        if ( v67 != 1 )
          return -1073741821;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( v3 == 8 )
          {
            v68 = *(_QWORD *)SystemInformation;
            _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(_QWORD *)SystemInformation);
            _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~HIDWORD(v68));
            return updated;
          }
          return -1073741820;
        }
        return -1073741790;
      }
      v69 = 172;
    }
    if ( SystemInformationLength == v69 )
    {
      if ( !PreviousMode || SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        return ExpSetTimeZoneInformation(SystemInformation, v69);
      return -1073741727;
    }
    return -1073741820;
  }
  if ( v5 == SystemSpecialPoolInformation )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    {
      if ( v3 == 8 )
      {
        v64 = *(_QWORD *)SystemInformation;
        MmSpecialPoolTag = *(_QWORD *)SystemInformation;
        MmSpecialPoolCatchOverruns = BYTE4(v64) & 1;
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
      if ( v5 != SystemWow64SharedInformationObsolete )
      {
        switch ( v5 )
        {
          case SystemRegisterFirmwareTableInformationHandler:
            LOBYTE(SystemInformationLength) = PreviousMode;
            return ExpRegisterFirmwareTableInformationHandler(SystemInformation, v3, SystemInformationLength, 1LL);
          case SystemSuperfetchInformation:
            LOBYTE(v6) = PreviousMode;
            return PfSetSuperfetchInformation((unsigned int)(v5 - 79), SystemInformation, SystemInformationLength, v6);
          case SystemMemoryListInformation:
            LOBYTE(SystemInformationLength) = PreviousMode;
            return MmIssueMemoryListCommand(SystemInformation, v3, SystemInformationLength, 1LL);
        }
        if ( v5 != SystemFileCacheInformationEx )
        {
          if ( v5 == SystemThreadPriorityClientIdInformation )
          {
            if ( SystemInformationLength >= 0x18 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
              {
                if ( PreviousMode )
                {
                  v105 = *(_OWORD *)SystemInformation;
                  v106 = *((_QWORD *)SystemInformation + 2);
                  SystemInformation = &v105;
                }
                if ( (unsigned int)(*((_DWORD *)SystemInformation + 4) - 1) <= 0x1E )
                {
                  v103 = *(_OWORD *)SystemInformation;
                  updated = PsLookupProcessThreadByCid((__int64)&v103, 0LL, Object);
                  if ( updated >= 0 )
                  {
                    v32 = Object[0];
                    if ( *((_BYTE *)Object[0] + 4) )
                    {
                      updated = -1073741749;
                    }
                    else
                    {
                      KeSetActualBasePriorityThread((__int64)Object[0], *((unsigned int *)SystemInformation + 4), v31);
                      updated = 259;
                    }
                    ObfDereferenceObject(v32);
                  }
                  return updated;
                }
                return -1073741811;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( v5 == SystemRefTraceInformation )
            return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
          return -1073741821;
        }
        goto LABEL_247;
      }
      return -1073741822;
    }
    if ( v5 != SystemWatchdogTimerInformation )
    {
      v13 = v5 - 51;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          if ( !PreviousMode )
            return MmAddVerifierThunks(SystemInformation, SystemInformationLength);
          return -1073741727;
        }
        v15 = v14 - 2;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( !v16 )
          {
            LOBYTE(v6) = PreviousMode;
            return PfSnSetPrefetcherInformation(
                     *(_QWORD *)&SystemInformationClass,
                     SystemInformation,
                     SystemInformationLength,
                     v6);
          }
          v60 = v16 - 3;
          if ( !v60 )
          {
            if ( SystemInformationLength == 4 )
            {
              v62 = *(unsigned int *)SystemInformation;
              updated = ExpUpdateComPlusPackage(v62, 4LL, 4, 1LL);
              if ( updated >= 0 )
                MEMORY[0xFFFFF780000002E0] = v62;
              return updated;
            }
            return -1073741820;
          }
          v61 = v60 - 10;
          if ( v61 )
          {
            if ( v61 == 2 )
              return -1073741637;
            return -1073741821;
          }
          return -1073741637;
        }
        LODWORD(v6) = 0;
LABEL_35:
        if ( SystemInformationLength == 56 )
        {
          if ( !PreviousMode )
          {
            v107 = *(UNICODE_STRING *)SystemInformation;
            v17 = MmLoadSystemImage(&v107, 0LL, 0LL, v6, &v87, (char **)&BaseAddress);
            updated = v17;
            if ( v17 < 0 )
            {
              if ( v17 == -1073741411 )
                return -1073741554;
            }
            else
            {
              v18 = (char *)BaseAddress;
              v19 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0, Size);
              v20 = RtlImageNtHeader(v18);
              *((_QWORD *)SystemInformation + 5) = v19;
              AddressOfEntryPoint = v20->OptionalHeader.AddressOfEntryPoint;
              *((_QWORD *)SystemInformation + 2) = v18;
              *((_QWORD *)SystemInformation + 3) = v87;
              *((_QWORD *)SystemInformation + 4) = &v18[AddressOfEntryPoint];
              *((_DWORD *)SystemInformation + 12) = v20->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return VfSetVerifierInformation(SystemInformation, v3, 0LL);
      return -1073741790;
    }
    if ( PreviousMode || !SystemInformation || SystemInformationLength != 8 )
      return -1073741811;
    switch ( *(_DWORD *)SystemInformation )
    {
      case 0:
        return -1073741637;
      case 1:
        off_1402D2930();
        break;
      case 2:
        off_1402D2938((PKFLOATING_SAVE)(unsigned int)(*(_DWORD *)SystemInformation - 2));
        break;
      case 3:
        off_1402D2928((PKFLOATING_SAVE)(unsigned int)(*(_DWORD *)SystemInformation - 3));
        break;
      case 4:
        return -1073741637;
      case 6:
        return off_1402D2948();
      case 7:
        updated = 0;
        if ( off_1402D2948 == xKdEnumerateDebuggingDevices )
          return -1073741822;
        return updated;
      default:
        return -1073741811;
    }
    return 0;
  }
  if ( v5 == SystemSessionDetach )
    return -1073741822;
  if ( v5 <= SystemPerformanceTraceInformation )
  {
    switch ( v5 )
    {
      case SystemPerformanceTraceInformation:
        LOBYTE(SystemInformationLength) = PreviousMode;
        return EtwSetPerformanceTraceInformation(SystemInformation, v3, SystemInformationLength, 1LL);
      case SystemFlagsInformation:
        if ( SystemInformationLength != 4 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        NtGlobalFlag = *(_DWORD *)SystemInformation ^ (NtGlobalFlag ^ *(_DWORD *)SystemInformation) & 0x6DCE640F;
        *(_DWORD *)SystemInformation = NtGlobalFlag;
        return updated;
      case SystemFileCacheInformation:
LABEL_247:
        if ( SystemInformationLength < 0x40 )
          return -1073741820;
        if ( v5 == SystemFileCacheInformation )
        {
          v63 = 0;
          v83 = 0;
          goto LABEL_253;
        }
        v83 = *((_DWORD *)SystemInformation + 15);
        v63 = v83;
        if ( (v83 & 0xFFFFFFF0) == 0 && (v83 & 0xC) != 0xC && (v83 & 3) != 3 )
        {
LABEL_253:
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(
                     *((_QWORD *)SystemInformation + 3),
                     *((_QWORD *)SystemInformation + 4),
                     2LL,
                     1,
                     v63,
                     &v77);
          return -1073741790;
        }
        return -1073741584;
      case SystemDpcBehaviorInformation:
        if ( SystemInformationLength == 20 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
          {
            v88 = *(_OWORD *)SystemInformation;
            v89 = *((_DWORD *)SystemInformation + 4);
            KiMinimumDpcRate = DWORD2(v88);
            KiMaximumDpcQueueDepth = DWORD1(v88);
            KiAdjustDpcThreshold = HIDWORD(v88);
            KiIdealDpcRate = v89;
            KeSynchronizeWithDynamicProcessors();
            ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
            if ( ActiveProcessorCount )
            {
              v54 = KiProcessorBlock;
              v55 = ActiveProcessorCount;
              do
              {
                v56 = *v54;
                *(_DWORD *)(v56 + 11736) = KiMaximumDpcQueueDepth;
                *(_DWORD *)(v56 + 11744) = KiMinimumDpcRate;
                ++v54;
                --v55;
              }
              while ( v55 );
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      case SystemLoadGdiDriverInformation:
        goto LABEL_35;
    }
    if ( v5 != SystemUnloadGdiDriverInformation )
    {
      if ( v5 != SystemTimeAdjustmentInformation )
      {
        if ( v5 == SystemMirrorMemoryInformation )
          return MmCreateMirror();
        return -1073741821;
      }
      if ( SystemInformationLength != 8 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
        return -1073741727;
      v76[0] = *((_BYTE *)SystemInformation + 4);
      v52 = *(_DWORD *)SystemInformation;
      v80 = *(_DWORD *)SystemInformation;
      if ( v76[0] )
      {
        v80 = KeMaximumIncrement;
      }
      else if ( (unsigned int)(v52 - 1) > 0x98967E )
      {
        return -1073741584;
      }
      ExAcquireTimeRefreshLock(1u);
      updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v80, (__int64)v76);
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
      return updated;
    }
    if ( SystemInformationLength != 8 )
      return -1073741820;
    if ( PreviousMode )
      return -1073741727;
    MmUnloadSystemImage(*(_QWORD *)SystemInformation);
    return 0;
  }
  switch ( v5 )
  {
    case SystemExtendServiceTableInformation:
      if ( SystemInformationLength != 16 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].DirectoryTableBase & 0x100) == 0
          || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
        {
          return -1073741727;
        }
        if ( (unsigned __int64)SystemInformation >= MmUserProbeAddress )
          SystemInformation = (PVOID)MmUserProbeAddress;
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
        result = MmLoadSystemImage((UNICODE_STRING *)Buf1, 0LL, 0LL, 1, &v85, (char **)&v92);
        if ( result >= 0 )
        {
          v39 = (char *)v92;
          v40 = RtlImageNtHeader(v92);
          if ( !v40 )
          {
            MmUnloadSystemImage((ULONG_PTR)v85);
            return -1073741701;
          }
          updated = ExpInitializeSessionDriver(&v39[v40->OptionalHeader.AddressOfEntryPoint], v39);
          if ( updated < 0 )
            MmUnloadSystemImage((ULONG_PTR)v85);
          return updated;
        }
        if ( result == -1073741411 )
          return -1073741554;
      }
      return result;
    case SystemCrashDumpStateInformation:
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      if ( v3 != 4 )
        goto LABEL_211;
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)SystemInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)SystemInformation + 4 > MmUserProbeAddress
          || (char *)SystemInformation + 4 < SystemInformation )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        v41 = *(_DWORD *)SystemInformation;
        v91 = *(_DWORD *)SystemInformation;
      }
      else
      {
        v41 = *(_DWORD *)SystemInformation;
      }
      if ( !v41 )
      {
        v48 = 0;
        return IoConfigureCrashDump(v48, 0);
      }
      v49 = (unsigned int)(v41 - 1);
      if ( !(_DWORD)v49 )
      {
LABEL_211:
        v48 = 1;
        return IoConfigureCrashDump(v48, 0);
      }
      if ( (_DWORD)v49 == 1 )
        return WheaCrashDumpInitializationComplete(v49, 4LL, *(_QWORD *)&SystemInformationLength, v6);
      return -1073741811;
    case SystemRegistryQuotaInformation:
      if ( SystemInformationLength == 16 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return CmSetRegistryQuotaInformation(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
        return -1073741727;
      }
      return -1073741820;
    case SystemPrioritySeperation:
      if ( SystemInformationLength != 4 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      v97 = *(_DWORD *)SystemInformation;
      LOBYTE(v22) = 1;
      PsChangeQuantumTable(v22);
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
                        &v90,
                        0LL);
            v51 = v90;
            if ( updated < 0 )
              return updated;
          }
          else
          {
            v51 = 0LL;
            updated = 0;
          }
          KdUpdateTimeSlipEvent(v51);
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
  if ( !PreviousMode )
  {
LABEL_194:
    v57 = v5 - 40;
    if ( v57 )
    {
      if ( v57 != 1 )
      {
        updated = -1073741821;
LABEL_200:
        if ( !PreviousMode )
          return updated;
        v59 = (char *)SystemInformation;
LABEL_202:
        VfFreeCapturedUnicodeString(v59);
        return updated;
      }
      v58 = VfRemoveVerifierEntry(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
    }
    else
    {
      v58 = VfAddVerifierEntry((PCUNICODE_STRING)SystemInformation);
    }
    updated = v58;
    goto LABEL_200;
  }
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741727;
  result = VfProbeAndCaptureUnicodeString(v99, SystemInformation, 1LL);
  if ( result >= 0 )
  {
    SystemInformation = v99;
    if ( !v99[0] )
      return -1073741585;
    goto LABEL_194;
  }
  return result;
}
