/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C0001750
 * Callers:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInitStartDevice @ 0x1C00083A0 (ACPIInitStartDevice.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000C0CC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C810 (ACPIIoctlEvalControlMethod.c)
 *     LinkNodeCrackPrt @ 0x1C00172D4 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001AA64 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C001DAC0 (ACPIInitDosDeviceName.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0035830 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C003FD40 (EnableDisableDeviceRegionSpace.c)
 *     Simulator_EvaluateNode @ 0x1C00425F4 (Simulator_EvaluateNode.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0066154 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066990 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066D3C (ACPIThermalBuildConstraints.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C0067120 (ACPIProcessorDeviceControl.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0068760 (AcpiGetIdleWakeInfo.c)
 *     LinkNodeWriteStateToHardware @ 0x1C006BA74 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006BC54 (ACPIAmliEvaluateDsm.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006C3B0 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A18C (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C007B864 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C007B970 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C56C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A64 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     Simulator_Post_Generic @ 0x1C0042990 (Simulator_Post_Generic.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0042AE8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 AMLIEvalNameSpaceObject(__int64 *a1, void *a2, unsigned int a3, ...)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  __int64 *v11; // r8
  void *v12; // rbp
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v13[0] = 0LL;
  v14 = 0LL;
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v6 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
    memset(a2, 0, 0x28uLL);
  result = Simulator_Pre_EvalNameSpaceObject(v6, (_DWORD)a2, a3, (unsigned int)va, (__int64)&v14, (__int64)v13);
  if ( !(_DWORD)result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v6 + 56) & 4) != 0 )
    {
      v7 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      for ( ; *(_WORD *)(v6 + 58) == 128; v6 = *(_QWORD *)(v6 + 72) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 104));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v6);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v11 = qword_1C00254F0;
        v12 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v11) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v11, 0, 0LL);
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
      v7 = SyncEvalObject(v6, a2, a3, v15);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 104), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v6 + 56) |= 4u;
        if ( (*(_WORD *)(v6 + 56) & 0x40) == 0 )
          FreeNameSpaceObjects(v6);
      }
      if ( v7 == 32772 )
        v7 = 259;
    }
    if ( g_SimulatorCallbackObject )
      return (unsigned int)Simulator_Post_Generic(v13, v7);
    return v7;
  }
  return result;
}
