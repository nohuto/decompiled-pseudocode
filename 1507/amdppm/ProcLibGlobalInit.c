/*
 * XREFs of ProcLibGlobalInit @ 0x1C001F2F0
 * Callers:
 *     DriverEntry @ 0x1C001F124 (DriverEntry.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C0005DB0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0012F68 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0012F80 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0012F98 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0012FB0 (ProcLibTracePccErrata.c)
 *     GetHvPpmCapabilities @ 0x1C001A0D0 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValue @ 0x1C001BE30 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001BEBC (GetRegistryQwordValue.c)
 *     InitDriver @ 0x1C001F000 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C001F1E4 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationParameters @ 0x1C001FAAC (PopulateEnergyEstimationParameters.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // ebx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int RegistryDwordValue; // eax
  int v7; // ecx
  unsigned int v8; // edi
  PVOID PoolWithTag; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  const CHAR *v22; // r8
  const CHAR *v23; // r9
  bool v24; // zf
  unsigned int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v30; // [rsp+30h] [rbp-30h] BYREF
  bool v31; // [rsp+34h] [rbp-2Ch] BYREF
  bool v32; // [rsp+35h] [rbp-2Bh] BYREF
  int v33; // [rsp+38h] [rbp-28h] BYREF
  int v34; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int64 InputBuffer; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-18h]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0009570, 0xB8u);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( dword_1C0009570 != 42 )
    return (unsigned int)-1073741735;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C0009398);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C00093A0);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
             WdfDriverGlobals,
             0LL,
             &qword_1C0009850);
  if ( inited < 0 )
    return (unsigned int)inited;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C0009864 = 0;
  qword_1C0009858 = WorkItem;
  qword_1C00093B0 = (__int64)&qword_1C00093A8;
  qword_1C00093A8 = (__int64)&qword_1C00093A8;
  qword_1C00093C0 = (__int64)&qword_1C00093B8;
  qword_1C00093B8 = (__int64)&qword_1C00093B8;
  qword_1C00093D0 = (__int64)&qword_1C00093C8;
  qword_1C00093C8 = (__int64)&qword_1C00093C8;
  qword_1C00093E0 = (__int64)&qword_1C00093D8;
  qword_1C00093D8 = (__int64)&qword_1C00093D8;
  qword_1C00093F0 = (__int64)&qword_1C00093E8;
  qword_1C00093E8 = (__int64)&qword_1C00093E8;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    (__int64)&dword_1C0009390);
  GetRegistryQwordValue(v5, v4, &qword_1C0009388);
  if ( (int)GetRegistryDwordValue(
              (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
              (__int64)L"DisableAsserts",
              (__int64)&v34) >= 0
    && v34 )
  {
    byte_1C0009866 = 1;
  }
  RegistryDwordValue = GetRegistryDwordValue(
                         (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
                         (__int64)L"PerfEnablePackageIdle",
                         (__int64)&v33);
  v7 = v33;
  dword_1C000974C = 0;
  qword_1C00096D0 = (__int64)RegisterKernelIdleStates;
  if ( RegistryDwordValue < 0 )
    v7 = 0;
  v33 = v7;
  v8 = 640;
  qword_1C00096D8 = (__int64)RegisterKernelPerfStates;
  byte_1C0009748 = v7 == 0;
  qword_1C00096E8 = (__int64)RegisterKernelPerfFeedback;
  qword_1C00096F0 = (__int64)RegisterKernelLegacyPcc;
  qword_1C00096E0 = (__int64)RegisterKernelCap;
  qword_1C00096F8 = (__int64)RegisterKernelCpc;
  qword_1C0009700 = (__int64)RegisterKernelPepPerf;
  qword_1C0009708 = (__int64)GetNtProcessorNumber;
  qword_1C0009710 = (__int64)RegisterKernelPackage;
  qword_1C0009718 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C0009728 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C0009730 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C0009738 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C0009740 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  _RAX = 1LL;
  __asm { cpuid }
  InputBuffer = __PAIR64__(_RBX, _RAX);
  HIDWORD(v36) = _RDX;
  if ( (int)_RCX < 0 )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      InputBuffer = __PAIR64__(_RBX, _RAX);
      v36 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v31, &v32);
      if ( v32 )
      {
        dword_1C000974C = 2;
        qword_1C00096D8 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C00096E8 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C00096F0 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C00096F8 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v31 )
          goto LABEL_23;
        dword_1C000974C = 1;
        qword_1C00096D8 = (__int64)RegisterHvPerfStates;
        qword_1C00096F0 = (__int64)RegisterHvLegacyPcc;
        qword_1C00096E8 = (__int64)RegisterNoop;
        qword_1C0009700 = (__int64)RegisterNoop;
        qword_1C0009708 = (__int64)GetLpIndex;
        qword_1C0009710 = (__int64)RegisterHvPackage;
        qword_1C0009718 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C0009730 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C0009738 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C00096E0 = (__int64)RegisterHvCap;
        qword_1C0009740 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C00096F8 = (__int64)RegisterHvCpc;
      }
      v8 = 512;
      qword_1C00096D0 = (__int64)RegisterHvIdleStates;
      qword_1C0009728 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
    }
    else
    {
      qword_1C00096D0 = (__int64)RegisterGuestIdleStates;
      qword_1C00096D8 = (__int64)RegisterNoop;
      qword_1C00096E8 = (__int64)RegisterNoop;
      qword_1C00096F0 = (__int64)RegisterNoop;
      qword_1C00096E0 = (__int64)RegisterNoop;
      qword_1C00096F8 = (__int64)RegisterNoop;
      qword_1C0009700 = (__int64)RegisterNoop;
      qword_1C0009710 = (__int64)RegisterNoop;
    }
  }
LABEL_23:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v8, 0x72637250u);
  DevExts = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 8LL * v8);
  inited = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)ProcLibTraceControlCallback, 0LL, &ProcLibEtwHandle);
  if ( inited >= 0 )
  {
    ProcLibEtwRegistered = 1;
    inited = 0;
  }
  if ( inited >= 0 )
  {
    v36 = 0LL;
    InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
    inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
    if ( inited >= 0 )
    {
      inited = CollectAcpiBiosInfo(v21, v20, v22, v23);
      if ( inited >= 0 )
      {
        v30 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v30);
        v24 = v30 == 2;
        v25 = 0;
        v30 = 1;
        if ( v24 )
          v25 = 1879048192;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v30);
        if ( v30 == 2 )
          v25 |= 2u;
        v30 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v30);
        if ( v30 == 2 )
          v25 |= 0x3300000u;
        v30 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v30);
        if ( v30 == 2 )
          v25 |= 0x80000000;
        v26 = v25;
        qword_1C0009388 = v25 | (unsigned __int64)qword_1C0009388;
        Globals = 0x10099100777LL;
        dword_1C00097B0 = v25;
        dword_1C00094A0 = 1;
        dword_1C00094A4 = 208;
        if ( (unsigned __int8)PoEnergyEstimationEnabled() )
        {
          Globals |= 0x2000000000uLL;
          PopulateEnergyEstimationParameters();
        }
        InputBuffer = 0LL;
        inited = InitDriver((__int64)&dword_1C00094A0, &InputBuffer);
        if ( inited < 0 )
        {
          memset(&dword_1C00094A0, 0, 0xD0uLL);
          return (unsigned int)inited;
        }
        v27 = InputBuffer | Globals;
        Globals |= InputBuffer;
        if ( dword_1C000974C == 1 )
        {
          qword_1C00094C8 = 0LL;
          v28 = 0xFFFFFFDCF7FFFEFFuLL;
          qword_1C00094E0 = 0LL;
          qword_1C00094E8 = 0LL;
          qword_1C00094F0 = 0LL;
          qword_1C00094F8 = 0LL;
          qword_1C0009500 = 0LL;
          qword_1C0009508 = 0LL;
          qword_1C0009510 = 0LL;
        }
        else
        {
          if ( dword_1C000974C != 2 )
          {
LABEL_47:
            if ( (v27 & v26 & 0x7F077) != 0 )
            {
              ProcLibTraceIdleStatesErrata(0);
              v27 = Globals;
            }
            if ( (v27 & v26 & 0x70000000) != 0 )
            {
              ProcLibTracePerfStatesErrata(0);
              v27 = Globals;
            }
            if ( (v27 & v26 & 0x3300000) != 0 )
            {
              ProcLibTraceThrottleStatesErrata(0);
              v27 = Globals;
            }
            if ( ((unsigned int)v27 & (unsigned int)v26 & 0x80000000) != 0 )
            {
              ProcLibTracePccErrata(0);
              v27 = Globals;
            }
            if ( qword_1C0009388 )
              Globals = ~qword_1C0009388 & v27;
            if ( qword_1C00094E0 && (dword_1C0009390 & 0x70000000) != 0 )
              qword_1C00094E0 = 0LL;
            return (unsigned int)inited;
          }
          v27 &= 0xFFFFFFFCFFFFFEFFuLL;
          v28 = 0xFFFFFFDFFFFFFFFFuLL;
        }
        v27 &= v28;
        qword_1C0009538 = 0LL;
        Globals = v27;
        qword_1C0009530 = 0LL;
        goto LABEL_47;
      }
    }
  }
  return (unsigned int)inited;
}
