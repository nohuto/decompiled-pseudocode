/*
 * XREFs of ProcLibGlobalInit @ 0x1C00230C0
 * Callers:
 *     DriverEntry @ 0x1C0023000 (DriverEntry.c)
 * Callees:
 *     InitDevExts @ 0x1C0001F80 (InitDevExts.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     GetRegistryQwordValue @ 0x1C0016238 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C00162F0 (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001A2C4 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001A31C (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001A6F0 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001B1E0 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C001BDC4 (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C00235B8 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C00237F4 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationModel @ 0x1C0024088 (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // ebx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  bool v12; // zf
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int *v33; // rsi
  unsigned __int8 i; // bl
  unsigned __int64 v35; // rax
  int v36; // [rsp+30h] [rbp-30h] BYREF
  bool v37; // [rsp+34h] [rbp-2Ch] BYREF
  bool v38; // [rsp+35h] [rbp-2Bh] BYREF
  int v39; // [rsp+38h] [rbp-28h] BYREF
  int v40; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int64 InputBuffer; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-18h]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C000DEE0, 0xB8u);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( dword_1C000DEE0 != 42 )
    return (unsigned int)-1073741735;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000DD08);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000DD10);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000E1C0);
  if ( inited < 0 )
    return (unsigned int)inited;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C000E1D4 = 0;
  qword_1C000E1C8 = WorkItem;
  qword_1C000DD20 = (__int64)&qword_1C000DD18;
  qword_1C000DD18 = (__int64)&qword_1C000DD18;
  qword_1C000DD30 = (__int64)&qword_1C000DD28;
  qword_1C000DD28 = (__int64)&qword_1C000DD28;
  qword_1C000DD40 = (__int64)&qword_1C000DD38;
  qword_1C000DD38 = (__int64)&qword_1C000DD38;
  qword_1C000DD50 = (__int64)&qword_1C000DD48;
  qword_1C000DD48 = (__int64)&qword_1C000DD48;
  qword_1C000DD60 = (__int64)&qword_1C000DD58;
  qword_1C000DD58 = (__int64)&qword_1C000DD58;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C000DD00);
  GetRegistryQwordValue(v5, v4, &qword_1C000DCF8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v39);
  if ( v39 )
    byte_1C000E1D6 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v40);
  qword_1C000E040 = (__int64)RegisterKernelIdleStates;
  dword_1C000E0BC = 0;
  qword_1C000E048 = (__int64)RegisterKernelPerfStates;
  byte_1C000E0B8 = v40 == 0;
  qword_1C000E058 = (__int64)RegisterKernelPerfFeedback;
  v6 = 640;
  qword_1C000E060 = (__int64)RegisterKernelLegacyPcc;
  qword_1C000E050 = (__int64)RegisterKernelCap;
  qword_1C000E068 = (__int64)RegisterKernelCpc;
  qword_1C000E070 = (__int64)RegisterKernelPepPerf;
  qword_1C000E078 = (__int64)GetNtProcessorNumber;
  qword_1C000E080 = (__int64)RegisterKernelPackage;
  qword_1C000E088 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C000E098 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C000E0A0 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C000E0A8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C000E0B0 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  _RAX = 1LL;
  __asm { cpuid }
  InputBuffer = __PAIR64__(_RBX, _RAX);
  HIDWORD(v42) = _RDX;
  if ( (int)_RCX < 0 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    InputBuffer = __PAIR64__(_RBX, _RAX);
    HIDWORD(v42) = _RDX;
    if ( (_RCX & 0x80000000) != 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      HIDWORD(InputBuffer) = _RBX;
      v42 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      LODWORD(_RAX) = 0;
    }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      InputBuffer = __PAIR64__(_RBX, _RAX);
      v42 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) == 0 )
    {
      qword_1C000E040 = (__int64)RegisterGuestIdleStates;
      qword_1C000E048 = (__int64)RegisterNoop;
      qword_1C000E058 = (__int64)RegisterNoop;
      qword_1C000E060 = (__int64)RegisterNoop;
      qword_1C000E050 = (__int64)RegisterNoop;
      qword_1C000E068 = (__int64)RegisterNoop;
      qword_1C000E070 = (__int64)RegisterNoop;
      qword_1C000E080 = (__int64)RegisterNoop;
      goto LABEL_9;
    }
    GetHvPpmCapabilities(&v37, &v38, 0LL);
    if ( v38 )
    {
      dword_1C000E0BC = 2;
      qword_1C000E048 = (__int64)RegisterHvPerfStatesCounters;
      qword_1C000E058 = (__int64)RegisterHvPerfFeedbackCounters;
      qword_1C000E060 = (__int64)RegisterHvLegacyPccCounters;
      qword_1C000E068 = (__int64)RegisterHvCpcCounters;
    }
    else
    {
      if ( !v37 )
        goto LABEL_9;
      dword_1C000E0BC = 1;
      qword_1C000E048 = (__int64)RegisterHvPerfStates;
      qword_1C000E060 = (__int64)RegisterHvLegacyPcc;
      qword_1C000E058 = (__int64)RegisterNoop;
      qword_1C000E070 = (__int64)RegisterNoop;
      qword_1C000E078 = (__int64)GetLpIndex;
      qword_1C000E080 = (__int64)RegisterHvPackage;
      qword_1C000E088 = (__int64)&PPM_ETW_SUMMARY_HV;
      EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
      qword_1C000E0A0 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
      qword_1C000E0A8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
      qword_1C000E050 = (__int64)RegisterHvCap;
      qword_1C000E0B0 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
      qword_1C000E068 = (__int64)RegisterHvCpc;
    }
    v6 = 512;
    qword_1C000E040 = (__int64)RegisterHvIdleStates;
    qword_1C000E098 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
  }
LABEL_9:
  inited = InitDevExts(v6);
  if ( inited >= 0 )
  {
    inited = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)ProcLibTraceControlCallback, 0LL, &ProcLibEtwHandle);
    if ( inited >= 0 )
    {
      ProcLibEtwRegistered = 1;
      inited = 0;
    }
    if ( inited >= 0 )
    {
      v42 = 0LL;
      InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
      inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
      if ( inited >= 0 )
      {
        inited = CollectAcpiBiosInfo();
        if ( inited >= 0 )
        {
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v36);
          v12 = v36 == 2;
          v13 = 0;
          v36 = 1;
          if ( v12 )
            v13 = 1879048192;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v36);
          if ( v36 == 2 )
            v13 |= 2u;
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v36);
          if ( v36 == 2 )
            v13 |= 0x3300000u;
          v36 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v36);
          if ( v36 == 2 )
            v13 |= 0x80000000;
          v14 = v13;
          qword_1C000DCF8 = v13 | (unsigned __int64)qword_1C000DCF8;
          Globals[0] = 0x10099100777LL;
          dword_1C000E120 = v13;
          dword_1C000DE10 = 1;
          dword_1C000DE14 = 208;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            v33 = dword_1C000E210;
            Globals[0] |= 0x2000000000uLL;
            for ( i = 0; i < 2u; ++i )
            {
              LOBYTE(v15) = i;
              PopulateEnergyEstimationModel(v15, v33);
              v33 += 54;
            }
          }
          InputBuffer = 0LL;
          inited = InitDriver(&dword_1C000DE10, &InputBuffer);
          if ( inited < 0 )
          {
            memset(&dword_1C000DE10, 0, 0xD0uLL);
            return (unsigned int)inited;
          }
          v16 = InputBuffer | Globals[0];
          Globals[0] |= InputBuffer;
          if ( dword_1C000E0BC == 1 )
          {
            qword_1C000DE38 = 0LL;
            v35 = 0xFFFFFFFCF7FFFEFFuLL;
            qword_1C000DE50 = 0LL;
            qword_1C000DE58 = 0LL;
            qword_1C000DE60 = 0LL;
            qword_1C000DE68 = 0LL;
            qword_1C000DE70 = 0LL;
            qword_1C000DE78 = 0LL;
            qword_1C000DE80 = 0LL;
          }
          else
          {
            if ( dword_1C000E0BC != 2 )
            {
LABEL_27:
              if ( (v16 & v14 & 0x7F077) != 0 )
              {
                ProcLibTraceIdleStatesErrata(0);
                v16 = Globals[0];
              }
              if ( (v16 & v14 & 0x70000000) != 0 )
              {
                ProcLibTracePerfStatesErrata(0);
                v16 = Globals[0];
              }
              if ( (v16 & v14 & 0x3300000) != 0 )
              {
                ProcLibTraceThrottleStatesErrata(0);
                v16 = Globals[0];
              }
              if ( ((unsigned int)v16 & (unsigned int)v14 & 0x80000000) != 0 )
              {
                ProcLibTracePccErrata(0);
                v16 = Globals[0];
              }
              if ( qword_1C000DCF8 )
                Globals[0] = ~qword_1C000DCF8 & v16;
              if ( qword_1C000DE50 && (dword_1C000DD00 & 0x70000000) != 0 )
                qword_1C000DE50 = 0LL;
              return (unsigned int)inited;
            }
            v35 = 0xFFFFFFFCFFFFFEFFuLL;
          }
          v16 &= v35;
          qword_1C000DEA8 = 0LL;
          Globals[0] = v16;
          qword_1C000DEA0 = 0LL;
          goto LABEL_27;
        }
      }
    }
  }
  return (unsigned int)inited;
}
