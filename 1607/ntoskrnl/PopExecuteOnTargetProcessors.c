/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x14000D0F8
 * Callers:
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     PpmCheckArmPeriod @ 0x140144334 (PpmCheckArmPeriod.c)
 *     PpmUpdateIdleDomains @ 0x1402014A4 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140201800 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x14020195C (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A0E4 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x14020A2E4 (PpmCapturePerformanceDistribution.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 *     PpmUpdateProcessorPolicy @ 0x140545A2C (PpmUpdateProcessorPolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EE80 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14054EFB0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14056A818 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x14066B7A4 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x1406736D0 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x140675CFC (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x14000D1D4 (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
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
