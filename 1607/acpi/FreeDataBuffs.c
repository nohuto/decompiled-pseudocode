/*
 * XREFs of FreeDataBuffs @ 0x1C001B580
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0007898 (ACPIIoctlEvalControlMethod.c)
 *     AMLIFreeDataBuffs @ 0x1C00080D4 (AMLIFreeDataBuffs.c)
 *     ACPIGetWorkerForNothing @ 0x1C0008460 (ACPIGetWorkerForNothing.c)
 *     ACPIThermalTMPCallback @ 0x1C0008540 (ACPIThermalTMPCallback.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIThermalGetSensorDevice @ 0x1C000A438 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C000BB70 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000E600 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EC80 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F170 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000F270 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F370 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0012C60 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0013050 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0013AE0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C0018F80 (ExprOp2_64.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C030 (ACPIGetWorkerForInteger.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     ACPIIoctlEnumChildren @ 0x1C0021170 (ACPIIoctlEnumChildren.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00248B0 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0026360 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0026F40 (ACPIGetWorkerForBuffer.c)
 *     ProcessIncDec @ 0x1C00279C0 (ProcessIncDec.c)
 *     ConvertToInteger @ 0x1C0027AE4 (ConvertToInteger.c)
 *     ACPIGetWorkerForData @ 0x1C0029770 (ACPIGetWorkerForData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00444EC (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0044E40 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0044F50 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C004DF70 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0050500 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0050630 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C00506A8 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodExCompletion @ 0x1C00507E0 (ACPIIoctlAsyncEvalControlMethodExCompletion.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050AE4 (ACPIIoctlGetDeviceSpecificData.c)
 *     Simulator_CallbackWorker @ 0x1C0059AB0 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C005C5AC (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C005DD2C (FreeContext.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     Match_32 @ 0x1C005F798 (Match_32.c)
 *     Match_64 @ 0x1C005F8CC (Match_64.c)
 *     ConvertToBuffer @ 0x1C0060D94 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0060EC8 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0060F58 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C0061780 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A92B8 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
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
