/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x14020A0E4
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140406ACC (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14000D810 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400D7430 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfGetCurrentState @ 0x1400F8C78 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, int *a2, __int64 a3, unsigned __int64 *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rdi
  struct _KPRCB *v11; // r14
  unsigned __int64 SnapTimeLast; // rax
  unsigned __int8 CurrentIrql; // bl
  char v14; // al
  char v15; // cl
  ULONG v16; // eax
  unsigned int v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v19[10]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[44]; // [rsp+90h] [rbp-70h] BYREF

  memset(a2, 0, 0x20uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 24176);
  v11 = (struct _KPRCB *)Prcb;
  PpmPerfGetCurrentState(Prcb, a2 + 1, v18, a2 + 2, a2, a2 + 6);
  if ( v10 )
  {
    a2[3] = v10[90];
    a2[4] = v10[89];
    if ( v10[76] != v10[78] )
      *((_BYTE *)a2 + 28) = 1;
    if ( v10[89] < 0x64u )
      a2[6] |= 1u;
    a2[5] = 100 * v18[0] / v10[75];
  }
  else
  {
    a2[5] = 100;
  }
  LOBYTE(SnapTimeLast) = v11->PowerState.Parked;
  *((_BYTE *)a2 + 29) = SnapTimeLast;
  if ( a4 )
  {
    SnapTimeLast = v11->PowerState.SnapTimeLast;
    *a4 = SnapTimeLast;
  }
  if ( a3 )
  {
    memset(v19, 0, sizeof(v19));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v14 = PpmSnapPerformanceAccumulation((LARGE_INTEGER *)v11, 0, v11 != KeGetCurrentPrcb(), 0, v19);
    __writecr8(CurrentIrql);
    if ( v14 )
    {
      v15 = PpmPerformanceCounterShift;
      if ( v11->PowerState.Hypervisor == ProcHypervisorHvCounters )
        v15 = PpmHvPerformanceCounterShift;
      *(_QWORD *)(a3 + 8) = (unsigned __int64)v19[4].QuadPart >> v15;
      *(_QWORD *)(a3 + 16) = (unsigned __int64)v19[5].QuadPart >> v15;
      *(_DWORD *)a3 = (unsigned __int64)v19[0].QuadPart >> v15;
      SnapTimeLast = (unsigned __int64)v19[1].QuadPart >> v15;
      *(_DWORD *)(a3 + 4) = (unsigned __int64)v19[1].QuadPart >> v15;
    }
    else
    {
      v20[0] = 1310721;
      memset(&v20[1], 0, 0xA4uLL);
      v16 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx(v20, v16);
      LOBYTE(SnapTimeLast) = PopExecuteOnTargetProcessors((__int64)v20, (__int64)PpmGetThroughputInfoCallback, a3, 0LL);
    }
  }
  return SnapTimeLast;
}
