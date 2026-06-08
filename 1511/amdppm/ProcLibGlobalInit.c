/*
 * XREFs of ProcLibGlobalInit @ 0x1C001F2FC
 * Callers:
 *     DriverEntry @ 0x1C001F130 (DriverEntry.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00058F0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0012F7C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0012F94 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0012FAC (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0012FC4 (ProcLibTracePccErrata.c)
 *     GetHvPpmCapabilities @ 0x1C001A0F0 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValue @ 0x1C001BE10 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001BEA0 (GetRegistryQwordValue.c)
 *     InitDriver @ 0x1C001F000 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C001F1F0 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FABC (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // ebx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r9
  unsigned int v9; // edi
  PVOID PoolWithTag; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  const CHAR *v23; // r8
  const CHAR *v24; // r9
  bool v25; // zf
  unsigned int v26; // ebx
  __int64 v27; // rdi
  __int64 v28; // rcx
  char *v29; // rsi
  unsigned __int8 i; // bl
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  int v34; // [rsp+30h] [rbp-30h] BYREF
  bool v35; // [rsp+34h] [rbp-2Ch] BYREF
  bool v36; // [rsp+35h] [rbp-2Bh] BYREF
  int v37; // [rsp+38h] [rbp-28h] BYREF
  int v38; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int64 InputBuffer; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-18h]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0009580, 0xB8u);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( dword_1C0009580 != 42 )
    return (unsigned int)-1073741735;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C00093A8);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C00093B0);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
             WdfDriverGlobals,
             0LL,
             &qword_1C0009860);
  if ( inited < 0 )
    return (unsigned int)inited;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C0009874 = 0;
  qword_1C0009868 = WorkItem;
  qword_1C00093C0 = (__int64)&qword_1C00093B8;
  qword_1C00093B8 = (__int64)&qword_1C00093B8;
  qword_1C00093D0 = (__int64)&qword_1C00093C8;
  qword_1C00093C8 = (__int64)&qword_1C00093C8;
  qword_1C00093E0 = (__int64)&qword_1C00093D8;
  qword_1C00093D8 = (__int64)&qword_1C00093D8;
  qword_1C00093F0 = (__int64)&qword_1C00093E8;
  qword_1C00093E8 = (__int64)&qword_1C00093E8;
  qword_1C0009400 = (__int64)&qword_1C00093F8;
  qword_1C00093F8 = (__int64)&qword_1C00093F8;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C00093A0,
    v4);
  GetRegistryQwordValue(v6, v5, &qword_1C0009398);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v37,
    v7);
  if ( v37 )
    byte_1C0009876 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v38,
    v8);
  qword_1C00096E0 = (__int64)RegisterKernelIdleStates;
  v9 = 640;
  dword_1C000975C = 0;
  qword_1C00096E8 = (__int64)RegisterKernelPerfStates;
  byte_1C0009758 = v38 == 0;
  qword_1C00096F8 = (__int64)RegisterKernelPerfFeedback;
  qword_1C0009700 = (__int64)RegisterKernelLegacyPcc;
  qword_1C00096F0 = (__int64)RegisterKernelCap;
  qword_1C0009708 = (__int64)RegisterKernelCpc;
  qword_1C0009710 = (__int64)RegisterKernelPepPerf;
  qword_1C0009718 = (__int64)GetNtProcessorNumber;
  qword_1C0009720 = (__int64)RegisterKernelPackage;
  qword_1C0009728 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C0009738 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C0009740 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C0009748 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C0009750 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  _RAX = 1LL;
  __asm { cpuid }
  InputBuffer = __PAIR64__(_RBX, _RAX);
  HIDWORD(v40) = _RDX;
  if ( (int)_RCX < 0 )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      InputBuffer = __PAIR64__(_RBX, _RAX);
      v40 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v35, &v36);
      if ( v36 )
      {
        dword_1C000975C = 2;
        qword_1C00096E8 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C00096F8 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C0009700 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C0009708 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v35 )
          goto LABEL_20;
        dword_1C000975C = 1;
        qword_1C00096E8 = (__int64)RegisterHvPerfStates;
        qword_1C0009700 = (__int64)RegisterHvLegacyPcc;
        qword_1C00096F8 = (__int64)RegisterNoop;
        qword_1C0009710 = (__int64)RegisterNoop;
        qword_1C0009718 = (__int64)GetLpIndex;
        qword_1C0009720 = (__int64)RegisterHvPackage;
        qword_1C0009728 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C0009740 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C0009748 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C00096F0 = (__int64)RegisterHvCap;
        qword_1C0009750 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C0009708 = (__int64)RegisterHvCpc;
      }
      v9 = 512;
      qword_1C00096E0 = (__int64)RegisterHvIdleStates;
      qword_1C0009738 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
    }
    else
    {
      qword_1C00096E0 = (__int64)RegisterGuestIdleStates;
      qword_1C00096E8 = (__int64)RegisterNoop;
      qword_1C00096F8 = (__int64)RegisterNoop;
      qword_1C0009700 = (__int64)RegisterNoop;
      qword_1C00096F0 = (__int64)RegisterNoop;
      qword_1C0009708 = (__int64)RegisterNoop;
      qword_1C0009710 = (__int64)RegisterNoop;
      qword_1C0009720 = (__int64)RegisterNoop;
    }
  }
LABEL_20:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v9, 0x72637250u);
  DevExts = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 8LL * v9);
  inited = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)ProcLibTraceControlCallback, 0LL, &ProcLibEtwHandle);
  if ( inited >= 0 )
  {
    ProcLibEtwRegistered = 1;
    inited = 0;
  }
  if ( inited >= 0 )
  {
    v40 = 0LL;
    InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
    inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
    if ( inited >= 0 )
    {
      inited = CollectAcpiBiosInfo(v22, v21, v23, v24);
      if ( inited >= 0 )
      {
        v34 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v34);
        v25 = v34 == 2;
        v26 = 0;
        v34 = 1;
        if ( v25 )
          v26 = 1879048192;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v34);
        if ( v34 == 2 )
          v26 |= 2u;
        v34 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v34);
        if ( v34 == 2 )
          v26 |= 0x3300000u;
        v34 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v34);
        if ( v34 == 2 )
          v26 |= 0x80000000;
        v27 = v26;
        qword_1C0009398 = v26 | (unsigned __int64)qword_1C0009398;
        Globals[0] = 0x10099100777LL;
        dword_1C00097C0 = v26;
        dword_1C00094B0 = 1;
        dword_1C00094B4 = 208;
        if ( (unsigned __int8)PoEnergyEstimationEnabled() )
        {
          v29 = (char *)&unk_1C00098B0;
          Globals[0] |= 0x2000000000uLL;
          for ( i = 0; i < 2u; ++i )
          {
            LOBYTE(v28) = i;
            PopulateEnergyEstimationModel(v28, v29);
            v29 += 216;
          }
        }
        InputBuffer = 0LL;
        inited = InitDriver((__int64)&dword_1C00094B0, &InputBuffer);
        if ( inited < 0 )
        {
          memset(&dword_1C00094B0, 0, 0xD0uLL);
          return (unsigned int)inited;
        }
        v31 = InputBuffer | Globals[0];
        Globals[0] |= InputBuffer;
        if ( dword_1C000975C == 1 )
        {
          qword_1C00094D8 = 0LL;
          v32 = 0xFFFFFFFCF7FFFEFFuLL;
          qword_1C00094F0 = 0LL;
          qword_1C00094F8 = 0LL;
          qword_1C0009500 = 0LL;
          qword_1C0009508 = 0LL;
          qword_1C0009510 = 0LL;
          qword_1C0009518 = 0LL;
          qword_1C0009520 = 0LL;
        }
        else
        {
          if ( dword_1C000975C != 2 )
          {
LABEL_45:
            if ( (v31 & v27 & 0x7F077) != 0 )
            {
              ProcLibTraceIdleStatesErrata(0);
              v31 = Globals[0];
            }
            if ( (v31 & v27 & 0x70000000) != 0 )
            {
              ProcLibTracePerfStatesErrata(0);
              v31 = Globals[0];
            }
            if ( (v31 & v27 & 0x3300000) != 0 )
            {
              ProcLibTraceThrottleStatesErrata(0);
              v31 = Globals[0];
            }
            if ( ((unsigned int)v31 & (unsigned int)v27 & 0x80000000) != 0 )
            {
              ProcLibTracePccErrata(0);
              v31 = Globals[0];
            }
            if ( qword_1C0009398 )
              Globals[0] = ~qword_1C0009398 & v31;
            if ( qword_1C00094F0 && (dword_1C00093A0 & 0x70000000) != 0 )
              qword_1C00094F0 = 0LL;
            return (unsigned int)inited;
          }
          v32 = 0xFFFFFFFCFFFFFEFFuLL;
        }
        v31 &= v32;
        qword_1C0009548 = 0LL;
        Globals[0] = v31;
        qword_1C0009540 = 0LL;
        goto LABEL_45;
      }
    }
  }
  return (unsigned int)inited;
}
