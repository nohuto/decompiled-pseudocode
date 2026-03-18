/*
 * XREFs of FreeDataBuffs @ 0x1C000E1D0
 * Callers:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     ACPIInitDosDeviceName @ 0x1C0006908 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A590 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000B180 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B440 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000B730 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000B810 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000B980 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000BBBC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C300 (ACPIIoctlEvalControlMethod.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000CE60 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000D4F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     ACPIIoctlEnumChildren @ 0x1C0018FF0 (ACPIIoctlEnumChildren.c)
 *     ACPIThermalTMPCallback @ 0x1C0019BE0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001A680 (ACPIThermalGetSensorDevice.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C990 (ACPIGetWorkerForInteger.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001E340 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001EA10 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C001F740 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0020070 (ACPIGetWorkerForBuffer.c)
 *     ProcessIncDec @ 0x1C0020540 (ProcessIncDec.c)
 *     ConvertToInteger @ 0x1C0020850 (ConvertToInteger.c)
 *     ACPIGetWorkerForData @ 0x1C00221B0 (ACPIGetWorkerForData.c)
 *     ACPIGetWorkerForNothing @ 0x1C0022640 (ACPIGetWorkerForNothing.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022710 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0034BB0 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C00353A0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C00354B0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C003B100 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003D3B0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C003D4E0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D558 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodExCompletion @ 0x1C003D690 (ACPIIoctlAsyncEvalControlMethodExCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C00429F0 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C00453BC (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
 *     Match_32 @ 0x1C00484EC (Match_32.c)
 *     Match_64 @ 0x1C0048620 (Match_64.c)
 *     ConvertToBuffer @ 0x1C00499AC (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0049AE0 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0049B70 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C004A350 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A48 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 )
  {
    v3 = a2;
    do
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v5 & 8) != 0 )
          FreeData((_QWORD *)v5);
      }
      else if ( *(_QWORD *)(a1 + 32) )
      {
        if ( *(int *)(a1 + 8) > 0 )
        {
          *(_WORD *)a1 |= 8u;
        }
        else
        {
          if ( *(_WORD *)(a1 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
          FreeObjData(a1);
        }
      }
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
