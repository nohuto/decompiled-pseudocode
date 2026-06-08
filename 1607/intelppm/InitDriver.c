/*
 * XREFs of InitDriver @ 0x1C0024A18
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00241A4 (ProcLibGlobalInit.c)
 * Callees:
 *     IsNonwrappingACountMCountSupported @ 0x1C0001774 (IsNonwrappingACountMCountSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C00017E0 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001840 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C00018B0 (IsHwpSupported.c)
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0002A20 (GetCpuIdInfo.c)
 *     IsIntelPccDriverPresent @ 0x1C0003D70 (IsIntelPccDriverPresent.c)
 *     IsMonitorMWaitSupported @ 0x1C0014A78 (IsMonitorMWaitSupported.c)
 *     GetHvPpmCapabilities @ 0x1C001D18C (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  bool v5; // zf
  __int64 v6; // rbx
  bool v7; // al
  void *v8; // rcx
  bool v10; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+34h] [rbp-1Ch]
  _DWORD v14[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 12223;
  v5 = !IsHwpNativeInterruptSupported();
  PdcBuffer = 1;
  dword_1C000EBE4 = 1;
  if ( !v5 )
    v4 = 16319;
  dword_1C000EBE8 = v4;
  *(_QWORD *)(a1 + 16) = &PdcBuffer;
  *(_WORD *)(a1 + 32) = 12;
  dword_1C000EBD8 = 0;
  dword_1C000EBDC = v4;
  v6 = 572522496LL;
  OscBuffer = ACPI_OSC_INTEL_GUID;
  dword_1C000EBD0 = 1;
  dword_1C000EBD4 = 2;
  *(_QWORD *)(a1 + 24) = &OscBuffer;
  *(_WORD *)(a1 + 34) = 32;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  *(_QWORD *)(a1 + 88) = SetGV3PerfStateHidden;
  *(_QWORD *)(a1 + 96) = SetFFHThrottleStateHidden;
  GetCpuIdInfo(0, v14);
  if ( v14[0] >= 6u )
  {
    GetCpuIdInfo(6u, &v11);
    if ( (v12 & 1) != 0 )
    {
      v6 = 639631360LL;
      *(_QWORD *)(a1 + 112) = GV3HardwareFeedback;
      if ( IsNonwrappingACountMCountSupported() )
        v6 = 0x8026200000LL;
    }
  }
  GetCpuIdInfo(1u, &v11);
  if ( (v13 & 0x400000) != 0 )
    *(_QWORD *)(a1 + 120) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 128) = SetPerformanceEnergyBiasPolicy;
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
      *(_QWORD *)(a1 + 136) = v8;
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
    *(_QWORD *)(a1 + 144) = IsCppcThrottleEfficient;
  if ( IsHwpNativeInterruptSupported() )
  {
    v6 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 152) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 160) = EnableHwpInterrupt;
  }
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_DWORD *)(a1 + 200) = 409;
  *(_QWORD *)(a1 + 208) = -65536LL;
  *(_DWORD *)(a1 + 216) = 410;
  if ( qword_1C000EFB8 && qword_1C000EFC0 && qword_1C000EFC8 && qword_1C000EFD0 )
    v6 |= 0x200000000000uLL;
  if ( IsIntelPccDriverPresent() )
    *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
  *(_QWORD *)(a1 + 168) = InitEnergyCounters;
  *(_QWORD *)(a1 + 176) = UnInitEnergyCounters;
  *a2 |= v6;
  return 0LL;
}
