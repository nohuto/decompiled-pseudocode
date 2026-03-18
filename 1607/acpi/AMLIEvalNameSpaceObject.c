/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C0001210
 * Callers:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0007898 (ACPIIoctlEvalControlMethod.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIThermalGetSensorDevice @ 0x1C000A438 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C000BB70 (ACPIInitDosDeviceName.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00248B0 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00444EC (ACPIBuildMissingEjectionRelations.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050AE4 (ACPIIoctlGetDeviceSpecificData.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0054D1C (EnableDisableDeviceRegionSpace.c)
 *     Simulator_EvaluateNode @ 0x1C0059C94 (Simulator_EvaluateNode.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0081418 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0081520 (ACPIAmliEvaluateOsc.c)
 *     ACPIProcessorDeviceControl @ 0x1C00816A0 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalBuildConstraints @ 0x1C00817DC (ACPIThermalBuildConstraints.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0082E98 (ACPIAmliEvaluateDsm.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00881A0 (AcpiGetIdleWakeInfo.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008C208 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008C880 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0090384 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C009AE70 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009AF1C (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C009CAC8 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C009CBD0 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C009D98C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A92B8 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0001300 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     Simulator_Post_Generic @ 0x1C005A060 (Simulator_Post_Generic.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C005A1B8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
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
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
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
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v7 = -1073741738;
    }
    else
    {
      if ( a2 )
        memset(a2, 0, 0x28uLL);
      for ( ; *(_WORD *)(v6 + 66) == 128; v6 = *(_QWORD *)(v6 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v6);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v11 = qword_1C002C340;
        v12 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v11) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v11, 0, 0LL);
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
      v7 = SyncEvalObject(v6, a2, a3, v15);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v6 + 64) |= 4u;
        if ( (*(_WORD *)(v6 + 64) & 0x40) == 0 )
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
