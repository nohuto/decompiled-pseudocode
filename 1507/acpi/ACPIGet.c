/*
 * XREFs of ACPIGet @ 0x1C0001B00
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0008528 (ACPIDetectPdoDevices.c)
 *     GetPciAddressWorker @ 0x1C00095A0 (GetPciAddressWorker.c)
 *     IsPciDeviceWorker @ 0x1C0009AF0 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A290 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C000A430 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A4E0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     IsPciBusAsyncWorker @ 0x1C000A950 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B440 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000B5A0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000B660 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000BAB0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIDetectDockDevices @ 0x1C0016AE8 (ACPIDetectDockDevices.c)
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 *     ACPICMButtonStartWorker @ 0x1C001AC10 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001E340 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001EE10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0020C70 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022710 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0034280 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0035600 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C00367E0 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C0036960 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C0036BC0 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00387D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00388F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A810 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C00652E4 (ACPIBusIrpQueryHardwareId.c)
 *     TranslateEjectInterface @ 0x1C0066F0C (TranslateEjectInterface.c)
 *     ACPIBusIrpQueryResources @ 0x1C00673C0 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0067894 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C0067AA0 (ACPIInternalSetProximityDomain.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0069380 (ACPISystemPowerGetDeviceWake.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0069564 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0069CB0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0069EBC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C006A150 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerGetSxD @ 0x1C006A6B4 (ACPISystemPowerGetSxD.c)
 *     ACPIThermalWorker @ 0x1C006F0F0 (ACPIThermalWorker.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C006F778 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0071048 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007140C (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0071E90 (ACPIBusIrpQueryInstanceId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C0073258 (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C00782C0 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C0078370 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C0078710 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00789A0 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0079490 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     LinkNodeGetPossibleResources @ 0x1C007FFF8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     Simulator_Post_Generic @ 0x1C0042F70 (Simulator_Post_Generic.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0042FD4 (Simulator_Pre_AsyncEvalObject.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
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
  v19 = (__int64 **)qword_1C005A088;
  v20 = (__int64 *)(v17 + 8);
  *(_QWORD *)(v17 + 16) = qword_1C005A088;
  *(_QWORD *)(v17 + 8) = &AcpiGetListEntry;
  if ( *v19 != &AcpiGetListEntry )
    __fastfail(3u);
  *v19 = v20;
  qword_1C005A088 = v17 + 8;
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
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
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
      dword_1C005A218 = 0;
      byte_1C005A21C = 0;
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
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
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
        v35 = qword_1C0023E70;
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
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
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
