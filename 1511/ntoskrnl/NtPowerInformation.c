/*
 * XREFs of NtPowerInformation @ 0x140452E2C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopDisksRegisteredForIdle @ 0x140097018 (PopDisksRegisteredForIdle.c)
 *     PoClearPowerRequestInternal @ 0x140097640 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140097768 (PoSetPowerRequestInternal.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     KeQueryActiveGroupCount @ 0x1400F9548 (KeQueryActiveGroupCount.c)
 *     RtlStringCbLengthW @ 0x140103D90 (RtlStringCbLengthW.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140117318 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoPowerOffMonitor @ 0x1401177BC (PoPowerOffMonitor.c)
 *     PopEnforceResiliencyScenarios @ 0x140119F5C (PopEnforceResiliencyScenarios.c)
 *     PopEventCalloutDispatch @ 0x14011B894 (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x14013E80C (ExVerifySuite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401E6E54 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x1401E6E94 (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1401E85A8 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1401E8678 (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x1401E9448 (PopCapabilityCheck.c)
 *     PpmClearSimulatedLoad @ 0x1401EC478 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1401EC6C0 (PpmSetSimulatedLoad.c)
 *     PpmParkSetLpiCap @ 0x1401F4644 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x14021457C (ExGetWakeTimerList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopSessionWinlogonNotification @ 0x1403B55B0 (PopSessionWinlogonNotification.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopPowerRequestCreateInfo @ 0x140452B24 (PopPowerRequestCreateInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140452CA8 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopCurrentPowerState @ 0x140454230 (PopCurrentPowerState.c)
 *     PopGetSettingNotificationName @ 0x14045429C (PopGetSettingNotificationName.c)
 *     PopPowerRequestActionInfo @ 0x1404544B8 (PopPowerRequestActionInfo.c)
 *     PopGetSettingValue @ 0x140454584 (PopGetSettingValue.c)
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 *     PopProcessorInformation @ 0x14046167C (PopProcessorInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 *     PopDiagTraceSessionStates @ 0x1404C62E8 (PopDiagTraceSessionStates.c)
 *     PopUserIsAdmin @ 0x1404C6840 (PopUserIsAdmin.c)
 *     PopSessionInputChange @ 0x1404F2D64 (PopSessionInputChange.c)
 *     PopDiagTraceServiceNotification @ 0x1404F41A8 (PopDiagTraceServiceNotification.c)
 *     PopDiagTraceAppPowerMessage @ 0x1404F4438 (PopDiagTraceAppPowerMessage.c)
 *     PopReadHiberbootPolicy @ 0x1404F4708 (PopReadHiberbootPolicy.c)
 *     PopFreeSessionState @ 0x1404F49CC (PopFreeSessionState.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x1404F4AD4 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopSetDisplayStatus @ 0x1404F537C (PopSetDisplayStatus.c)
 *     PopSuspendResumePdc @ 0x1404F7A20 (PopSuspendResumePdc.c)
 *     PopGetWakeSource @ 0x1404F8AF0 (PopGetWakeSource.c)
 *     PopCurrentPowerStatePrecise @ 0x1404F9FFC (PopCurrentPowerStatePrecise.c)
 *     PopUmpoSendLegacyEvent @ 0x1404FA078 (PopUmpoSendLegacyEvent.c)
 *     PopSessionConnectionChange @ 0x14050BA7C (PopSessionConnectionChange.c)
 *     PopUpdateConsoleDisplayState @ 0x14050C75C (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 *     PopChangeCapability @ 0x14053DEF8 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x14053E130 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14053E204 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x14053E494 (PopVerifySystemPowerPolicy.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     PopPdcInvocation @ 0x140549588 (PopPdcInvocation.c)
 *     PopLoggingInformation @ 0x1406321B8 (PopLoggingInformation.c)
 *     PopApplyAdminPolicy @ 0x140633A78 (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x140633C50 (PopGetPowerRequestListInfo.c)
 *     PopSetHiberFileSize @ 0x140636238 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x14063633C (PopSetHiberFileType.c)
 *     PopBatteryDeviceState @ 0x1406368C0 (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x140637B24 (PopPdcCsDeviceNotification.c)
 *     PopPdcScreenOff @ 0x140637D18 (PopPdcScreenOff.c)
 *     PopThermalProcessUsermodeEvent @ 0x140637F74 (PopThermalProcessUsermodeEvent.c)
 *     PopUserPresentOverride @ 0x14063C6E8 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x14063DEB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14063DF80 (PpmParkClearForcedMask.c)
 *     PopInitPlatformSettings @ 0x14076812C (PopInitPlatformSettings.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  unsigned int *v5; // r15
  unsigned int *v7; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v9; // r15d
  unsigned __int64 v10; // rcx
  char *v11; // rdx
  void *v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  ULONG64 v22; // rcx
  NTSTATUS WakeSource; // ebx
  char v24; // r13
  void *v25; // rcx
  int v26; // eax
  ULONG v27; // ebx
  unsigned __int64 v29; // rax
  NTSTATUS SettingNotificationName; // eax
  int v31; // eax
  bool v32; // sf
  int v33; // eax
  HANDLE *v34; // rax
  __int64 *v35; // rax
  unsigned int v36; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  char *v40; // r8
  int v41; // r9d
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  int v50; // ebx
  int v51; // eax
  bool v52; // zf
  USHORT v53; // bx
  __int64 v54; // rdx
  unsigned int v55; // eax
  PVOID v56; // rax
  unsigned int v57; // ebx
  HANDLE *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  NTSTATUS v63; // eax
  unsigned int v64; // r13d
  unsigned int v65; // eax
  unsigned int SessionId; // eax
  unsigned int *v67; // rax
  unsigned int *v68; // rbx
  NTSTATUS v69; // eax
  _OWORD *v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // edx
  __int64 v73; // rcx
  int PowerRequestListInfo; // eax
  char v75; // [rsp+40h] [rbp-6F8h]
  ULONG Length; // [rsp+44h] [rbp-6F4h]
  unsigned int *Length_4; // [rsp+48h] [rbp-6F0h]
  unsigned int Size; // [rsp+50h] [rbp-6E8h] BYREF
  char Size_4; // [rsp+54h] [rbp-6E4h] BYREF
  void *Src; // [rsp+58h] [rbp-6E0h] BYREF
  KPROCESSOR_MODE v81; // [rsp+60h] [rbp-6D8h]
  STRSAFE_PCNZWCH psz; // [rsp+68h] [rbp-6D0h]
  char v83[4]; // [rsp+70h] [rbp-6C8h] BYREF
  int v84; // [rsp+74h] [rbp-6C4h]
  char v85; // [rsp+78h] [rbp-6C0h]
  BOOL v86; // [rsp+7Ch] [rbp-6BCh] BYREF
  unsigned int v87; // [rsp+80h] [rbp-6B8h] BYREF
  char v88[8]; // [rsp+88h] [rbp-6B0h] BYREF
  unsigned int v89; // [rsp+90h] [rbp-6A8h]
  PVOID P[3]; // [rsp+98h] [rbp-6A0h] BYREF
  HANDLE v91[192]; // [rsp+B0h] [rbp-688h] BYREF
  _BYTE v92[64]; // [rsp+6B0h] [rbp-88h] BYREF

  v5 = (unsigned int *)InputBuffer;
  memset(v91, 0, sizeof(v91));
  Src = 0LL;
  Size = 0;
  v85 = 0;
  v7 = 0LL;
  psz = 0LL;
  P[0] = 0LL;
  v75 = 0;
  Size_4 = 0;
  v86 = 0;
  if ( (unsigned int)InformationLevel > SystemHiberFileType )
  {
    WakeSource = -1073741811;
    v24 = 0;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v81 = PreviousMode;
    v9 = InputBuffer != 0LL ? InputBufferLength : 0;
    v10 = (unsigned __int64)InputBuffer & -(__int64)(v9 != 0);
    v11 = (char *)v10;
    Length_4 = (unsigned int *)v10;
    P[1] = (PVOID)v10;
    Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
    v12 = (void *)((unsigned __int64)OutputBuffer & -(__int64)(Length != 0));
    if ( !PreviousMode )
    {
      v7 = (unsigned int *)v10;
      psz = (STRSAFE_PCNZWCH)v10;
      v16 = 11;
LABEL_54:
      if ( (unsigned int)InformationLevel <= SetPowerSettingValue && (v26 = 33623200, _bittest(&v26, InformationLevel))
        || (v29 = (unsigned int)(InformationLevel - 28), (unsigned int)v29 <= 0x3D)
        && (v10 = 0x3F8EF9D6F89BB40FLL, _bittest64((const __int64 *)&v10, v29)) )
      {
        LOBYTE(v11) = 0;
      }
      else
      {
        PopAcquirePolicyLock();
        LOBYTE(v11) = 1;
        v75 = 1;
      }
      switch ( InformationLevel )
      {
        case SystemPowerPolicyAc:
        case SystemPowerPolicyDc:
          if ( !v7 )
          {
            if ( !v12 )
              goto LABEL_299;
LABEL_304:
            v58 = (HANDLE *)&unk_1402DE1A4;
            goto LABEL_305;
          }
          if ( v9 < 0xE8 )
            goto LABEL_303;
          WakeSource = PopApplyPolicy(0LL, 0LL, v7, v9);
          if ( WakeSource >= 0 )
            goto LABEL_304;
          goto LABEL_96;
        case VerifySystemPolicyAc:
        case VerifySystemPolicyDc:
          if ( !v7 || !v12 )
            goto LABEL_299;
          if ( v9 < 0xE8 )
            goto LABEL_303;
          WakeSource = PopVerifySystemPowerPolicy(v7, v91);
          if ( WakeSource < 0 )
            goto LABEL_96;
          v58 = v91;
LABEL_305:
          Src = v58;
          Size = 232;
          goto LABEL_62;
        case SystemPowerCapabilities:
          if ( !v7 )
          {
            if ( !v12 )
              goto LABEL_299;
LABEL_117:
            byte_1402DDF69 = PopFullWake & 1;
            byte_1402DDF75 = PopDisksRegisteredForIdle();
            PopFilterCapabilities(&PopCapabilities, v91);
            Size = 76;
LABEL_108:
            Src = v91;
LABEL_109:
            v7 = (unsigned int *)psz;
            goto LABEL_62;
          }
          if ( (PopSimulate & 1) == 0 )
            goto LABEL_299;
          if ( v9 >= 0x4C )
          {
            PopCapabilities = *(_OWORD *)v7;
            unk_1402DDF70 = *((_OWORD *)v7 + 1);
            xmmword_1402DDF80 = *((_OWORD *)v7 + 2);
            xmmword_1402DDF90 = *((_OWORD *)v7 + 3);
            qword_1402DDFA0 = *((_QWORD *)v7 + 8);
            dword_1402DDFA8 = v7[18];
            WakeSource = PopResetCurrentPolicies(v10, v11);
            if ( WakeSource < 0 )
              goto LABEL_96;
            goto LABEL_117;
          }
LABEL_303:
          WakeSource = -1073741789;
          goto LABEL_96;
        case SystemBatteryState:
          if ( v7 || !v12 )
            goto LABEL_299;
          PopCurrentPowerState(v91, v11);
          goto LABEL_61;
        case SystemPowerStateHandler:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 < 0x18 )
            goto LABEL_303;
          v38 = *v7;
          if ( (unsigned int)v38 >= 7 )
            goto LABEL_299;
          v39 = 3 * v38;
          if ( qword_1402DDEA8[3 * v38] )
          {
            if ( (_DWORD)v38 != 4 || (void (__noreturn *)())qword_1402DDF08 != PopShutdownHandler )
              goto LABEL_299;
          }
          *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v38) = *(_OWORD *)v7;
          qword_1402DDEB0[3 * v38] = *((_QWORD *)v7 + 2);
          word_1402DDEA5[12 * v38] = 0;
          byte_1402DDEA7[24 * v38] = 0;
          v40 = 0LL;
          v41 = 0;
          if ( (_DWORD)v38 )
          {
            v42 = v38 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( !v43 )
              {
                v40 = (char *)&word_1402DDF64 + 1;
                v52 = (PopSimulate & 0x20) == 0;
LABEL_220:
                v41 = 4;
                goto LABEL_221;
              }
              v44 = v43 - 1;
              if ( v44 )
              {
                v45 = v44 - 1;
                if ( !v45 )
                {
                  v40 = &byte_1402DDF67;
                  goto LABEL_223;
                }
                if ( v45 == 2 )
                {
                  v40 = (char *)&unk_1402DDF71;
                  v52 = (PopSimulate & 0x2000) == 0;
                  goto LABEL_220;
                }
LABEL_223:
                if ( (byte_1402DDEA4[8 * v39] != 0 ? v41 : 0) > (int)qword_1402DDFA0 )
                  LODWORD(qword_1402DDFA0) = byte_1402DDEA4[8 * v39] != 0 ? v41 : 0;
                if ( v40 )
                {
                  LOBYTE(v39) = 1;
                  PopChangeCapability(v40, v39);
                }
LABEL_62:
                v24 = v75;
LABEL_63:
                v27 = Length;
LABEL_64:
                if ( Src && v12 )
                {
                  if ( v27 < Size )
                  {
                    WakeSource = -1073741789;
                    goto LABEL_69;
                  }
                  memmove(v12, Src, Size);
                }
                WakeSource = 0;
LABEL_69:
                v5 = Length_4;
                goto LABEL_70;
              }
              v40 = &byte_1402DDF66;
              v52 = (PopSimulate & 0x2000) == 0;
              v41 = 5;
            }
            else
            {
              v40 = (char *)&word_1402DDF64;
              v52 = (PopSimulate & 0x40) == 0;
              v41 = 3;
            }
          }
          else
          {
            v40 = &byte_1402DDF63;
            v52 = (PopSimulate & 8) == 0;
            v41 = 2;
          }
LABEL_221:
          if ( !v52 )
            v40 = 0LL;
          goto LABEL_223;
        case ProcessorStateHandler:
          if ( v7 || !v12 )
            goto LABEL_299;
          Src = &PpmProcessorDriverDispatchTable;
          Size = 184;
          goto LABEL_62;
        case SystemPowerPolicyCurrent:
          if ( v7 || !v12 )
            goto LABEL_299;
          v58 = (HANDLE *)PopPolicy;
          goto LABEL_305;
        case AdministratorPowerPolicy:
          if ( !v7 )
          {
            if ( !v12 )
              goto LABEL_299;
LABEL_313:
            Src = &PopAdminPolicy;
            Size = 24;
            goto LABEL_62;
          }
          if ( v9 < 0x18 )
            goto LABEL_303;
          WakeSource = PopApplyAdminPolicy(v10, v7);
          if ( WakeSource >= 0 )
          {
            WakeSource = PopResetCurrentPolicies(v60, v59);
            if ( WakeSource >= 0 )
              goto LABEL_313;
          }
          goto LABEL_96;
        case SystemReserveHiberFile:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( !v9 )
            goto LABEL_303;
          KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
          PopAcquirePolicyLock();
          LOBYTE(v61) = 1;
          LOBYTE(v62) = *(_BYTE *)v7;
          WakeSource = PopEnableHiberFile(v62, v61);
          PopReleasePolicyLock();
          KeSetEvent(&PopTransitionLock, 0, 0);
          goto LABEL_341;
        case ProcessorInformation:
          if ( v7 || !v12 )
            goto LABEL_299;
          WakeSource = PopProcessorInformation(v91, v11, KeGetCurrentPrcb()->Group, &Size);
          v7 = (unsigned int *)psz;
          v24 = v75;
          if ( WakeSource < 0 )
            goto LABEL_69;
          Src = v91;
          goto LABEL_63;
        case SystemPowerInformation:
          if ( v7 || !v12 )
            goto LABEL_299;
          LODWORD(v91[0]) = 0;
          HIDWORD(v91[0]) = dword_1402DEAC4;
          LODWORD(v91[1]) = dword_1402DEACC - dword_1402DEAC8;
          BYTE4(v91[1]) = PopCoolingMode;
          Src = v91;
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
          goto LABEL_306;
        case LastWakeTime:
          if ( v7 || !v12 )
            goto LABEL_299;
          v35 = &qword_1402DE0C8;
          goto LABEL_130;
        case LastSleepTime:
          if ( v7 || !v12 )
            goto LABEL_299;
          v35 = &qword_1402DE0D0;
          goto LABEL_130;
        case SystemExecutionState:
          if ( v7 || !v12 )
            goto LABEL_299;
          if ( dword_1402C72E0 )
            LODWORD(v91[0]) |= 1u;
          if ( PopPowerRequestAttributes[0] )
            LODWORD(v91[0]) |= 2u;
          goto LABEL_87;
        case SystemPowerStateNotifyHandler:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 < 0x10 )
            goto LABEL_303;
          if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)v7 )
            goto LABEL_299;
          PopPowerStateNotifyHandler = *(_OWORD *)v7;
          goto LABEL_62;
        case SystemPowerStateLogging:
          if ( v7 || !v12 )
            goto LABEL_299;
          WakeSource = PopLoggingInformation(P, &v87);
          if ( WakeSource < 0 )
            goto LABEL_96;
          Src = P[0];
          Size = v87;
          goto LABEL_62;
        case SystemPowerLoggingEntry:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 < 8 )
            goto LABEL_303;
          v31 = PopLogSleepDisabled(*v7, v7[1], 0LL, 0LL);
          goto LABEL_101;
        case SetPowerSettingValue:
          if ( !v7 )
            goto LABEL_299;
          if ( v12 )
            goto LABEL_299;
          if ( Length )
            goto LABEL_299;
          if ( v9 < 0x1C )
            goto LABEL_299;
          v64 = v7[6];
          if ( !v64 )
            goto LABEL_299;
          v89 = v7[5];
          if ( v89 > 2 )
            goto LABEL_299;
          if ( *v7 != 1 )
          {
            WakeSource = -1073741736;
            goto LABEL_96;
          }
          v65 = v64 + 28;
          if ( v64 >= 0xFFFFFFE4 )
          {
            v65 = -1;
            WakeSource = -1073741675;
          }
          else
          {
            WakeSource = 0;
          }
          Size = v65;
          if ( WakeSource < 0 )
            goto LABEL_96;
          if ( v9 < v65 )
            goto LABEL_299;
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v7 = (unsigned int *)psz;
          v31 = PopSetPowerSettingValue((const GUID *)(psz + 2), SessionId, v89, v64, (void *)(psz + 14));
          goto LABEL_101;
        case SystemMonitorHiberBootPowerOff:
          PopSuspendResumePdc(1LL, v11);
          PopHiberBootForceMonitorOff = 1;
          SettingNotificationName = PoPowerOffMonitor();
          goto LABEL_95;
        case SystemVideoState:
          if ( v7 || !v12 )
            goto LABEL_299;
          Size = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
          Src = PoolWithTag;
          v24 = v75;
          if ( !PoolWithTag )
            goto LABEL_372;
          Size_4 = 1;
          *PoolWithTag = PopConsoleDisplayState;
          goto LABEL_63;
        case TraceApplicationPowerMessage:
        case TraceApplicationPowerMessageEnd:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 < 8 )
            goto LABEL_303;
          if ( InformationLevel == TraceApplicationPowerMessage )
            PopDiagTraceAppPowerMessage(v7, v11);
          else
            PopDiagTraceAppPowerMessageEnd(v7, v11);
          goto LABEL_62;
        case SystemWakeSource:
          if ( v7 || !v12 )
            goto LABEL_299;
          if ( (_BYTE)v11 )
          {
            PopReleasePolicyLock();
            v24 = 0;
          }
          else
          {
            v24 = v75;
          }
          Size = 0;
          WakeSource = PopGetWakeSource(0LL, &Size);
          if ( WakeSource != -1073741789 )
            goto LABEL_286;
          v56 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x206D654Du);
          Src = v56;
          if ( !v56 )
          {
LABEL_372:
            WakeSource = -1073741670;
            goto LABEL_69;
          }
          Size_4 = 1;
          WakeSource = PopGetWakeSource(v56, &Size);
LABEL_286:
          if ( WakeSource < 0 )
            goto LABEL_69;
          goto LABEL_63;
        case SystemHiberFileInformation:
          if ( !v12 )
            goto LABEL_299;
          if ( (_DWORD)dword_1402DE300 && qword_1402DE2F8 )
          {
            Size = dword_1402DE300 + 8;
            v67 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_1402DE300 + 8), 0x206D654Du);
            v68 = v67;
            if ( v67 )
            {
              Src = v67;
              Size_4 = 1;
              memmove(v67 + 2, qword_1402DE2F8, (unsigned int)dword_1402DE300);
              *v68 = (unsigned int)dword_1402DE300 >> 4;
              goto LABEL_62;
            }
LABEL_379:
            WakeSource = -1073741670;
          }
          else
          {
            WakeSource = -1073741275;
          }
          goto LABEL_96;
        case TraceServicePowerMessage:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v81 != 1 )
            goto LABEL_370;
          if ( v9 < 4 )
          {
            WakeSource = -1073741811;
          }
          else
          {
            WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v7 + 2, v9 - 4, 0LL);
            if ( WakeSource >= 0 )
              WakeSource = 0;
          }
          if ( WakeSource < 0 )
            goto LABEL_96;
          PopDiagTraceServiceNotification(v7);
          goto LABEL_62;
        case ProcessorLoad:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 == 6 )
          {
            v69 = PpmSetSimulatedLoad((__int64)v7);
            goto LABEL_387;
          }
          if ( v9 != 4 )
            goto LABEL_340;
          v69 = PpmClearSimulatedLoad((_PROCESSOR_NUMBER *)v7);
          goto LABEL_387;
        case PowerShutdownNotification:
          if ( !v7 || v12 || v9 != 16 )
            goto LABEL_299;
          v70 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x206D654Du);
          if ( !v70 )
            goto LABEL_379;
          *v70 = *(_OWORD *)v7;
          if ( !_InterlockedCompareExchange64(&PopShutdownNotificationCallback, (signed __int64)v70, 0LL) )
            goto LABEL_109;
          ExFreePoolWithTag(v70, 0x206D654Du);
          WakeSource = -1073741823;
          v7 = (unsigned int *)psz;
          goto LABEL_96;
        case MonitorCapabilities:
          if ( !v7 || v9 != 4 || v12 )
            goto LABEL_299;
          v86 = *v7 != 0;
          PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4LL, &v86);
          goto LABEL_62;
        case SessionPowerInit:
          if ( v7 || !v12 || Length != 56 )
            goto LABEL_299;
          PopAcquireRwLockExclusive((__int64)&PopEsLock);
          v50 = PopEsState;
          PopReleaseRwLock((signed __int64 *)&PopEsLock);
          LOBYTE(v91[6]) = v50 == 1;
          PopAcquirePolicyLock();
          LODWORD(v91[2]) = 0;
          v91[0] = &PopNoMoreInput;
          v91[1] = &PopHiberBootForceMonitorOff;
          LODWORD(v91[3]) = byte_1402DE291 != 0;
          HIDWORD(v91[3]) = dword_1402DE28C;
          HIDWORD(v91[2]) = dword_1402DE2AC;
          v91[4] = (HANDLE)qword_1402DE2B0;
          HIDWORD(v91[6]) = HIDWORD(qword_1402DE2B8);
          v91[5] = (HANDLE)__PAIR64__(dword_1402DE2C0, qword_1402DE2B8);
          Src = v91;
          Size = 56;
          v51 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          PopPrintEx(3u, "PopAdaptive: Session %u is started\n", v51);
          PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
          PopReleasePolicyLock();
          goto LABEL_109;
        case SessionDisplayState:
          if ( !v7 || v9 != 16 || v12 )
            goto LABEL_299;
          if ( *((_BYTE *)v7 + 13) && *((_BYTE *)v7 + 12) )
          {
            PopSetDisplayStatus(v7[1], v11);
            PopUpdateConsoleDisplayState(v7[1]);
          }
          if ( !*((_BYTE *)v7 + 14) )
            goto LABEL_165;
          PopDiagTraceSessionDisplayStateChange(v7[1] == 0, *v7, *((unsigned __int8 *)v7 + 12), v7[2]);
          goto LABEL_62;
        case PowerRequestCreate:
        case PlmPowerRequestCreate:
          if ( !v7 || !v12 )
            goto LABEL_299;
          if ( v9 != 40 || Length != 8 )
            goto LABEL_303;
          LOBYTE(v11) = InformationLevel == PlmPowerRequestCreate;
          WakeSource = PopPowerRequestCreateInfo((char *)v7, v11, v91);
          if ( WakeSource < 0 )
            goto LABEL_96;
          v35 = (__int64 *)v91;
          goto LABEL_130;
        case PowerRequestAction:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 != 24 )
            goto LABEL_303;
          v31 = PopPowerRequestActionInfo(v7, v11);
          goto LABEL_101;
        case GetPowerRequestList:
          if ( v7 || !v12 )
            goto LABEL_299;
          PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &Size);
          goto LABEL_416;
        case ProcessorInformationEx:
          if ( !v7 )
            goto LABEL_299;
          if ( v9 < 2 )
            goto LABEL_299;
          if ( !v12 )
            goto LABEL_299;
          v53 = *(_WORD *)v7;
          if ( v53 >= KeQueryActiveGroupCount() )
            goto LABEL_299;
          WakeSource = PopProcessorInformation(v91, v54, v53, &Size);
          if ( WakeSource < 0 )
            goto LABEL_96;
          Src = v91;
          goto LABEL_62;
        case NotifyUserModeLegacyPowerEvent:
          if ( !v7 || v9 != 24 )
            goto LABEL_299;
          WakeSource = PopUmpoSendLegacyEvent(v7, v11);
          if ( (int)(WakeSource + 0x80000000) < 0 )
            goto LABEL_165;
          if ( WakeSource != -1073741536 )
            goto LABEL_96;
          goto LABEL_62;
        case GroupPark:
          if ( !(_BYTE)KdDebuggerEnabled )
            goto LABEL_370;
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 == 16 )
          {
            v69 = PpmParkApplyForcedMask(v7, v11);
            goto LABEL_387;
          }
          if ( v9 != 2 )
            goto LABEL_340;
          v69 = PpmParkClearForcedMask(v7, v11);
          goto LABEL_387;
        case WakeTimerList:
          if ( v7 || !v12 )
            goto LABEL_299;
          PowerRequestListInfo = ExGetWakeTimerList(&Src, &Size);
LABEL_416:
          WakeSource = PowerRequestListInfo;
          if ( PowerRequestListInfo < 0 )
            goto LABEL_96;
          Size_4 = 1;
          goto LABEL_62;
        case SystemHiberFileSize:
          if ( !v7 || !v12 )
            goto LABEL_299;
          if ( v9 < 4 )
            goto LABEL_303;
          KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
          PopAcquirePolicyLock();
          v63 = PopSetHiberFileSize(*v7, v88);
          goto LABEL_346;
        case ProcessorSetIdle:
          if ( !(_BYTE)KdDebuggerEnabled )
            goto LABEL_370;
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 == 8 )
          {
            v69 = PpmSetSimulatedIdle((__int64)v7);
          }
          else
          {
            if ( v9 != 4 )
            {
LABEL_340:
              WakeSource = -1073741811;
              goto LABEL_341;
            }
            v69 = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)v7);
          }
LABEL_387:
          WakeSource = v69;
LABEL_341:
          v32 = WakeSource < 0;
          goto LABEL_102;
        case LogicalProcessorIdling:
          if ( !v7 || !v12 )
            goto LABEL_299;
          if ( v9 != 8 || Length != 4 )
            goto LABEL_303;
          WakeSource = PpmParkSetLpiCap(*v7, v7[1], (unsigned int *)v91);
          if ( WakeSource < 0 )
            goto LABEL_96;
LABEL_87:
          Src = v91;
          Size = 4;
          goto LABEL_62;
        case UserPresence:
          if ( !ExVerifySuite(PhoneNT) )
          {
LABEL_306:
            WakeSource = -1073741822;
            goto LABEL_96;
          }
          if ( !v7 || v9 != 1 || v12 )
            goto LABEL_299;
          LOBYTE(v71) = *(_BYTE *)v7;
          v31 = PopUserPresentOverride(v71);
LABEL_101:
          WakeSource = v31;
          v32 = v31 < 0;
LABEL_102:
          if ( v32 )
            goto LABEL_96;
          goto LABEL_62;
        case PowerSettingNotificationName:
          if ( !v12 )
            goto LABEL_299;
          if ( v9 != 20 && Length_4 || Length != 8 )
            goto LABEL_303;
          SettingNotificationName = PopGetSettingNotificationName(v7, v12);
          goto LABEL_95;
        case GetPowerSettingValue:
          if ( !v7 || !v12 )
            goto LABEL_299;
          if ( v9 != 16 || Length < 4 )
            goto LABEL_303;
          SettingNotificationName = PopGetSettingValue(v7, v12, Length);
          goto LABEL_95;
        case IdleResiliency:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 < 8 )
            goto LABEL_303;
          PopEnforceResiliencyScenarios(v7);
          goto LABEL_62;
        case SessionRITState:
          if ( !v7 )
            goto LABEL_299;
          if ( v9 != 8 )
            goto LABEL_299;
          if ( !v12 )
            goto LABEL_299;
          v27 = Length;
          if ( Length != 8 )
            goto LABEL_299;
          v36 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v7 = (unsigned int *)psz;
          PopSessionInputChange(v36, psz, v12);
          goto LABEL_158;
        case SessionConnectNotification:
          if ( !v7 )
            goto LABEL_299;
          if ( v9 != 2 )
            goto LABEL_299;
          if ( !v12 )
            goto LABEL_299;
          v27 = Length;
          if ( Length != 8 )
            goto LABEL_299;
          v46 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          PopSessionConnectionChange(v46, psz, v12);
          v47 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v7 = (unsigned int *)psz;
          if ( xmmword_1402DDFF0 )
          {
            LOBYTE(v48) = *((_BYTE *)psz + 1);
            LOBYTE(v49) = *(_BYTE *)psz;
            xmmword_1402DDFF0(v47, v48, v49);
          }
          goto LABEL_158;
        case SessionPowerCleanup:
          if ( v7 || v12 )
            goto LABEL_299;
          v57 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          PopPrintEx(3u, "PopAdaptive: Session %u is closed\n", v57);
          PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
          PopFreeSessionState(v57);
          goto LABEL_109;
        case SessionLockState:
          if ( !v7 || v9 != 8 || v12 )
            goto LABEL_299;
          v55 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v7 = (unsigned int *)psz;
          PopSessionWinlogonNotification(v55, (__int64)psz);
          goto LABEL_62;
        case SystemHiberbootState:
          if ( PsIsCurrentThreadInServerSilo() )
          {
            WakeSource = -1073741637;
            goto LABEL_96;
          }
          if ( v7 || !v12 )
            goto LABEL_299;
          PopFilterCapabilities(&PopCapabilities, v91);
          if ( BYTE2(v91[2]) )
            PopReadHiberbootPolicy((char *)&v91[2] + 2);
          v34 = (HANDLE *)((char *)&v91[2] + 2);
LABEL_114:
          Src = v34;
          Size = 1;
          goto LABEL_62;
        case PlatformInformation:
          if ( v7 || !v12 )
            goto LABEL_299;
          LOBYTE(v91[0]) = PopPlatformAoAc;
          v34 = v91;
          goto LABEL_114;
        case PdcInvocation:
          if ( !v7 || v9 != 112 || v12 && Length != 160 )
            goto LABEL_299;
          SettingNotificationName = PopPdcInvocation(v7, v12);
          goto LABEL_95;
        case MonitorInvocation:
          if ( !v7 || v9 != 8 || v12 || Length )
            goto LABEL_299;
          WakeSource = 0;
          if ( !*((_QWORD *)&xmmword_1402DDFE0 + 1) )
            goto LABEL_96;
          LOBYTE(v11) = *((_BYTE *)v7 + 1);
          LOBYTE(v10) = *(_BYTE *)v7;
          SettingNotificationName = (*((__int64 (__fastcall **)(unsigned __int64, char *, _QWORD))&xmmword_1402DDFE0 + 1))(
                                      v10,
                                      v11,
                                      v7[1]);
          goto LABEL_95;
        case FirmwareTableInformationRegistered:
          if ( v7 || v12 )
            goto LABEL_299;
          WakeSource = PopInitPlatformSettings(v10, v11);
          byte_1402DDF74 = PopPlatformAoAc;
          goto LABEL_96;
        case SetShutdownSelectedTime:
          PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
          goto LABEL_62;
        case SuspendResumeInvocation:
          if ( !v7 || v9 != 8 || v12 && Length )
            goto LABEL_299;
          WakeSource = 0;
          if ( !xmmword_1402DE000 )
            goto LABEL_96;
          LOBYTE(v11) = *((_BYTE *)v7 + 4);
          LOBYTE(InputBufferLength) = *((_BYTE *)v7 + 5);
          LOBYTE(OutputBuffer) = *((_BYTE *)v7 + 6);
          SettingNotificationName = xmmword_1402DE000(*v7, v11, *(_QWORD *)&InputBufferLength, OutputBuffer);
          goto LABEL_95;
        case ScreenOff:
        case ThermalStandby:
          if ( v7 || v12 )
            goto LABEL_299;
          if ( InformationLevel == ThermalStandby )
            v16 = 23;
          SettingNotificationName = PopPdcScreenOff(v16, v11);
          goto LABEL_95;
        case CsDeviceNotification:
          if ( v81 )
            goto LABEL_370;
          if ( !v7 || v9 != 16 || v12 || Length )
            goto LABEL_299;
          SettingNotificationName = PopPdcCsDeviceNotification(v7, v11);
LABEL_95:
          WakeSource = SettingNotificationName;
          goto LABEL_96;
        case PlatformRole:
          if ( v7 || !v12 )
            goto LABEL_299;
          v33 = PopPlatformRole;
          if ( !PopPlatformRole )
          {
            v33 = _InterlockedCompareExchange(&PopPlatformRole, (dword_1402DE3D0 != 0) + 1, 0);
            if ( !v33 )
              v33 = (dword_1402DE3D0 != 0) + 1;
          }
          LODWORD(v91[0]) = v33;
          Size = 4;
          goto LABEL_108;
        case LastResumePerformance:
          if ( v7 || !v12 )
            goto LABEL_299;
          LODWORD(v91[0]) = dword_1402DE668;
          v91[1] = (HANDLE)qword_1402DE7F0;
          v91[2] = (HANDLE)qword_1402DE7F8;
          v24 = v75;
          if ( PopSleepStats )
          {
            Src = v91;
            Size = 24;
            goto LABEL_63;
          }
          WakeSource = -1073741823;
          goto LABEL_69;
        case DisplayBurst:
          if ( v7 || v12 )
            goto LABEL_299;
          PopEventCalloutDispatch(12, 6LL);
          goto LABEL_62;
        case ExitLatencySamplingPercentage:
          if ( v81 == 1 )
          {
            if ( !v12 )
            {
              v27 = Length;
              if ( !Length )
              {
                if ( !v7 )
                {
                  PpmClearExitLatencySamplingPercentage();
                  goto LABEL_158;
                }
                if ( v9 == 4 )
                {
                  PpmSetExitLatencySamplingPercentage((int *)v7);
LABEL_158:
                  v24 = v75;
                  goto LABEL_64;
                }
              }
            }
LABEL_299:
            WakeSource = -1073741811;
          }
          else
          {
LABEL_370:
            WakeSource = -1073741790;
          }
LABEL_96:
          v24 = v75;
          goto LABEL_69;
        case SystemBatteryStatePrecise:
          if ( v7 || !v12 )
            goto LABEL_299;
          PopCurrentPowerStatePrecise(v91);
LABEL_61:
          Src = v91;
          Size = 32;
          goto LABEL_62;
        case ThermalEvent:
          if ( !v7 || v12 )
            goto LABEL_299;
          if ( v9 < 0x10 || v9 < 2 * (unsigned int)*((unsigned __int16 *)v7 + 6) + 14 )
            goto LABEL_303;
          v31 = PopThermalProcessUsermodeEvent(v7, v11);
          goto LABEL_101;
        case PowerRequestActionInternal:
          v72 = v7[2];
          v73 = *(_QWORD *)v7;
          if ( *((_BYTE *)v7 + 12) )
            PoSetPowerRequestInternal(v73, v72);
          else
            PoClearPowerRequestInternal(v73, v72);
          goto LABEL_62;
        case BatteryDeviceState:
          if ( !v7 || !v12 )
            goto LABEL_299;
          WakeSource = RtlStringCbLengthW((STRSAFE_PCNZWCH)v7, v9, 0LL);
          if ( WakeSource < 0 )
            goto LABEL_96;
          WakeSource = PopBatteryDeviceState(v7, v91);
          if ( WakeSource < 0 )
            goto LABEL_96;
          Src = v91;
          Size = 52;
          goto LABEL_62;
        case PowerInformationInternal:
          if ( !v7 || v9 < 8 || (int)*v7 >= 6 )
            goto LABEL_299;
          WakeSource = PopPowerInformationInternal(
                         *v7,
                         (_DWORD)v7,
                         v9,
                         (_DWORD)v12,
                         (__int64)&Src,
                         (__int64)&Size,
                         (__int64)&Size_4);
          if ( WakeSource < 0 )
            goto LABEL_96;
LABEL_165:
          v27 = Length;
          goto LABEL_158;
        case SystemHiberFileType:
          if ( !v7 || !v12 )
            goto LABEL_299;
          if ( v9 < 4 )
            goto LABEL_303;
          KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
          PopAcquirePolicyLock();
          v63 = PopSetHiberFileType(*v7, v88);
LABEL_346:
          WakeSource = v63;
          PopReleasePolicyLock();
          KeSetEvent(&PopTransitionLock, 0, 0);
          if ( WakeSource < 0 )
            goto LABEL_96;
          v35 = (__int64 *)v88;
LABEL_130:
          Src = v35;
          Size = 8;
          goto LABEL_62;
        default:
          goto LABEL_299;
      }
    }
    if ( InformationLevel != SystemPowerStateNotifyHandler && (unsigned int)(InformationLevel - 6) > 1 )
    {
      v13 = (unsigned int)(InformationLevel - 24);
      if ( (unsigned int)v13 > 0x3D || (v10 = 0x2780B8E1728787C3LL, !_bittest64((const __int64 *)&v10, v13)) )
      {
        v14 = (unsigned int)(InformationLevel - 37);
        if ( (unsigned int)v14 <= 0x33 && (v10 = 0x8801808940903LL, _bittest64((const __int64 *)&v10, v14))
          || (unsigned int)(InformationLevel - 2) <= 1 )
        {
          WakeSource = SeIsAppContainerOrIdentifyLevelContext(0LL, v83);
          v84 = WakeSource;
          if ( WakeSource < 0 )
          {
            v7 = (unsigned int *)psz;
            v5 = Length_4;
            v24 = 0;
            goto LABEL_70;
          }
          if ( v83[0] )
          {
            if ( InformationLevel != ScreenOff && InformationLevel != ThermalStandby )
            {
              WakeSource = -1073741790;
              v84 = -1073741790;
              v7 = (unsigned int *)psz;
              v5 = Length_4;
              v24 = 0;
              goto LABEL_70;
            }
            v85 = PopCapabilityCheck(v10);
            if ( !v85 )
            {
              WakeSource = -1073741790;
              v84 = -1073741790;
              v7 = (unsigned int *)psz;
              v5 = Length_4;
              v24 = 0;
              goto LABEL_70;
            }
          }
        }
        v15 = (unsigned int)(InformationLevel - 28);
        if ( (unsigned int)v15 <= 0x32 )
        {
          v10 = 0x4000000420001LL;
          if ( _bittest64((const __int64 *)&v10, v15) )
          {
            if ( !(unsigned __int8)PopUserIsAdmin(0x4000000420001LL, v11) )
            {
              WakeSource = -1073741790;
              v84 = -1073741790;
              v7 = (unsigned int *)psz;
              v5 = Length_4;
              v24 = 0;
              goto LABEL_70;
            }
          }
        }
        if ( Length_4 )
        {
          v17 = (unsigned int)(InformationLevel - 11);
          if ( (unsigned int)v17 > 0x3D || (v18 = 0x2001800900000001LL, !_bittest64(&v18, v17)) )
          {
            if ( PsIsCurrentThreadInServerSilo() )
            {
              WakeSource = -1073741637;
              v84 = -1073741637;
              v7 = (unsigned int *)psz;
              v5 = Length_4;
              v24 = 0;
              goto LABEL_70;
            }
          }
          v19 = (unsigned int)(InformationLevel - 9);
          if ( (unsigned int)v19 <= 0x37 && (v18 = 0x88448020000001LL, _bittest64(&v18, v19))
            || InformationLevel == SystemHiberFileType )
          {
            if ( !(unsigned __int8)PopUserIsAdmin(v18, v11) )
            {
              WakeSource = -1073741790;
              v84 = -1073741790;
              v7 = (unsigned int *)psz;
              v5 = Length_4;
              v24 = 0;
              goto LABEL_70;
            }
          }
          v20 = (unsigned int)(InformationLevel - 37);
          if ( (unsigned int)v20 <= 0x33 && (v21 = 0xE005828F40BC3LL, _bittest64(&v21, v20))
            || (unsigned int)(InformationLevel - 2) <= 1 )
          {
            v16 = 11;
          }
          else
          {
            v16 = 11;
            if ( InformationLevel != ProcessorInformation )
            {
              v25 = (void *)SeShutdownPrivilege;
              if ( InformationLevel == SystemReserveHiberFile )
                v25 = (void *)SeCreatePagefilePrivilege;
              P[2] = v25;
              if ( !SeSinglePrivilegeCheck((LUID)v25, PreviousMode) )
              {
                WakeSource = -1073741727;
                v84 = -1073741727;
                v7 = (unsigned int *)psz;
                v5 = Length_4;
                v24 = 0;
                goto LABEL_70;
              }
            }
          }
          if ( v9 )
          {
            v22 = (ULONG64)Length_4 + v9;
            if ( v22 > MmUserProbeAddress || v22 < (unsigned __int64)Length_4 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
          if ( v9 > 0x40 )
          {
            v7 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x206D654Du);
            psz = (STRSAFE_PCNZWCH)v7;
            if ( !v7 )
            {
              WakeSource = -1073741670;
              v84 = -1073741670;
              v5 = Length_4;
              v24 = 0;
              goto LABEL_70;
            }
          }
          else
          {
            v7 = (unsigned int *)v92;
            psz = (STRSAFE_PCNZWCH)v92;
          }
          memmove(v7, Length_4, v9);
        }
        else
        {
          v16 = 11;
          v7 = (unsigned int *)psz;
        }
        if ( v12 )
          ProbeForWrite(v12, Length, 1u);
        goto LABEL_54;
      }
    }
    WakeSource = -1073741790;
    v7 = (unsigned int *)psz;
    v5 = (unsigned int *)v11;
    v24 = 0;
  }
LABEL_70:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( Size_4 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v24 )
    PopReleasePolicyLock();
  if ( v7 && v7 != v5 && v7 != (unsigned int *)v92 )
    ExFreePoolWithTag(v7, 0x206D654Du);
  return WakeSource;
}
