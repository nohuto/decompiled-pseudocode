/*
 * XREFs of ProcLibGlobalInit @ 0x1C00241A4
 * Callers:
 *     DriverEntry @ 0x1C0024000 (DriverEntry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C000168C (HviIsAnyHypervisorPresent.c)
 *     InitDevExts @ 0x1C00016D0 (InitDevExts.c)
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     GetRegistryQwordValue @ 0x1C0013130 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C00131E8 (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001B204 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001B25C (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001B634 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001C124 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C001D18C (GetHvPpmCapabilities.c)
 *     CollectAcpiBiosInfo @ 0x1C00240C0 (CollectAcpiBiosInfo.c)
 *     InitDriver @ 0x1C0024A18 (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C002513C (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // ebx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  void *v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  const CHAR *v20; // r8
  const CHAR *v21; // r9
  bool v22; // zf
  unsigned int v23; // ebx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  int *v27; // rsi
  unsigned __int8 i; // bl
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int v32; // [rsp+38h] [rbp-19h] BYREF
  bool v33; // [rsp+3Ch] [rbp-15h] BYREF
  bool v34; // [rsp+3Dh] [rbp-14h] BYREF
  int v35; // [rsp+40h] [rbp-11h] BYREF
  int v36; // [rsp+44h] [rbp-Dh] BYREF
  int v37; // [rsp+48h] [rbp-9h] BYREF
  int v38; // [rsp+50h] [rbp-1h] BYREF
  __int64 v39; // [rsp+58h] [rbp+7h]
  __int64 v40; // [rsp+60h] [rbp+Fh]
  __int64 v41; // [rsp+68h] [rbp+17h]
  __int64 v42; // [rsp+70h] [rbp+1Fh]
  unsigned __int64 InputBuffer; // [rsp+78h] [rbp+27h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp+2Fh]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C000EEE8, 0xF0u);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( dword_1C000EEE8 != 44 )
    return (unsigned int)-1073741735;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000ECF8);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000ED00);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000F208);
  if ( inited < 0 )
    return (unsigned int)inited;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C000F21C = 0;
  qword_1C000F210 = WorkItem;
  qword_1C000ED10 = (__int64)&qword_1C000ED08;
  qword_1C000ED08 = (__int64)&qword_1C000ED08;
  qword_1C000ED20 = (__int64)&qword_1C000ED18;
  qword_1C000ED18 = (__int64)&qword_1C000ED18;
  qword_1C000ED30 = (__int64)&qword_1C000ED28;
  qword_1C000ED28 = (__int64)&qword_1C000ED28;
  qword_1C000ED40 = (__int64)&qword_1C000ED38;
  qword_1C000ED38 = (__int64)&qword_1C000ED38;
  qword_1C000ED50 = (__int64)&qword_1C000ED48;
  qword_1C000ED48 = (__int64)&qword_1C000ED48;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v37);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C000ECF0);
  GetRegistryQwordValue(v5, v4, &qword_1C000ECE8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v35);
  if ( v35 )
    byte_1C000F21E = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v36);
  qword_1C000F080 = (__int64)RegisterKernelIdleStates;
  v6 = 640;
  dword_1C000F104 = 0;
  qword_1C000F0C8 = (__int64)RegisterHiddenIdleStates;
  byte_1C000F100 = v36 == 0;
  qword_1C000F088 = (__int64)RegisterKernelPerfStates;
  qword_1C000F098 = (__int64)RegisterKernelPerfFeedback;
  qword_1C000F0A0 = (__int64)RegisterKernelLegacyPcc;
  qword_1C000F090 = (__int64)RegisterKernelCap;
  qword_1C000F0A8 = (__int64)RegisterKernelCpc;
  qword_1C000F0B0 = (__int64)RegisterKernelPepPerf;
  qword_1C000F0B8 = (__int64)GetNtProcessorNumber;
  qword_1C000F0C0 = (__int64)RegisterKernelPackage;
  qword_1C000F0D0 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C000F0E0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C000F0E8 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C000F0F0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C000F0F8 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      HIDWORD(InputBuffer) = _RBX;
      v44 = __PAIR64__(_RDX, _RCX);
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
      v44 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) == 0 )
    {
      qword_1C000F080 = (__int64)RegisterGuestIdleStates;
      v17 = RegisterNoop;
      qword_1C000F088 = (__int64)RegisterNoop;
      qword_1C000F098 = (__int64)RegisterNoop;
      qword_1C000F0A0 = (__int64)RegisterNoop;
      qword_1C000F090 = (__int64)RegisterNoop;
      qword_1C000F0A8 = (__int64)RegisterNoop;
      qword_1C000F0B0 = (__int64)RegisterNoop;
      goto LABEL_23;
    }
    GetHvPpmCapabilities(&v34, &v33, 0LL);
    if ( v33 )
    {
      dword_1C000F104 = 2;
      qword_1C000F088 = (__int64)RegisterHvPerfStatesCounters;
      qword_1C000F098 = (__int64)RegisterHvPerfFeedbackCounters;
      qword_1C000F0A0 = (__int64)RegisterHvLegacyPccCounters;
      qword_1C000F0A8 = (__int64)RegisterHvCpcCounters;
      qword_1C000F0C8 = (__int64)RegisterHvIdleStates;
      goto LABEL_21;
    }
    if ( v34 )
    {
      dword_1C000F104 = 1;
      qword_1C000F088 = (__int64)RegisterHvPerfStates;
      qword_1C000F0A0 = (__int64)RegisterHvLegacyPcc;
      qword_1C000F098 = (__int64)RegisterNoop;
      qword_1C000F0B0 = (__int64)RegisterNoop;
      qword_1C000F0D0 = (__int64)&PPM_ETW_SUMMARY_HV;
      EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
      qword_1C000F0E8 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
      qword_1C000F0F0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
      qword_1C000F090 = (__int64)RegisterHvCap;
      qword_1C000F0F8 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
      qword_1C000F0A8 = (__int64)RegisterHvCpc;
LABEL_21:
      qword_1C000F080 = (__int64)RegisterHvIdleStates;
      qword_1C000F0E0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      v6 = 512;
      qword_1C000F0B8 = (__int64)GetLpIndex;
      v17 = RegisterHvPackage;
LABEL_23:
      qword_1C000F0C0 = (__int64)v17;
    }
  }
  else
  {
    if ( (int)HalPrivateDispatchTable[123]((__int64)&v38) >= 0 )
    {
      if ( v38 != 1 )
        return (unsigned int)-1073741735;
      qword_1C000EFB8 = v39;
      qword_1C000EFC0 = v40;
      qword_1C000EFC8 = v41;
      qword_1C000EFD0 = v42;
    }
    dword_1C000F420 = dword_1C000ECF4 + HalPrivateDispatchTable[125](0xFFFFFFFFLL);
  }
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
          qword_1C000ECE8 = v23 | (unsigned __int64)qword_1C000ECE8;
          dword_1C000F168 = v23;
          dword_1C000EE00 = 1;
          dword_1C000EE04 = 232;
          if ( v37 )
            v25 = 0x1099100377LL;
          Globals[0] = v25 | 0x10000000400LL;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            v27 = dword_1C000F258;
            Globals[0] |= 0x2000000000uLL;
            for ( i = 0; i < 2u; ++i )
            {
              LOBYTE(v26) = i;
              PopulateEnergyEstimationModel(v26, v27);
              v27 += 54;
            }
          }
          InputBuffer = 0LL;
          inited = InitDriver(&dword_1C000EE00, &InputBuffer);
          if ( inited < 0 )
          {
            memset(&dword_1C000EE00, 0, 0xE8uLL);
            return (unsigned int)inited;
          }
          v29 = InputBuffer | Globals[0];
          Globals[0] |= InputBuffer;
          if ( dword_1C000F104 == 1 )
          {
            qword_1C000EE28 = 0LL;
            v30 = 0xFFFFDFFCF7FFFEFFuLL;
            qword_1C000EE40 = 0LL;
            qword_1C000EE48 = 0LL;
            qword_1C000EE50 = 0LL;
            qword_1C000EE58 = 0LL;
            qword_1C000EE60 = 0LL;
            qword_1C000EE70 = 0LL;
            qword_1C000EE78 = 0LL;
            qword_1C000EE80 = 0LL;
            qword_1C000EE88 = 0LL;
          }
          else
          {
            if ( dword_1C000F104 != 2 )
            {
LABEL_54:
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
              if ( qword_1C000ECE8 )
                Globals[0] = ~qword_1C000ECE8 & v29;
              if ( qword_1C000EE40 && (dword_1C000ECF0 & 0x70000000) != 0 )
                qword_1C000EE40 = 0LL;
              return (unsigned int)inited;
            }
            v30 = 0xFFFFFFFCFFFFFEFFuLL;
          }
          v29 &= v30;
          qword_1C000EEB0 = 0LL;
          Globals[0] = v29;
          qword_1C000EEA8 = 0LL;
          goto LABEL_54;
        }
      }
    }
  }
  return (unsigned int)inited;
}
