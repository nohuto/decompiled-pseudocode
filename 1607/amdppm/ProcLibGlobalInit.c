/*
 * XREFs of ProcLibGlobalInit @ 0x1C001F33C
 * Callers:
 *     DriverEntry @ 0x1C001F170 (DriverEntry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0006278 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00062D0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001325C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0013274 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001328C (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C00132A4 (ProcLibTracePccErrata.c)
 *     GetHvPpmCapabilities @ 0x1C001CD80 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValue @ 0x1C001E14C (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001E1DC (GetRegistryQwordValue.c)
 *     InitDriver @ 0x1C001F000 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C001F230 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FBB4 (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // ebx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // edi
  void *v16; // rax
  PVOID PoolWithTag; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  const CHAR *v20; // r8
  const CHAR *v21; // r9
  bool v22; // zf
  unsigned int v23; // ebx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // rsi
  unsigned __int8 i; // bl
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int v32; // [rsp+30h] [rbp-29h] BYREF
  bool v33; // [rsp+34h] [rbp-25h] BYREF
  bool v34; // [rsp+35h] [rbp-24h] BYREF
  int v35; // [rsp+38h] [rbp-21h] BYREF
  int v36; // [rsp+3Ch] [rbp-1Dh] BYREF
  int v37; // [rsp+40h] [rbp-19h] BYREF
  int v38; // [rsp+48h] [rbp-11h] BYREF
  __int64 v39; // [rsp+50h] [rbp-9h]
  __int64 v40; // [rsp+58h] [rbp-1h]
  __int64 v41; // [rsp+60h] [rbp+7h]
  __int64 v42; // [rsp+68h] [rbp+Fh]
  unsigned __int64 InputBuffer; // [rsp+70h] [rbp+17h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp+1Fh]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0009598, 0xF0u);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( dword_1C0009598 != 44 )
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
             &qword_1C00098B8);
  if ( inited < 0 )
    return (unsigned int)inited;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C00098CC = 0;
  qword_1C00098C0 = WorkItem;
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
    (__int64)L"AllowPepPerfStates",
    &v37,
    v4);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C00093A0,
    v5);
  GetRegistryQwordValue(v7, v6, &qword_1C0009398);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v35,
    v8);
  if ( v35 )
    byte_1C00098CE = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v36,
    v9);
  qword_1C0009730 = (__int64)RegisterKernelIdleStates;
  v10 = 640;
  dword_1C00097B4 = 0;
  qword_1C0009778 = (__int64)RegisterHiddenIdleStates;
  byte_1C00097B0 = v36 == 0;
  qword_1C0009738 = (__int64)RegisterKernelPerfStates;
  qword_1C0009748 = (__int64)RegisterKernelPerfFeedback;
  qword_1C0009750 = (__int64)RegisterKernelLegacyPcc;
  qword_1C0009740 = (__int64)RegisterKernelCap;
  qword_1C0009758 = (__int64)RegisterKernelCpc;
  qword_1C0009760 = (__int64)RegisterKernelPepPerf;
  qword_1C0009768 = (__int64)GetNtProcessorNumber;
  qword_1C0009770 = (__int64)RegisterKernelPackage;
  qword_1C0009780 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C0009790 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C0009798 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C00097A0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C00097A8 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      InputBuffer = __PAIR64__(_RBX, _RAX);
      v44 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v34, &v33);
      if ( v33 )
      {
        dword_1C00097B4 = 2;
        qword_1C0009738 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C0009748 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C0009750 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C0009758 = (__int64)RegisterHvCpcCounters;
        qword_1C0009778 = (__int64)RegisterHvIdleStates;
      }
      else
      {
        if ( !v34 )
          goto LABEL_25;
        dword_1C00097B4 = 1;
        qword_1C0009738 = (__int64)RegisterHvPerfStates;
        qword_1C0009750 = (__int64)RegisterHvLegacyPcc;
        qword_1C0009748 = (__int64)RegisterNoop;
        qword_1C0009760 = (__int64)RegisterNoop;
        qword_1C0009780 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C0009798 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C00097A0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C0009740 = (__int64)RegisterHvCap;
        qword_1C00097A8 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C0009758 = (__int64)RegisterHvCpc;
      }
      qword_1C0009730 = (__int64)RegisterHvIdleStates;
      qword_1C0009790 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      v10 = 512;
      qword_1C0009768 = (__int64)GetLpIndex;
      v16 = RegisterHvPackage;
    }
    else
    {
      qword_1C0009730 = (__int64)RegisterGuestIdleStates;
      v16 = RegisterNoop;
      qword_1C0009738 = (__int64)RegisterNoop;
      qword_1C0009748 = (__int64)RegisterNoop;
      qword_1C0009750 = (__int64)RegisterNoop;
      qword_1C0009740 = (__int64)RegisterNoop;
      qword_1C0009758 = (__int64)RegisterNoop;
      qword_1C0009760 = (__int64)RegisterNoop;
    }
    qword_1C0009770 = (__int64)v16;
  }
  else
  {
    if ( (int)HalPrivateDispatchTable[123]((__int64)&v38) >= 0 )
    {
      if ( v38 != 1 )
        return (unsigned int)-1073741735;
      qword_1C0009668 = v39;
      qword_1C0009670 = v40;
      qword_1C0009678 = v41;
      qword_1C0009680 = v42;
    }
    dword_1C0009AD0 = dword_1C00093A4 + HalPrivateDispatchTable[125](0xFFFFFFFFLL);
  }
LABEL_25:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v10, 0x72637250u);
  DevExts = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 8LL * v10);
  inited = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)ProcLibTraceControlCallback, 0LL, &ProcLibEtwHandle);
  if ( inited >= 0 )
  {
    ProcLibEtwRegistered = 1;
    inited = 0;
  }
  if ( inited >= 0 )
  {
    v44 = 0LL;
    InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
    inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
    if ( inited >= 0 )
    {
      inited = CollectAcpiBiosInfo(v19, v18, v20, v21);
      if ( inited >= 0 )
      {
        v32 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v32);
        v22 = v32 == 2;
        v23 = 0;
        v32 = 1;
        if ( v22 )
          v23 = 1879048192;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v32);
        if ( v32 == 2 )
          v23 |= 2u;
        v32 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v32);
        if ( v32 == 2 )
          v23 |= 0x3300000u;
        v32 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v32);
        if ( v32 == 2 )
          v23 |= 0x80000000;
        v24 = v23;
        v25 = 2567963511LL;
        qword_1C0009398 = v23 | (unsigned __int64)qword_1C0009398;
        dword_1C0009818 = v23;
        dword_1C00094B0 = 1;
        dword_1C00094B4 = 232;
        if ( v37 )
          v25 = 0x1099100377LL;
        Globals[0] = v25 | 0x10000000400LL;
        if ( (unsigned __int8)PoEnergyEstimationEnabled() )
        {
          v27 = (char *)&unk_1C0009908;
          Globals[0] |= 0x2000000000uLL;
          for ( i = 0; i < 2u; ++i )
          {
            LOBYTE(v26) = i;
            PopulateEnergyEstimationModel(v26, v27);
            v27 += 216;
          }
        }
        InputBuffer = 0LL;
        inited = InitDriver((__int64)&dword_1C00094B0, &InputBuffer);
        if ( inited < 0 )
        {
          memset(&dword_1C00094B0, 0, 0xE8uLL);
          return (unsigned int)inited;
        }
        v29 = InputBuffer | Globals[0];
        Globals[0] |= InputBuffer;
        if ( dword_1C00097B4 == 1 )
        {
          qword_1C00094D8 = 0LL;
          v30 = 0xFFFFDFFCF7FFFEFFuLL;
          qword_1C00094F0 = 0LL;
          qword_1C00094F8 = 0LL;
          qword_1C0009500 = 0LL;
          qword_1C0009508 = 0LL;
          qword_1C0009510 = 0LL;
          qword_1C0009520 = 0LL;
          qword_1C0009528 = 0LL;
          qword_1C0009530 = 0LL;
          qword_1C0009538 = 0LL;
        }
        else
        {
          if ( dword_1C00097B4 != 2 )
          {
LABEL_52:
            if ( (v29 & v24 & 0x7F077) != 0 )
            {
              ProcLibTraceIdleStatesErrata(0);
              v29 = Globals[0];
            }
            if ( (v29 & v24 & 0x70000000) != 0 )
            {
              ProcLibTracePerfStatesErrata(0);
              v29 = Globals[0];
            }
            if ( (v29 & v24 & 0x3300000) != 0 )
            {
              ProcLibTraceThrottleStatesErrata(0);
              v29 = Globals[0];
            }
            if ( ((unsigned int)v29 & (unsigned int)v24 & 0x80000000) != 0 )
            {
              ProcLibTracePccErrata(0);
              v29 = Globals[0];
            }
            if ( qword_1C0009398 )
              Globals[0] = ~qword_1C0009398 & v29;
            if ( qword_1C00094F0 && (dword_1C00093A0 & 0x70000000) != 0 )
              qword_1C00094F0 = 0LL;
            return (unsigned int)inited;
          }
          v30 = 0xFFFFFFFCFFFFFEFFuLL;
        }
        v29 &= v30;
        qword_1C0009560 = 0LL;
        Globals[0] = v29;
        qword_1C0009558 = 0LL;
        goto LABEL_52;
      }
    }
  }
  return (unsigned int)inited;
}
