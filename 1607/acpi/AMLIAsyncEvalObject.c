/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C0020244
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0005BD8 (ACPIWakeEnableDisableAsync.c)
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000EF40 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000FA70 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000FE50 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0010000 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0010C00 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0010E20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C0011410 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011640 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011BB0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0013AE0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0026720 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0027690 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0029600 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0029ED0 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B530 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044AB0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044CA0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049E20 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004A3D0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C004D258 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C004E2AC (ACPIFanLoop.c)
 *     ACPIInternalEvaluateOST @ 0x1C004FE38 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0050500 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C00506A8 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIWakeDisableAsync @ 0x1C0058538 (ACPIWakeDisableAsync.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0061AC0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0061CB0 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C008DF98 (RegisterOperationRegionHandler.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C009AA60 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C001EDC0 (GetBaseObject.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     Simulator_Post_Generic @ 0x1C005A060 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005A0C4 (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, _SLIST_ENTRY *a2, unsigned int a3, ...)
{
  __int64 v6; // rdi
  __int64 BaseObject; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  __int64 *v17; // r8
  void *v18; // rdi
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF
  va_list va2; // [rsp+A8h] [rbp+58h]
  va_list va3; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v20 = 0LL;
  v19 = 0LL;
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v12, v11, v13, v14);
  }
  v6 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_AsyncEvalObject(
             v6,
             (_DWORD)a2,
             a3,
             (unsigned int)va,
             (__int64)&v19,
             (__int64)va1,
             (__int64)va2,
             (__int64)&v20);
  if ( !(_DWORD)result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v9 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      BaseObject = GetBaseObject(v6);
      v8 = (_QWORD *)BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v17 = qword_1C002C340;
        v18 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v17) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v17, 0, 0LL);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
      }
      v9 = AsyncEvalObject((__int64)v8, a2, a3, v21, v23, v25, 1);
      DereferenceObjectEx(v8);
      if ( v9 == 32772 )
        v9 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      if ( v9 != 259 )
        return (unsigned int)Simulator_Post_Generic(&v20, v9);
    }
    return v9;
  }
  return result;
}
