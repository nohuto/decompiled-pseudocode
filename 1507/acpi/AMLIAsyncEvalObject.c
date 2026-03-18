/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C0018430
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0007BB0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000B3C0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000BE10 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000BF80 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000C0C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C1B0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C690 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000CE60 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D190 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D2B0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001C844 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0021140 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021310 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0022B30 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0023080 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0023190 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00350C0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035200 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C00380B0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0038480 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0038590 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C003A0C8 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 *     ACPIInternalEvaluateOST @ 0x1C003C84C (ACPIInternalEvaluateOST.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C003CA70 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003D3B0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D558 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIWakeDisableAsync @ 0x1C004201C (ACPIWakeDisableAsync.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C004A620 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A810 (LinkNodepRunSrsWorker.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B00 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C0079B70 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C007B3FC (EnableDisableIPMIRegions.c)
 * Callees:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0015AAC (GetBaseObject.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     Simulator_Post_Generic @ 0x1C0042F70 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0042FD4 (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
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
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
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
        v17 = qword_1C0023E70;
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
