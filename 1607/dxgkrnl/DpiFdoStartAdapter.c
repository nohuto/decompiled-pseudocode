/*
 * XREFs of DpiFdoStartAdapter @ 0x1C00E981C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiLdaStartAdapterInChain @ 0x1C019DF8C (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C000BB54 (DxgkDiagCalcDuration1us.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiHybridInternalPanelOverride @ 0x1C000F46C (DpiHybridInternalPanelOverride.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 *     Template_pt @ 0x1C002A868 (Template_pt.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00D91F0 (DpiOpenPnpRegistryKey.c)
 *     DxgkQueryRequiredDmaQueueEntry @ 0x1C00DBBD8 (DxgkQueryRequiredDmaQueueEntry.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C00E8AD0 (DxgkRetrieveStringFromRegistry.c)
 *     DxgkAddAdapter @ 0x1C00E97BC (DxgkAddAdapter.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00EA23C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C00EBA80 (DpiQueryMiniportInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C00EBFE8 (DpiGetDevicePropertyString.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00EC0D8 (DpiFdoCreateRelatedObjects.c)
 *     DpiDxgkDdiStartDevice @ 0x1C00EC1B0 (DpiDxgkDdiStartDevice.c)
 *     DpiFdoConnectInterrupt @ 0x1C00EC25C (DpiFdoConnectInterrupt.c)
 *     MonitorInitializeAdapterDone @ 0x1C00F62CC (MonitorInitializeAdapterDone.c)
 *     DpiFdoEnumChildDevices @ 0x1C00F6D44 (DpiFdoEnumChildDevices.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C00FCA80 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C01467A4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01468D0 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0149F44 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     LPMDisplayRegisterInternalDisplay @ 0x1C016B548 (LPMDisplayRegisterInternalDisplay.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C01936E4 (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoDestroyChildDevices @ 0x1C01939E8 (DpiFdoDestroyChildDevices.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0193AB4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C0193B5C (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C0196084 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C01970CC (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiDxgkDdiStopDevice @ 0x1C019EABC (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  char *v9; // rdi
  __int64 v10; // rax
  char *DeviceExtension; // r14
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v19; // rcx
  int v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // r12
  __int64 v23; // r13
  int started; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  char *PoolWithTag; // rax
  __int64 v31; // rcx
  char *v32; // r13
  unsigned int v33; // r12d
  int v34; // eax
  __int64 v35; // rcx
  _BYTE *v36; // r12
  int v37; // eax
  __int64 v38; // rax
  bool v39; // al
  bool *v40; // rcx
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  BOOLEAN v50; // dl
  NTSTATUS v51; // eax
  int v52; // eax
  int v53; // eax
  unsigned int v54; // ecx
  char v55; // dl
  unsigned int v56; // edx
  unsigned int v57; // ebx
  struct _DXGK_DIAG_HEADER *v58; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  bool v62; // cf
  bool v63; // zf
  __int64 (__fastcall *v64)(_QWORD, _QWORD, __int64); // rax
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  int DevicePropertyString; // eax
  void *v74; // rcx
  struct _DEVICE_OBJECT *v75; // rcx
  __int64 v76; // rdx
  int v77; // eax
  unsigned int *v78; // r13
  unsigned int i; // r12d
  DXGADAPTER *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  int Caps; // eax
  __int64 v90; // rcx
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  int SecurityDescriptorForGpuVirtualization; // eax
  __int64 v98; // rcx
  __int64 v99; // rsi
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rax
  NTSTATUS v105; // eax
  NTSTATUS v106; // eax
  NTSTATUS v107; // eax
  NTSTATUS v108; // eax
  ULONGLONG v109; // rax
  __int64 v110; // rcx
  __int64 (__fastcall *v111)(__int64, _QWORD); // rax
  int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // r12
  __int64 v115; // rax
  __int64 (__fastcall *v116)(_QWORD, unsigned __int64); // rax
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // r12
  __int64 v120; // rax
  int v121; // eax
  unsigned __int64 v122; // [rsp+20h] [rbp-30h]
  char v123; // [rsp+50h] [rbp+0h] BYREF

  v6 = (unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v6 + 576) = 0;
  *(_QWORD *)(v6 + 580) = 0LL;
  *(_QWORD *)(v6 + 588) = 0LL;
  *(_QWORD *)(v6 + 596) = 0LL;
  v9 = 0LL;
  *(_QWORD *)(v6 + 16) = a4;
  *(_QWORD *)(v6 + 88) = a3;
  *(_BYTE *)(v6 + 8) = 0;
  *(_BYTE *)(v6 + 7) = 0;
  v10 = MEMORY[0xFFFFF78000000320];
  DeviceExtension = (char *)a1->DeviceExtension;
  *(_BYTE *)(v6 + 6) = 0;
  *(_BYTE *)(v6 + 5) = 0;
  *(_BYTE *)v6 = 0;
  v12 = *((_QWORD *)DeviceExtension + 5);
  *(_QWORD *)(v6 + 24) = v12;
  *(_BYTE *)(v6 + 1) = 0;
  *(_BYTE *)(v6 + 2) = 0;
  *(_BYTE *)(v6 + 3) = 0;
  *(_BYTE *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 64) = v10;
  KeEnterCriticalRegion();
  if ( DeviceExtension[483] )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = DeviceExtension;
    DpiQueryMiniportInterface(
      *((_QWORD *)DeviceExtension + 3),
      (unsigned int)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
      96,
      1);
    if ( a6 )
    {
      v64 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
      if ( v64 )
      {
        v65 = v64(*((_QWORD *)DeviceExtension + 126), a5, a6);
        v15 = v65;
        if ( v65 < 0 )
          goto LABEL_94;
      }
    }
    *((_DWORD *)DeviceExtension + 942) = 0;
  }
  v13 = DpiFdoConnectInterrupt(a1);
  LODWORD(v15) = v13;
  if ( v13 == -1073741275 )
  {
    v16 = WdLogNewEntry5_WdEvent(v14);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdEvent(v16);
  }
  else
  {
    if ( v13 < 0 )
      goto LABEL_117;
    *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
  }
  if ( DeviceExtension[1136] == 1 )
  {
    if ( DeviceExtension[1140] == 1
      && a2
      && byte_1C0056E95
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v60, &EventProfilerEnter, v61, 8006);
      memset((void *)(v6 + 752), 0, 0x20uLL);
      *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2F0) = 18;
      x86BiosCall(16LL, v6 + 752);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v67, &EventProfilerExit, v68, 8006);
    }
    if ( v9 )
    {
      if ( byte_1C0056E95 )
      {
        v62 = *(_DWORD *)(v12 + 28) < 0x300Eu;
        v63 = *(_DWORD *)(v12 + 28) == 12302;
      }
      else
      {
        v62 = *(_DWORD *)(v12 + 28) < 0x2005u;
        v63 = *(_DWORD *)(v12 + 28) == 8197;
      }
      v9[3696] ^= (v9[3696] ^ (4 * (!v62 && !v63))) & 4;
    }
  }
  while ( 1 )
  {
    LODWORD(v15) = ExUuidCreate((UUID *)(DeviceExtension + 2520));
    if ( (int)v15 >= 0 )
      break;
    if ( (_DWORD)v15 != -1073741267 )
    {
      v66 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v66 + 24) = (int)v15;
      goto LABEL_96;
    }
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = -10000LL;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)(v6 + 80));
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 317);
  v15 = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
    goto LABEL_94;
  v20 = 16387;
  v21 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) + 28LL);
  if ( v21 > 0x4003 )
  {
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 328;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74) = 24579;
    goto LABEL_14;
  }
  if ( v21 <= 0x300E )
  {
    v20 = 8197;
    if ( v21 > 0x2005 )
    {
      *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 256;
      *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74) = 12302;
      goto LABEL_14;
    }
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 184;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = 264;
  }
  *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74) = v20;
LABEL_14:
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = a1;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = &DpEvalAcpiMethod;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = &DpGetDeviceInformation;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = DpIndicateChildStatus;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = &DpMapMemory;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = DpQueueDpc;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = DpQueryServices;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = DpReadDeviceSpace;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = DpSynchronizeExecution;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = DpUnmapMemory;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = DpWriteDeviceSpace;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = DpIsDevicePresent;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8) = DxgGetHandleDataCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE0) = DxgGetHandleParentCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE8) = DxgEnumHandleChildrenCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0) = DxgNotifyInterruptCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF8) = DxgNotifyDpcCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = DxgMiniportQueryVidPnInterfaceCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = DxgMiniportQueryMonitorInterfaceCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) = DxgGetCaptureAddressCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x118) = DxgLogEtwEventCb;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x120) = DpExcludeAdapterAccess;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x128) = DxgCreateContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x130) = DxgDestroyContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x138) = &DxgSetPowerComponentActiveCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x140) = DxgSetPowerComponentIdleCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x150) = DxgkPowerRuntimeControlRequestCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x158) = DxgkSetPowerComponentLatencyCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x160) = DxgkSetPowerComponentResidencyCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x168) = DxgkCompleteFStateTransitionCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x170) = DxgkCompletePStateTransitionCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x148) = &DpAcquirePostDisplayOwnership;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x178) = DxgkMapContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x180) = DxgkUpdateContextAllocationCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x188) = DxgkReserveGpuVirtualAddressRangeCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x190) = DxgkAcquireHandleDataCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x198) = DxgkReleaseHandleDataCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A0) = DxgkHardwareContentProtectionTeardownCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A8) = DxgkMultiPlaneOverlayDisabledCB;
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1B0) = DxgkMitigatedRangeUpdateCB;
  *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x240) = DxgkQueryRequiredDmaQueueEntry();
  v22 = DeviceExtension + 2548;
  *(_OWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x244) = *(_OWORD *)(DeviceExtension + 2520);
  v23 = *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x254) = *((_QWORD *)DeviceExtension + 317);
  qword_1C0057178 = (__int64)KeGetCurrentThread();
  qword_1C0057180 = (__int64)a1;
  started = DpiDxgkDdiStartDevice(
              v23,
              *((_QWORD *)DeviceExtension + 6),
              (int)v6 + 576,
              (int)v6 + 112,
              (__int64)(DeviceExtension + 2548),
              (__int64)(DeviceExtension + 2544));
  v15 = started;
  qword_1C0057180 = 0LL;
  qword_1C0057178 = 0LL;
  if ( started < 0 )
  {
    v69 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v69 + 24) = *(_QWORD *)(v23 + 152);
    *(_QWORD *)(v69 + 32) = v15;
    WdLogEvent5_WdError(v69);
    if ( (_DWORD)v15 != -1071775735 )
    {
      if ( (_DWORD)v15 == -1071774944 )
      {
        if ( !DeviceExtension[1136] )
          goto LABEL_117;
        v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v71, v70, v72);
        v84[3] = 275LL;
        v84[4] = 26LL;
        v84[5] = v23;
        v84[6] = (unsigned __int8)byte_1C0056E95;
        v84[7] = 0LL;
        WdLogEvent5_WdCriticalError(v84);
      }
      goto LABEL_62;
    }
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
    if ( !DeviceExtension[1136] )
      goto LABEL_117;
    DevicePropertyString = DpiGetDevicePropertyString(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             DevicePropertyHardwareID,
                             PagedPool,
                             v6 + 72);
    v82 = DevicePropertyString;
    if ( DevicePropertyString >= 0 )
    {
      WdDiagNotifyUser(8LL, 5LL, 1LL, v6 + 32);
      v74 = *(void **)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      if ( v74 )
        ExFreePoolWithTag(v74, 0);
      goto LABEL_117;
    }
LABEL_159:
    v83 = WdLogNewEntry5_WdError(v40);
    *(_QWORD *)(v83 + 24) = v82;
    WdLogEvent5_WdError(v83);
    goto LABEL_117;
  }
  if ( DeviceExtension[1136] )
  {
    memset(&dword_1C00570D0, 0, 0x20uLL);
    dword_1C00570E8 = -1;
    memset(&xmmword_1C00570F0, 0, 0x80uLL);
    dword_1C0057170 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 638) && *v22 > 1u )
  {
    v85 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    *(_QWORD *)(v85 + 24) = (unsigned int)*v22;
    WdLogEvent5_WdWarning(v85);
    *v22 = 1;
  }
  *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 7) = 1;
  if ( !v9 )
  {
LABEL_56:
    *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
    v52 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v52;
    *((_DWORD *)DeviceExtension + 59) = 2;
    if ( v9 )
    {
      if ( v9[481] )
        DXGADAPTER::StartRuntimePowerManagement(*((DXGADAPTER **)v9 + 461));
      if ( !v9[480] && *((_DWORD *)v9 + 828) != -1 )
        LPMDisplayRegisterInternalDisplay(*((_QWORD *)v9 + 461));
      DpiBrightnessStartDevice(a1);
    }
    DxgkMiracastQueryMiracastSupportInternal(0LL);
    goto LABEL_62;
  }
  if ( *((_DWORD *)v9 + 636) )
  {
    LODWORD(v15) = DpiFdoEnumChildDevices(a1);
    if ( (int)v15 < 0 )
      goto LABEL_117;
  }
  v29 = *((_DWORD *)v9 + 637);
  if ( v29 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 4LL * v29, 0x74727044u);
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = PoolWithTag;
    v32 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v15) = -1073741670;
      v86 = WdLogNewEntry5_WdLowResource(v31);
      *(_QWORD *)(v86 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v86);
      goto LABEL_117;
    }
    v33 = 0;
    if ( *((_DWORD *)v9 + 637) )
    {
      while ( 1 )
      {
        v34 = DMgrAcquireGdiViewId(&v32[4 * v33]);
        v15 = v34;
        if ( v34 < 0 )
          break;
        if ( ++v33 >= *((_DWORD *)v9 + 637) )
          goto LABEL_26;
      }
      *((_DWORD *)v9 + 637) = v33;
      v87 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v87[3] = v33;
      v87[4] = a1;
      v87[5] = v15;
      WdLogEvent5_WdError(v87);
      if ( !v33 )
        goto LABEL_62;
    }
  }
  else
  {
    v32 = 0LL;
  }
LABEL_26:
  v36 = v9 + 3696;
  v37 = DxgkAddAdapter(
          a1,
          (struct _DXGK_ADAPTER_CAPS *)(v9 + 3696),
          *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
  v15 = v37;
  if ( v37 < 0 )
    goto LABEL_94;
  v38 = *((_QWORD *)v9 + 461);
  if ( v38 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v38 + 24));
  }
  else
  {
    v88 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v88 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v88);
  }
  v63 = qword_1C0056EA8 == 0;
  *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 6) = 1;
  if ( v63
    && ((v9[3697] & 1) != 0 || DpiHybridInternalPanelOverride() && (*v36 & 0x20) != 0 && v9[1136] && (*v36 & 0x40) == 0) )
  {
    qword_1C0056EA8 = (__int64)a1;
  }
  if ( (*v36 & 0x40) != 0 )
  {
    v19 = qword_1C0056EA0;
    if ( !qword_1C0056EA0 || (struct _DEVICE_OBJECT *)qword_1C0056EA0 == a1 )
    {
      qword_1C0056EA0 = (__int64)a1;
      HIBYTE(word_1C0056E9D) = (v9[3697] & 2) != 0;
    }
    else
    {
      *v36 &= ~0x40u;
    }
  }
  if ( qword_1C0056EA8 && qword_1C0056EA0 && !(_BYTE)word_1C0056E9D )
  {
    LOBYTE(word_1C0056E9D) = 1;
    *((_BYTE *)DXGGLOBAL::GetGlobal(v19) + 513) = 1;
  }
  v39 = (*v36 & 1) != 0 || (_BYTE)word_1C0056E9D && (*v36 & 0x40) != 0;
  v40 = *(bool **)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
  *v40 = v39;
  if ( v9[1136] && (*v36 & 1) == 0 )
  {
    v82 = -1071775740LL;
    LODWORD(v15) = -1071775740;
    goto LABEL_159;
  }
  LODWORD(v15) = DpiFdoCreateRelatedObjects(
                   a1,
                   *((unsigned int *)v9 + 637),
                   v32,
                   *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
  if ( (int)v15 < 0 )
    goto LABEL_117;
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
  }
  if ( (*v36 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
  {
    MonitorInitializeAdapterDone(
      *((DXGADAPTER **)v9 + 461),
      *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
  }
  *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 5) = 1;
  if ( *((_DWORD *)v9 + 758) != -1 )
  {
    Caps = DpiMiracastDdiMiracastQueryCaps(v9, v41, v9 + 3024);
    v91 = Caps;
    if ( Caps < 0 )
    {
      v92 = WdLogNewEntry5_WdEvent(v90);
      *(_QWORD *)(v92 + 24) = v91;
      WdLogEvent5_WdEvent(v92);
      *((_DWORD *)v9 + 758) = -1;
      memset(v9 + 2960, 0, 0x40uLL);
    }
  }
  v42 = DpiOpenPnpRegistryKey((__int64)a1, 2, 0x20019u, (void **)(v6 + 48));
  v44 = v42;
  if ( v42 < 0 )
  {
    v93 = WdLogNewEntry5_WdEvent(v43);
    *(_QWORD *)(v93 + 24) = v44;
    WdLogEvent5_WdEvent(v93);
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v6 + 448), L"MiracastDriverName");
    if ( DxgkRetrieveStringFromRegistry(
           *(HANDLE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
           (PUNICODE_STRING)(v6 + 448),
           (__int64)(v9 + 4496)) < 0 )
    {
      v46 = WdLogNewEntry5_WdEvent(v45);
      *(_QWORD *)(v46 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v46);
    }
    ZwClose(*(HANDLE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
  }
  v49 = *((_QWORD *)v9 + 564);
  if ( v49 )
  {
    if ( *(_QWORD *)(v49 + 48) && *(_BYTE *)v49 )
    {
      *(_BYTE *)v49 = 0;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        v94 = *((_QWORD *)v9 + 564);
        LODWORD(v122) = *(unsigned __int8 *)(v94 + 2);
        Template_pt(*(unsigned __int8 *)(v94 + 2), v47, v48, a1, v122);
      }
      v95 = *((_QWORD *)v9 + 564);
      LOBYTE(v47) = *(_BYTE *)(v95 + 2);
      (*(void (__fastcall **)(_QWORD, __int64))(v95 + 48))(*(_QWORD *)(v95 + 16), v47);
    }
    v96 = *((_QWORD *)v9 + 564);
    if ( *(_QWORD *)(v96 + 56) && *(_BYTE *)(v96 + 1) )
    {
      *(_BYTE *)(v96 + 1) = 0;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v122) = *(_DWORD *)(*((_QWORD *)v9 + 564) + 4LL);
        Template_xq((unsigned int)v122, &EventDpiFdoThermalPassiveCooling, v48, a1, v122);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v9 + 564) + 56LL))(
        *(_QWORD *)(*((_QWORD *)v9 + 564) + 16LL),
        *(unsigned int *)(*((_QWORD *)v9 + 564) + 4LL));
    }
  }
  if ( v9[57] )
  {
    SecurityDescriptorForGpuVirtualization = DpiCreateSecurityDescriptorForGpuVirtualization(v6 + 56);
    v99 = SecurityDescriptorForGpuVirtualization;
    if ( SecurityDescriptorForGpuVirtualization < 0 )
    {
      v104 = WdLogNewEntry5_WdError(v98);
      *(_QWORD *)(v104 + 24) = v99;
      WdLogEvent5_WdError(v104);
    }
    else
    {
      v100 = ObSetSecurityObjectByPointer(
               a1,
               4LL,
               *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
      v102 = v100;
      if ( v100 >= 0 )
      {
        v103 = WdLogNewEntry5_WdError(v101);
        *(_QWORD *)(v103 + 24) = v102;
        WdLogEvent5_WdError(v103);
      }
      ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38), 0);
    }
  }
  if ( !v9[1139] || (v50 = 0, !v9[480]) )
    v50 = 1;
  v51 = IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 163, v50);
  v15 = v51;
  if ( v51 >= 0 )
  {
    *(_BYTE *)v6 = 1;
    if ( v9[4648] )
    {
      v105 = IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 164, 1u);
      v15 = v105;
      if ( v105 < 0 )
        goto LABEL_94;
      *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
      if ( v9[4648] )
      {
        v106 = IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 165, 1u);
        v15 = v106;
        if ( v106 < 0 )
          goto LABEL_94;
        *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 1;
      }
    }
    if ( v9[4784] )
    {
      v107 = IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 166, 1u);
      v15 = v107;
      if ( v107 < 0 )
        goto LABEL_94;
      *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 3) = 1;
    }
    if ( v9[4520] )
    {
      v108 = IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 167, 1u);
      v15 = v108;
      if ( v108 < 0 )
        goto LABEL_94;
      *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 1;
    }
    goto LABEL_56;
  }
LABEL_94:
  v66 = WdLogNewEntry5_WdError(v19);
  *(_QWORD *)(v66 + 24) = v15;
LABEL_96:
  WdLogEvent5_WdError(v66);
LABEL_62:
  if ( (int)v15 >= 0 )
    goto LABEL_63;
LABEL_117:
  v75 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  DeviceExtension[232] = 1;
  IoInvalidateDeviceState(v75);
  if ( *((_DWORD *)DeviceExtension + 59) == 2 )
  {
    v77 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v77;
    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
  }
  if ( v9 )
  {
    if ( *(_BYTE *)v6 == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 163, 0);
    if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 1) == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 164, 0);
    if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 2) == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 165, 0);
    if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 3) == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 166, 0);
    if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 4) == 1 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)v9 + 167, 0);
    if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 5) == 1 )
      DpiFdoDestroyRelatedObjects(a1, *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
    v78 = *(unsigned int **)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    if ( v78 )
    {
      for ( i = 0; i < *((_DWORD *)v9 + 637); ++i )
      {
        LOBYTE(v76) = 1;
        DMgrReleaseGdiViewId(v78[i], v76);
      }
      ExFreePoolWithTag(v78, 0);
    }
    if ( (struct _DEVICE_OBJECT *)qword_1C0056EA0 == a1 )
    {
      qword_1C0056EA0 = 0LL;
      word_1C0056E9D = 0;
    }
    if ( (struct _DEVICE_OBJECT *)qword_1C0056EA8 == a1 )
    {
      LOBYTE(word_1C0056E9D) = 0;
      qword_1C0056EA8 = 0LL;
    }
    if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 6) == 1 )
    {
      if ( *((_QWORD *)DeviceExtension + 61) )
      {
        PoFxUnregisterDevice();
        *(_QWORD *)(*((_QWORD *)v9 + 461) + 2176LL) = 0LL;
        *((_QWORD *)DeviceExtension + 61) = 0LL;
      }
      v80 = (DXGADAPTER *)*((_QWORD *)v9 + 461);
      if ( v80 )
        DXGADAPTER::Stop(v80, 0, 0);
      DxgkReleaseAdapterFdoReference(*((_QWORD *)v9 + 461));
      *((_QWORD *)v9 + 461) = 0LL;
    }
    if ( *((_QWORD *)v9 + 389) )
      DpiFdoDestroyChildDevices(a1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 7) != 1 )
    goto LABEL_156;
  v81 = *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( !v81 )
    goto LABEL_156;
  if ( !DeviceExtension[1136] )
    goto LABEL_153;
  if ( (int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1) < 0 )
  {
    v81 = *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
LABEL_153:
    if ( v9 )
      v9[3696] &= ~4u;
    DpiDxgkDdiStopDevice(v81, *((_QWORD *)DeviceExtension + 6));
  }
LABEL_156:
  if ( *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 8) == 1 )
    DpiFdoDisconnectInterrupt(a1);
  DxgCreateLiveDumpWithWdLogs(
    0x193u,
    0x804uLL,
    (int)v15,
    *((int *)DeviceExtension + 59),
    *((int *)DeviceExtension + 60));
LABEL_63:
  if ( DeviceExtension[1139] )
  {
    if ( DeviceExtension[1136] )
    {
      memset((void *)(v6 + 784), 0, 0x11CuLL);
      *(_BYTE *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x42A) = 1;
      v109 = VerSetConditionMask(0LL, 0x80u, 1u);
      if ( RtlVerifyVersionInfo((PRTL_OSVERSIONINFOEXW)(v6 + 784), 0x80u, v109) >= 0 )
      {
        *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
        *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1E0) = L"BasicDisplayUserNotified";
        *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D0) = 0LL;
        *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1D8) = 288;
        *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1E8) = ((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 12;
        *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1F8) = ((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 12;
        *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1F0) = 67108868;
        *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x200) = 4;
        *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x208) = 0LL;
        *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x210) = 0;
        memset((void *)(v6 + 536), 0, 0x28uLL);
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", v6 + 464, 0LL, 0LL);
        if ( !*(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) )
          WdDiagNotifyUser(0LL, 8LL, 0LL, 0LL);
      }
    }
  }
  if ( v9 )
  {
    if ( DeviceExtension[1143] )
    {
      v110 = *((_QWORD *)v9 + 126);
      if ( v110 )
      {
        v111 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)v9 + 133);
        if ( v111 )
        {
          v112 = v111(v110, (unsigned int)v15);
          v114 = v112;
          if ( v112 < 0 )
          {
            v115 = WdLogNewEntry5_WdError(v113);
            *(_QWORD *)(v115 + 24) = *((_QWORD *)v9 + 133);
            *(_QWORD *)(v115 + 32) = v114;
            WdLogEvent5_WdError(v115);
          }
        }
        v116 = (__int64 (__fastcall *)(_QWORD, unsigned __int64))*((_QWORD *)v9 + 135);
        if ( v116 )
        {
          v117 = v116(*((_QWORD *)v9 + 126), v6 + 96);
          v119 = v117;
          if ( v117 < 0 )
          {
            v120 = WdLogNewEntry5_WdError(v118);
            *(_QWORD *)(v120 + 24) = *((_QWORD *)v9 + 135);
            *(_QWORD *)(v120 + 32) = v119;
            WdLogEvent5_WdError(v120);
          }
          else
          {
            *((_DWORD *)v9 + 286) = *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64);
          }
        }
      }
    }
  }
  if ( DeviceExtension[483] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    memset((void *)(v6 + 672), 0, 0x50uLL);
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A0) = 26;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A8) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2B0) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2B8) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2D8) = *((_QWORD *)DeviceExtension + 317);
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A4) = 80;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C8) = 0;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C0) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2D0) = v15;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2D4) = (unsigned int)a1 & 0xFFFF00;
    v53 = DxgkDiagCalcDuration1us((_QWORD *)(v6 + 64));
    v54 = (unsigned __int8)v9[3696];
    v55 = v9[1143];
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2E0) = v53;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2E4) = *((_DWORD *)v9 + 926);
    v56 = *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2E8) & 0xFFFFC000 | (v54 >> 1) & 0x21 | (2 * (v54 & 1 | (unsigned __int16)(2 * (v9[480] & 1 | (2 * (v9[1136] & 1 | (2 * (v9[2556] & 1 | (4 * (v54 & 4 | v9[3697] & 1 | (2 * (v55 & 1)))))))))))) & 0xC1FF;
    v57 = v54 & 0xFFFFFF80 | (2 * (v54 & 0x38 | (4 * (*((_DWORD *)v9 + 126) != 0))));
    v58 = (struct _DXGK_DIAG_HEADER *)(v6 + 672);
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2E8) = v56 | (v57 << 6);
  }
  else
  {
    memset((void *)(v6 + 608), 0, 0x40uLL);
    v121 = DxgkDiagCalcDuration1us((_QWORD *)(v6 + 64));
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x260) = 6;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x268) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x270) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x278) = 0LL;
    v58 = (struct _DXGK_DIAG_HEADER *)(v6 + 608);
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x294) = (unsigned int)a1 & 0xFFFF00;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x264) = 64;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288) = 0;
    *(_QWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x280) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290) = 35;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x298) = v121;
    *(_DWORD *)(((unsigned __int64)&v123 & 0xFFFFFFFFFFFFFFE0uLL) + 0x29C) = v15;
  }
  DxgkWriteDiagEntry(v58);
  return (unsigned int)v15;
}
