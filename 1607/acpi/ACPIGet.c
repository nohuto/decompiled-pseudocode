/*
 * XREFs of ACPIGet @ 0x1C00015D0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 *     ACPICMButtonStartWorker @ 0x1C000A7E0 (ACPICMButtonStartWorker.c)
 *     IsPciDeviceWorker @ 0x1C000BCF0 (IsPciDeviceWorker.c)
 *     ACPIDetectFilterDevices @ 0x1C000D120 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D384 (ACPIDetectPdoDevices.c)
 *     IsPciBusAsyncWorker @ 0x1C000DD00 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EAE0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C000F810 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0010680 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0012C60 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     GetPciAddressWorker @ 0x1C001D450 (GetPciAddressWorker.c)
 *     ACPIDetectDockDevices @ 0x1C001EB70 (ACPIDetectDockDevices.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C001F0A0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C001FB80 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0020C20 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028000 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028100 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0043390 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0045230 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C0047DD0 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C0047F50 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C0048230 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A930 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004AAD0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C0061CB0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0080000 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIThermalWorker @ 0x1C0081BD0 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C0082830 (ACPIThermalGetParameter.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0082CB4 (ACPIProcessorGetInitialApicId.c)
 *     TranslateEjectInterface @ 0x1C0084078 (TranslateEjectInterface.c)
 *     ACPIBusIrpQueryResources @ 0x1C0085200 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0085A4C (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C0085C6C (ACPIInternalSetProximityDomain.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0086A04 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00872CC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0087560 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerGetSxD @ 0x1C0087BB0 (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C008828C (ACPISystemPowerGetDeviceWake.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C008E800 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C008EEB4 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C008F2C0 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C008FBC4 (ACPIBusIrpQueryInstanceId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00909EC (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C0097E30 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C0097EE0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C00987C0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C0098D60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0099D80 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A1D18 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     Simulator_Post_Generic @ 0x1C005A060 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005A0C4 (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     FreeObjectHandle @ 0x1C005CBAC (FreeObjectHandle.c)
 */

