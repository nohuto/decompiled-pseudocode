/*
 * XREFs of InitDriver @ 0x1C00235B8
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00230C0 (ProcLibGlobalInit.c)
 * Callees:
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001DD8 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001E3C (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C0001EB0 (IsHwpSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C0001F14 (IsNonwrappingACountMCountSupported.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002980 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C0016458 (IsMonitorMWaitSupported.c)
 *     GetHvPpmCapabilities @ 0x1C001BDC4 (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  bool v5; // zf
  __int64 v6; // rbx
  bool v7; // al
  unsigned __int64 (__fastcall *v8)(__int64, int); // rcx
  bool v10; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+34h] [rbp-1Ch]
  _DWORD v14[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 12223;
  v5 = !IsHwpNativeInterruptSupported();
  PdcBuffer = 1;
  dword_1C000DBE4 = 1;
  if ( !v5 )
    v4 = 16319;
  dword_1C000DBE8 = v4;
  *(_QWORD *)(a1 + 16) = &PdcBuffer;
  *(_WORD *)(a1 + 32) = 12;
  dword_1C000DBD8 = 0;
  dword_1C000DBDC = v4;
  v6 = 572522496LL;
  OscBuffer = ACPI_OSC_INTEL_GUID;
  dword_1C000DBD0 = 1;
  dword_1C000DBD4 = 2;
  *(_QWORD *)(a1 + 24) = &OscBuffer;
  *(_WORD *)(a1 + 34) = 32;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  GetCpuIdInfo(0, v14);
  if ( v14[0] >= 6u )
  {
    GetCpuIdInfo(6u, &v11);
    if ( (v12 & 1) != 0 )
    {
      v6 = 639631360LL;
      *(_QWORD *)(a1 + 88) = GV3HardwareFeedback;
      if ( IsNonwrappingACountMCountSupported() )
        v6 = 0x8026200000LL;
    }
  }
  GetCpuIdInfo(1u, &v11);
  if ( (v13 & 0x400000) != 0 )
    *(_QWORD *)(a1 + 96) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 104) = SetPerformanceEnergyBiasPolicy;
  GetCpuIdInfo(0, &v11);
  if ( v11 >= 6 )
  {
    GetCpuIdInfo(6u, v14);
    if ( (v14[0] & 2) != 0 )
    {
      v7 = IsPerformanceEnergyBiasSupported();
      v8 = SetTurboDisablePolicy;
      if ( v7 )
        v8 = SetEfficientTurboDisablePolicy;
      *(_QWORD *)(a1 + 112) = v8;
    }
  }
  v10 = IsMonitorMWaitSupported();
  if ( v10 || (GetHvPpmCapabilities(0LL, 0LL, &v10), v10) )
  {
    v6 |= 0x7F000uLL;
    *(_QWORD *)(a1 + 48) = InitCStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitCState;
  }
  if ( IsHwpSupported() )
    *(_QWORD *)(a1 + 120) = IsCppcThrottleEfficient;
  if ( IsHwpNativeInterruptSupported() )
  {
    v6 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 128) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 136) = EnableHwpInterrupt;
  }
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 144) = InitEnergyCounters;
  *(_QWORD *)(a1 + 152) = UnInitEnergyCounters;
  *(_DWORD *)(a1 + 176) = 409;
  *(_QWORD *)(a1 + 184) = -65536LL;
  *(_DWORD *)(a1 + 192) = 410;
  *a2 |= v6;
  return 0LL;
}
