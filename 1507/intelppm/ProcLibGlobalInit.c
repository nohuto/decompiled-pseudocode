/*
 * XREFs of ProcLibGlobalInit @ 0x1C00220C0
 * Callers:
 *     DriverEntry @ 0x1C0022000 (DriverEntry.c)
 * Callees:
 *     InitDevExts @ 0x1C0001CF0 (InitDevExts.c)
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     GetRegistryDwordValue @ 0x1C0016238 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001652C (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0019F40 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0019F98 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001A36C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001AE5C (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C001BCC0 (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C00225C4 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C0022800 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0022FC4 (PopulateEnergyEstimationParameters.c)
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
  bool v14; // zf
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v34; // rax
  int v35; // [rsp+30h] [rbp-30h] BYREF
  bool v36; // [rsp+34h] [rbp-2Ch] BYREF
  bool v37; // [rsp+35h] [rbp-2Bh] BYREF
  int v38; // [rsp+38h] [rbp-28h] BYREF
  int v39; // [rsp+3Ch] [rbp-24h] BYREF
  unsigned __int64 InputBuffer; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-18h]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C000DBA0, 0xB8u);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( dword_1C000DBA0 != 42 )
    return (unsigned int)-1073741735;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000D9C8);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000D9D0);
  if ( inited < 0 )
    return (unsigned int)inited;
  inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
             WdfDriverGlobals,
             0LL,
             &qword_1C000DE80);
  if ( inited < 0 )
    return (unsigned int)inited;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C000DE94 = 0;
  qword_1C000DE88 = WorkItem;
  qword_1C000D9E0 = (__int64)&qword_1C000D9D8;
  qword_1C000D9D8 = (__int64)&qword_1C000D9D8;
  qword_1C000D9F0 = (__int64)&qword_1C000D9E8;
  qword_1C000D9E8 = (__int64)&qword_1C000D9E8;
  qword_1C000DA00 = (__int64)&qword_1C000D9F8;
  qword_1C000D9F8 = (__int64)&qword_1C000D9F8;
  qword_1C000DA10 = (__int64)&qword_1C000DA08;
  qword_1C000DA08 = (__int64)&qword_1C000DA08;
  qword_1C000DA20 = (__int64)&qword_1C000DA18;
  qword_1C000DA18 = (__int64)&qword_1C000DA18;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    (__int64)&dword_1C000D9C0);
  GetRegistryQwordValue(v5, v4, &qword_1C000D9B8);
  if ( (int)GetRegistryDwordValue(
              (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
              (__int64)L"DisableAsserts",
              (__int64)&v39) >= 0
    && v39 )
  {
    byte_1C000DE96 = 1;
  }
  RegistryDwordValue = GetRegistryDwordValue(
                         (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
                         (__int64)L"PerfEnablePackageIdle",
                         (__int64)&v38);
  v7 = v38;
  dword_1C000DD7C = 0;
  qword_1C000DD00 = (__int64)RegisterKernelIdleStates;
  if ( RegistryDwordValue < 0 )
    v7 = 0;
  v38 = v7;
  qword_1C000DD08 = (__int64)RegisterKernelPerfStates;
  byte_1C000DD78 = v7 == 0;
  qword_1C000DD18 = (__int64)RegisterKernelPerfFeedback;
  v8 = 640;
  qword_1C000DD20 = (__int64)RegisterKernelLegacyPcc;
  qword_1C000DD10 = (__int64)RegisterKernelCap;
  qword_1C000DD28 = (__int64)RegisterKernelCpc;
  qword_1C000DD30 = (__int64)RegisterKernelPepPerf;
  qword_1C000DD38 = (__int64)GetNtProcessorNumber;
  qword_1C000DD40 = (__int64)RegisterKernelPackage;
  qword_1C000DD48 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C000DD58 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C000DD60 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C000DD68 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C000DD70 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  _RAX = 1LL;
  __asm { cpuid }
  InputBuffer = __PAIR64__(_RBX, _RAX);
  HIDWORD(v41) = _RDX;
  if ( (int)_RCX < 0 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    InputBuffer = __PAIR64__(_RBX, _RAX);
    HIDWORD(v41) = _RDX;
    if ( (_RCX & 0x80000000) != 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      HIDWORD(InputBuffer) = _RBX;
      v41 = __PAIR64__(_RDX, _RCX);
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
      v41 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) == 0 )
    {
      qword_1C000DD00 = (__int64)RegisterGuestIdleStates;
      qword_1C000DD08 = (__int64)RegisterNoop;
      qword_1C000DD18 = (__int64)RegisterNoop;
      qword_1C000DD20 = (__int64)RegisterNoop;
      qword_1C000DD10 = (__int64)RegisterNoop;
      qword_1C000DD28 = (__int64)RegisterNoop;
      qword_1C000DD30 = (__int64)RegisterNoop;
      qword_1C000DD40 = (__int64)RegisterNoop;
      goto LABEL_10;
    }
    GetHvPpmCapabilities(&v36, &v37, 0LL);
    if ( v37 )
    {
      dword_1C000DD7C = 2;
      qword_1C000DD08 = (__int64)RegisterHvPerfStatesCounters;
      qword_1C000DD18 = (__int64)RegisterHvPerfFeedbackCounters;
      qword_1C000DD20 = (__int64)RegisterHvLegacyPccCounters;
      qword_1C000DD28 = (__int64)RegisterHvCpcCounters;
    }
    else
    {
      if ( !v36 )
        goto LABEL_10;
      dword_1C000DD7C = 1;
      qword_1C000DD08 = (__int64)RegisterHvPerfStates;
      qword_1C000DD20 = (__int64)RegisterHvLegacyPcc;
      qword_1C000DD18 = (__int64)RegisterNoop;
      qword_1C000DD30 = (__int64)RegisterNoop;
      qword_1C000DD38 = (__int64)GetLpIndex;
      qword_1C000DD40 = (__int64)RegisterHvPackage;
      qword_1C000DD48 = (__int64)&PPM_ETW_SUMMARY_HV;
      EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
      qword_1C000DD60 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
      qword_1C000DD68 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
      qword_1C000DD10 = (__int64)RegisterHvCap;
      qword_1C000DD70 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
      qword_1C000DD28 = (__int64)RegisterHvCpc;
    }
    v8 = 512;
    qword_1C000DD00 = (__int64)RegisterHvIdleStates;
    qword_1C000DD58 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
  }
LABEL_10:
  inited = InitDevExts(v8);
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
      v41 = 0LL;
      InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
      inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
      if ( inited >= 0 )
      {
        inited = CollectAcpiBiosInfo();
        if ( inited >= 0 )
        {
          v35 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v35);
          v14 = v35 == 2;
          v15 = 0;
          v35 = 1;
          if ( v14 )
            v15 = 1879048192;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v35);
          if ( v35 == 2 )
            v15 |= 2u;
          v35 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v35);
          if ( v35 == 2 )
            v15 |= 0x3300000u;
          v35 = 1;
          EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v35);
          if ( v35 == 2 )
            v15 |= 0x80000000;
          v16 = v15;
          qword_1C000D9B8 = v15 | (unsigned __int64)qword_1C000D9B8;
          dword_1C000DAD4 = 208;
          Globals = 0x10099100777LL;
          dword_1C000DDE0 = v15;
          dword_1C000DAD0 = 1;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            Globals |= 0x2000000000uLL;
            PopulateEnergyEstimationParameters();
          }
          InputBuffer = 0LL;
          inited = InitDriver(&dword_1C000DAD0, &InputBuffer);
          if ( inited < 0 )
          {
            memset(&dword_1C000DAD0, 0, 0xD0uLL);
            return (unsigned int)inited;
          }
          v17 = InputBuffer | Globals;
          Globals |= InputBuffer;
          if ( dword_1C000DD7C == 1 )
          {
            qword_1C000DAF8 = 0LL;
            v34 = 0xFFFFFFDCF7FFFEFFuLL;
            qword_1C000DB10 = 0LL;
            qword_1C000DB18 = 0LL;
            qword_1C000DB20 = 0LL;
            qword_1C000DB28 = 0LL;
            qword_1C000DB30 = 0LL;
            qword_1C000DB38 = 0LL;
            qword_1C000DB40 = 0LL;
          }
          else
          {
            if ( dword_1C000DD7C != 2 )
            {
LABEL_29:
              if ( (v17 & v16 & 0x7F077) != 0 )
              {
                ProcLibTraceIdleStatesErrata(0);
                v17 = Globals;
              }
              if ( (v17 & v16 & 0x70000000) != 0 )
              {
                ProcLibTracePerfStatesErrata(0);
                v17 = Globals;
              }
              if ( (v17 & v16 & 0x3300000) != 0 )
              {
                ProcLibTraceThrottleStatesErrata(0);
                v17 = Globals;
              }
              if ( ((unsigned int)v17 & (unsigned int)v16 & 0x80000000) != 0 )
              {
                ProcLibTracePccErrata(0);
                v17 = Globals;
              }
              if ( qword_1C000D9B8 )
                Globals = ~qword_1C000D9B8 & v17;
              if ( qword_1C000DB10 && (dword_1C000D9C0 & 0x70000000) != 0 )
                qword_1C000DB10 = 0LL;
              return (unsigned int)inited;
            }
            v17 &= 0xFFFFFFFCFFFFFEFFuLL;
            v34 = 0xFFFFFFDFFFFFFFFFuLL;
          }
          v17 &= v34;
          qword_1C000DB68 = 0LL;
          Globals = v17;
          qword_1C000DB60 = 0LL;
          goto LABEL_29;
        }
      }
    }
  }
  return (unsigned int)inited;
}