__int64 __fastcall ACPIGet(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 *v12; // r14
  int v13; // r12d
  __int64 *v14; // rbx
  int v15; // eax
  PVOID PoolWithTag; // rax
  __int64 v17; // rsi
  KIRQL v18; // al
  __int64 *v19; // rdx
  __int64 v20; // r15
  KIRQL v21; // dl
  __int64 *v22; // rax
  __int64 *v23; // rax
  unsigned int v24; // eax
  void (__fastcall *v25)(__int64 *, _QWORD, __int64, __int64); // r13
  unsigned int v26; // ebx
  KIRQL v27; // al
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v31; // r14
  unsigned int v32; // edi
  __int16 v33; // ax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  __int64 *v36; // r8
  void *v37; // rdi
  void (__fastcall *v38)(__int64 *, _QWORD, __int64, __int64); // [rsp+40h] [rbp-61h]
  bool v39; // [rsp+48h] [rbp-59h]
  __int64 *v40; // [rsp+50h] [rbp-51h]
  _QWORD *v41; // [rsp+58h] [rbp-49h]
  __int64 v42; // [rsp+60h] [rbp-41h] BYREF
  __int64 v43; // [rsp+68h] [rbp-39h] BYREF
  _QWORD *v44; // [rsp+70h] [rbp-31h] BYREF
  __int64 v45; // [rsp+78h] [rbp-29h] BYREF
  __int64 v46; // [rsp+80h] [rbp-21h] BYREF
  _QWORD v47[5]; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v48; // [rsp+F0h] [rbp+4Fh]

  v40 = 0LL;
  v41 = 0LL;
  v48 = 0;
  v39 = (a3 & 0x20000000) != 0;
  v12 = 0LL;
  v13 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
  {
    v14 = a1;
  }
  else
  {
    v14 = (__int64 *)a1[89];
    v12 = a1;
    v40 = a1;
  }
  v15 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    v38 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 && (v12[1] & 0x200000000000000LL) != 0 )
    {
      v40 = (__int64 *)v12[23];
      v14 = (__int64 *)v40[89];
    }
  }
  else
  {
    switch ( v15 )
    {
      case 0x80000:
        v38 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForString;
        break;
      case 0x10000:
        v38 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        v38 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForData;
        break;
      case 0x100000:
        v38 = (void (__fastcall *)(__int64 *, _QWORD, __int64, __int64))&ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  if ( (a3 & 0x3800000) != 0 )
  {
    memset(v47, 0, sizeof(v47));
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v47[0]) = 1;
      v47[2] = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v33 = 2;
      }
      else
      {
        if ( (a3 & 0x2000000) == 0 )
          KeBugCheckEx(0xA3u, 1uLL, 0x600BDuLL, 0LL, 0LL);
        v33 = 3;
      }
      WORD1(v47[0]) = v33;
      LODWORD(v47[3]) = a5;
      v47[4] = a4;
    }
    v48 = 1;
    v41 = v47;
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
  *(_QWORD *)(v17 + 24) = v12;
  *(_QWORD *)(v17 + 32) = v14;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v19 = (__int64 *)qword_1C0074508;
  v20 = v17 + 8;
  if ( *(__int64 **)qword_1C0074508 != &AcpiGetListEntry )
    __fastfail(3u);
  *(_QWORD *)(v17 + 16) = qword_1C0074508;
  *(_QWORD *)v20 = &AcpiGetListEntry;
  *v19 = v20;
  qword_1C0074508 = v17 + 8;
  KeReleaseSpinLock(&AcpiGetLock, v18);
  if ( !v13 && (v12[1] & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_15;
  v21 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v22 = (__int64 *)*v14;
  v14 = *(__int64 **)(*v14 + 24);
  v23 = v22 + 3;
  if ( v23 == v14 )
  {
LABEL_13:
    v14 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v14 + 10) )
    {
      v14 = (__int64 *)*v14;
      if ( v23 == v14 )
        goto LABEL_13;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
  if ( !v14 )
    goto LABEL_15;
  v14 += 15;
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  if ( !v14 )
  {
LABEL_15:
    v24 = -1073741772;
LABEL_16:
    v25 = v38;
LABEL_17:
    *(_DWORD *)v17 |= 0x10000000u;
    v25(v14, v24, v17 + 80, v17);
    if ( v14 )
    {
      dword_1C0074698 = 0;
      byte_1C007469C = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
        FreeObjectHandle(v14);
    }
    v26 = *(_DWORD *)(v17 + 72);
    v27 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v28 = *(_QWORD *)v20;
    v29 = *(_QWORD **)(v17 + 16);
    if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || *v29 != v20 )
      __fastfail(3u);
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    KeReleaseSpinLock(&AcpiGetLock, v27);
    ExFreePoolWithTag((PVOID)v17, 0);
    return v26;
  }
  if ( *(_WORD *)(*v14 + 66) == 8 && v40 && a3 >= 0 && v40[75] && (v40[114] & 0x40) == 0 )
  {
    v24 = -1073741661;
    goto LABEL_16;
  }
  if ( !v39 )
  {
    v24 = AMLIEvalNameSpaceObject(v14, (void *)(v17 + 80), v48, v41);
    goto LABEL_16;
  }
  v25 = v38;
  v43 = (__int64)v38;
  v42 = v17;
  v44 = v41;
  v45 = 0LL;
  v46 = 0LL;
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v31 = *v14;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_29;
  if ( v17 != -80 )
    memset((void *)(v17 + 80), 0, 0x28uLL);
  v24 = Simulator_Pre_AsyncEvalObject(
          v31,
          (int)v17 + 80,
          v48,
          (unsigned int)&v44,
          (__int64)&v46,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v45);
  v32 = v24;
  if ( !v24 )
  {
LABEL_29:
    if ( (*(_BYTE *)(v31 + 64) & 4) != 0 )
    {
      v32 = -1073741738;
    }
    else
    {
      if ( v17 != -80 )
        memset((void *)(v17 + 80), 0, 0x28uLL);
      for ( ; *(_WORD *)(v31 + 66) == 128; v31 = *(_QWORD *)(v31 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v31);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v36 = qword_1C002C340;
        v37 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v36) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v36, 0, 0LL);
        if ( v37 )
          ExFreePoolWithTag(v37, 0);
      }
      v32 = AsyncEvalObject(v31, (int)v17 + 80, v48, (_DWORD)v44, v43, v42, 1);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v31 + 64) |= 4u;
        if ( (*(_WORD *)(v31 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v31);
      }
      if ( v32 == 32772 )
        v32 = 259;
    }
    if ( g_SimulatorCallbackObject && v32 != 259 )
      v32 = Simulator_Post_Generic(&v45, v32);
    v24 = v32;
  }
  if ( v32 != 259 )
    goto LABEL_17;
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
    FreeObjectHandle(v14);
  return 259LL;
}
