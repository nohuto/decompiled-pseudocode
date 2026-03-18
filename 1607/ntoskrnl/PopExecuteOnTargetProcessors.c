/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x14000D578
 * Callers:
 *     PoGetIdleTimes @ 0x14000DBB4 (PoGetIdleTimes.c)
 *     PpmParkRegisterParking @ 0x140143818 (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x140143DC4 (PpmCheckArmPeriod.c)
 *     PpmUpdateIdleDomains @ 0x140201678 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402019D4 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140201B30 (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A2B8 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x14020A4B8 (PpmCapturePerformanceDistribution.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     EtwpKernelTraceRundown @ 0x140495B04 (EtwpKernelTraceRundown.c)
 *     PpmUpdateProcessorPolicy @ 0x1405454EC (PpmUpdateProcessorPolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EAE0 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14054EC10 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14056A2D8 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x14058174C (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x14066B6C0 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x1406735EC (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x140675C18 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x14000D654 (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
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
  _BYTE v17[64]; // [rsp+90h] [rbp+17h] BYREF

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
  PopQueueTargetDpc((ULONG_PTR)v17);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
