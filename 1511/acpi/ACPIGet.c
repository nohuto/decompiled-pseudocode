/*
 * XREFs of ACPIGet @ 0x1C0001B00
 * Callers:
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0007410 (ACPIBuildProcessDevicePhaseHid.c)
 *     GetPciAddressWorker @ 0x1C0009260 (GetPciAddressWorker.c)
 *     IsPciDeviceWorker @ 0x1C00097D0 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A1B0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C000A3D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A480 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     IsPciBusAsyncWorker @ 0x1C000AA20 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000B670 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000B730 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000BE90 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIDetectDockDevices @ 0x1C0017930 (ACPIDetectDockDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0017A20 (ACPIDetectPdoDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 *     ACPICMButtonStartWorker @ 0x1C001AE80 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001F1D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0021360 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0034FC0 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0036280 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C00373D0 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C0037550 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C00377B0 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00393C0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00394E0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A120 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C00652F4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00672C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00674BC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerGetSxD @ 0x1C0067CD8 (ACPISystemPowerGetSxD.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0067FBC (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C006AC3C (ACPISystemPowerGetDeviceWake.c)
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C006D198 (ACPIThermalGetParameter.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C006D3D8 (ACPIProcessorGetInitialApicId.c)
 *     TranslateEjectInterface @ 0x1C006EFE8 (TranslateEjectInterface.c)
 *     ACPIBusIrpQueryResources @ 0x1C006F490 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C006F964 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C006FB70 (ACPIInternalSetProximityDomain.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00708EC (AcpiEjectBusNumberTranslator.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0070F38 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00712FC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0071D80 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C0078420 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C00784D0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C0078870 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C0078B00 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00795F0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     LinkNodeGetPossibleResources @ 0x1C00801D8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00144F8 (HeapFree.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     Simulator_Post_Generic @ 0x1C0042990 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C00429F4 (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ACPIGet(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _QWORD *v10; // rsi
  int v13; // r15d
  _QWORD *v14; // rbx
  int v15; // eax
  PVOID PoolWithTag; // rax
  __int64 v17; // r14
  KIRQL v18; // al
  __int64 **v19; // rdx
  __int64 *v20; // r12
  KIRQL v21; // dl
  _QWORD *v22; // rcx
  unsigned int v23; // eax
  void (__fastcall *v24)(_QWORD *, _QWORD, __int64, __int64); // r13
  unsigned int v25; // ebx
  KIRQL v26; // al
  __int64 v27; // r8
  __int64 *v28; // rdx
  __int64 v30; // rsi
  unsigned int v31; // edi
  __int16 v32; // ax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  __int64 *v35; // r8
  void *v36; // rdi
  void *v37; // [rsp+40h] [rbp-61h]
  _QWORD *v38; // [rsp+48h] [rbp-59h]
  bool v39; // [rsp+50h] [rbp-51h]
  _QWORD *v40; // [rsp+58h] [rbp-49h]
  __int64 v41; // [rsp+60h] [rbp-41h] BYREF
  __int64 v42; // [rsp+68h] [rbp-39h] BYREF
  __int64 v43; // [rsp+70h] [rbp-31h] BYREF
  _QWORD *v44; // [rsp+78h] [rbp-29h] BYREF
  __int64 v45; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v46[5]; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v47; // [rsp+F0h] [rbp+4Fh]

  v38 = 0LL;
  v40 = 0LL;
  v10 = 0LL;
  v47 = 0;
  v39 = (a3 & 0x20000000) != 0;
  v13 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
  {
    v14 = a1;
  }
  else
  {
    v14 = (_QWORD *)a1[88];
    v10 = a1;
    v38 = a1;
  }
  v15 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    v37 = &ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 && (*v10 & 0x200000000000000LL) != 0 )
    {
      v38 = (_QWORD *)v10[22];
      v14 = (_QWORD *)v38[88];
    }
  }
  else
  {
    switch ( v15 )
    {
      case 0x80000:
        v37 = &ACPIGetWorkerForString;
        break;
      case 0x10000:
        v37 = &ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        v37 = &ACPIGetWorkerForData;
        break;
      case 0x100000:
        v37 = &ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  if ( (a3 & 0x3800000) != 0 )
  {
    memset(v46, 0, sizeof(v46));
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v46[0]) = 1;
      v46[2] = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v32 = 2;
      }
      else
      {
        if ( (a3 & 0x2000000) == 0 )
          KeBugCheckEx(0xA3u, 1uLL, 0x600BDuLL, 0LL, 0LL);
        v32 = 3;
      }
      WORD1(v46[0]) = v32;
      LODWORD(v46[3]) = a5;
      v46[4] = a4;
    }
    v47 = 1;
    v40 = v46;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4D706341u);
  v17 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x78uLL);
  *(_QWORD *)(v17 + 40) = a6;
  *(_QWORD *)(v17 + 48) = a7;
  *(_QWORD *)(v17 + 56) = a8;
  *(_QWORD *)(v17 + 64) = a9;
  *(_DWORD *)v17 = a3;
  *(_DWORD *)(v17 + 4) = a2;
  *(_QWORD *)(v17 + 24) = v10;
  *(_QWORD *)(v17 + 32) = v14;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v19 = (__int64 **)qword_1C005A098;
  v20 = (__int64 *)(v17 + 8);
  *(_QWORD *)(v17 + 16) = qword_1C005A098;
  *(_QWORD *)(v17 + 8) = &AcpiGetListEntry;
  if ( *v19 != &AcpiGetListEntry )
    __fastfail(3u);
  *v19 = v20;
  qword_1C005A098 = v17 + 8;
  KeReleaseSpinLock(&AcpiGetLock, v18);
  if ( !v13 && (*v10 & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_17;
  v21 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v22 = *(_QWORD **)(*v14 + 24LL);
  v14 = v22;
  if ( v22 )
  {
    while ( a2 != *((_DWORD *)v14 + 8) )
    {
      v14 = (_QWORD *)v14[1];
      if ( v14 == v22 )
      {
        v14 = 0LL;
        break;
      }
      if ( !v14 )
        break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
  if ( !v14 )
    goto LABEL_17;
  v14 += 14;
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  if ( !v14 )
  {
LABEL_17:
    v23 = -1073741772;
LABEL_18:
    v24 = (void (__fastcall *)(_QWORD *, _QWORD, __int64, __int64))v37;
LABEL_19:
    *(_DWORD *)v17 |= 0x10000000u;
    v24(v14, v23, v17 + 80, v17);
    if ( v14 )
    {
      dword_1C005A228 = 0;
      byte_1C005A22C = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v14 == (_QWORD *)(*v14 + 112LL) )
        {
          DereferenceObjectEx();
        }
        else
        {
          DereferenceObjectEx();
          HeapFree(v14);
        }
      }
    }
    v25 = *(_DWORD *)(v17 + 72);
    v26 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v27 = *v20;
    v28 = *(__int64 **)(v17 + 16);
    if ( *(__int64 **)(*v20 + 8) != v20 || (__int64 *)*v28 != v20 )
      __fastfail(3u);
    *v28 = v27;
    *(_QWORD *)(v27 + 8) = v28;
    KeReleaseSpinLock(&AcpiGetLock, v26);
    ExFreePoolWithTag((PVOID)v17, 0);
    return v25;
  }
  if ( *(_WORD *)(*v14 + 58LL) == 8 && v38 && a3 >= 0 && v38[74] && (v38[113] & 0x40) == 0 )
  {
    v23 = -1073741661;
    goto LABEL_18;
  }
  if ( !v39 )
  {
    v23 = AMLIEvalNameSpaceObject(v14, (void *)(v17 + 80), v47, v40);
    goto LABEL_18;
  }
  v24 = (void (__fastcall *)(_QWORD *, _QWORD, __int64, __int64))v37;
  v43 = (__int64)v37;
  v41 = v17;
  v44 = v40;
  v42 = 0LL;
  v45 = 0LL;
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v30 = *v14;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_31;
  if ( v17 != -80 )
    memset((void *)(v17 + 80), 0, 0x28uLL);
  v23 = Simulator_Pre_AsyncEvalObject(
          v30,
          (int)v17 + 80,
          v47,
          (unsigned int)&v44,
          (__int64)&v45,
          (__int64)&v43,
          (__int64)&v41,
          (__int64)&v42);
  v31 = v23;
  if ( !v23 )
  {
LABEL_31:
    if ( (*(_BYTE *)(v30 + 56) & 4) != 0 )
    {
      v31 = -1073741738;
    }
    else
    {
      if ( v17 != -80 )
        memset((void *)(v17 + 80), 0, 0x28uLL);
      for ( ; *(_WORD *)(v30 + 58) == 128; v30 = *(_QWORD *)(v30 + 72) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 104));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v30);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v35 = qword_1C00254F0;
        v36 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v35) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v35, 0, 0LL);
        if ( v36 )
          ExFreePoolWithTag(v36, 0);
      }
      v31 = AsyncEvalObject(v30, (int)v17 + 80, v47, (_DWORD)v44, v43, v41, 1);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 104), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v30 + 56) |= 4u;
        if ( (*(_WORD *)(v30 + 56) & 0x40) == 0 )
          FreeNameSpaceObjects(v30);
      }
      if ( v31 == 32772 )
        v31 = 259;
    }
    if ( g_SimulatorCallbackObject && v31 != 259 )
      v31 = Simulator_Post_Generic(&v42, v31);
    v23 = v31;
  }
  if ( v31 != 259 )
    goto LABEL_19;
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
  {
    if ( v14 == (_QWORD *)(*v14 + 112LL) )
    {
      DereferenceObjectEx();
    }
    else
    {
      DereferenceObjectEx();
      HeapFree(v14);
    }
  }
  return 259LL;
}
