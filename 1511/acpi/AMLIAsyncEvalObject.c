/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C00187D8
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000B490 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000C320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000C490 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000C5D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C6C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000CBA0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000D540 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D870 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D990 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001CA64 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D300 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0021958 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021B20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00232B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0023750 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0023860 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0024420 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0035D40 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035E80 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0038CA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0039070 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0039180 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C003ACD8 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C003B5A8 (ACPIFanLoop.c)
 *     ACPIInternalEvaluateOST @ 0x1C003CBDC (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003CFA0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D148 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIWakeDisableAsync @ 0x1C0041A5C (ACPIWakeDisableAsync.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0049F30 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A120 (LinkNodepRunSrsWorker.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B10 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C0079CD0 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0016AE0 (GetBaseObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     Simulator_Post_Generic @ 0x1C0042990 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C00429F4 (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, _SLIST_ENTRY *a2, unsigned int a3, ...)
{
  __int64 v6; // rdi
  __int64 BaseObject; // rax
  __int64 v8; // rsi
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
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
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
    if ( (*(_BYTE *)(v6 + 56) & 4) != 0 )
    {
      v9 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      BaseObject = GetBaseObject(v6);
      v8 = BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v17 = qword_1C00254F0;
        v18 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v17) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v17, 0, 0LL);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
      }
      v9 = AsyncEvalObject(v8, a2, a3, v21, v23, v25, 1);
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
