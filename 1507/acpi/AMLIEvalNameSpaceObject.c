/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C0001750
 * Callers:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInitDosDeviceName @ 0x1C0006908 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000BBBC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C300 (ACPIIoctlEvalControlMethod.c)
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001A680 (ACPIThermalGetSensorDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0034BB0 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0040290 (EnableDisableDeviceRegionSpace.c)
 *     Simulator_EvaluateNode @ 0x1C0042BD4 (Simulator_EvaluateNode.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0065F90 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066098 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066214 (ACPIThermalBuildConstraints.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0069AD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIProcessorDeviceControl @ 0x1C0069B70 (ACPIProcessorDeviceControl.c)
 *     LinkNodeWriteStateToHardware @ 0x1C006DEF0 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006DFF0 (ACPIAmliEvaluateDsm.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006E660 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B80 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C0079F80 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A02C (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C007B684 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C007B790 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C38C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A48 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     Simulator_Post_Generic @ 0x1C0042F70 (Simulator_Post_Generic.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C00430C8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
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
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
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
        v11 = qword_1C0023E70;
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
