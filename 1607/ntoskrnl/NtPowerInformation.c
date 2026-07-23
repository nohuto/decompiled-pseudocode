/*
 * XREFs of NtPowerInformation @ 0x14050189C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140005088 (KeQueryActiveGroupCount.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     PoClearPowerRequestInternal @ 0x1400F9750 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400F988C (PoSetPowerRequestInternal.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopDisksRegisteredForIdle @ 0x1400F9D90 (PopDisksRegisteredForIdle.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140126714 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoPowerOffMonitor @ 0x140126D04 (PoPowerOffMonitor.c)
 *     PopEventCalloutDispatch @ 0x1401321D4 (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x14013D6F8 (ExVerifySuite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401FF628 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x1401FF668 (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140200DE4 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x140200EB4 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x140201DDC (PopCapabilityCheck.c)
 *     PpmClearSimulatedLoad @ 0x140204C68 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140205068 (PpmSetSimulatedLoad.c)
 *     PoSetCsSessionGoal @ 0x140206E40 (PoSetCsSessionGoal.c)
 *     PpmParkSetLpiCap @ 0x14020DF34 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x14022E018 (ExGetWakeTimerList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     PopDiagTraceSessionStates @ 0x1404D27C4 (PopDiagTraceSessionStates.c)
 *     PopUserIsAdmin @ 0x1405006B4 (PopUserIsAdmin.c)
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     PopProcessorInformation @ 0x140500E84 (PopProcessorInformation.c)
 *     PopGetSettingValue @ 0x140501400 (PopGetSettingValue.c)
 *     PopPowerRequestCreateInfo @ 0x140501704 (PopPowerRequestCreateInfo.c)
 *     PopCurrentPowerState @ 0x140502CF0 (PopCurrentPowerState.c)
 *     PopGetSettingNotificationName @ 0x140502D2C (PopGetSettingNotificationName.c)
 *     PopPowerRequestActionInfo @ 0x140502F60 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1405038C0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopLoggingInformation @ 0x14052C594 (PopLoggingInformation.c)
 *     PopSessionInputChange @ 0x14052E6DC (PopSessionInputChange.c)
 *     PopSuspendResumePdc @ 0x140530918 (PopSuspendResumePdc.c)
 *     PopDiagTraceServiceNotification @ 0x140532C54 (PopDiagTraceServiceNotification.c)
 *     PopDiagTraceAppPowerMessage @ 0x140533184 (PopDiagTraceAppPowerMessage.c)
 *     PopGetWakeSource @ 0x1405333F8 (PopGetWakeSource.c)
 *     PopReadHiberbootPolicy @ 0x140533770 (PopReadHiberbootPolicy.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140533DA8 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopFreeSessionState @ 0x140533EC8 (PopFreeSessionState.c)
 *     PopSetDisplayStatus @ 0x140534810 (PopSetDisplayStatus.c)
 *     PopEnforceResiliencyScenarios @ 0x1405349C4 (PopEnforceResiliencyScenarios.c)
 *     PopSessionConnectionChange @ 0x140546628 (PopSessionConnectionChange.c)
 *     PopUpdateConsoleDisplayState @ 0x140547D14 (PopUpdateConsoleDisplayState.c)
 *     PopCurrentPowerStatePrecise @ 0x14054816C (PopCurrentPowerStatePrecise.c)
 *     PopUmpoSendLegacyEvent @ 0x140548C70 (PopUmpoSendLegacyEvent.c)
 *     PopLogSleepDisabled @ 0x14054CF98 (PopLogSleepDisabled.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x14056E438 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x14056E44C (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14056E518 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x14056E7A8 (PopVerifySystemPowerPolicy.c)
 *     PopPdcInvocation @ 0x14057E510 (PopPdcInvocation.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A504 (PopRecordPhysicalPowerButton.c)
 *     PopApplyAdminPolicy @ 0x14066C060 (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x14066C138 (PopGetPowerRequestListInfo.c)
 *     PopSetHiberFileSize @ 0x14066E6C4 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14066E7C8 (PopSetHiberFileType.c)
 *     PopBatteryDeviceState @ 0x14066ED80 (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x14066FFD0 (PopPdcCsDeviceNotification.c)
 *     PopScreenOff @ 0x140670294 (PopScreenOff.c)
 *     PopThermalProcessUsermodeEvent @ 0x140670490 (PopThermalProcessUsermodeEvent.c)
 *     PopUserPresentOverride @ 0x140674DE8 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x140676710 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406767D8 (PpmParkClearForcedMask.c)
 *     TtmCleanupCurrentSession @ 0x1406785E0 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x140678A98 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x140679460 (TtmDispatchApi.c)
 *     PopInitPlatformSettings @ 0x1407BAB80 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  unsigned int *v7; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v13; // r15d
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  void *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  NTSTATUS WakeSource; // ebx
  char v29; // r13
  void *v30; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  unsigned __int64 v34; // rax
  int v35; // eax
  NTSTATUS SettingNotificationName; // eax
  int v37; // eax
  bool v38; // sf
  HANDLE *v39; // rax
  __int64 *v40; // rax
  unsigned int v41; // eax
  signed int v42; // ecx
  NTSTATUS v43; // eax
  _DWORD *PoolWithTag; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  char *v51; // r8
  int v52; // r9d
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ebx
  int v58; // ebx
  USHORT v59; // bx
  __int64 v60; // rdx
  unsigned int v61; // eax
  bool v62; // zf
  PVOID v63; // rax
  unsigned int v64; // ebx
  HANDLE *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  NTSTATUS v70; // eax
  unsigned int v71; // r13d
  unsigned int v72; // eax
  unsigned int SessionId; // eax
  unsigned int *v74; // rax
  unsigned int *v75; // rbx
  _QWORD *v76; // rax
  __int64 v77; // rcx
  unsigned int v78; // edx
  __int64 v79; // rcx
  int PowerRequestListInfo; // eax
  unsigned int v81; // eax
  char v82; // [rsp+40h] [rbp-6F8h]
  unsigned int Length; // [rsp+44h] [rbp-6F4h]
  unsigned int *Length_4a; // [rsp+48h] [rbp-6F0h]
  unsigned int Size; // [rsp+50h] [rbp-6E8h] BYREF
  _BYTE Size_4[4]; // [rsp+54h] [rbp-6E4h] BYREF
  void *Src; // [rsp+58h] [rbp-6E0h] BYREF
  KPROCESSOR_MODE v89; // [rsp+60h] [rbp-6D8h]
  STRSAFE_PCNZWCH psz; // [rsp+68h] [rbp-6D0h]
  char v91; // [rsp+70h] [rbp-6C8h]
  int v92; // [rsp+74h] [rbp-6C4h]
  char v93; // [rsp+78h] [rbp-6C0h]
  BOOL v94; // [rsp+7Ch] [rbp-6BCh] BYREF
  unsigned int v95; // [rsp+80h] [rbp-6B8h] BYREF
  unsigned int v96; // [rsp+84h] [rbp-6B4h]
  char v97[8]; // [rsp+88h] [rbp-6B0h] BYREF
  PVOID P[4]; // [rsp+90h] [rbp-6A8h] BYREF
  HANDLE v99[192]; // [rsp+B0h] [rbp-688h] BYREF
  _BYTE v100[64]; // [rsp+6B0h] [rbp-88h] BYREF

  v7 = (unsigned int *)InputBuffer;
  memset(v99, 0, sizeof(v99));
  Src = 0LL;
  Size = 0;
  v93 = 0;
  v11 = 0LL;
  psz = 0LL;
  P[0] = 0LL;
  v82 = 0;
  Size_4[0] = 0;
  v94 = 0;
  if ( (unsigned int)InformationLevel > PhysicalPowerButtonPress )
  {
    WakeSource = -1073741811;
    v29 = 0;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v89 = PreviousMode;
    v13 = v7 != 0LL ? InputBufferLength : 0;
    v14 = (unsigned __int64)InputBuffer & -(__int64)(v13 != 0);
    v15 = v14;
    Length_4a = (unsigned int *)v14;
    P[1] = (PVOID)v14;
    Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
    v16 = (void *)((unsigned __int64)OutputBuffer & -(__int64)(Length != 0));
    if ( !PreviousMode )
    {
      v11 = (unsigned int *)v14;
      psz = (STRSAFE_PCNZWCH)v14;
      v20 = 11;
LABEL_54:
      if ( (unsigned int)InformationLevel <= SetPowerSettingValue && (v31 = 33623200, _bittest(&v31, InformationLevel))
        || (v34 = (unsigned int)(InformationLevel - 28), (unsigned int)v34 <= 0x3E)
        && (v14 = 0x7F8EF9D6F89BB40FLL, _bittest64((const __int64 *)&v14, v34)) )
      {
        LOBYTE(v15) = 0;
      }
      else
      {
        PopAcquirePolicyLock();
        LOBYTE(v15) = 1;
        v82 = 1;
      }
      switch ( InformationLevel )
      {
        case SystemPowerPolicyAc:
        case SystemPowerPolicyDc:
          if ( !v11 )
          {
            if ( !v16 )
              goto LABEL_300;
LABEL_310:
            v65 = (HANDLE *)&unk_140303C64;
            goto LABEL_311;
          }
          if ( v13 < 0xE8 )
            goto LABEL_309;
          WakeSource = PopApplyPolicy(0LL, 0LL, v11, v13);
          if ( WakeSource >= 0 )
            goto LABEL_310;
          goto LABEL_102;
        case VerifySystemPolicyAc:
        case VerifySystemPolicyDc:
          if ( !v11 || !v16 )
            goto LABEL_300;
          if ( v13 < 0xE8 )
            goto LABEL_309;
          WakeSource = PopVerifySystemPowerPolicy(v11, v99);
          if ( WakeSource < 0 )
            goto LABEL_102;
          v65 = v99;
LABEL_311:
          Src = v65;
          Size = 232;
          goto LABEL_62;
        case SystemPowerCapabilities:
          if ( !v11 )
          {
            if ( !v16 )
              goto LABEL_300;
LABEL_117:
            byte_140303EA9 = PopFullWake & 1;
            byte_140303EB5 = PopDisksRegisteredForIdle();
            PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v99);
            Size = 76;
LABEL_95:
            Src = v99;
            goto LABEL_96;
          }
          if ( (PopSimulate & 1) == 0 )
            goto LABEL_300;
          if ( v13 >= 0x4C )
          {
            PopCapabilities = *(_OWORD *)v11;
            unk_140303EB0 = *((_OWORD *)v11 + 1);
            xmmword_140303EC0 = *((_OWORD *)v11 + 2);
            xmmword_140303ED0 = *((_OWORD *)v11 + 3);
            qword_140303EE0 = *((_QWORD *)v11 + 8);
            dword_140303EE8 = v11[18];
            WakeSource = PopResetCurrentPolicies(v14, v15);
            if ( WakeSource < 0 )
              goto LABEL_102;
            goto LABEL_117;
          }
LABEL_309:
          WakeSource = -1073741789;
          goto LABEL_102;
        case SystemBatteryState:
          if ( v11 || !v16 )
            goto LABEL_300;
          PopCurrentPowerState(v99, v15);
          goto LABEL_61;
        case SystemPowerStateHandler:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 < 0x18 )
            goto LABEL_309;
          v49 = *v11;
          if ( (unsigned int)v49 >= 7 )
            goto LABEL_300;
          v50 = 3 * v49;
          if ( qword_140303DE8[3 * v49] )
          {
            if ( (_DWORD)v49 != 4 || (void (__noreturn *)())qword_140303E48 != PopShutdownHandler )
              goto LABEL_300;
          }
          *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v49) = *(_OWORD *)v11;
          qword_140303DF0[3 * v49] = *((_QWORD *)v11 + 2);
          word_140303DE5[12 * v49] = 0;
          byte_140303DE7[24 * v49] = 0;
          v51 = 0LL;
          v52 = 0;
          if ( (_DWORD)v49 )
          {
            v53 = v49 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( !v54 )
              {
                v62 = (PopSimulate & 0x20) == 0;
                v51 = (char *)&word_140303EA4 + 1;
LABEL_249:
                v52 = 4;
                goto LABEL_250;
              }
              v55 = v54 - 1;
              if ( v55 )
              {
                v56 = v55 - 1;
                if ( !v56 )
                {
                  v51 = &byte_140303EA7;
                  goto LABEL_252;
                }
                if ( v56 == 2 )
                {
                  v62 = (PopSimulate & 0x2000) == 0;
                  v51 = (char *)&unk_140303EB1;
                  goto LABEL_249;
                }
LABEL_252:
                if ( (byte_140303DE4[8 * v50] != 0 ? v52 : 0) > (int)qword_140303EE0 )
                  LODWORD(qword_140303EE0) = byte_140303DE4[8 * v50] != 0 ? v52 : 0;
                if ( v51 )
                {
                  LOBYTE(v50) = 1;
                  PopChangeCapability(v51, v50);
                }
                goto LABEL_62;
              }
              v62 = (PopSimulate & 0x2000) == 0;
              v51 = &byte_140303EA6;
              v52 = 5;
            }
            else
            {
              v62 = (PopSimulate & 0x40) == 0;
              v51 = (char *)&word_140303EA4;
              v52 = 3;
            }
          }
          else
          {
            v62 = (PopSimulate & 8) == 0;
            v51 = &byte_140303EA3;
            v52 = 2;
          }
LABEL_250:
          if ( !v62 )
            v51 = 0LL;
          goto LABEL_252;
        case ProcessorStateHandler:
          if ( v11 || !v16 )
            goto LABEL_300;
          Src = &PpmProcessorDriverDispatchTable;
          Size = 240;
          goto LABEL_62;
        case SystemPowerPolicyCurrent:
          if ( v11 || !v16 )
            goto LABEL_300;
          v65 = (HANDLE *)PopPolicy;
          goto LABEL_311;
        case AdministratorPowerPolicy:
          if ( !v11 )
          {
            if ( !v16 )
              goto LABEL_300;
LABEL_319:
            Src = &PopAdminPolicy;
            Size = 24;
            goto LABEL_62;
          }
          if ( v13 < 0x18 )
            goto LABEL_309;
          WakeSource = PopApplyAdminPolicy(v14, v11);
          if ( WakeSource >= 0 )
          {
            WakeSource = PopResetCurrentPolicies(v67, v66);
            if ( WakeSource >= 0 )
              goto LABEL_319;
          }
          goto LABEL_102;
        case SystemReserveHiberFile:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( !v13 )
            goto LABEL_309;
          KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
          PopAcquirePolicyLock();
          LOBYTE(v68) = 1;
          LOBYTE(v69) = *(_BYTE *)v11;
          WakeSource = PopEnableHiberFile(v69, v68);
          PopReleasePolicyLock();
          KeSetEvent(&PopTransitionLock, 0, 0);
          goto LABEL_169;
        case ProcessorInformation:
          if ( v11 || !v16 )
            goto LABEL_300;
          WakeSource = PopProcessorInformation((__int64)v99, v15, KeGetCurrentPrcb()->Group, &Size);
          v11 = (unsigned int *)psz;
          v29 = v82;
          if ( WakeSource < 0 )
            goto LABEL_69;
          Src = v99;
          goto LABEL_63;
        case SystemPowerInformation:
          if ( v11 || !v16 )
            goto LABEL_300;
          LODWORD(v99[0]) = 0;
          HIDWORD(v99[0]) = dword_1403032C4;
          LODWORD(v99[1]) = dword_1403032CC - dword_1403032C8;
          BYTE4(v99[1]) = PopCoolingMode;
          Src = v99;
          Size = 16;
          goto LABEL_62;
        case ProcessorStateHandler2:
        case ProcessorPowerPolicyAc:
        case ProcessorPowerPolicyDc:
        case VerifyProcessorPowerPolicyAc:
        case VerifyProcessorPowerPolicyDc:
        case ProcessorPowerPolicyCurrent:
        case ProcessorPerfStates:
        case ProcessorIdleStates:
        case ProcessorCap:
        case ProcessorIdleDomains:
        case ProcessorIdleStatesHv:
        case ProcessorPerfStatesHv:
        case ProcessorPerfCapHv:
        case RegisterSpmPowerSettings:
        case PlatformIdleStates:
        case ProcessorIdleVeto:
        case PlatformIdleVeto:
          goto LABEL_312;
        case LastWakeTime:
          if ( v11 || !v16 )
            goto LABEL_300;
          v40 = &qword_1403033E8;
          goto LABEL_124;
        case LastSleepTime:
          if ( v11 || !v16 )
            goto LABEL_300;
          v40 = &qword_1403033F0;
          goto LABEL_124;
        case SystemExecutionState:
          if ( v11 || !v16 )
            goto LABEL_300;
          if ( dword_1402F26B0 )
            LODWORD(v99[0]) |= 1u;
          if ( PopPowerRequestAttributes[0] )
            LODWORD(v99[0]) |= 2u;
          goto LABEL_87;
        case SystemPowerStateNotifyHandler:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 < 0x10 )
            goto LABEL_309;
          if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)v11 )
            goto LABEL_300;
          PopPowerStateNotifyHandler = *(_OWORD *)v11;
          goto LABEL_62;
        case SystemPowerStateLogging:
          if ( v11 || !v16 )
            goto LABEL_300;
          WakeSource = PopLoggingInformation(P, &v95);
          if ( WakeSource < 0 )
            goto LABEL_102;
          Src = P[0];
          Size = v95;
          goto LABEL_62;
        case SystemPowerLoggingEntry:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 < 8 )
            goto LABEL_309;
          v37 = PopLogSleepDisabled(*v11, v11[1], 0LL, 0LL);
          goto LABEL_107;
        case SetPowerSettingValue:
          if ( !v11 )
            goto LABEL_300;
          if ( v16 )
            goto LABEL_300;
          if ( Length )
            goto LABEL_300;
          if ( v13 < 0x1C )
            goto LABEL_300;
          v71 = v11[6];
          if ( !v71 )
            goto LABEL_300;
          v96 = v11[5];
          if ( v96 > 2 )
            goto LABEL_300;
          if ( *v11 != 1 )
          {
            WakeSource = -1073741736;
            goto LABEL_102;
          }
          v72 = v71 + 28;
          if ( v71 >= 0xFFFFFFE4 )
          {
            v72 = -1;
            WakeSource = -1073741675;
          }
          else
          {
            WakeSource = 0;
          }
          Size = v72;
          if ( WakeSource < 0 )
            goto LABEL_102;
          if ( v13 < v72 )
            goto LABEL_300;
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v11 = (unsigned int *)psz;
          v37 = PopSetPowerSettingValue((const GUID *)(psz + 2), SessionId, v96, v71, (void *)(psz + 14));
          goto LABEL_107;
        case SystemMonitorHiberBootPowerOff:
          PopSuspendResumePdc(1LL, v15);
          PopHiberBootForceMonitorOff = 1;
          SettingNotificationName = PoPowerOffMonitor();
          goto LABEL_101;
        case SystemVideoState:
          if ( v11 || !v16 )
            goto LABEL_300;
          Size = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
          Src = PoolWithTag;
          v29 = v82;
          if ( !PoolWithTag )
            goto LABEL_376;
          Size_4[0] = 1;
          *PoolWithTag = PopConsoleDisplayState;
          goto LABEL_63;
        case TraceApplicationPowerMessage:
        case TraceApplicationPowerMessageEnd:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 < 8 )
            goto LABEL_309;
          if ( InformationLevel == TraceApplicationPowerMessage )
            PopDiagTraceAppPowerMessage(v11, v15);
          else
            PopDiagTraceAppPowerMessageEnd(v11, v15);
          goto LABEL_62;
        case SystemWakeSource:
          if ( v11 || !v16 )
            goto LABEL_300;
          if ( (_BYTE)v15 )
          {
            PopReleasePolicyLock();
            v29 = 0;
          }
          else
          {
            v29 = v82;
          }
          Size = 0;
          WakeSource = PopGetWakeSource(0LL, &Size);
          if ( WakeSource != -1073741789 )
            goto LABEL_281;
          v63 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x206D654Du);
          Src = v63;
          if ( !v63 )
          {
LABEL_376:
            WakeSource = -1073741670;
            goto LABEL_69;
          }
          Size_4[0] = 1;
          WakeSource = PopGetWakeSource(v63, &Size);
LABEL_281:
          if ( WakeSource < 0 )
            goto LABEL_69;
          goto LABEL_63;
        case SystemHiberFileInformation:
          if ( !v16 )
            goto LABEL_300;
          if ( (_DWORD)dword_1403034E0 && qword_1403034D8 )
          {
            Size = dword_1403034E0 + 8;
            v74 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_1403034E0 + 8), 0x206D654Du);
            v75 = v74;
            if ( v74 )
            {
              Src = v74;
              Size_4[0] = 1;
              memmove(v74 + 2, qword_1403034D8, (unsigned int)dword_1403034E0);
              *v75 = (unsigned int)dword_1403034E0 >> 4;
              goto LABEL_62;
            }
LABEL_383:
            WakeSource = -1073741670;
          }
          else
          {
            WakeSource = -1073741275;
          }
          goto LABEL_102;
        case TraceServicePowerMessage:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v89 != 1 )
            goto LABEL_374;
          if ( v13 < 4 )
          {
            WakeSource = -1073741811;
          }
          else
          {
            WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v11 + 2, v13 - 4, 0LL);
            if ( WakeSource >= 0 )
              WakeSource = 0;
          }
          if ( WakeSource < 0 )
            goto LABEL_102;
          PopDiagTraceServiceNotification(v11);
          goto LABEL_62;
        case ProcessorLoad:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 == 6 )
          {
            v43 = PpmSetSimulatedLoad((__int64)v11);
            goto LABEL_168;
          }
          if ( v13 != 4 )
            goto LABEL_391;
          v43 = PpmClearSimulatedLoad((_PROCESSOR_NUMBER *)v11);
          goto LABEL_168;
        case PowerShutdownNotification:
          if ( !v11 || v16 || v13 != 24 )
            goto LABEL_300;
          v76 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x206D654Du);
          if ( !v76 )
            goto LABEL_383;
          *(_OWORD *)v76 = *(_OWORD *)v11;
          v76[2] = *((_QWORD *)v11 + 2);
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)&PopShutdownNotificationCallback,
                  (signed __int64)v76,
                  0LL) )
            goto LABEL_96;
          ExFreePoolWithTag(v76, 0x206D654Du);
          WakeSource = -1073741823;
          v11 = (unsigned int *)psz;
          goto LABEL_102;
        case MonitorCapabilities:
          if ( !v11 || v13 != 4 || v16 )
            goto LABEL_300;
          v94 = *v11 != 0;
          PopSetPowerSettingValueAcDc((__int64)&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4u, (__int64)&v94);
          goto LABEL_62;
        case SessionPowerInit:
          if ( v11 || !v16 || Length != 64 )
            goto LABEL_300;
          PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
          v57 = PopEsState;
          PopReleaseRwLock(&PopEsLock);
          LOBYTE(v99[6]) = v57 == 1;
          LOBYTE(v99[7]) = TtmpEnabled == 1;
          if ( TtmpEnabled == 1 )
          {
            WakeSource = TtmInitCurrentSession();
            if ( WakeSource < 0 )
              goto LABEL_102;
          }
          PopAcquirePolicyLock();
          LODWORD(v99[2]) = 0;
          v99[0] = &PopNoMoreInput;
          v99[1] = &PopHiberBootForceMonitorOff;
          LODWORD(v99[3]) = byte_140303D51 != 0;
          HIDWORD(v99[3]) = dword_140303D4C;
          HIDWORD(v99[2]) = dword_140303D6C;
          v99[4] = (HANDLE)qword_140303D70;
          HIDWORD(v99[6]) = HIDWORD(qword_140303D78);
          v99[5] = (HANDLE)__PAIR64__(dword_140303D80, qword_140303D78);
          BYTE1(v99[6]) = PopLidOpened;
          Src = v99;
          Size = 64;
          v58 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          PopPrintEx(3u, "PopAdaptive: Session %u is started\n", v58);
          PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, v58, 0);
          PopReleasePolicyLock();
          goto LABEL_96;
        case SessionDisplayState:
          if ( !v11 || v13 != 16 || v16 )
            goto LABEL_300;
          if ( *((_BYTE *)v11 + 13) && *((_BYTE *)v11 + 12) )
          {
            if ( PopPlatformAoAc )
              PoSetCsSessionGoal();
            PopSetDisplayStatus(v11[1]);
            PopUpdateConsoleDisplayState(v11[1]);
          }
          if ( !*((_BYTE *)v11 + 14) )
            goto LABEL_208;
          if ( *((_BYTE *)v11 + 12) )
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, v11 + 1, 4u, 0LL, 0LL, 0, 0);
          if ( !*((_BYTE *)v11 + 14) )
            goto LABEL_208;
          PopDiagTraceSessionDisplayStateChange(v11[1] == 0, *v11, *((unsigned __int8 *)v11 + 12), v11[2]);
          goto LABEL_62;
        case PowerRequestCreate:
        case PlmPowerRequestCreate:
          if ( !v11 || !v16 )
            goto LABEL_300;
          if ( v13 != 40 || Length != 8 )
            goto LABEL_309;
          LOBYTE(v15) = InformationLevel == PlmPowerRequestCreate;
          WakeSource = PopPowerRequestCreateInfo((unsigned __int64)v11, v15, v99);
          if ( WakeSource < 0 )
            goto LABEL_102;
          v40 = (__int64 *)v99;
          goto LABEL_124;
        case PowerRequestAction:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 != 24 )
            goto LABEL_309;
          v37 = PopPowerRequestActionInfo(v11, v15);
          goto LABEL_107;
        case GetPowerRequestList:
          if ( v11 || !v16 )
            goto LABEL_300;
          PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Size);
          goto LABEL_422;
        case ProcessorInformationEx:
          if ( !v11 )
            goto LABEL_300;
          if ( v13 < 2 )
            goto LABEL_300;
          if ( !v16 )
            goto LABEL_300;
          v59 = *(_WORD *)v11;
          if ( v59 >= KeQueryActiveGroupCount() )
            goto LABEL_300;
          WakeSource = PopProcessorInformation((__int64)v99, v60, v59, &Size);
          if ( WakeSource < 0 )
            goto LABEL_102;
          Src = v99;
          goto LABEL_62;
        case NotifyUserModeLegacyPowerEvent:
          if ( !v11 || v13 != 16 )
            goto LABEL_300;
          WakeSource = PopUmpoSendLegacyEvent(v11, v15);
          if ( (int)(WakeSource + 0x80000000) < 0 )
          {
LABEL_208:
            v32 = Length;
            goto LABEL_156;
          }
          if ( WakeSource != -1073741536 )
            goto LABEL_102;
          goto LABEL_62;
        case GroupPark:
          if ( !(_BYTE)KdDebuggerEnabled )
            goto LABEL_374;
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 == 16 )
          {
            v43 = PpmParkApplyForcedMask(v11, v15);
            goto LABEL_168;
          }
          if ( v13 != 2 )
            goto LABEL_391;
          v43 = PpmParkClearForcedMask(v11, v15);
          goto LABEL_168;
        case WakeTimerList:
          if ( v11 || !v16 )
            goto LABEL_300;
          PowerRequestListInfo = ExGetWakeTimerList(&Src, &Size);
LABEL_422:
          WakeSource = PowerRequestListInfo;
          if ( PowerRequestListInfo < 0 )
            goto LABEL_102;
          Size_4[0] = 1;
          goto LABEL_62;
        case SystemHiberFileSize:
          if ( !v11 || !v16 )
            goto LABEL_300;
          if ( v13 < 4 )
            goto LABEL_309;
          KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
          PopAcquirePolicyLock();
          v70 = PopSetHiberFileSize(*v11, v97);
          goto LABEL_350;
        case ProcessorSetIdle:
          if ( !(_BYTE)KdDebuggerEnabled )
            goto LABEL_374;
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 == 8 )
          {
            v43 = PpmSetSimulatedIdle((__int64)v11);
LABEL_168:
            WakeSource = v43;
            goto LABEL_169;
          }
          if ( v13 == 4 )
          {
            v43 = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)v11);
            goto LABEL_168;
          }
LABEL_391:
          WakeSource = -1073741811;
LABEL_169:
          v38 = WakeSource < 0;
LABEL_108:
          if ( !v38 )
          {
LABEL_62:
            v29 = v82;
LABEL_63:
            v32 = Length;
LABEL_64:
            if ( Src && v16 )
            {
              if ( v32 < Size )
              {
                WakeSource = -1073741789;
                goto LABEL_69;
              }
              memmove(v16, Src, Size);
            }
            WakeSource = 0;
LABEL_69:
            v7 = Length_4a;
            goto LABEL_70;
          }
          goto LABEL_102;
        case LogicalProcessorIdling:
          if ( !v11 || !v16 )
            goto LABEL_300;
          if ( v13 != 8 || Length != 4 )
            goto LABEL_309;
          WakeSource = PpmParkSetLpiCap(*v11, v11[1], (unsigned int *)v99);
          if ( WakeSource < 0 )
            goto LABEL_102;
LABEL_87:
          Src = v99;
          Size = 4;
          goto LABEL_62;
        case UserPresence:
          if ( !ExVerifySuite(PhoneNT) )
          {
LABEL_312:
            WakeSource = -1073741822;
            goto LABEL_102;
          }
          if ( !v11 || v13 != 1 || v16 )
            goto LABEL_300;
          LOBYTE(v77) = *(_BYTE *)v11;
          v37 = PopUserPresentOverride(v77);
LABEL_107:
          WakeSource = v37;
          v38 = v37 < 0;
          goto LABEL_108;
        case PowerSettingNotificationName:
          if ( !v16 )
            goto LABEL_300;
          if ( v13 != 20 && Length_4a || Length != 8 )
            goto LABEL_309;
          SettingNotificationName = PopGetSettingNotificationName(v11, v16);
          goto LABEL_101;
        case GetPowerSettingValue:
          if ( !v11 || !v16 )
            goto LABEL_300;
          if ( v13 != 16 || Length < 4 )
            goto LABEL_309;
          SettingNotificationName = PopGetSettingValue(v11, (__int64)v16, Length);
          goto LABEL_101;
        case IdleResiliency:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 < 8 )
            goto LABEL_309;
          PopEnforceResiliencyScenarios(v11);
          goto LABEL_62;
        case SessionRITState:
          if ( !v11 )
            goto LABEL_300;
          if ( v13 != 8 )
            goto LABEL_300;
          if ( !v16 )
            goto LABEL_300;
          v32 = Length;
          if ( Length != 8 )
            goto LABEL_300;
          v41 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v11 = (unsigned int *)psz;
          PopSessionInputChange(v41, psz, v16);
          goto LABEL_156;
        case SessionConnectNotification:
          if ( !v11 )
            goto LABEL_300;
          if ( v13 != 2 )
            goto LABEL_300;
          if ( !v16 )
            goto LABEL_300;
          v32 = Length;
          if ( Length != 8 )
            goto LABEL_300;
          v45 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          PopSessionConnectionChange(v45, psz, v16);
          v46 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v11 = (unsigned int *)psz;
          if ( xmmword_140329010 )
          {
            LOBYTE(v47) = *((_BYTE *)psz + 1);
            LOBYTE(v48) = *(_BYTE *)psz;
            xmmword_140329010(v46, v47, v48);
          }
          goto LABEL_156;
        case SessionPowerCleanup:
          if ( v11 || v16 )
            goto LABEL_300;
          v64 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          PopPrintEx(3u, "PopAdaptive: Session %u is closed\n", v64);
          PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, v64, 0);
          PopFreeSessionState(v64);
          if ( TtmpEnabled == 1 )
            TtmCleanupCurrentSession();
          goto LABEL_96;
        case SessionLockState:
          if ( !v11 || v13 != 8 || v16 )
            goto LABEL_300;
          v61 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v11 = (unsigned int *)psz;
          PopSessionWinlogonNotification(v61, (__int64)psz);
          goto LABEL_62;
        case SystemHiberbootState:
          if ( PsIsCurrentThreadInServerSilo() )
          {
            WakeSource = -1073741637;
            goto LABEL_102;
          }
          if ( v11 || !v16 )
            goto LABEL_300;
          PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v99);
          if ( BYTE2(v99[2]) )
            PopReadHiberbootPolicy((char *)&v99[2] + 2);
          v39 = (HANDLE *)((char *)&v99[2] + 2);
LABEL_114:
          Src = v39;
          Size = 1;
          goto LABEL_62;
        case PlatformInformation:
          if ( v11 || !v16 )
            goto LABEL_300;
          LOBYTE(v99[0]) = PopPlatformAoAc;
          v39 = v99;
          goto LABEL_114;
        case PdcInvocation:
          if ( !v11 || v13 != 136 || v16 && Length != 176 )
            goto LABEL_300;
          SettingNotificationName = PopPdcInvocation(v11, v16);
          goto LABEL_101;
        case MonitorInvocation:
          if ( !v11 || v13 != 8 || v16 || Length )
            goto LABEL_300;
          WakeSource = 0;
          if ( !PopPlatformAoAc || !*(_BYTE *)v11 )
            goto LABEL_102;
          SettingNotificationName = PoSetCsSessionGoal();
          goto LABEL_101;
        case FirmwareTableInformationRegistered:
          if ( v11 || v16 )
            goto LABEL_300;
          WakeSource = PopInitPlatformSettings(v14, v15);
          byte_140303EB4 = PopPlatformAoAc;
          goto LABEL_102;
        case SetShutdownSelectedTime:
          PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
          goto LABEL_62;
        case SuspendResumeInvocation:
          if ( !v11 || v13 != 8 || v16 && Length )
            goto LABEL_300;
          WakeSource = 0;
          if ( !xmmword_140329020 )
            goto LABEL_102;
          LOBYTE(v15) = *((_BYTE *)v11 + 4);
          LOBYTE(v9) = *((_BYTE *)v11 + 5);
          LOBYTE(v10) = *((_BYTE *)v11 + 6);
          SettingNotificationName = xmmword_140329020(*v11, v15, v9, v10);
          goto LABEL_101;
        case ScreenOff:
        case ThermalStandby:
          if ( v11 || v16 )
            goto LABEL_300;
          if ( InformationLevel == ThermalStandby )
            v20 = 23;
          PopScreenOff(v20, v15);
          WakeSource = 0;
          goto LABEL_102;
        case CsDeviceNotification:
          if ( v89 )
            goto LABEL_374;
          if ( !v11 || v13 != 16 || v16 || Length )
            goto LABEL_300;
          SettingNotificationName = PopPdcCsDeviceNotification(v11, v15);
LABEL_101:
          WakeSource = SettingNotificationName;
          goto LABEL_102;
        case PlatformRole:
          if ( v11 || !v16 )
            goto LABEL_300;
          v35 = PopPlatformRole;
          if ( !PopPlatformRole )
          {
            v35 = _InterlockedCompareExchange(&PopPlatformRole, (dword_1403035B0 != 0) + 1, 0);
            if ( !v35 )
              v35 = (dword_1403035B0 != 0) + 1;
          }
          LODWORD(v99[0]) = v35;
          Size = 4;
          goto LABEL_95;
        case LastResumePerformance:
          if ( v11 || !v16 )
            goto LABEL_300;
          LODWORD(v99[0]) = dword_140303848;
          v99[1] = (HANDLE)qword_1403039D0;
          v99[2] = (HANDLE)qword_1403039D8;
          v29 = v82;
          if ( PopSleepStats )
          {
            Src = v99;
            Size = 24;
            goto LABEL_63;
          }
          WakeSource = -1073741823;
          goto LABEL_69;
        case DisplayBurst:
          if ( v11 || v16 )
            goto LABEL_300;
          if ( TtmpEnabled == 1 )
          {
            v81 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
            TtmNotifySessionDisplayBurst(v81, 6LL);
LABEL_96:
            v11 = (unsigned int *)psz;
          }
          else
          {
            PopEventCalloutDispatch(10, 6LL);
          }
          goto LABEL_62;
        case ExitLatencySamplingPercentage:
          if ( v89 == 1 )
          {
            if ( !v16 )
            {
              v32 = Length;
              if ( !Length )
              {
                if ( !v11 )
                {
                  PpmClearExitLatencySamplingPercentage();
                  goto LABEL_156;
                }
                if ( v13 == 4 )
                {
                  PpmSetExitLatencySamplingPercentage((int *)v11);
LABEL_156:
                  v29 = v82;
                  goto LABEL_64;
                }
              }
            }
LABEL_300:
            WakeSource = -1073741811;
          }
          else
          {
LABEL_374:
            WakeSource = -1073741790;
          }
LABEL_102:
          v29 = v82;
          goto LABEL_69;
        case SystemBatteryStatePrecise:
          if ( v11 || !v16 )
            goto LABEL_300;
          PopCurrentPowerStatePrecise(v99);
LABEL_61:
          Src = v99;
          Size = 32;
          goto LABEL_62;
        case ThermalEvent:
          if ( !v11 || v16 )
            goto LABEL_300;
          if ( v13 < 0x10 || v13 < 2 * (unsigned int)*((unsigned __int16 *)v11 + 6) + 14 )
            goto LABEL_309;
          v37 = PopThermalProcessUsermodeEvent(v11, v15);
          goto LABEL_107;
        case PowerRequestActionInternal:
          v78 = v11[2];
          v79 = *(_QWORD *)v11;
          if ( *((_BYTE *)v11 + 12) )
            PoSetPowerRequestInternal(v79, v78);
          else
            PoClearPowerRequestInternal(v79, v78);
          goto LABEL_62;
        case BatteryDeviceState:
          if ( !v11 || !v16 )
            goto LABEL_300;
          WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v11, v13, 0LL);
          if ( WakeSource < 0 )
            goto LABEL_102;
          WakeSource = PopBatteryDeviceState(v11, v99);
          if ( WakeSource < 0 )
            goto LABEL_102;
          Src = v99;
          Size = 52;
          goto LABEL_62;
        case PowerInformationInternal:
          if ( !v11 )
            goto LABEL_300;
          if ( v13 < 8 )
            goto LABEL_300;
          v42 = *v11;
          if ( (int)*v11 >= 23 )
            goto LABEL_300;
          if ( (unsigned int)(v42 - 9) <= 8 )
            v43 = TtmDispatchApi(
                    v42,
                    (_DWORD)v11,
                    v13,
                    (_DWORD)v16,
                    Length,
                    (__int64)&Src,
                    (__int64)&Size,
                    (__int64)Size_4);
          else
            v43 = PopPowerInformationInternal(v42, (__int64)v11, v13, (__int64)v16, &Src, &Size, Size_4);
          goto LABEL_168;
        case SystemHiberFileType:
          if ( !v11 || !v16 )
            goto LABEL_300;
          if ( v13 < 4 )
            goto LABEL_309;
          KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
          PopAcquirePolicyLock();
          v70 = PopSetHiberFileType(*v11, v97);
LABEL_350:
          WakeSource = v70;
          PopReleasePolicyLock();
          KeSetEvent(&PopTransitionLock, 0, 0);
          if ( WakeSource < 0 )
            goto LABEL_102;
          v40 = (__int64 *)v97;
LABEL_124:
          Src = v40;
          Size = 8;
          goto LABEL_62;
        case PhysicalPowerButtonPress:
          if ( !v11 || v13 < 4 || v16 )
            goto LABEL_300;
          PopRecordPhysicalPowerButton(*v11, v15);
          goto LABEL_62;
        default:
          goto LABEL_300;
      }
    }
    if ( InformationLevel != SystemPowerStateNotifyHandler && (unsigned int)(InformationLevel - 6) > 1 )
    {
      v17 = (unsigned int)(InformationLevel - 24);
      if ( (unsigned int)v17 > 0x3D || (v14 = 0x2780B8E1728787C3LL, !_bittest64((const __int64 *)&v14, v17)) )
      {
        v18 = (unsigned int)(InformationLevel - 37);
        if ( (unsigned int)v18 <= 0x33 && (v14 = 0x8801808940903LL, _bittest64((const __int64 *)&v14, v18))
          || (unsigned int)(InformationLevel - 2) <= 1 )
        {
          WakeSource = SeIsAppContainerOrIdentifyLevelContext(0LL);
          v92 = WakeSource;
          if ( WakeSource < 0 )
          {
            v11 = (unsigned int *)psz;
            v7 = Length_4a;
            v29 = 0;
            goto LABEL_70;
          }
          if ( v91 )
          {
            if ( InformationLevel != ScreenOff && InformationLevel != ThermalStandby )
            {
              WakeSource = -1073741790;
              v92 = -1073741790;
              v11 = (unsigned int *)psz;
              v7 = Length_4a;
              v29 = 0;
              goto LABEL_70;
            }
            v93 = PopCapabilityCheck(v14);
            if ( !v93 )
            {
              WakeSource = -1073741790;
              v92 = -1073741790;
              v11 = (unsigned int *)psz;
              v7 = Length_4a;
              v29 = 0;
              goto LABEL_70;
            }
          }
        }
        v19 = (unsigned int)(InformationLevel - 28);
        if ( (unsigned int)v19 <= 0x32 )
        {
          v14 = 0x4000000420001LL;
          if ( _bittest64((const __int64 *)&v14, v19) )
          {
            if ( !PopUserIsAdmin() )
            {
              WakeSource = -1073741790;
              v92 = -1073741790;
              v11 = (unsigned int *)psz;
              v7 = Length_4a;
              v29 = 0;
              goto LABEL_70;
            }
          }
        }
        if ( Length_4a )
        {
          v21 = (unsigned int)(InformationLevel - 11);
          if ( (unsigned int)v21 > 0x3D || (v22 = 0x2001800900000001LL, !_bittest64(&v22, v21)) )
          {
            if ( PsIsCurrentThreadInServerSilo() )
            {
              WakeSource = -1073741637;
              v92 = -1073741637;
              v11 = (unsigned int *)psz;
              v7 = Length_4a;
              v29 = 0;
              goto LABEL_70;
            }
          }
          v23 = (unsigned int)(InformationLevel - 38);
          if ( (unsigned int)v23 <= 0x34 && (v24 = 0x18000004422401LL, _bittest64(&v24, v23))
            || InformationLevel == AdministratorPowerPolicy )
          {
            if ( !PopUserIsAdmin() )
            {
              WakeSource = -1073741790;
              v92 = -1073741790;
              v11 = (unsigned int *)psz;
              v7 = Length_4a;
              v29 = 0;
              goto LABEL_70;
            }
          }
          v25 = (unsigned int)(InformationLevel - 37);
          if ( (unsigned int)v25 <= 0x35 && (v26 = 0x2E005828F40BC3LL, _bittest64(&v26, v25))
            || (unsigned int)(InformationLevel - 2) <= 1 )
          {
            v20 = 11;
          }
          else
          {
            v20 = 11;
            if ( InformationLevel != ProcessorInformation )
            {
              v30 = (void *)SeShutdownPrivilege;
              if ( InformationLevel == SystemReserveHiberFile )
                v30 = (void *)SeCreatePagefilePrivilege;
              P[2] = v30;
              if ( !SeSinglePrivilegeCheck((LUID)v30, PreviousMode) )
              {
                WakeSource = -1073741727;
                v92 = -1073741727;
                v11 = (unsigned int *)psz;
                v7 = Length_4a;
                v29 = 0;
                goto LABEL_70;
              }
            }
          }
          if ( v13 )
          {
            v27 = (unsigned __int64)Length_4a + v13;
            if ( v27 > 0x7FFFFFFF0000LL || v27 < (unsigned __int64)Length_4a )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( v13 > 0x40 )
          {
            v11 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x206D654Du);
            psz = (STRSAFE_PCNZWCH)v11;
            if ( !v11 )
            {
              WakeSource = -1073741670;
              v92 = -1073741670;
              v7 = Length_4a;
              v29 = 0;
              goto LABEL_70;
            }
          }
          else
          {
            v11 = (unsigned int *)v100;
            psz = (STRSAFE_PCNZWCH)v100;
          }
          memmove(v11, Length_4a, v13);
        }
        else
        {
          v20 = 11;
          v11 = (unsigned int *)psz;
        }
        if ( v16 )
          ProbeForWrite(v16, Length, 1u);
        goto LABEL_54;
      }
    }
    WakeSource = -1073741790;
    v11 = (unsigned int *)psz;
    v7 = (unsigned int *)v15;
    v29 = 0;
  }
LABEL_70:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( Size_4[0] )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v29 )
    PopReleasePolicyLock();
  if ( v11 && v11 != v7 && v11 != (unsigned int *)v100 )
    ExFreePoolWithTag(v11, 0x206D654Du);
  return WakeSource;
}
