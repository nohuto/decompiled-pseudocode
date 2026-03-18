/*
 * XREFs of DpiFdoStartAdapter @ 0x1C00D1400
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C01745B0 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DxgkDiagCalcDuration1us @ 0x1C000CF1C (DxgkDiagCalcDuration1us.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     DpiHybridInternalPanelOverride @ 0x1C000DEC4 (DpiHybridInternalPanelOverride.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     VidSchQueryRequiredDmaQueueEntry @ 0x1C0012568 (VidSchQueryRequiredDmaQueueEntry.c)
 *     Template_pt @ 0x1C00236C8 (Template_pt.c)
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
 *     DpiOpenPnpRegistryKey @ 0x1C005D7E0 (DpiOpenPnpRegistryKey.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterReference @ 0x1C00B97DC (DxgkAcquireAdapterReference.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00CE9F0 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoEnumChildDevices @ 0x1C00D0530 (DpiFdoEnumChildDevices.c)
 *     DpiFdoConnectInterrupt @ 0x1C00D11C0 (DpiFdoConnectInterrupt.c)
 *     DpiDxgkDdiStartDevice @ 0x1C00D1348 (DpiDxgkDdiStartDevice.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00D2338 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1C00D4060 (DpiGetDevicePropertyString.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00D4150 (DpiFdoCreateRelatedObjects.c)
 *     DxgkAddAdapter @ 0x1C00D4230 (DxgkAddAdapter.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C00D5820 (DxgkRetrieveStringFromRegistry.c)
 *     MonitorInitializeAdapterDone @ 0x1C00DE58C (MonitorInitializeAdapterDone.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C012F3F0 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXE@Z @ 0x1C012F81C (-Stop@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkReleaseAdapterReference @ 0x1C0132318 (DxgkReleaseAdapterReference.c)
 *     DpiFdoDestroyChildDevices @ 0x1C016B958 (DpiFdoDestroyChildDevices.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C016BA24 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C016BABC (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C016D220 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C016D90C (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiDxgkDdiStopDevice @ 0x1C017510C (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(struct _DEVICE_OBJECT *a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  char *v6; // r15
  char *PoolWithTag; // r13
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
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // cf
  bool v23; // zf
  NTSTATUS i; // eax
  __int64 v25; // rcx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rdi
  int v30; // ecx
  unsigned int v31; // eax
  _DWORD *v32; // r12
  int started; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int DevicePropertyString; // eax
  __int64 v44; // rcx
  __int64 v45; // r14
  _QWORD *v46; // rcx
  void *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  struct _DEVICE_OBJECT *v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  unsigned int j; // r14d
  DXGADAPTER *v59; // rcx
  __int64 v60; // rax
  ULONGLONG v61; // rax
  int v62; // eax
  __int64 v64; // r14
  int v65; // eax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _BYTE *v68; // r14
  int v69; // eax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rcx
  bool v73; // al
  bool *v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  int Caps; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  BOOLEAN v100; // dl
  NTSTATUS v101; // eax
  __int64 v102; // rcx
  _QWORD *v103; // rax
  int v104; // eax
  __int64 v105; // [rsp+20h] [rbp-30h]
  char v106; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v3 + 48) = a3;
  *(_DWORD *)(v3 + 528) = 0;
  *(_QWORD *)(v3 + 532) = 0LL;
  *(_QWORD *)(v3 + 540) = 0LL;
  *(_QWORD *)(v3 + 548) = 0LL;
  v6 = 0LL;
  *(_BYTE *)(v3 + 1) = 0;
  *(_BYTE *)v3 = 0;
  PoolWithTag = 0LL;
  *(_BYTE *)(v3 + 4) = 0;
  *(_BYTE *)(v3 + 2) = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  DeviceExtension = (char *)a1->DeviceExtension;
  *(_BYTE *)(v3 + 3) = 0;
  *(_QWORD *)(v3 + 40) = v8;
  v10 = *((_QWORD *)DeviceExtension + 5);
  *(_QWORD *)(v3 + 16) = v10;
  KeEnterCriticalRegion();
  if ( DeviceExtension[483] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    *((_DWORD *)DeviceExtension + 656) = 0;
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
      goto LABEL_67;
    *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
  }
  if ( DeviceExtension[1088] == 1 )
  {
    if ( DeviceExtension[1092] == 1 && a2 && byte_1C0046CD5 && !DpiFdoIsCompatibleWithHighResolutionBoot((__int64)a1) )
    {
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v18, &EventProfilerEnter, v19, 8006);
      memset((void *)(v3 + 560), 0, 0x20uLL);
      *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x230) = 18;
      x86BiosCall(16LL, v3 + 560);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v20, &EventProfilerExit, v21, 8006);
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      if ( byte_1C0046CD5 )
      {
        v22 = *(_DWORD *)(v10 + 28) < 0x300Eu;
        v23 = *(_DWORD *)(v10 + 28) == 12302;
      }
      else
      {
        v22 = *(_DWORD *)(v10 + 28) < 0x2005u;
        v23 = *(_DWORD *)(v10 + 28) == 8197;
      }
      DeviceExtension[2552] ^= (DeviceExtension[2552] ^ (4 * (!v22 && !v23))) & 4;
    }
  }
  for ( i = ExUuidCreate((UUID *)DeviceExtension + 90); ; i = ExUuidCreate((UUID *)DeviceExtension + 90) )
  {
    LODWORD(v16) = i;
    if ( i >= 0 )
    {
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 182);
      v16 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
        v28[3] = DpiFdoStartAdapter;
        v28[5] = v16;
        goto LABEL_33;
      }
      v29 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      v30 = 16387;
      v31 = *(_DWORD *)(v29 + 28);
      if ( v31 > 0x4003 )
      {
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 312;
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54) = 20515;
        goto LABEL_44;
      }
      if ( v31 <= 0x300E )
      {
        v30 = 8197;
        if ( v31 > 0x2005 )
        {
          *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 256;
          *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54) = 12302;
          goto LABEL_44;
        }
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 184;
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 264;
      }
      *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54) = v30;
LABEL_44:
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = a1;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = &DpEvalAcpiMethod;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = &DpGetDeviceInformation;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = DpIndicateChildStatus;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = &DpMapMemory;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = DpQueueDpc;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = DpQueryServices;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = DpReadDeviceSpace;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = DpSynchronizeExecution;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = DpUnmapMemory;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = DpWriteDeviceSpace;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = DpIsDevicePresent;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = DxgGetHandleDataCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = DxgGetHandleParentCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = DxgEnumHandleChildrenCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = DxgNotifyInterruptCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8) = DxgNotifyDpcCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE0) = DxgMiniportQueryVidPnInterfaceCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE8) = DxgMiniportQueryMonitorInterfaceCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0) = DxgGetCaptureAddressCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF8) = DxgLogEtwEventCb;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = DpExcludeAdapterAccess;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = DxgCreateContextAllocationCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) = DxgDestroyContextAllocationCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x118) = &DxgSetPowerComponentActiveCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x120) = DxgSetPowerComponentIdleCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x130) = DxgkPowerRuntimeControlRequestCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x138) = DxgkSetPowerComponentLatencyCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x140) = DxgkSetPowerComponentResidencyCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x148) = DxgkCompleteFStateTransitionCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x150) = DxgkCompletePStateTransitionCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x128) = &DpAcquirePostDisplayOwnership;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x158) = DxgkMapContextAllocationCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x160) = DxgkUpdateContextAllocationCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x168) = DxgkReserveGpuVirtualAddressRangeCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x170) = DxgkAcquireHandleDataCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x178) = DxgkReleaseHandleDataCB;
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x180) = DxgkHardwareContentProtectionTeardownCB;
      *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x210) = VidSchQueryRequiredDmaQueueEntry();
      *(_OWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x214) = *((_OWORD *)DeviceExtension + 90);
      *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x224) = *((_QWORD *)DeviceExtension + 182);
      qword_1C0046FB8 = (__int64)KeGetCurrentThread();
      v32 = DeviceExtension + 1468;
      qword_1C0046FC0 = (__int64)a1;
      started = DpiDxgkDdiStartDevice(
                  v29,
                  *((_QWORD *)DeviceExtension + 6),
                  (unsigned int *)(v3 + 528),
                  v3 + 80,
                  (_DWORD *)DeviceExtension + 367,
                  (_DWORD *)DeviceExtension + 366);
      qword_1C0046FC0 = 0LL;
      qword_1C0046FB8 = 0LL;
      v16 = started;
      if ( started < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v35);
        v39 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v38[3] = DpiFdoStartAdapter;
        v38[4] = *(_QWORD *)(v39 + 152);
        v38[5] = v16;
        WdLogEvent5_WdError(v38);
        if ( (_DWORD)v16 != -1071775735 )
        {
          if ( (_DWORD)v16 != -1071774944 )
            goto LABEL_115;
          if ( DeviceExtension[1088] )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40, v42);
            v48[5] = v39;
            v48[3] = 275LL;
            v48[4] = 26LL;
            v48[6] = (unsigned __int8)byte_1C0046CD5;
            v48[7] = 0LL;
            WdLogEvent5_WdCriticalError(v48);
            goto LABEL_115;
          }
          goto LABEL_67;
        }
        *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
        if ( !DeviceExtension[1088] )
          goto LABEL_67;
        DevicePropertyString = DpiGetDevicePropertyString(
                                 *((PDEVICE_OBJECT *)DeviceExtension + 19),
                                 DevicePropertyHardwareID,
                                 PagedPool,
                                 v3 + 56);
        v45 = DevicePropertyString;
        if ( DevicePropertyString >= 0 )
        {
          WdDiagNotifyUser(8LL, 5LL, 1LL, v3 + 24);
          v47 = *(void **)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          if ( v47 )
            ExFreePoolWithTag(v47, 0);
          goto LABEL_67;
        }
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v44);
        v46[3] = DpiFdoStartAdapter;
        v46[4] = DpiGetDevicePropertyString;
        v46[5] = v45;
LABEL_49:
        WdLogEvent5_WdError(v46);
        goto LABEL_67;
      }
      if ( DeviceExtension[1088] )
      {
        memset(dword_1C0046F10, 0, 0x20uLL);
        dword_1C0046F28 = -1;
        memset(&xmmword_1C0046F30, 0, 0x80uLL);
        dword_1C0046FB0 = 3;
      }
      if ( !*((_DWORD *)DeviceExtension + 368) && *v32 > 1u )
      {
        v49 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
        *(_QWORD *)(v49 + 24) = DpiFdoStartAdapter;
        *(_QWORD *)(v49 + 32) = (unsigned int)*v32;
        WdLogEvent5_WdWarning(v49);
        *v32 = 1;
      }
      v23 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      *(_BYTE *)v3 = 1;
      if ( v23 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v6 = DeviceExtension;
        if ( *((_DWORD *)DeviceExtension + 366) )
        {
          LODWORD(v16) = DpiFdoEnumChildDevices((__int64)a1);
          if ( (int)v16 < 0 )
            goto LABEL_67;
        }
        if ( *v32 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * (unsigned int)*v32, 0x74727044u);
          if ( !PoolWithTag )
          {
            LODWORD(v16) = -1073741670;
            v54 = (_QWORD *)WdLogNewEntry5_WdLowResource(v51, v50, v52, v53);
            v54[3] = DpiFdoStartAdapter;
            v54[4] = ExAllocatePoolWithTag;
            v54[5] = -1073741670LL;
            WdLogEvent5_WdLowResource(v54);
            goto LABEL_67;
          }
          v64 = 0LL;
          if ( *v32 )
          {
            while ( 1 )
            {
              v65 = DMgrAcquireGdiViewId(&PoolWithTag[4 * v64]);
              v16 = v65;
              if ( v65 < 0 )
                break;
              v64 = (unsigned int)(v64 + 1);
              if ( (unsigned int)v64 >= *v32 )
                goto LABEL_113;
            }
            *v32 = v64;
            v67 = (_QWORD *)WdLogNewEntry5_WdError(v66);
            v67[3] = (unsigned int)v64;
            v67[4] = a1;
            v67[5] = v16;
            WdLogEvent5_WdError(v67);
            if ( !(_DWORD)v64 )
              goto LABEL_115;
          }
        }
LABEL_113:
        v68 = DeviceExtension + 2552;
        v69 = DxgkAddAdapter(a1, (struct _DXGK_ADAPTER_CAPS *)(DeviceExtension + 2552));
        v16 = v69;
        if ( v69 < 0 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdError(v70);
          v71[3] = DpiFdoStartAdapter;
          v71[4] = DxgkAddAdapter;
          v71[5] = v16;
          WdLogEvent5_WdError(v71);
          goto LABEL_115;
        }
        DxgkAcquireAdapterReference(*((_QWORD *)DeviceExtension + 318));
        *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 1;
        if ( !qword_1C0046CE8
          && ((DeviceExtension[2553] & 1) != 0
           || DpiHybridInternalPanelOverride() && (*v68 & 0x20) != 0 && DeviceExtension[1088] && (*v68 & 0x40) == 0) )
        {
          qword_1C0046CE8 = (__int64)a1;
        }
        if ( (*v68 & 0x40) != 0 )
        {
          v72 = qword_1C0046CE0;
          if ( !qword_1C0046CE0 || (struct _DEVICE_OBJECT *)qword_1C0046CE0 == a1 )
            qword_1C0046CE0 = (__int64)a1;
          else
            *v68 &= ~0x40u;
        }
        if ( qword_1C0046CE8 && qword_1C0046CE0 && !byte_1C0046CDC )
        {
          byte_1C0046CDC = 1;
          *((_BYTE *)DXGGLOBAL::GetGlobal(v72) + 657) = 1;
        }
        v73 = (*v68 & 1) != 0 || byte_1C0046CDC && (*v68 & 0x40) != 0;
        v74 = *(bool **)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
        *v74 = v73;
        if ( DeviceExtension[1088] && (*v68 & 1) == 0 )
        {
          LODWORD(v16) = -1071775740;
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v74);
          v75[3] = DpiFdoStartAdapter;
          v46 = v75;
          v75[4] = 0LL;
          v75[5] = -1071775740LL;
          goto LABEL_49;
        }
        LODWORD(v16) = DpiFdoCreateRelatedObjects(a1, (unsigned int)*v32, PoolWithTag);
        if ( (int)v16 < 0 )
          goto LABEL_67;
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = 0LL;
        }
        if ( (*v68 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
        {
          MonitorInitializeAdapterDone(*((DXGADAPTER **)DeviceExtension + 318));
          DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
        }
        v23 = *((_DWORD *)DeviceExtension + 472) == -1;
        *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 1;
        if ( !v23 )
        {
          Caps = DpiMiracastDdiMiracastQueryCaps(DeviceExtension, v76, DeviceExtension + 1880);
          v82 = Caps;
          if ( Caps < 0 )
          {
            v83 = WdLogNewEntry5_WdEvent(v79, v78, v80, v81);
            *(_QWORD *)(v83 + 24) = DpiFdoStartAdapter;
            *(_QWORD *)(v83 + 32) = v82;
            WdLogEvent5_WdEvent(v83);
            *((_DWORD *)DeviceExtension + 472) = -1;
            memset(DeviceExtension + 1816, 0, 0x40uLL);
          }
        }
        if ( (int)DpiOpenPnpRegistryKey((__int64)a1, 2, 0x20019u, (void **)(v3 + 32)) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v3 + 400), L"MiracastDriverName");
          if ( (int)DxgkRetrieveStringFromRegistry(
                      *(HANDLE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                      (PUNICODE_STRING)(v3 + 400)) < 0 )
          {
            v95 = WdLogNewEntry5_WdEvent(v92, v91, v93, v94);
            *(_QWORD *)(v95 + 32) = DxgkRetrieveStringFromRegistry;
            *(_QWORD *)(v95 + 24) = DpiFdoStartAdapter;
            WdLogEvent5_WdEvent(v95);
          }
          ZwClose(*(HANDLE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
        }
        else
        {
          v88 = WdLogNewEntry5_WdEvent(v85, v84, v86, v87);
          *(_QWORD *)(v88 + 32) = DpiOpenPnpRegistryKey;
          *(_QWORD *)(v88 + 24) = DpiFdoStartAdapter;
          WdLogEvent5_WdEvent(v88);
        }
        v96 = *((_QWORD *)DeviceExtension + 420);
        if ( v96 )
        {
          if ( *(_QWORD *)(v96 + 48) && *(_BYTE *)v96 )
          {
            *(_BYTE *)v96 = 0;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            {
              v97 = *((_QWORD *)DeviceExtension + 420);
              LODWORD(v105) = *(unsigned __int8 *)(v97 + 2);
              Template_pt(*(unsigned __int8 *)(v97 + 2), v89, v90, a1, v105);
            }
            v98 = *((_QWORD *)DeviceExtension + 420);
            LOBYTE(v89) = *(_BYTE *)(v98 + 2);
            (*(void (__fastcall **)(_QWORD, __int64))(v98 + 48))(*(_QWORD *)(v98 + 16), v89);
          }
          v99 = *((_QWORD *)DeviceExtension + 420);
          if ( *(_QWORD *)(v99 + 56) && *(_BYTE *)(v99 + 1) )
          {
            *(_BYTE *)(v99 + 1) = 0;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            {
              LODWORD(v105) = *(_DWORD *)(*((_QWORD *)DeviceExtension + 420) + 4LL);
              Template_xq((unsigned int)v105, &EventDpiFdoThermalPassiveCooling, v90, a1, v105);
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DeviceExtension + 420) + 56LL))(
              *(_QWORD *)(*((_QWORD *)DeviceExtension + 420) + 16LL),
              *(unsigned int *)(*((_QWORD *)DeviceExtension + 420) + 4LL));
          }
        }
        if ( !DeviceExtension[1091] || (v100 = 0, !DeviceExtension[480]) )
          v100 = 1;
        v101 = IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 1528), v100);
        v16 = v101;
        if ( v101 < 0 )
        {
          v103 = (_QWORD *)WdLogNewEntry5_WdError(v102);
          v103[4] = IoSetDeviceInterfaceState;
          v28 = v103;
          v103[3] = DpiFdoStartAdapter;
          v103[5] = v16;
          goto LABEL_34;
        }
        *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 3) = 1;
      }
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v104 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      v23 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      *((_DWORD *)DeviceExtension + 60) = v104;
      *((_DWORD *)DeviceExtension + 59) = 2;
      if ( v23 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v6 = DeviceExtension;
        if ( DeviceExtension[481] )
          DXGADAPTER::StartRuntimePowerManagement(*((DXGADAPTER **)DeviceExtension + 318));
        DpiBrightnessStartDevice(a1);
      }
      goto LABEL_115;
    }
    if ( i != -1073741267 )
      break;
    *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = -10000LL;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)(v3 + 64));
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v25);
  v28[3] = DpiFdoStartAdapter;
  v28[5] = (int)v16;
LABEL_33:
  v28[4] = 0LL;
LABEL_34:
  WdLogEvent5_WdError(v28);
LABEL_115:
  if ( (int)v16 < 0 )
  {
LABEL_67:
    v55 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v55);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v57 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v57;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v6 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 3) == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v6 + 1528), 0);
      if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 2) == 1 )
        DpiFdoDestroyRelatedObjects(a1);
      if ( PoolWithTag )
      {
        for ( j = 0; j < *((_DWORD *)v6 + 367); ++j )
        {
          LOBYTE(v56) = 1;
          DMgrReleaseGdiViewId(*(unsigned int *)&PoolWithTag[4 * j], v56);
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C0046CE0 == a1 )
      {
        qword_1C0046CE0 = 0LL;
        byte_1C0046CDC = 0;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C0046CE8 == a1 )
      {
        byte_1C0046CDC = 0;
        qword_1C0046CE8 = 0LL;
      }
      if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 4) == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*((_QWORD *)v6 + 318) + 2032LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v59 = (DXGADAPTER *)*((_QWORD *)v6 + 318);
        if ( v59 )
          DXGADAPTER::Stop(v59, 0);
        DxgkReleaseAdapterReference(*((_QWORD *)v6 + 318));
        *((_QWORD *)v6 + 318) = 0LL;
      }
      if ( *((_QWORD *)v6 + 246) )
        DpiFdoDestroyChildDevices(a1);
    }
    if ( *(_BYTE *)v3 == 1 )
    {
      v60 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      if ( v60 )
      {
        if ( !DeviceExtension[1088] )
          goto LABEL_95;
        if ( (int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1) < 0 )
        {
          v60 = *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
LABEL_95:
          if ( v6 )
            v6[2552] &= ~4u;
          DpiDxgkDdiStopDevice(v60, *((_QWORD *)DeviceExtension + 6));
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 1) == 1 )
      DpiFdoDisconnectInterrupt(a1);
  }
  if ( DeviceExtension[1091] )
  {
    if ( DeviceExtension[1088] )
    {
      memset((void *)(v3 + 656), 0, 0x11CuLL);
      *(_BYTE *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3AA) = 1;
      v61 = VerSetConditionMask(0LL, 0x80u, 1u);
      if ( RtlVerifyVersionInfo((PRTL_OSVERSIONINFOEXW)(v3 + 656), 0x80u, v61) >= 0 )
      {
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
        *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1B0) = L"BasicDisplayUserNotified";
        *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A0) = 0LL;
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A8) = 288;
        *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1B8) = ((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 8;
        *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C8) = ((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 8;
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C0) = 67108868;
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D0) = 4;
        *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D8) = 0LL;
        *(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1E0) = 0;
        *(_QWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1E8) = 0LL;
        memset((void *)(v3 + 496), 0, 0x20uLL);
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", v3 + 416, 0LL, 0LL);
        if ( !*(_DWORD *)(((unsigned __int64)&v106 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
          WdDiagNotifyUser(0LL, 8LL, 0LL, 0LL);
      }
    }
  }
  if ( DeviceExtension[483] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  memset((void *)(v3 + 592), 0, 0x40uLL);
  v62 = DxgkDiagCalcDuration1us((_QWORD *)(v3 + 40));
  DxgkDiagInitializeCodePointPacket((_DWORD *)(v3 + 592), 35, (unsigned int)a1 & 0xFFFF00, v62, v16);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)(v3 + 592));
  return (unsigned int)v16;
}
