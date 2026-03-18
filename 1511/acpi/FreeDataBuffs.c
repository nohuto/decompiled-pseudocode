/*
 * XREFs of FreeDataBuffs @ 0x1C000F3B0
 * Callers:
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0006A80 (ACPIBuildProcessDevicePhasePrs.c)
 *     AMLIFreeDataBuffs @ 0x1C00079D0 (AMLIFreeDataBuffs.c)
 *     ACPIInitStartDevice @ 0x1C00083A0 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A660 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000B250 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000B800 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000B8E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000BD60 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000BF10 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000C0CC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C810 (ACPIIoctlEvalControlMethod.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000D540 (ACPIBuildProcessDevicePhasePrw.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     LinkNodeCrackPrt @ 0x1C00172D4 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEnumChildren @ 0x1C0018F24 (ACPIIoctlEnumChildren.c)
 *     ACPIThermalTMPCallback @ 0x1C0019E30 (ACPIThermalTMPCallback.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001AA64 (ACPIThermalGetSensorDevice.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     ACPIGetWorkerForInteger @ 0x1C001CBB0 (ACPIGetWorkerForInteger.c)
 *     ACPIInitDosDeviceName @ 0x1C001DAC0 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001F1D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001F790 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0020640 (ACPIGetWorkerForBuffer.c)
 *     ProcessIncDec @ 0x1C0020AA0 (ProcessIncDec.c)
 *     ConvertToInteger @ 0x1C0020E10 (ConvertToInteger.c)
 *     ACPIGetWorkerForData @ 0x1C0022930 (ACPIGetWorkerForData.c)
 *     ACPIGetWorkerForNothing @ 0x1C0022DC0 (ACPIGetWorkerForNothing.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0035830 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0036020 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0036130 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C003B490 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003CFA0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C003D0D0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D148 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodExCompletion @ 0x1C003D280 (ACPIIoctlAsyncEvalControlMethodExCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C0042410 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C0044DEC (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C00465D4 (FreeContext.c)
 *     Match_32 @ 0x1C0047DFC (Match_32.c)
 *     Match_64 @ 0x1C0047F30 (Match_64.c)
 *     ConvertToBuffer @ 0x1C00492BC (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C00493F0 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0049480 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C0049C60 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A64 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
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
