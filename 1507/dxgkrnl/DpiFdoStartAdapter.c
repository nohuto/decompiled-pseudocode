/*
 * XREFs of DpiFdoStartAdapter @ 0x1C00C3E10
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C016FD80 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkDiagCalcDuration1us @ 0x1C000D114 (DxgkDiagCalcDuration1us.c)
 *     DpiHybridInternalPanelOverride @ 0x1C000D32C (DpiHybridInternalPanelOverride.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 *     Template_pt @ 0x1C0023B90 (Template_pt.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkAcquireAdapterReference @ 0x1C0094C3C (DxgkAcquireAdapterReference.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkQueryRequiredDmaQueueEntry @ 0x1C00B1898 (DxgkQueryRequiredDmaQueueEntry.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00B45D0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C00BB6D0 (DxgkRetrieveStringFromRegistry.c)
 *     DxgkAddAdapter @ 0x1C00C3DC0 (DxgkAddAdapter.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00C4630 (DpiFdoCreateRelatedObjects.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00C51A8 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1C00C6DF0 (DpiGetDevicePropertyString.c)
 *     DpiDxgkDdiStartDevice @ 0x1C00C6EE0 (DpiDxgkDdiStartDevice.c)
 *     DpiFdoConnectInterrupt @ 0x1C00C6F90 (DpiFdoConnectInterrupt.c)
 *     MonitorInitializeAdapterDone @ 0x1C00C7D14 (MonitorInitializeAdapterDone.c)
 *     DpiFdoEnumChildDevices @ 0x1C00D45E0 (DpiFdoEnumChildDevices.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00DF580 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C0128D94 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012919C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkReleaseAdapterReference @ 0x1C012BDD4 (DxgkReleaseAdapterReference.c)
 *     DpiFdoDestroyChildDevices @ 0x1C016735C (DpiFdoDestroyChildDevices.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0167428 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C01674C0 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C0168AB0 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C016918C (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiDxgkDdiStopDevice @ 0x1C017088C (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(struct _DEVICE_OBJECT *a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  char *v6; // r14
  unsigned int *PoolWithTag; // r13
  __int64 v8; // rax
  char *DeviceExtension; // rbx
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // ecx
  unsigned int v23; // eax
  _DWORD *v24; // r12
  int started; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rcx
  _BYTE *v34; // r15
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  bool v41; // al
  bool *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  BOOLEAN v56; // dl
  NTSTATUS v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v64; // rcx
  __int64 v65; // r8
  bool v66; // cf
  bool v67; // zf
  __int64 v68; // rcx
  __int64 v69; // r8
  _QWORD *v70; // rcx
  _QWORD *v71; // rax
  void *v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // r12
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  int DevicePropertyString; // eax
  __int64 v79; // rcx
  __int64 v80; // r15
  _QWORD *v81; // rax
  _QWORD *v82; // rcx
  struct _DEVICE_OBJECT *v83; // rcx
  __int64 v84; // rdx
  __int64 i; // r15
  DXGADAPTER *v86; // rcx
  __int64 v87; // rax
  void *v88; // rcx
  _QWORD *v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  int Caps; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // [rsp+20h] [rbp-30h]
  char v106; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v3 + 32) = a3;
  *(_DWORD *)(v3 + 400) = 0;
  *(_QWORD *)(v3 + 404) = 0LL;
  *(_QWORD *)(v3 + 412) = 0LL;
  *(_QWORD *)(v3 + 420) = 0LL;
  v6 = 0LL;
  *(_BYTE *)(v3 + 2) = 0;
  *(_BYTE *)v3 = 0;
  PoolWithTag = 0LL;
  *(_BYTE *)(v3 + 3) = 0;
  *(_BYTE *)(v3 + 4) = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  DeviceExtension = (char *)a1->DeviceExtension;
  *(_BYTE *)(v3 + 1) = 0;
  *(_QWORD *)(v3 + 56) = v8;
  v10 = *((_QWORD *)DeviceExtension + 5);
  *(_QWORD *)(v3 + 8) = v10;
  KeEnterCriticalRegion();
  if ( DeviceExtension[451] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v11 = DpiFdoConnectInterrupt(a1);
  LODWORD(v16) = v11;
  if ( v11 == -1073741275 )
  {
    v17 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = DpiFdoStartAdapter;
    *(_QWORD *)(v17 + 32) = a1;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    if ( v11 < 0 )
      goto LABEL_100;
    *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 1;
  }
  if ( DeviceExtension[1056] == 1 )
  {
    if ( DeviceExtension[1059] == 1
      && a2
      && byte_1C0046C55
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v64, &EventProfilerEnter, v65, 8006);
      memset((void *)(v3 + 432), 0, 0x20uLL);
      *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1B0) = 18;
      x86BiosCall(16LL, v3 + 432);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v68, &EventProfilerExit, v69, 8006);
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      if ( byte_1C0046C55 )
      {
        v66 = *(_DWORD *)(v10 + 28) < 0x300Eu;
        v67 = *(_DWORD *)(v10 + 28) == 12302;
      }
      else
      {
        v66 = *(_DWORD *)(v10 + 28) < 0x2005u;
        v67 = *(_DWORD *)(v10 + 28) == 8197;
      }
      DeviceExtension[2512] ^= (DeviceExtension[2512] ^ (4 * (!v66 && !v67))) & 4;
    }
  }
  while ( 1 )
  {
    LODWORD(v16) = ExUuidCreate((UUID *)(DeviceExtension + 1400));
    if ( (int)v16 >= 0 )
      break;
    if ( (_DWORD)v16 != -1073741267 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v70[3] = DpiFdoStartAdapter;
      v70[5] = (int)v16;
      goto LABEL_88;
    }
    *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = -10000LL;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)(v3 + 40));
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 177);
  v16 = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v70[3] = DpiFdoStartAdapter;
    v70[5] = v16;
LABEL_88:
    v70[4] = 0LL;
    goto LABEL_91;
  }
  v21 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  v22 = 16387;
  v23 = *(_DWORD *)(v21 + 28);
  if ( v23 > 0x4003 )
  {
    *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 312;
    *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) = 20514;
    goto LABEL_10;
  }
  if ( v23 > 0x300E )
  {
    *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 264;
LABEL_70:
    *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) = v22;
    goto LABEL_10;
  }
  v22 = 8197;
  if ( v23 <= 0x2005 )
  {
    *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 184;
    goto LABEL_70;
  }
  *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 256;
  *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) = 12302;
LABEL_10:
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = a1;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = &DpEvalAcpiMethod;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = &DpGetDeviceInformation;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = DpIndicateChildStatus;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = &DpMapMemory;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = DpQueueDpc;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = DpQueryServices;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = DpReadDeviceSpace;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = DpSynchronizeExecution;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = DpUnmapMemory;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = DpWriteDeviceSpace;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = DpIsDevicePresent;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = DxgGetHandleDataCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = DxgGetHandleParentCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = DxgEnumHandleChildrenCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = DxgNotifyInterruptCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = DxgNotifyDpcCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = DxgMiniportQueryVidPnInterfaceCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8) = DxgMiniportQueryMonitorInterfaceCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE0) = DxgGetCaptureAddressCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE8) = DxgLogEtwEventCb;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0) = DpExcludeAdapterAccess;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF8) = DxgCreateContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = DxgDestroyContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = &DxgSetPowerComponentActiveCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) = DxgSetPowerComponentIdleCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x120) = DxgkPowerRuntimeControlRequestCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x128) = DxgkSetPowerComponentLatencyCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x130) = DxgkSetPowerComponentResidencyCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x138) = DxgkCompleteFStateTransitionCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x140) = DxgkCompletePStateTransitionCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x118) = &DpAcquirePostDisplayOwnership;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x148) = DxgkMapContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x150) = DxgkUpdateContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x158) = DxgkReserveGpuVirtualAddressRangeCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x160) = DxgkAcquireHandleDataCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x168) = DxgkReleaseHandleDataCB;
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x170) = DxgkHardwareContentProtectionTeardownCB;
  *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x190) = DxgkQueryRequiredDmaQueueEntry();
  *(_OWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x194) = *(_OWORD *)(DeviceExtension + 1400);
  *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A4) = *((_QWORD *)DeviceExtension + 177);
  qword_1C0046F38 = (__int64)KeGetCurrentThread();
  v24 = DeviceExtension + 1428;
  qword_1C0046F40 = (__int64)a1;
  started = DpiDxgkDdiStartDevice(
              v21,
              *((_QWORD *)DeviceExtension + 6),
              (int)v3 + 400,
              (int)v3 + 64,
              (__int64)(DeviceExtension + 1428),
              (__int64)(DeviceExtension + 1424));
  qword_1C0046F40 = 0LL;
  qword_1C0046F38 = 0LL;
  v16 = started;
  if ( started < 0 )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v74 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v73[3] = DpiFdoStartAdapter;
    v73[4] = *(_QWORD *)(v74 + 152);
    v73[5] = v16;
    WdLogEvent5_WdError(v73);
    if ( (_DWORD)v16 == -1071775735 )
    {
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
      if ( !DeviceExtension[1056] )
        goto LABEL_100;
      DevicePropertyString = DpiGetDevicePropertyString(
                               *((PDEVICE_OBJECT *)DeviceExtension + 19),
                               DevicePropertyHardwareID,
                               PagedPool,
                               v3 + 48);
      v80 = DevicePropertyString;
      if ( DevicePropertyString < 0 )
      {
        v82 = (_QWORD *)WdLogNewEntry5_WdError(v79);
        v82[3] = DpiFdoStartAdapter;
        v82[4] = DpiGetDevicePropertyString;
        v82[5] = v80;
        goto LABEL_99;
      }
      WdDiagNotifyUser(8LL, 5LL, 1LL, v3 + 16);
      v88 = *(void **)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      if ( v88 )
        ExFreePoolWithTag(v88, 0);
    }
    else
    {
      if ( (_DWORD)v16 != -1071774944 )
        goto LABEL_53;
      if ( DeviceExtension[1056] )
      {
        v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v75, v77);
        v89[3] = 275LL;
        v89[4] = 26LL;
        v89[5] = v74;
        v90 = (unsigned __int8)byte_1C0046C55;
        v89[7] = 0LL;
        v89[6] = v90;
        WdLogEvent5_WdCriticalError(v89);
        goto LABEL_53;
      }
    }
    goto LABEL_100;
  }
  if ( DeviceExtension[1056] )
  {
    memset(&dword_1C0046E90, 0, 0x20uLL);
    dword_1C0046EA8 = -1;
    memset(&xmmword_1C0046EB0, 0, 0x80uLL);
    dword_1C0046F30 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 358) && *v24 > 1u )
  {
    v91 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v91 + 24) = DpiFdoStartAdapter;
    *(_QWORD *)(v91 + 32) = (unsigned int)*v24;
    WdLogEvent5_WdWarning(v91);
    *v24 = 1;
  }
  v67 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *(_BYTE *)v3 = 1;
  if ( !v67 || *((_DWORD *)DeviceExtension + 5) != 2 )
    goto LABEL_48;
  v6 = DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 356) )
  {
    LODWORD(v16) = DpiFdoEnumChildDevices(a1);
    if ( (int)v16 < 0 )
    {
LABEL_100:
      v83 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
      DeviceExtension[232] = 1;
      IoInvalidateDeviceState(v83);
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        *((_DWORD *)DeviceExtension + 59) = *((_DWORD *)DeviceExtension + 60);
      if ( v6 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 1) == 1 )
          IoSetDeviceInterfaceState((PUNICODE_STRING)v6 + 93, 0);
        if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 4) == 1 )
          DpiFdoDestroyRelatedObjects(a1);
        if ( PoolWithTag )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v6 + 357); i = (unsigned int)(i + 1) )
          {
            LOBYTE(v84) = 1;
            DMgrReleaseGdiViewId(PoolWithTag[i], v84);
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        if ( (struct _DEVICE_OBJECT *)qword_1C0046C60 == a1 )
        {
          qword_1C0046C60 = 0LL;
          byte_1C0046C5C = 0;
        }
        if ( (struct _DEVICE_OBJECT *)qword_1C0046C68 == a1 )
        {
          qword_1C0046C68 = 0LL;
          byte_1C0046C5C = 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 3) == 1 )
        {
          if ( *((_QWORD *)DeviceExtension + 57) )
          {
            PoFxUnregisterDevice();
            *((_QWORD *)DeviceExtension + 57) = 0LL;
          }
          v86 = (DXGADAPTER *)*((_QWORD *)v6 + 313);
          if ( v86 )
            DXGADAPTER::Stop(v86, 0);
          DxgkReleaseAdapterReference(*((_QWORD *)v6 + 313));
          *((_QWORD *)v6 + 313) = 0LL;
        }
        if ( *((_QWORD *)v6 + 241) )
          DpiFdoDestroyChildDevices(a1);
      }
      if ( *(_BYTE *)v3 != 1 )
        goto LABEL_131;
      v87 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( !v87 )
        goto LABEL_131;
      if ( DeviceExtension[1056] )
      {
        if ( (int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1) >= 0 )
        {
LABEL_131:
          if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 2) == 1 )
            DpiFdoDisconnectInterrupt(a1);
          goto LABEL_54;
        }
        v87 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      }
      if ( v6 )
        v6[2512] &= ~4u;
      DpiDxgkDdiStopDevice(v87, *((_QWORD *)DeviceExtension + 6));
      goto LABEL_131;
    }
  }
  if ( !*v24 )
  {
LABEL_23:
    v34 = DeviceExtension + 2512;
    v35 = DxgkAddAdapter(a1, (struct _DXGK_ADAPTER_CAPS *)(DeviceExtension + 2512), v28, v29);
    v16 = v35;
    if ( v35 < 0 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v71[3] = DpiFdoStartAdapter;
      v72 = DxgkAddAdapter;
    }
    else
    {
      DxgkAcquireAdapterReference(*((DXGADAPTER **)DeviceExtension + 313));
      *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 3) = 1;
      if ( !qword_1C0046C68
        && ((DeviceExtension[2513] & 1) != 0
         || DpiHybridInternalPanelOverride() && (*v34 & 0x20) != 0 && DeviceExtension[1056] && (*v34 & 0x40) == 0) )
      {
        qword_1C0046C68 = (__int64)a1;
      }
      if ( (*v34 & 0x40) != 0 )
      {
        v38 = qword_1C0046C60;
        if ( !qword_1C0046C60 || (struct _DEVICE_OBJECT *)qword_1C0046C60 == a1 )
          qword_1C0046C60 = (__int64)a1;
        else
          *v34 &= ~0x40u;
      }
      if ( qword_1C0046C68 && qword_1C0046C60 && !byte_1C0046C5C )
      {
        byte_1C0046C5C = 1;
        *((_BYTE *)DXGGLOBAL::GetGlobal(v38, v37, v39, v40) + 513) = 1;
      }
      v41 = (*v34 & 1) != 0 || byte_1C0046C5C && (*v34 & 0x40) != 0;
      v42 = *(bool **)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      *v42 = v41;
      if ( DeviceExtension[1056] && (*v34 & 1) == 0 )
      {
        LODWORD(v16) = -1071775740;
        v81 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        v81[4] = 0LL;
        v81[3] = DpiFdoStartAdapter;
        v82 = v81;
        v81[5] = -1071775740LL;
LABEL_99:
        WdLogEvent5_WdError(v82);
        goto LABEL_100;
      }
      LODWORD(v16) = DpiFdoCreateRelatedObjects(a1, (unsigned int)*v24, PoolWithTag);
      if ( (int)v16 < 0 )
        goto LABEL_100;
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      if ( (*v34 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
      {
        MonitorInitializeAdapterDone(*((DXGADAPTER **)DeviceExtension + 313));
        DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
      }
      *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 1;
      if ( *((_DWORD *)DeviceExtension + 462) != -1 )
      {
        Caps = DpiMiracastDdiMiracastQueryCaps(DeviceExtension, v43, DeviceExtension + 1840);
        v99 = Caps;
        if ( Caps < 0 )
        {
          v100 = WdLogNewEntry5_WdEvent(v96, v95, v97, v98);
          *(_QWORD *)(v100 + 24) = DpiFdoStartAdapter;
          *(_QWORD *)(v100 + 32) = v99;
          WdLogEvent5_WdEvent(v100);
          *((_DWORD *)DeviceExtension + 462) = -1;
          memset(DeviceExtension + 1776, 0, 0x40uLL);
        }
      }
      if ( (int)DpiOpenPnpRegistryKey((__int64)a1, 2, 0x20019u, (void **)(v3 + 24)) < 0 )
      {
        v101 = WdLogNewEntry5_WdEvent(v45, v44, v46, v47);
        *(_QWORD *)(v101 + 32) = DpiOpenPnpRegistryKey;
        *(_QWORD *)(v101 + 24) = DpiFdoStartAdapter;
        WdLogEvent5_WdEvent(v101);
      }
      else
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v3 + 384), L"MiracastDriverName");
        if ( DxgkRetrieveStringFromRegistry(
               *(HANDLE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
               (PUNICODE_STRING)(v3 + 384),
               (__int64)(DeviceExtension + 3280)) < 0 )
        {
          v52 = WdLogNewEntry5_WdEvent(v49, v48, v50, v51);
          *(_QWORD *)(v52 + 32) = DxgkRetrieveStringFromRegistry;
          *(_QWORD *)(v52 + 24) = DpiFdoStartAdapter;
          WdLogEvent5_WdEvent(v52);
        }
        ZwClose(*(HANDLE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
      }
      v55 = *((_QWORD *)DeviceExtension + 412);
      if ( v55 )
      {
        if ( *(_QWORD *)(v55 + 48) && *(_BYTE *)v55 )
        {
          *(_BYTE *)v55 = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            v102 = *((_QWORD *)DeviceExtension + 412);
            LODWORD(v105) = *(unsigned __int8 *)(v102 + 2);
            Template_pt(*(unsigned __int8 *)(v102 + 2), v53, v54, a1, v105);
          }
          v103 = *((_QWORD *)DeviceExtension + 412);
          LOBYTE(v53) = *(_BYTE *)(v103 + 2);
          (*(void (__fastcall **)(_QWORD, __int64))(v103 + 48))(*(_QWORD *)(v103 + 16), v53);
        }
        v104 = *((_QWORD *)DeviceExtension + 412);
        if ( *(_QWORD *)(v104 + 56) && *(_BYTE *)(v104 + 1) )
        {
          *(_BYTE *)(v104 + 1) = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v105) = *(_DWORD *)(*((_QWORD *)DeviceExtension + 412) + 4LL);
            Template_xq((unsigned int)v105, &EventDpiFdoThermalPassiveCooling, v54, a1, v105);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DeviceExtension + 412) + 56LL))(
            *(_QWORD *)(*((_QWORD *)DeviceExtension + 412) + 16LL),
            *(unsigned int *)(*((_QWORD *)DeviceExtension + 412) + 4LL));
        }
      }
      v56 = !DeviceExtension[1058] || !DeviceExtension[448];
      v57 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 93, v56);
      v16 = v57;
      if ( v57 >= 0 )
      {
        *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
LABEL_48:
        v67 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
        *((_DWORD *)DeviceExtension + 60) = *((_DWORD *)DeviceExtension + 59);
        *((_DWORD *)DeviceExtension + 59) = 2;
        if ( v67 && *((_DWORD *)DeviceExtension + 5) == 2 )
        {
          v6 = DeviceExtension;
          if ( DeviceExtension[449] )
            DXGADAPTER::StartRuntimePowerManagement(*((DXGADAPTER **)DeviceExtension + 313));
          DpiBrightnessStartDevice(a1);
        }
        goto LABEL_53;
      }
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v58);
      v72 = IoSetDeviceInterfaceState;
      v71[3] = DpiFdoStartAdapter;
    }
    v71[4] = v72;
    v70 = v71;
    v71[5] = v16;
LABEL_91:
    WdLogEvent5_WdError(v70);
    goto LABEL_53;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * (unsigned int)*v24, 0x74727044u);
  if ( !PoolWithTag )
  {
    LODWORD(v16) = -1073741670;
    v92 = (_QWORD *)WdLogNewEntry5_WdLowResource(v30);
    v92[3] = DpiFdoStartAdapter;
    v92[4] = ExAllocatePoolWithTag;
    v92[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v92);
    goto LABEL_100;
  }
  v31 = 0LL;
  if ( !*v24 )
    goto LABEL_23;
  while ( 1 )
  {
    v32 = DMgrAcquireGdiViewId(&PoolWithTag[v31]);
    v16 = v32;
    if ( v32 < 0 )
      break;
    v31 = (unsigned int)(v31 + 1);
    if ( (unsigned int)v31 >= *v24 )
      goto LABEL_23;
  }
  *v24 = v31;
  v93 = (_QWORD *)WdLogNewEntry5_WdError(v33);
  v93[3] = (unsigned int)v31;
  v93[4] = a1;
  v93[5] = v16;
  WdLogEvent5_WdError(v93);
  if ( (_DWORD)v31 )
    goto LABEL_23;
LABEL_53:
  if ( (int)v16 < 0 )
    goto LABEL_100;
LABEL_54:
  if ( DeviceExtension[451] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  memset((void *)(v3 + 464), 0, 0x40uLL);
  v59 = DxgkDiagCalcDuration1us((_QWORD *)(v3 + 56));
  DxgkDiagInitializeCodePointPacket((_DWORD *)(v3 + 464), 35, (unsigned int)a1 & 0xFFFF00, v59, v16);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)(v3 + 464), v60, v61, v62);
  return (unsigned int)v16;
}
