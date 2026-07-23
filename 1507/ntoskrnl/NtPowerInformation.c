/*
 * XREFs of NtPowerInformation @ 0x1404E7B24
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PoClearPowerRequestInternal @ 0x1400D1B8C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400D1CD0 (PoSetPowerRequestInternal.c)
 *     PopDisksRegisteredForIdle @ 0x1400D1FA4 (PopDisksRegisteredForIdle.c)
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PopEnforceResiliencyScenarios @ 0x140147FD0 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14014C41C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoPowerOffMonitor @ 0x14014C668 (PoPowerOffMonitor.c)
 *     PopEventCalloutDispatch @ 0x14014FBB8 (PopEventCalloutDispatch.c)
 *     ExVerifySuite @ 0x14016C2D4 (ExVerifySuite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140234100 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x140234140 (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140235870 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1402358FC (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x140236E18 (PopCapabilityCheck.c)
 *     PpmClearSimulatedLoad @ 0x14023A680 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14023A99C (PpmSetSimulatedLoad.c)
 *     PpmParkSetLpiCap @ 0x1402427F8 (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x140264560 (ExGetWakeTimerList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 *     PopCurrentPowerState @ 0x1404E965C (PopCurrentPowerState.c)
 *     PopGetSettingNotificationName @ 0x1404E98A4 (PopGetSettingNotificationName.c)
 *     PopPowerRequestActionInfo @ 0x1404E9BB8 (PopPowerRequestActionInfo.c)
 *     PopGetSettingValue @ 0x1404E9C8C (PopGetSettingValue.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404E9DC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestCreateInfo @ 0x1404EA904 (PopPowerRequestCreateInfo.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PopProcessorInformation @ 0x1405541D8 (PopProcessorInformation.c)
 *     PopPowerInformationInternal @ 0x14055CB5C (PopPowerInformationInternal.c)
 *     PopUserIsAdmin @ 0x14055D1DC (PopUserIsAdmin.c)
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopDiagTraceSessionStates @ 0x14055DDB8 (PopDiagTraceSessionStates.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 *     PopSuspendResumePdc @ 0x1405666AC (PopSuspendResumePdc.c)
 *     PopGetWakeSource @ 0x1405677BC (PopGetWakeSource.c)
 *     PopDiagTraceServiceNotification @ 0x140568438 (PopDiagTraceServiceNotification.c)
 *     PopDiagTraceAppPowerMessage @ 0x140568864 (PopDiagTraceAppPowerMessage.c)
 *     PopReadHiberbootPolicy @ 0x140568B7C (PopReadHiberbootPolicy.c)
 *     PopFreeSessionState @ 0x140568D38 (PopFreeSessionState.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140568EC0 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopSetDisplayStatus @ 0x140569878 (PopSetDisplayStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x14056C170 (PopUmpoSendLegacyEvent.c)
 *     PopCurrentPowerStatePrecise @ 0x14056C204 (PopCurrentPowerStatePrecise.c)
 *     PopSessionConnectionChange @ 0x140582E9C (PopSessionConnectionChange.c)
 *     PopEsGetState @ 0x1405832B8 (PopEsGetState.c)
 *     PopUpdateConsoleDisplayState @ 0x140583A58 (PopUpdateConsoleDisplayState.c)
 *     PopChangeCapability @ 0x1405994A8 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x1405996E0 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x1405997B4 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x140599A44 (PopVerifySystemPowerPolicy.c)
 *     PopLogSleepDisabled @ 0x1405B227C (PopLogSleepDisabled.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     PopPdcInvocation @ 0x1405C0CD8 (PopPdcInvocation.c)
 *     PopLoggingInformation @ 0x1406B06C4 (PopLoggingInformation.c)
 *     PopApplyAdminPolicy @ 0x1406B3094 (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x1406B326C (PopGetPowerRequestListInfo.c)
 *     PopSetHiberFileSize @ 0x1406B5B20 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1406B5C24 (PopSetHiberFileType.c)
 *     PopBatteryDeviceState @ 0x1406B62F4 (PopBatteryDeviceState.c)
 *     PopPdcCsDeviceNotification @ 0x1406B787C (PopPdcCsDeviceNotification.c)
 *     PopPdcScreenOff @ 0x1406B7AA4 (PopPdcScreenOff.c)
 *     PopThermalProcessUsermodeEvent @ 0x1406B7D70 (PopThermalProcessUsermodeEvent.c)
 *     PopUserPresentOverride @ 0x1406BCD58 (PopUserPresentOverride.c)
 *     PpmParkApplyForcedMask @ 0x1406BE7BC (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406BE884 (PpmParkClearForcedMask.c)
 *     PopInitPlatformSettings @ 0x1407DBA38 (PopInitPlatformSettings.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  unsigned __int64 v5; // r12
  wchar_t *v7; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v9; // r15d
  __int64 v10; // rcx
  volatile void *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  char v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  LUID v22; // rcx
  ULONG64 v23; // rcx
  wchar_t *PoolWithTag; // rax
  unsigned __int64 v25; // rax
  int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  char *v33; // r8
  int v34; // r9d
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rcx
  bool v42; // sf
  NTSTATUS v43; // eax
  __int64 *v44; // rax
  USHORT v45; // bx
  __int64 v46; // rdx
  int v47; // eax
  unsigned int v48; // r13d
  unsigned int v49; // eax
  unsigned int SessionId; // eax
  PVOID v51; // rax
  unsigned int *v52; // rax
  unsigned int *v53; // rbx
  NTSTATUS v54; // eax
  _OWORD *v55; // rax
  unsigned int v56; // ebx
  ULONG v57; // ebx
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  unsigned int v66; // edx
  __int64 v67; // rcx
  int PowerRequestListInfo; // eax
  NTSTATUS SettingValue; // eax
  int v70; // eax
  char v72; // [rsp+40h] [rbp-6A8h]
  ULONG Length; // [rsp+44h] [rbp-6A4h]
  const void *Length_4; // [rsp+48h] [rbp-6A0h]
  unsigned int NumberOfBytes; // [rsp+50h] [rbp-698h] BYREF
  char NumberOfBytes_4; // [rsp+54h] [rbp-694h] BYREF
  void *Src; // [rsp+58h] [rbp-690h] BYREF
  KPROCESSOR_MODE v78; // [rsp+60h] [rbp-688h]
  PVOID v79; // [rsp+68h] [rbp-680h]
  char v80; // [rsp+70h] [rbp-678h]
  int v81; // [rsp+74h] [rbp-674h]
  char v82; // [rsp+78h] [rbp-670h]
  BOOL v83; // [rsp+7Ch] [rbp-66Ch] BYREF
  char v84[8]; // [rsp+80h] [rbp-668h] BYREF
  PVOID P; // [rsp+88h] [rbp-660h] BYREF
  unsigned int v86; // [rsp+90h] [rbp-658h] BYREF
  unsigned int v87; // [rsp+94h] [rbp-654h]
  LUID v88; // [rsp+98h] [rbp-650h]
  _QWORD v89[192]; // [rsp+A0h] [rbp-648h] BYREF

  v5 = (unsigned __int64)InputBuffer;
  memset(v89, 0, sizeof(v89));
  Src = 0LL;
  NumberOfBytes = 0;
  v82 = 0;
  v7 = 0LL;
  v79 = 0LL;
  P = 0LL;
  LOBYTE(InputBuffer) = 0;
  v72 = 0;
  NumberOfBytes_4 = 0;
  v83 = 0;
  if ( (unsigned int)InformationLevel > SystemHiberFileType )
  {
    IsAppContainerOrIdentifyLevelContext = -1073741811;
    v15 = 0;
    goto LABEL_444;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v78 = PreviousMode;
  v9 = v5 != 0 ? InputBufferLength : 0;
  v10 = v5 & -(__int64)(v9 != 0);
  Length_4 = (const void *)v10;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v11 = (volatile void *)((unsigned __int64)OutputBuffer & -(__int64)(Length != 0));
  if ( PreviousMode )
  {
    if ( (unsigned int)(InformationLevel - 6) <= 1
      || InformationLevel == SystemPowerStateNotifyHandler
      || (v12 = (unsigned int)(InformationLevel - 24), (unsigned int)v12 <= 0x3D)
      && (v10 = 0x2780B8E1728787C3LL, _bittest64(&v10, v12)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      v7 = (wchar_t *)v79;
      v15 = 0;
      goto LABEL_443;
    }
    v13 = (unsigned int)(InformationLevel - 37);
    if ( (unsigned int)v13 <= 0x33 && (v10 = 0x8801808940903LL, _bittest64(&v10, v13))
      || (unsigned int)(InformationLevel - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      v81 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        v7 = (wchar_t *)v79;
        v5 &= -(__int64)(v9 != 0);
        v15 = 0;
        goto LABEL_444;
      }
      if ( v80 )
      {
        if ( InformationLevel != ScreenOff && InformationLevel != ThermalStandby )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v81 = -1073741790;
          v7 = (wchar_t *)v79;
          v5 &= -(__int64)(v9 != 0);
          v15 = 0;
          goto LABEL_444;
        }
        v82 = PopCapabilityCheck(v10);
        if ( !v82 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v81 = -1073741790;
          v7 = (wchar_t *)v79;
          v5 &= -(__int64)(v9 != 0);
          v15 = 0;
          goto LABEL_444;
        }
      }
    }
    v16 = (unsigned int)(InformationLevel - 28);
    if ( (unsigned int)v16 <= 0x32 )
    {
      v10 = 0x4000000420001LL;
      if ( _bittest64(&v10, v16) )
      {
        if ( !(unsigned __int8)PopUserIsAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v81 = -1073741790;
          v7 = (wchar_t *)v79;
          v5 &= -(__int64)(v9 != 0);
          v15 = 0;
          goto LABEL_444;
        }
      }
    }
    if ( Length_4 )
    {
      v17 = (unsigned int)(InformationLevel - 9);
      if ( (unsigned int)v17 <= 0x37 && (v18 = 0x88448020000001LL, _bittest64(&v18, v17))
        || InformationLevel == SystemHiberFileType )
      {
        if ( !(unsigned __int8)PopUserIsAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v81 = -1073741790;
          v7 = (wchar_t *)v79;
          v5 &= -(__int64)(v9 != 0);
          v15 = 0;
          goto LABEL_444;
        }
      }
      if ( (unsigned int)(InformationLevel - 2) <= 1
        || (v19 = (unsigned int)(InformationLevel - 37), (unsigned int)v19 <= 0x33)
        && (v20 = 0xE005828F40BC3LL, _bittest64(&v20, v19)) )
      {
        v21 = 11;
      }
      else
      {
        v21 = 11;
        if ( InformationLevel != ProcessorInformation )
        {
          v22 = SeShutdownPrivilege;
          if ( InformationLevel == SystemReserveHiberFile )
            v22 = SeCreatePagefilePrivilege;
          v88 = v22;
          if ( !SeSinglePrivilegeCheck(v22, PreviousMode) )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741727;
            v81 = -1073741727;
            v7 = (wchar_t *)v79;
            v5 &= -(__int64)(v9 != 0);
            v15 = 0;
            goto LABEL_444;
          }
        }
      }
      if ( v9 )
      {
        v23 = (ULONG64)Length_4 + v9;
        if ( v23 > MmUserProbeAddress || v23 < (unsigned __int64)Length_4 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x206D654Du);
      v7 = PoolWithTag;
      v79 = PoolWithTag;
      if ( !PoolWithTag )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741670;
        v81 = -1073741670;
        v5 &= -(__int64)(v9 != 0);
        v15 = 0;
        goto LABEL_444;
      }
      memmove(PoolWithTag, Length_4, v9);
    }
    else
    {
      v21 = 11;
      v7 = (wchar_t *)v79;
    }
    if ( v11 )
      ProbeForWrite(v11, Length, 1u);
    LOBYTE(InputBuffer) = 0;
  }
  else
  {
    v7 = (wchar_t *)(v5 & -(__int64)(v9 != 0));
    v79 = v7;
    v21 = 11;
  }
  v25 = (unsigned int)(InformationLevel - 28);
  if ( (unsigned int)v25 > 0x3D || (v10 = 0x3F8EF9D6F89BB40FLL, !_bittest64(&v10, v25)) )
  {
    if ( (unsigned int)InformationLevel > SetPowerSettingValue || (v26 = 33623200, !_bittest(&v26, InformationLevel)) )
    {
      PopAcquirePolicyLock();
      LOBYTE(InputBuffer) = 1;
      v72 = 1;
    }
  }
  switch ( InformationLevel )
  {
    case SystemPowerPolicyAc:
    case SystemPowerPolicyDc:
      if ( !v7 )
      {
        if ( !v11 )
          goto LABEL_60;
LABEL_65:
        v27 = &unk_14032E764;
        goto LABEL_66;
      }
      if ( v9 < 0xE8 )
        goto LABEL_63;
      IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0LL, 0LL, v7, v9);
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        goto LABEL_65;
      goto LABEL_442;
    case VerifySystemPolicyAc:
    case VerifySystemPolicyDc:
      if ( !v7 || !v11 )
        goto LABEL_60;
      if ( v9 < 0xE8 )
        goto LABEL_63;
      IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(v7, v89);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      v27 = v89;
LABEL_66:
      Src = v27;
      NumberOfBytes = 232;
      goto LABEL_57;
    case SystemPowerCapabilities:
      if ( !v7 )
      {
        if ( !v11 )
          goto LABEL_60;
LABEL_89:
        byte_14032E529 = PopFullWake & 1;
        byte_14032E535 = PopDisksRegisteredForIdle();
        PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v89);
        NumberOfBytes = 76;
LABEL_90:
        Src = v89;
LABEL_91:
        v7 = (wchar_t *)v79;
        goto LABEL_57;
      }
      if ( (PopSimulate & 1) == 0 )
        goto LABEL_60;
      if ( v9 >= 0x4C )
      {
        PopCapabilities = *(_OWORD *)v7;
        unk_14032E530 = *((_OWORD *)v7 + 1);
        xmmword_14032E540 = *((_OWORD *)v7 + 2);
        xmmword_14032E550 = *((_OWORD *)v7 + 3);
        qword_14032E560 = *((_QWORD *)v7 + 8);
        dword_14032E568 = *((_DWORD *)v7 + 18);
        IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(v10, InputBuffer);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_442;
        goto LABEL_89;
      }
LABEL_63:
      IsAppContainerOrIdentifyLevelContext = -1073741789;
      goto LABEL_442;
    case SystemBatteryState:
      if ( v7 || !v11 )
        goto LABEL_60;
      PopCurrentPowerState(v89, InputBuffer);
      goto LABEL_101;
    case SystemPowerStateHandler:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 < 0x18 )
        goto LABEL_63;
      v31 = *(unsigned int *)v7;
      if ( (unsigned int)v31 >= 7 )
        goto LABEL_60;
      v32 = 3 * v31;
      if ( qword_14032E468[3 * v31] )
      {
        if ( (_DWORD)v31 != 4 || (void (__noreturn *)())qword_14032E4C8 != PopShutdownHandler )
          goto LABEL_60;
      }
      *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v31) = *(_OWORD *)v7;
      qword_14032E470[3 * v31] = *((_QWORD *)v7 + 2);
      word_14032E465[12 * v31] = 0;
      byte_14032E467[24 * v31] = 0;
      v33 = 0LL;
      v34 = 0;
      if ( (_DWORD)v31 )
      {
        v35 = v31 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( !v36 )
          {
            v33 = (char *)&word_14032E524 + 1;
            v39 = (PopSimulate & 0x20) == 0;
LABEL_124:
            v34 = 4;
            goto LABEL_130;
          }
          v37 = v36 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( !v38 )
            {
              v33 = &byte_14032E527;
              goto LABEL_132;
            }
            if ( v38 != 2 )
              goto LABEL_132;
            v33 = (char *)&unk_14032E531;
            v39 = (PopSimulate & 0x2000) == 0;
            goto LABEL_124;
          }
          v33 = &byte_14032E526;
          v39 = (PopSimulate & 0x2000) == 0;
          v34 = 5;
        }
        else
        {
          v33 = (char *)&word_14032E524;
          v39 = (PopSimulate & 0x40) == 0;
          v34 = 3;
        }
      }
      else
      {
        v33 = &byte_14032E523;
        v39 = (PopSimulate & 8) == 0;
        v34 = 2;
      }
LABEL_130:
      if ( !v39 )
        v33 = 0LL;
LABEL_132:
      if ( (byte_14032E464[8 * v32] != 0 ? v34 : 0) > (int)qword_14032E560 )
        LODWORD(qword_14032E560) = byte_14032E464[8 * v32] != 0 ? v34 : 0;
      if ( v33 )
      {
        LOBYTE(v32) = 1;
        PopChangeCapability(v33, v32);
      }
      goto LABEL_57;
    case ProcessorStateHandler:
      if ( v7 || !v11 )
        goto LABEL_60;
      Src = &PpmProcessorDriverDispatchTable;
      NumberOfBytes = 184;
      goto LABEL_57;
    case SystemPowerPolicyCurrent:
      if ( v7 || !v11 )
        goto LABEL_60;
      v27 = PopPolicy;
      goto LABEL_66;
    case AdministratorPowerPolicy:
      if ( !v7 )
      {
        if ( !v11 )
          goto LABEL_60;
LABEL_74:
        Src = &PopAdminPolicy;
        NumberOfBytes = 24;
        goto LABEL_57;
      }
      if ( v9 < 0x18 )
        goto LABEL_63;
      IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(v10, v7);
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
        IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(v29, v28);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
          goto LABEL_74;
      }
      goto LABEL_442;
    case SystemReserveHiberFile:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( !v9 )
        goto LABEL_63;
      KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
      PopAcquirePolicyLock();
      LOBYTE(v40) = 1;
      LOBYTE(v41) = *(_BYTE *)v7;
      IsAppContainerOrIdentifyLevelContext = PopEnableHiberFile(v41, v40);
      PopReleasePolicyLock();
      KeSetEvent(&PopTransitionLock, 0, 0);
      goto LABEL_146;
    case ProcessorInformation:
      if ( v7 || !v11 )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = PopProcessorInformation(
                                               v89,
                                               InputBuffer,
                                               KeGetCurrentPrcb()->Group,
                                               &NumberOfBytes);
      v7 = (wchar_t *)v79;
      v15 = v72;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        break;
      Src = v89;
      goto LABEL_434;
    case SystemPowerInformation:
      if ( v7 || !v11 )
        goto LABEL_60;
      LODWORD(v89[0]) = 0;
      HIDWORD(v89[0]) = dword_14032E1A4;
      LODWORD(v89[1]) = dword_14032E1AC - dword_14032E1A8;
      BYTE4(v89[1]) = PopCoolingMode;
      Src = v89;
      NumberOfBytes = 16;
      goto LABEL_57;
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
      goto LABEL_67;
    case LastWakeTime:
      if ( v7 || !v11 )
        goto LABEL_60;
      v44 = &qword_14032E688;
      goto LABEL_155;
    case LastSleepTime:
      if ( v7 || !v11 )
        goto LABEL_60;
      v44 = &qword_14032E690;
      goto LABEL_155;
    case SystemExecutionState:
      if ( v7 || !v11 )
        goto LABEL_60;
      if ( dword_1403163B0 )
        LODWORD(v89[0]) |= 1u;
      if ( PopPowerRequestAttributes[0] )
        LODWORD(v89[0]) |= 2u;
      goto LABEL_194;
    case SystemPowerStateNotifyHandler:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 < 0x10 )
        goto LABEL_63;
      if ( (_QWORD)PopPowerStateNotifyHandler && *(_QWORD *)v7 )
        goto LABEL_60;
      PopPowerStateNotifyHandler = *(_OWORD *)v7;
      goto LABEL_57;
    case SystemPowerStateLogging:
      if ( v7 || !v11 )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(&P, &v86);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      Src = P;
      NumberOfBytes = v86;
      goto LABEL_57;
    case SystemPowerLoggingEntry:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 < 8 )
        goto LABEL_63;
      v47 = PopLogSleepDisabled(*(unsigned int *)v7, *((unsigned int *)v7 + 1), 0LL, 0LL);
      goto LABEL_181;
    case SetPowerSettingValue:
      if ( !v7 )
        goto LABEL_60;
      if ( v11 )
        goto LABEL_60;
      if ( Length )
        goto LABEL_60;
      if ( v9 < 0x1C )
        goto LABEL_60;
      v48 = *((_DWORD *)v7 + 6);
      if ( !v48 )
        goto LABEL_60;
      v87 = *((_DWORD *)v7 + 5);
      if ( v87 > 2 )
        goto LABEL_60;
      if ( *(_DWORD *)v7 != 1 )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741736;
        goto LABEL_442;
      }
      v49 = v48 + 28;
      if ( v48 >= 0xFFFFFFE4 )
      {
        v49 = -1;
        IsAppContainerOrIdentifyLevelContext = -1073741675;
      }
      else
      {
        IsAppContainerOrIdentifyLevelContext = 0;
      }
      NumberOfBytes = v49;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      if ( v9 < v49 )
        goto LABEL_60;
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v7 = (wchar_t *)v79;
      v47 = PopSetPowerSettingValue((char *)v79 + 4, SessionId, v87, v48, (char *)v79 + 28);
      goto LABEL_181;
    case SystemMonitorHiberBootPowerOff:
      PopSuspendResumePdc(1LL, InputBuffer);
      PopHiberBootForceMonitorOff = 1;
      SettingValue = PoPowerOffMonitor();
      goto LABEL_352;
    case SystemVideoState:
      if ( v7 || !v11 )
        goto LABEL_60;
      NumberOfBytes = 4;
      Src = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
      v15 = v72;
      if ( !Src )
        goto LABEL_222;
      NumberOfBytes_4 = 1;
      *(_DWORD *)Src = PopConsoleDisplayState;
      goto LABEL_434;
    case TraceApplicationPowerMessage:
    case TraceApplicationPowerMessageEnd:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 < 8 )
        goto LABEL_63;
      if ( InformationLevel == TraceApplicationPowerMessage )
        PopDiagTraceAppPowerMessage(v7, InputBuffer);
      else
        PopDiagTraceAppPowerMessageEnd(v7, InputBuffer);
      goto LABEL_57;
    case SystemWakeSource:
      if ( v7 || !v11 )
        goto LABEL_60;
      if ( (_BYTE)InputBuffer )
      {
        PopReleasePolicyLock();
        v15 = 0;
      }
      else
      {
        v15 = v72;
      }
      NumberOfBytes = 0;
      IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &NumberOfBytes);
      if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
        goto LABEL_238;
      v51 = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x206D654Du);
      Src = v51;
      if ( !v51 )
      {
LABEL_222:
        IsAppContainerOrIdentifyLevelContext = -1073741670;
        break;
      }
      NumberOfBytes_4 = 1;
      IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(v51, &NumberOfBytes);
LABEL_238:
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        break;
      goto LABEL_434;
    case SystemHiberFileInformation:
      if ( !v11 )
        goto LABEL_60;
      if ( !(_DWORD)dword_14032E8C0 || !qword_14032E8B8 )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741275;
        goto LABEL_442;
      }
      NumberOfBytes = dword_14032E8C0 + 8;
      v52 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(dword_14032E8C0 + 8), 0x206D654Du);
      v53 = v52;
      if ( !v52 )
      {
LABEL_244:
        IsAppContainerOrIdentifyLevelContext = -1073741670;
        goto LABEL_442;
      }
      Src = v52;
      NumberOfBytes_4 = 1;
      memmove(v52 + 2, qword_14032E8B8, (unsigned int)dword_14032E8C0);
      *v53 = (unsigned int)dword_14032E8C0 >> 4;
      goto LABEL_57;
    case TraceServicePowerMessage:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v78 != 1 )
        goto LABEL_212;
      if ( v9 >= 4 )
      {
        IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW(v7 + 2, v9 - 4, 0LL);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
          IsAppContainerOrIdentifyLevelContext = 0;
      }
      else
      {
        IsAppContainerOrIdentifyLevelContext = -1073741811;
      }
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      PopDiagTraceServiceNotification(v7, InputBuffer);
      goto LABEL_57;
    case ProcessorLoad:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 == 6 )
      {
        v54 = PpmSetSimulatedLoad((__int64)v7);
        goto LABEL_253;
      }
      if ( v9 != 4 )
        goto LABEL_254;
      v54 = PpmClearSimulatedLoad((__int64)v7);
      goto LABEL_253;
    case PowerShutdownNotification:
      if ( !v7 || v11 || v9 != 16 )
        goto LABEL_60;
      v55 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x206D654Du);
      if ( !v55 )
        goto LABEL_244;
      *v55 = *(_OWORD *)v7;
      if ( !_InterlockedCompareExchange64(&PopShutdownNotificationCallback, (signed __int64)v55, 0LL) )
        goto LABEL_91;
      ExFreePoolWithTag(v55, 0x206D654Du);
      IsAppContainerOrIdentifyLevelContext = -1073741823;
      v7 = (wchar_t *)v79;
      goto LABEL_442;
    case MonitorCapabilities:
      if ( !v7 || v9 != 4 || v11 )
        goto LABEL_60;
      v83 = *(_DWORD *)v7 != 0;
      PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4LL, &v83);
      goto LABEL_57;
    case SessionPowerInit:
      if ( v7 || !v11 || Length != 56 )
        goto LABEL_60;
      LOBYTE(v89[6]) = (unsigned int)PopEsGetState(v10, InputBuffer) == 1;
      PopAcquirePolicyLock();
      LODWORD(v89[2]) = 0;
      v89[0] = &PopNoMoreInput;
      v89[1] = &PopHiberBootForceMonitorOff;
      LODWORD(v89[3]) = byte_14032E851 != 0;
      HIDWORD(v89[3]) = dword_14032E84C;
      HIDWORD(v89[2]) = dword_14032E86C;
      v89[4] = qword_14032E870;
      HIDWORD(v89[6]) = HIDWORD(qword_14032E878);
      v89[5] = __PAIR64__(dword_14032E880, qword_14032E878);
      Src = v89;
      NumberOfBytes = 56;
      v65 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      PopPrintEx(3u, "PopAdaptive: Session %u is started\n", v65);
      PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
      PopReleasePolicyLock();
      goto LABEL_91;
    case SessionDisplayState:
      if ( !v7 || v9 != 16 || v11 )
        goto LABEL_60;
      if ( *((_BYTE *)v7 + 13) && *((_BYTE *)v7 + 12) )
      {
        PopSetDisplayStatus(*((unsigned int *)v7 + 1), InputBuffer);
        PopUpdateConsoleDisplayState(*((unsigned int *)v7 + 1));
      }
      if ( !*((_BYTE *)v7 + 14) )
        goto LABEL_433;
      PopDiagTraceSessionDisplayStateChange(
        *((_DWORD *)v7 + 1) == 0,
        *(_DWORD *)v7,
        *((unsigned __int8 *)v7 + 12),
        *((_DWORD *)v7 + 2));
      goto LABEL_57;
    case PowerRequestCreate:
    case PlmPowerRequestCreate:
      if ( !v7 || !v11 )
        goto LABEL_60;
      if ( v9 != 40 || Length != 8 )
        goto LABEL_63;
      LOBYTE(InputBuffer) = InformationLevel == PlmPowerRequestCreate;
      IsAppContainerOrIdentifyLevelContext = PopPowerRequestCreateInfo(v7, InputBuffer, v89);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      v44 = v89;
      goto LABEL_155;
    case PowerRequestAction:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 != 24 )
        goto LABEL_63;
      v47 = PopPowerRequestActionInfo(v7, InputBuffer);
      goto LABEL_181;
    case GetPowerRequestList:
      if ( v7 || !v11 )
        goto LABEL_60;
      PowerRequestListInfo = PopGetPowerRequestListInfo(&Src, &NumberOfBytes);
      goto LABEL_324;
    case ProcessorInformationEx:
      if ( !v7 )
        goto LABEL_60;
      if ( v9 < 2 )
        goto LABEL_60;
      if ( !v11 )
        goto LABEL_60;
      v45 = *v7;
      if ( v45 >= KeQueryActiveGroupCount() )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = PopProcessorInformation(v89, v46, v45, &NumberOfBytes);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      Src = v89;
      goto LABEL_57;
    case NotifyUserModeLegacyPowerEvent:
      if ( !v7 || v9 != 24 )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = PopUmpoSendLegacyEvent(v7, InputBuffer);
      if ( (int)(IsAppContainerOrIdentifyLevelContext + 0x80000000) < 0 )
        goto LABEL_433;
      if ( IsAppContainerOrIdentifyLevelContext == -1073741536 )
        goto LABEL_57;
      goto LABEL_442;
    case GroupPark:
      if ( !(_BYTE)KdDebuggerEnabled )
        goto LABEL_212;
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 == 16 )
      {
        v54 = PpmParkApplyForcedMask(v7, InputBuffer);
        goto LABEL_253;
      }
      if ( v9 != 2 )
        goto LABEL_254;
      v54 = PpmParkClearForcedMask(v7, InputBuffer);
      goto LABEL_253;
    case WakeTimerList:
      if ( v7 || !v11 )
        goto LABEL_60;
      PowerRequestListInfo = ExGetWakeTimerList(
                               &Src,
                               &NumberOfBytes,
                               *(__int64 *)&InputBufferLength,
                               (__int64)OutputBuffer);
LABEL_324:
      IsAppContainerOrIdentifyLevelContext = PowerRequestListInfo;
      if ( PowerRequestListInfo < 0 )
        goto LABEL_442;
      NumberOfBytes_4 = 1;
      goto LABEL_57;
    case SystemHiberFileSize:
      if ( !v7 || !v11 )
        goto LABEL_60;
      if ( v9 < 4 )
        goto LABEL_63;
      KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
      PopAcquirePolicyLock();
      v43 = PopSetHiberFileSize(*(unsigned int *)v7, v84);
      goto LABEL_153;
    case ProcessorSetIdle:
      if ( !(_BYTE)KdDebuggerEnabled )
        goto LABEL_212;
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 == 8 )
      {
        v54 = PpmSetSimulatedIdle((__int64)v7);
LABEL_253:
        IsAppContainerOrIdentifyLevelContext = v54;
        goto LABEL_146;
      }
      if ( v9 == 4 )
      {
        v54 = PpmClearSimulatedIdle((__int64)v7);
        goto LABEL_253;
      }
LABEL_254:
      IsAppContainerOrIdentifyLevelContext = -1073741811;
LABEL_146:
      v42 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_147:
      if ( v42 )
        goto LABEL_442;
LABEL_57:
      v15 = v72;
LABEL_434:
      v57 = Length;
      goto LABEL_435;
    case LogicalProcessorIdling:
      if ( !v7 || !v11 )
        goto LABEL_60;
      if ( v9 != 8 || Length != 4 )
        goto LABEL_63;
      IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(*(_DWORD *)v7, *((_DWORD *)v7 + 1), (unsigned int *)v89);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
LABEL_194:
      Src = v89;
      NumberOfBytes = 4;
      goto LABEL_57;
    case UserPresence:
      if ( !ExVerifySuite(PhoneNT) )
      {
LABEL_67:
        IsAppContainerOrIdentifyLevelContext = -1073741822;
        goto LABEL_442;
      }
      if ( !v7 || v9 != 1 || v11 )
        goto LABEL_60;
      LOBYTE(v64) = *(_BYTE *)v7;
      v47 = PopUserPresentOverride(v64);
LABEL_181:
      IsAppContainerOrIdentifyLevelContext = v47;
      v42 = v47 < 0;
      goto LABEL_147;
    case PowerSettingNotificationName:
      v5 &= -(__int64)(v9 != 0);
      if ( v11 )
      {
        if ( (!Length_4 || v9 == 20) && Length == 8 )
          IsAppContainerOrIdentifyLevelContext = PopGetSettingNotificationName(v7, v11);
        else
          IsAppContainerOrIdentifyLevelContext = -1073741789;
      }
      else
      {
        IsAppContainerOrIdentifyLevelContext = -1073741811;
      }
      v15 = v72;
      goto LABEL_444;
    case GetPowerSettingValue:
      if ( !v7 || !v11 )
        goto LABEL_60;
      if ( v9 != 16 || Length < 4 )
        goto LABEL_63;
      SettingValue = PopGetSettingValue(v7, v11, Length);
      goto LABEL_352;
    case IdleResiliency:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 < 8 )
        goto LABEL_63;
      PopEnforceResiliencyScenarios((unsigned int *)v7);
      goto LABEL_57;
    case SessionRITState:
      if ( !v7 )
        goto LABEL_60;
      if ( v9 != 8 )
        goto LABEL_60;
      if ( !v11 )
        goto LABEL_60;
      v57 = Length;
      if ( Length != 8 )
        goto LABEL_60;
      v58 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v7 = (wchar_t *)v79;
      PopSessionInputChange(v58, v79, v11);
      goto LABEL_280;
    case SessionConnectNotification:
      if ( !v7 )
        goto LABEL_60;
      if ( v9 != 2 )
        goto LABEL_60;
      if ( !v11 )
        goto LABEL_60;
      v57 = Length;
      if ( Length != 8 )
        goto LABEL_60;
      v59 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      PopSessionConnectionChange(v59, v79, v11);
      v60 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v7 = (wchar_t *)v79;
      if ( xmmword_14032E5B0 )
      {
        LOBYTE(v61) = *((_BYTE *)v79 + 1);
        LOBYTE(v62) = *(_BYTE *)v79;
        xmmword_14032E5B0(v60, v61, v62);
      }
      goto LABEL_280;
    case SessionPowerCleanup:
      if ( v7 || v11 )
        goto LABEL_60;
      v56 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      PopPrintEx(3u, "PopAdaptive: Session %u is closed\n", v56);
      PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
      PopFreeSessionState(v56);
      goto LABEL_91;
    case SessionLockState:
      if ( !v7 || v9 != 8 || v11 )
        goto LABEL_60;
      v63 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v7 = (wchar_t *)v79;
      PopSessionWinlogonNotification(v63, (__int64)v79);
      goto LABEL_57;
    case SystemHiberbootState:
      if ( v7 || !v11 )
        goto LABEL_60;
      PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v89);
      if ( BYTE2(v89[2]) )
        PopReadHiberbootPolicy((char *)&v89[2] + 2);
      v30 = (char *)&v89[2] + 2;
      goto LABEL_97;
    case PlatformInformation:
      if ( v7 || !v11 )
        goto LABEL_60;
      LOBYTE(v89[0]) = PopPlatformAoAc;
      v30 = (char *)v89;
LABEL_97:
      Src = v30;
      NumberOfBytes = 1;
      goto LABEL_57;
    case PdcInvocation:
      if ( !v7 || v9 != 112 || v11 && Length != 152 )
        goto LABEL_60;
      SettingValue = PopPdcInvocation(v7, v11);
      goto LABEL_352;
    case MonitorInvocation:
      if ( !v7 || v9 != 8 || v11 || Length )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = 0;
      if ( !*((_QWORD *)&xmmword_14032E5A0 + 1) )
        goto LABEL_442;
      LOBYTE(InputBuffer) = *((_BYTE *)v7 + 1);
      LOBYTE(v10) = *(_BYTE *)v7;
      SettingValue = (*((__int64 (__fastcall **)(__int64, PVOID, _QWORD))&xmmword_14032E5A0 + 1))(
                       v10,
                       InputBuffer,
                       *((unsigned int *)v7 + 1));
      goto LABEL_352;
    case FirmwareTableInformationRegistered:
      if ( v7 || v11 )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings(v10, InputBuffer);
      byte_14032E534 = PopPlatformAoAc;
      goto LABEL_442;
    case SetShutdownSelectedTime:
      PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      goto LABEL_57;
    case SuspendResumeInvocation:
      if ( !v7 || v9 != 8 || v11 && Length )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = 0;
      if ( !xmmword_14032E5C0 )
        goto LABEL_442;
      LOBYTE(InputBuffer) = *((_BYTE *)v7 + 4);
      LOBYTE(InputBufferLength) = *((_BYTE *)v7 + 5);
      LOBYTE(OutputBuffer) = *((_BYTE *)v7 + 6);
      SettingValue = xmmword_14032E5C0(*(unsigned int *)v7, InputBuffer, *(_QWORD *)&InputBufferLength, OutputBuffer);
      goto LABEL_352;
    case ScreenOff:
    case ThermalStandby:
      if ( v7 || v11 )
        goto LABEL_60;
      if ( InformationLevel == ThermalStandby )
        v21 = 23;
      SettingValue = PopPdcScreenOff(v21, InputBuffer);
      goto LABEL_352;
    case CsDeviceNotification:
      if ( v78 )
        goto LABEL_212;
      if ( !v7 || v9 != 16 || v11 || Length )
        goto LABEL_60;
      SettingValue = PopPdcCsDeviceNotification(v7, InputBuffer);
LABEL_352:
      IsAppContainerOrIdentifyLevelContext = SettingValue;
      goto LABEL_442;
    case PlatformRole:
      if ( v7 || !v11 )
        goto LABEL_60;
      v70 = PopPlatformRole;
      if ( !PopPlatformRole )
      {
        v70 = _InterlockedCompareExchange(&PopPlatformRole, (dword_14032E990 != 0) + 1, 0);
        if ( !v70 )
          v70 = (dword_14032E990 != 0) + 1;
      }
      LODWORD(v89[0]) = v70;
      NumberOfBytes = 4;
      goto LABEL_90;
    case LastResumePerformance:
      if ( v7 || !v11 )
        goto LABEL_60;
      LODWORD(v89[0]) = dword_14032EC28;
      v89[1] = qword_14032EDB0;
      v89[2] = qword_14032EDB8;
      v15 = v72;
      if ( !PopSleepStats )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741823;
        break;
      }
      Src = v89;
      NumberOfBytes = 24;
      goto LABEL_434;
    case DisplayBurst:
      if ( v7 || v11 )
        goto LABEL_60;
      PopEventCalloutDispatch(12, 0LL);
      goto LABEL_57;
    case ExitLatencySamplingPercentage:
      if ( v78 != 1 )
      {
LABEL_212:
        IsAppContainerOrIdentifyLevelContext = -1073741790;
LABEL_442:
        v15 = v72;
        break;
      }
      if ( v11 )
        goto LABEL_60;
      v57 = Length;
      if ( Length )
        goto LABEL_60;
      if ( v7 )
      {
        if ( v9 != 4 )
        {
LABEL_60:
          IsAppContainerOrIdentifyLevelContext = -1073741811;
          goto LABEL_442;
        }
        PpmSetExitLatencySamplingPercentage((int *)v7);
      }
      else
      {
        PpmClearExitLatencySamplingPercentage();
      }
LABEL_280:
      v15 = v72;
LABEL_435:
      if ( !Src || !v11 )
        goto LABEL_440;
      if ( v57 >= NumberOfBytes )
      {
        memmove((void *)v11, Src, NumberOfBytes);
LABEL_440:
        IsAppContainerOrIdentifyLevelContext = 0;
      }
      else
      {
        IsAppContainerOrIdentifyLevelContext = -1073741789;
      }
      break;
    case SystemBatteryStatePrecise:
      if ( v7 || !v11 )
        goto LABEL_60;
      PopCurrentPowerStatePrecise(v89);
LABEL_101:
      Src = v89;
      NumberOfBytes = 32;
      goto LABEL_57;
    case ThermalEvent:
      if ( !v7 || v11 )
        goto LABEL_60;
      if ( v9 < 0x10 || v9 < 2 * (unsigned int)v7[6] + 14 )
        goto LABEL_63;
      v47 = PopThermalProcessUsermodeEvent(v7, InputBuffer);
      goto LABEL_181;
    case PowerRequestActionInternal:
      v66 = *((_DWORD *)v7 + 2);
      v67 = *(_QWORD *)v7;
      if ( *((_BYTE *)v7 + 12) )
        PoSetPowerRequestInternal(v67, v66);
      else
        PoClearPowerRequestInternal(v67, v66);
      goto LABEL_57;
    case BatteryDeviceState:
      if ( !v7 || !v11 )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW(v7, v9, 0LL);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(v7, v89);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      Src = v89;
      NumberOfBytes = 52;
      goto LABEL_57;
    case PowerInformationInternal:
      if ( !v7 || v9 < 8 || *(int *)v7 >= 3 )
        goto LABEL_60;
      IsAppContainerOrIdentifyLevelContext = PopPowerInformationInternal(
                                               *(_DWORD *)v7,
                                               (_DWORD)v7,
                                               v9,
                                               (_DWORD)v11,
                                               (__int64)&Src,
                                               (__int64)&NumberOfBytes,
                                               (__int64)&NumberOfBytes_4);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
LABEL_433:
      v57 = Length;
      goto LABEL_280;
    case SystemHiberFileType:
      if ( !v7 || !v11 )
        goto LABEL_60;
      if ( v9 < 4 )
        goto LABEL_63;
      KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
      PopAcquirePolicyLock();
      v43 = PopSetHiberFileType(*(unsigned int *)v7, v84);
LABEL_153:
      IsAppContainerOrIdentifyLevelContext = v43;
      PopReleasePolicyLock();
      KeSetEvent(&PopTransitionLock, 0, 0);
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_442;
      v44 = (__int64 *)v84;
LABEL_155:
      Src = v44;
      NumberOfBytes = 8;
      goto LABEL_57;
    default:
      goto LABEL_60;
  }
LABEL_443:
  v5 = (unsigned __int64)Length_4;
LABEL_444:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( NumberOfBytes_4 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v15 )
    PopReleasePolicyLock();
  if ( v7 && v7 != (wchar_t *)v5 )
    ExFreePoolWithTag(v7, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
