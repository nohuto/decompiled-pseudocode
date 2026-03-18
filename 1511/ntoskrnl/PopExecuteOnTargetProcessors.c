/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x14009C4F0
 * Callers:
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 *     PpmParkRegisterParking @ 0x140138DFC (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x1401393B0 (PpmCheckArmPeriod.c)
 *     PpmUpdateIdleDomains @ 0x1401E8C54 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1401E8FB0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1401E9110 (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1401F11AC (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x1401F1398 (PpmCapturePerformanceDistribution.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 *     PpmUpdateProcessorPolicy @ 0x14050AB34 (PpmUpdateProcessorPolicy.c)
 *     PpmReapplyIdlePolicy @ 0x14051B090 (PpmReapplyIdlePolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x14052FDF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14052FF24 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x140537424 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 *     PpmWmiIdleAccountingWork @ 0x14063C260 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x14063D484 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopQueueTargetDpc @ 0x14009C5CC (PopQueueTargetDpc.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 Object; // [rsp+30h] [rbp-49h] BYREF
  char v6; // [rsp+32h] [rbp-47h]
  int v7; // [rsp+34h] [rbp-45h]
  _QWORD v8[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v10; // [rsp+58h] [rbp-21h]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int16 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  ULONG_PTR BugCheckParameter2[8]; // [rsp+90h] [rbp+17h] BYREF

  v9[0] = a1;
  v11 = a2;
  v8[1] = v8;
  Object = 1;
  v8[0] = v8;
  v9[1] = *(_QWORD *)(a1 + 8);
  v15 = v9;
  p_Object = &Object;
  v6 = 6;
  v7 = 0;
  v10 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc((ULONG_PTR)BugCheckParameter2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
