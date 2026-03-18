/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x140013958
 * Callers:
 *     PoGetIdleTimes @ 0x140014610 (PoGetIdleTimes.c)
 *     PpmCheckArmPeriod @ 0x140167928 (PpmCheckArmPeriod.c)
 *     PpmUpdateIdleDomains @ 0x140235FE4 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140236478 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402366B4 (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14023F454 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x14023F734 (PpmCapturePerformanceDistribution.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 *     PpmUpdateProcessorPolicy @ 0x140582208 (PpmUpdateProcessorPolicy.c)
 *     PpmReapplyIdlePolicy @ 0x14058EB9C (PpmReapplyIdlePolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x14059A25C (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14059A450 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PpmParkRegisterParking @ 0x1405B0118 (PpmParkRegisterParking.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1405B0BBC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 *     PpmWmiIdleAccountingWork @ 0x1406BBA54 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x1406BDBBC (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x140013A6C (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 Object; // [rsp+30h] [rbp-49h] BYREF
  char v6; // [rsp+32h] [rbp-47h]
  int v7; // [rsp+34h] [rbp-45h]
  _QWORD v8[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v10; // [rsp+58h] [rbp-21h]
  _QWORD v11[5]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+Fh]
  _BYTE v13[64]; // [rsp+90h] [rbp+17h] BYREF

  v9[0] = a1;
  v11[0] = a2;
  v8[1] = v8;
  Object = 1;
  v8[0] = v8;
  v9[1] = *(_QWORD *)(a1 + 8);
  v11[4] = v9;
  v11[3] = &Object;
  v6 = 6;
  v7 = 0;
  v10 = 0;
  v11[1] = a3;
  v11[2] = a4;
  v12 = 0;
  PopQueueTargetDpc(v13, v11);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v12;
}
