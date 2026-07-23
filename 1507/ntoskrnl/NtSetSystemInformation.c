/*
 * XREFs of NtSetSystemInformation @ 0x140453DF8
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x1407E8814 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExpUpdateTimerConfiguration @ 0x1400D3CD8 (ExpUpdateTimerConfiguration.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     KdUpdateTimeSlipEvent @ 0x140131C74 (KdUpdateTimeSlipEvent.c)
 *     KeSetSystemAllowedCpuSets @ 0x140132B54 (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140133DD4 (ExCpuSetResourceManagerAccessCheck.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 *     xKdEnumerateDebuggingDevices @ 0x140170968 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     xHalTimerWatchdogStop @ 0x14017DF20 (xHalTimerWatchdogStop.c)
 *     ZwLoadDriver @ 0x140180E90 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1401821B0 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x140182510 (ZwUnloadDriver.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KeProcessorProfileControlArea @ 0x1401FFEC8 (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140205CAC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14020951C (KeIntSteerAssignCpuSetForGsiv.c)
 *     MiGetThreadPartition @ 0x14021D480 (MiGetThreadPartition.c)
 *     PsSetCpuQuotaInformation @ 0x140243470 (PsSetCpuQuotaInformation.c)
 *     ExpCompleteSoftReboot @ 0x140262F0C (ExpCompleteSoftReboot.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     sub_140452868 @ 0x140452868 (sub_140452868.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x140454D9C (PfSnSetPrefetcherInformation.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsLookupProcessThreadByCid @ 0x14051145C (PsLookupProcessThreadByCid.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14053B960 (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x140546F94 (SmSetStoreInformation.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     PsChangeQuantumTable @ 0x140581874 (PsChangeQuantumTable.c)
 *     MmIssueMemoryListCommand @ 0x14058324C (MmIssueMemoryListCommand.c)
 *     ExpInitializeSessionDriver @ 0x140583EE8 (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405BCA4C (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x1405BE770 (KeInitializeEntropySystem.c)
 *     DbgkRegisterErrorPort @ 0x1405BE8F4 (DbgkRegisterErrorPort.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405C10BC (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1406539B4 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x14065A418 (CmReconcileAndValidateAllHives.c)
 *     MmAddVerifierThunks @ 0x1406A2440 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x1406A2C48 (MmCreateMirror.c)
 *     MiCombineIdenticalPages @ 0x1406A89D0 (MiCombineIdenticalPages.c)
 *     MmScrubMemory @ 0x1406AACD4 (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1406AD52C (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1406EF050 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1406EF0A4 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1406EF464 (ExpUpdateComPlusPackage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x1406F9818 (ExpCovResetInformation.c)
 *     VfFreeCapturedUnicodeString @ 0x1407373E8 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140737558 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140737588 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140746708 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140758A3C (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140758A54 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140758B4C (VfSetVerifierInformationEx.c)
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
  int SystemImage; // eax
  char *v18; // rbx
  PVOID v19; // rsi
  PIMAGE_NT_HEADERS v20; // rax
  __int64 AddressOfEntryPoint; // rdx
  __int64 v22; // rcx
  __int32 v23; // ebx
  PVOID v24; // rbx
  char *v25; // rbx
  PIMAGE_NT_HEADERS v26; // rax
  int v27; // ecx
  __int32 v28; // ebx
  __int32 v29; // ebx
  __int32 v30; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  __int32 v38; // ebx
  __int32 v39; // ebx
  __int32 v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // ebx
  PVOID v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int32 v47; // ebx
  __int32 v48; // ebx
  __int32 v49; // ebx
  __int32 v50; // ebx
  int v51; // ecx
  __int64 *v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int32 v55; // ebx
  int v56; // eax
  char *v57; // rcx
  int v58; // ebx
  int v59; // ebx
  __int64 v60; // rbx
  int v61; // edi
  __int32 v62; // ebx
  int v63; // ebx
  unsigned int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rax
  NTSTATUS v67; // ebx
  int v68; // ebx
  __int16 *ThreadPartition; // rax
  __int64 v70; // r9
  int v71; // ebx
  ULONG v72; // r15d
  __int64 v73; // rbx
  char v74[8]; // [rsp+3Eh] [rbp-3AAh] BYREF
  char v75; // [rsp+46h] [rbp-3A2h] BYREF
  LUID PrivilegeValue; // [rsp+50h] [rbp-398h]
  ULONG v78; // [rsp+58h] [rbp-390h] BYREF
  int v79; // [rsp+5Ch] [rbp-38Ch]
  void *Buf1[2]; // [rsp+60h] [rbp-388h] BYREF
  __int64 v81; // [rsp+70h] [rbp-378h]
  ULONG_PTR v82; // [rsp+78h] [rbp-370h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+80h] [rbp-368h] BYREF
  __int64 v84; // [rsp+98h] [rbp-350h] BYREF
  __int64 v85[3]; // [rsp+100h] [rbp-2E8h] BYREF
  __int128 v86; // [rsp+118h] [rbp-2D0h]
  unsigned int v87; // [rsp+128h] [rbp-2C0h]
  PVOID v88; // [rsp+130h] [rbp-2B8h] BYREF
  int v89; // [rsp+140h] [rbp-2A8h]
  __int64 v90; // [rsp+148h] [rbp-2A0h] BYREF
  PVOID v91[2]; // [rsp+150h] [rbp-298h] BYREF
  PVOID BaseAddress[2]; // [rsp+160h] [rbp-288h] BYREF
  PVOID Object[4]; // [rsp+170h] [rbp-278h] BYREF
  int v94; // [rsp+194h] [rbp-254h]
  ULONG Size[4]; // [rsp+198h] [rbp-250h] BYREF
  _WORD v96[8]; // [rsp+1C0h] [rbp-228h] BYREF
  __int128 v97; // [rsp+1D0h] [rbp-218h] BYREF
  __int128 v98; // [rsp+1E0h] [rbp-208h] BYREF
  __int64 v99; // [rsp+1F0h] [rbp-1F8h]
  __int128 v100; // [rsp+200h] [rbp-1E8h] BYREF
  __int64 v101; // [rsp+218h] [rbp-1D0h]
  __int128 v102; // [rsp+228h] [rbp-1C0h] BYREF
  __int64 v103; // [rsp+238h] [rbp-1B0h]
  __int128 v104; // [rsp+240h] [rbp-1A8h] BYREF
  PVOID v105; // [rsp+258h] [rbp-190h]
  char v106[160]; // [rsp+270h] [rbp-178h] BYREF
  char v107[160]; // [rsp+310h] [rbp-D8h] BYREF

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
  if ( v5 > SystemRefTraceInformation )
  {
    if ( v5 > SystemBootMetadataInformation )
    {
      v38 = v5 - 151;
      if ( !v38 )
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
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 3;
        if ( !v40 )
          return CmReconcileAndValidateAllHives(*(_QWORD *)&SystemInformationClass, 4LL, SystemInformationLength, 1LL);
        v41 = v40 - 4;
        if ( !v41 )
          return -1073741637;
        v42 = v41 - 2;
        if ( !v42 )
        {
          if ( !PreviousMode )
          {
            if ( SystemInformationLength == 8 )
              return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
            return -1073741820;
          }
          return -1073741790;
        }
        v43 = v42 - 7;
        if ( v43 )
        {
          v71 = v43 - 2;
          if ( !v71 )
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
          if ( v71 == 6 )
          {
            if ( SystemInformationLength >= 8 )
            {
              v72 = SystemInformationLength - 8;
              if ( (((_BYTE)SystemInformationLength - 8) & 7) == 0 && v72 <= 0xA0 )
              {
                v105 = SystemInformation;
                v73 = *(_QWORD *)SystemInformation;
                v101 = *(_QWORD *)SystemInformation;
                memmove(v106, (char *)SystemInformation + 8, v72);
                updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
                if ( updated < 0 )
                  return updated;
                return KeSetTagCpuSets(v72 >> 3, v106, v73);
              }
            }
            return -1073741820;
          }
          return -1073741821;
        }
        if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0xA0 )
          return -1073741820;
        memmove(v107, SystemInformation, SystemInformationLength);
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result >= 0 )
          return KeSetSystemAllowedCpuSets(v3 >> 3, v107);
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
    if ( v5 > SystemVirtualAddressInformation )
    {
      if ( v5 <= SystemProcessorProfileControlArea )
      {
        if ( v5 == SystemProcessorProfileControlArea )
          return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
        v23 = v5 - 109;
        if ( !v23 )
        {
          LOBYTE(v6) = PreviousMode;
          return SmSetStoreInformation(
                   *(_QWORD *)&SystemInformationClass,
                   SystemInformation,
                   SystemInformationLength,
                   v6);
        }
        v49 = v23 - 1;
        if ( !v49 )
          return -1073741822;
        v50 = v49 - 1;
        if ( v50 )
        {
          v68 = v50 - 2;
          if ( !v68 )
            return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
          if ( v68 == 14 )
          {
            if ( SystemInformationLength == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                updated = MmScrubMemory(*(_QWORD *)SystemInformation, &v90);
                PrivilegeValue.LowPart = updated;
                *((_QWORD *)SystemInformation + 1) = v90;
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          return -1073741821;
        }
        if ( SystemInformationLength != 4 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          return -1073741790;
        MEMORY[0xFFFFF78000000248] = *(_DWORD *)SystemInformation;
        return 0;
      }
      v28 = v5 - 130;
      if ( !v28 )
      {
        if ( SystemInformationLength == 16 )
        {
          if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          {
            v81 = *(_QWORD *)SystemInformation;
            ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
            LOBYTE(v70) = KeGetCurrentThread()->PreviousMode;
            updated = MiCombineIdenticalPages(ThreadPartition, v81, 0LL, v70, &v84);
            PrivilegeValue.LowPart = updated;
            *((_QWORD *)SystemInformation + 1) = v84;
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
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
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( v30 == 2 )
        {
          if ( SystemInformationLength == 32 )
            return sub_140452868(*(__int64 *)&SystemInformationClass, (unsigned __int64)SystemInformation);
          return -1073741820;
        }
        return -1073741821;
      }
      if ( SystemInformationLength != 4 )
        return -1073741820;
      *(_DWORD *)&DriverServiceName.Length = 7733364;
      DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
      if ( !(*(_BYTE *)SystemInformation & 1) )
      {
        if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
          return ZwUnloadDriver(&DriverServiceName);
        return -1073741727;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v32 = KeAbPreAcquire((ULONG_PTR)&ExpConDrvLoadLock, 0LL, 0LL, 1LL);
      v34 = v32;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpConDrvLoadLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpConDrvLoadLock, v32, (ULONG_PTR)&ExpConDrvLoadLock, v33);
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
      updated = ZwLoadDriver(&DriverServiceName);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
      KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
LABEL_114:
      v36 = KeGetCurrentThread();
      v37 = v36->KernelApcDisable + 1;
      v36->KernelApcDisable = v37;
      if ( !v37
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
        && !v36->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return updated;
    }
    if ( v5 == SystemVirtualAddressInformation )
      return -1073741821;
    if ( v5 > SystemImageFileExecutionOptionsInformation )
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
      if ( v5 == SystemVerifierFaultsInformation )
      {
        if ( SystemInformationLength != 40 )
          return -1073741820;
        if ( PreviousMode )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          v97 = *(_OWORD *)SystemInformation;
          v98 = *((_OWORD *)SystemInformation + 1);
          v99 = *((_QWORD *)SystemInformation + 4);
          result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v97 + 8, 1LL);
          if ( result < 0 )
            return result;
          v67 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v98 + 8, 1LL);
          if ( v67 < 0 )
          {
            VfFreeCapturedUnicodeString((char *)&v97 + 8);
            return v67;
          }
          SystemInformation = &v97;
        }
        updated = VfFaultsSetParameters(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
        if ( !PreviousMode )
          return updated;
        VfFreeCapturedUnicodeString((char *)SystemInformation + 8);
        v57 = (char *)SystemInformation + 24;
        goto LABEL_204;
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
      v64 = 432;
LABEL_286:
      if ( SystemInformationLength == v64 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
          return ExpSetTimeZoneInformation(SystemInformation, v64);
        return -1073741727;
      }
      return -1073741820;
    }
    if ( v5 == SystemImageFileExecutionOptionsInformation )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741790;
      if ( v3 == 8 )
      {
        v66 = *(_QWORD *)SystemInformation;
        _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, *(_QWORD *)SystemInformation);
        _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~HIDWORD(v66));
        return updated;
      }
    }
    else
    {
      v47 = v5 - 87;
      if ( v47 )
      {
        v48 = v47 - 2;
        if ( !v48 )
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
        v62 = v48 - 2;
        if ( v62 )
        {
          v63 = v62 - 1;
          if ( !v63 )
          {
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            {
              if ( v3 == 40 )
                return VfSetVerifierInformationEx(SystemInformation);
              return -1073741820;
            }
            return -1073741790;
          }
          if ( v63 != 1 )
            return -1073741821;
          v64 = 172;
          goto LABEL_286;
        }
        if ( !PreviousMode )
        {
          if ( SystemInformationLength )
            return -1073741584;
          else
            return (HvlpFlags & 1) == 0 ? 0xC0351000 : 0;
        }
        return -1073741790;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      if ( v3 == 8 )
      {
        v65 = *(_QWORD *)SystemInformation;
        MmSpecialPoolTag = *(_QWORD *)SystemInformation;
        MmSpecialPoolCatchOverruns = BYTE4(v65) & 1;
        return updated;
      }
    }
    return -1073741820;
  }
  if ( v5 == SystemRefTraceInformation )
    return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
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
                  v102 = *(_OWORD *)SystemInformation;
                  v103 = *((_QWORD *)SystemInformation + 2);
                  SystemInformation = &v102;
                }
                if ( (unsigned int)(*((_DWORD *)SystemInformation + 4) - 1) <= 0x1E )
                {
                  v100 = *(_OWORD *)SystemInformation;
                  updated = PsLookupProcessThreadByCid(&v100, 0LL, Object);
                  if ( updated >= 0 )
                  {
                    v24 = Object[0];
                    if ( *((_BYTE *)Object[0] + 4) )
                    {
                      updated = -1073741749;
                    }
                    else
                    {
                      KeSetActualBasePriorityThread((__int64)Object[0], *((_DWORD *)SystemInformation + 4));
                      updated = 259;
                    }
                    ObfDereferenceObject(v24);
                  }
                  return updated;
                }
                return -1073741811;
              }
              return -1073741727;
            }
            return -1073741820;
          }
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
          v58 = v16 - 3;
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
        LODWORD(v6) = 0;
LABEL_35:
        if ( SystemInformationLength == 56 )
        {
          if ( !PreviousMode )
          {
            v104 = *(_OWORD *)SystemInformation;
            SystemImage = MmLoadSystemImage((unsigned int)&v104, 0, 0, v6, (__int64)v85, (__int64)BaseAddress);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return -1073741554;
            }
            else
            {
              v18 = (char *)BaseAddress[0];
              v19 = RtlImageDirectoryEntryToData(BaseAddress[0], 1u, 0, Size);
              v20 = RtlImageNtHeader(v18);
              *((_QWORD *)SystemInformation + 5) = v19;
              AddressOfEntryPoint = v20->OptionalHeader.AddressOfEntryPoint;
              *((_QWORD *)SystemInformation + 2) = v18;
              *((_QWORD *)SystemInformation + 3) = v85[0];
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
        off_140321A80();
        break;
      case 2:
        off_140321A88((PKFLOATING_SAVE)(unsigned int)(*(_DWORD *)SystemInformation - 2));
        break;
      case 3:
        off_140321A78((PKFLOATING_SAVE)(unsigned int)(*(_DWORD *)SystemInformation - 3));
        break;
      case 4:
        return -1073741637;
      case 6:
        return off_140321A98();
      case 7:
        updated = 0;
        if ( off_140321A98 == xKdEnumerateDebuggingDevices )
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
          v61 = 0;
          v79 = 0;
          goto LABEL_253;
        }
        v79 = *((_DWORD *)SystemInformation + 15);
        v61 = v79;
        if ( (v79 & 0xFFFFFFF0) == 0 && (v79 & 0xC) != 0xC && (v79 & 3) != 3 )
        {
LABEL_253:
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(
                     *((_QWORD *)SystemInformation + 3),
                     *((_QWORD *)SystemInformation + 4),
                     2,
                     1,
                     v61,
                     &v75);
          return -1073741790;
        }
        return -1073741584;
      case SystemDpcBehaviorInformation:
        if ( SystemInformationLength == 20 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
          {
            v86 = *(_OWORD *)SystemInformation;
            v87 = *((_DWORD *)SystemInformation + 4);
            KiMinimumDpcRate = DWORD2(v86);
            KiMaximumDpcQueueDepth = DWORD1(v86);
            KiAdjustDpcThreshold = HIDWORD(v86);
            KiIdealDpcRate = v87;
            KeSynchronizeWithDynamicProcessors(v87, v8, *(_QWORD *)&SystemInformationLength, v6);
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              v52 = KiProcessorBlock;
              v53 = (unsigned int)KeNumberProcessors_0;
              do
              {
                v54 = *v52;
                *(_DWORD *)(v54 + 11736) = KiMaximumDpcQueueDepth;
                *(_DWORD *)(v54 + 11744) = KiMinimumDpcRate;
                ++v52;
                --v53;
              }
              while ( v53 );
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      case SystemLoadGdiDriverInformation:
        goto LABEL_35;
      case SystemUnloadGdiDriverInformation:
        if ( SystemInformationLength != 8 )
          return -1073741820;
        if ( PreviousMode )
          return -1073741727;
        MmUnloadSystemImage(*(_QWORD *)SystemInformation);
        return 0;
    }
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
    v74[0] = *((_BYTE *)SystemInformation + 4);
    v51 = *(_DWORD *)SystemInformation;
    v78 = *(_DWORD *)SystemInformation;
    if ( v74[0] )
    {
      v78 = KeMaximumIncrement;
    }
    else if ( (unsigned int)(v51 - 1) > 0x98967E )
    {
      return -1073741584;
    }
    ExAcquireTimeRefreshLock(1u);
    updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v78, (__int64)v74);
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    goto LABEL_114;
  }
  switch ( v5 )
  {
    case SystemExtendServiceTableInformation:
      if ( SystemInformationLength != 16 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].ProfileListHead.Blink) & 1) == 0
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
        result = MmLoadSystemImage((unsigned int)Buf1, 0, 0, 1, (__int64)&v82, (__int64)v91);
        if ( result >= 0 )
        {
          v25 = (char *)v91[0];
          v26 = RtlImageNtHeader(v91[0]);
          if ( !v26 )
          {
            MmUnloadSystemImage(v82);
            return -1073741701;
          }
          updated = ExpInitializeSessionDriver(&v25[v26->OptionalHeader.AddressOfEntryPoint], v25);
          if ( updated < 0 )
            MmUnloadSystemImage(v82);
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
        goto LABEL_213;
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)SystemInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)SystemInformation + 4 > MmUserProbeAddress
          || (char *)SystemInformation + 4 < SystemInformation )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        v27 = *(_DWORD *)SystemInformation;
        v89 = *(_DWORD *)SystemInformation;
      }
      else
      {
        v27 = *(_DWORD *)SystemInformation;
      }
      if ( !v27 )
      {
        v45 = 0;
        return IoConfigureCrashDump(v45, 0);
      }
      v46 = (unsigned int)(v27 - 1);
      if ( !(_DWORD)v46 )
      {
LABEL_213:
        v45 = 1;
        return IoConfigureCrashDump(v45, 0);
      }
      if ( (_DWORD)v46 == 1 )
        return WheaCrashDumpInitializationComplete(v46, 4LL, *(_QWORD *)&SystemInformationLength, v6);
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
      v94 = *(_DWORD *)SystemInformation;
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
                        &v88,
                        0LL);
            v44 = v88;
            if ( updated < 0 )
              return updated;
          }
          else
          {
            v44 = 0LL;
            updated = 0;
          }
          KdUpdateTimeSlipEvent(v44);
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
LABEL_196:
    v55 = v5 - 40;
    if ( v55 )
    {
      if ( v55 != 1 )
      {
        updated = -1073741821;
LABEL_202:
        if ( !PreviousMode )
          return updated;
        v57 = (char *)SystemInformation;
LABEL_204:
        VfFreeCapturedUnicodeString(v57);
        return updated;
      }
      v56 = VfRemoveVerifierEntry(SystemInformation, v8, *(_QWORD *)&SystemInformationLength, v6);
    }
    else
    {
      v56 = VfAddVerifierEntry((PCUNICODE_STRING)SystemInformation);
    }
    updated = v56;
    goto LABEL_202;
  }
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741727;
  result = VfProbeAndCaptureUnicodeString(v96, SystemInformation, 1LL);
  if ( result >= 0 )
  {
    SystemInformation = v96;
    if ( !v96[0] )
      return -1073741585;
    goto LABEL_196;
  }
  return result;
}
