/*
 * XREFs of ndisMInitializeAdapter @ 0x1C00EA374
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00AC974 (ndisInitializeAdapter.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C000FA9C (ndisAllocatePerProcessorSlot.c)
 *     ndisFreePerProcessorSlot @ 0x1C000FF88 (ndisFreePerProcessorSlot.c)
 *     ndisCancelWaitWake @ 0x1C0012DFC (ndisCancelWaitWake.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0013450 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0013B84 (ndisIfUpdateInterfaceOnInitialize.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0015050 (NdisNblTrackerRegisterComponent.c)
 *     ndisSetupWmiNode @ 0x1C00181A0 (ndisSetupWmiNode.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001B0C4 (ndisMSetIndicatePacketHandler.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001B2B4 (ndisUpdatePMCurrentCapabilities.c)
 *     NdisInitializeTimer @ 0x1C001B560 (NdisInitializeTimer.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001B5D0 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisSetWakeUpTimer @ 0x1C001B638 (ndisSetWakeUpTimer.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     ndisReferenceDriver @ 0x1C001BDD0 (ndisReferenceDriver.c)
 *     ndisMSetGeneralAttributes @ 0x1C001E518 (ndisMSetGeneralAttributes.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0020040 (ndisSetMediaDisconnectTimer.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C00201B0 (ndisCheckMiniportWakeUpCapable.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C0023274 (ndisMergeOffloadCapsAndRegistry.c)
 *     NdisWriteErrorLogEntry @ 0x1C0024CB0 (NdisWriteErrorLogEntry.c)
 *     ndisAddWoLMagicPacket @ 0x1C0025504 (ndisAddWoLMagicPacket.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003EE50 (Template_jqxqq.c)
 *     Template_qqq @ 0x1C0042698 (Template_qqq.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004AE24 (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisDereferenceMiniportRef @ 0x1C005BC24 (ndisDereferenceMiniportRef.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005F880 (ndisDereferenceDmaAdapter.c)
 *     NdisWriteConfiguration @ 0x1C009D980 (NdisWriteConfiguration.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009E95C (ndisMDeregisterBugCheckHandler.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C009ECAC (ndisReadMiniportDefaultPortAuthStates.c)
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A1A7C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00AA828 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AAD08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AB2A4 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00AB3EC (ndisSetDeviceInterfaceState.c)
 *     ndisQueryOidList @ 0x1C00AB9FC (ndisQueryOidList.c)
 *     ndisMInitializeInitMode @ 0x1C00ABFB8 (ndisMInitializeInitMode.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AC004 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00AC124 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C00AC240 (ndisCreateNdisSupportedOidList.c)
 *     ndisMStartInitMode @ 0x1C00AC400 (ndisMStartInitMode.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00AC45C (ndisMRegisterBugCheckHandler.c)
 *     ndisMInvokeInitialize @ 0x1C00AC4D4 (ndisMInvokeInitialize.c)
 *     ndisQueryPowerCapabilities @ 0x1C00AC57C (ndisQueryPowerCapabilities.c)
 *     ndisMNotifyMachineName @ 0x1C00AF9AC (ndisMNotifyMachineName.c)
 *     EthCreateFilter @ 0x1C00AFF90 (EthCreateFilter.c)
 *     nullCreateFilter @ 0x1C00B0604 (nullCreateFilter.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00B0A44 (ndisMReadPciPropertiesFromConfigSpace.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00B12E8 (ndisMiniportPMParametersUpdated.c)
 *     ndisMSetOffloadAttributes @ 0x1C00B1D10 (ndisMSetOffloadAttributes.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C00B2088 (ndisGetPciDeviceCustomProperties.c)
 *     ndisRequestWaitWake @ 0x1C00B2CB4 (ndisRequestWaitWake.c)
 *     ndisInitializeNsi @ 0x1C00B2F70 (ndisInitializeNsi.c)
 *     DisableMagicPacketKeyword @ 0x1C00C7F70 (DisableMagicPacketKeyword.c)
 *     ndisGetMiniportInfo @ 0x1C00D0B78 (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00D1AA0 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C00D310C (ndisQueryReenumerateSelfInterface.c)
 *     ndisMInitializePDCTaskClient @ 0x1C00D4760 (ndisMInitializePDCTaskClient.c)
 *     ndisMRegisterPDCTaskClient @ 0x1C00D479C (ndisMRegisterPDCTaskClient.c)
 *     ndisIovTeardownVf @ 0x1C00D958C (ndisIovTeardownVf.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00DC4F4 (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00DCACC (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00DCBF4 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E6D5C (ndisDeQueueMiniportOnDriver.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 *     ndisNotifyMiniports @ 0x1C00EB1F0 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00EB27C (ndisQueueMiniportOnDriver.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 */

__int64 __fastcall ndisMInitializeAdapter(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // r13
  char v9; // si
  unsigned __int8 v10; // r12
  __int64 v11; // r8
  NTSTATUS v12; // eax
  int ReenumerateSelfInterface; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 PerProcessorSlot; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  unsigned int v21; // ebx
  unsigned int v22; // eax
  KIRQL v23; // bl
  char v24; // al
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // ebx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  unsigned int v33; // edx
  char v34; // al
  int v35; // r8d
  int v36; // ecx
  char v37; // bl
  int v38; // eax
  KIRQL v39; // bl
  unsigned __int8 v40; // bl
  NTSTATUS v41; // eax
  __int64 v42; // rcx
  char v43; // si
  _DEVICE_OBJECT *v44; // rcx
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  char v47; // bl
  __int64 v48; // rax
  struct _NDIS_IF_BLOCK *v49; // rdx
  int updated; // ebx
  int OidList; // eax
  __int64 v52; // rcx
  char v53; // bl
  _BYTE *v54; // rax
  __int64 v55; // r14
  enum Ndis::ReadBindingsOptions::Flags v56; // r8d
  struct _NDIS_MINIPORT_BLOCK *v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // r9
  PVOID v60; // rbx
  _WORD *v61; // rcx
  NTSTATUS v62; // eax
  __int64 v63; // rcx
  int v64; // esi
  unsigned __int8 v65; // bl
  KIRQL v66; // dl
  char v67; // si
  void *v68; // rcx
  __int64 v70; // rcx
  ULONG_PTR v71; // rax
  unsigned __int8 v72; // al
  int v73; // eax
  PVOID v74; // rax
  _OWORD *v75; // rax
  _OWORD *v76; // rcx
  __int128 v77; // xmm1
  __int64 v78; // rax
  unsigned int v79; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rax
  int v83; // ebx
  NDIS_STATUS v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rax
  void *v89; // rcx
  __int64 v90; // rdx
  ULONG_PTR v91; // rsi
  NTSTATUS v92; // eax
  char v93; // bl
  __int64 v94; // rcx
  int v95; // eax
  void *v96; // rax
  char (__fastcall *v97)(__int64); // rax
  int v98; // ecx
  int v99; // eax
  int v100; // eax
  __int64 v101; // rax
  __int64 v102; // r9
  KIRQL v103; // al
  KIRQL v104; // si
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v106; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v107; // [rsp+48h] [rbp-B8h] BYREF
  char v108; // [rsp+49h] [rbp-B7h]
  bool v109; // [rsp+4Ah] [rbp-B6h]
  char v110; // [rsp+4Bh] [rbp-B5h]
  char v111; // [rsp+4Ch] [rbp-B4h]
  char v112; // [rsp+4Dh] [rbp-B3h]
  char v113; // [rsp+4Eh] [rbp-B2h]
  char v114; // [rsp+4Fh] [rbp-B1h]
  char v115; // [rsp+50h] [rbp-B0h]
  char v116; // [rsp+51h] [rbp-AFh]
  char v117; // [rsp+52h] [rbp-AEh]
  char v118; // [rsp+53h] [rbp-ADh]
  __int64 v119; // [rsp+58h] [rbp-A8h]
  int Status; // [rsp+60h] [rbp-A0h] BYREF
  int v121; // [rsp+64h] [rbp-9Ch]
  int v122; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v123; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v124; // [rsp+70h] [rbp-90h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  __int64 v127; // [rsp+88h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v129[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v130[8]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID WnodeEventItem; // [rsp+C8h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING Keyword; // [rsp+D8h] [rbp-28h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v135[8]; // [rsp+100h] [rbp+0h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+140h] [rbp+40h] BYREF
  struct _KEVENT Event; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v138[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v139[20]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v140[20]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v141[20]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _QWORD v142[20]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v143[28]; // [rsp+410h] [rbp+310h] BYREF
  _DWORD v144[6]; // [rsp+4F0h] [rbp+3F0h] BYREF
  GUID InterfaceClassGuid; // [rsp+508h] [rbp+408h] BYREF
  GUID v146; // [rsp+518h] [rbp+418h] BYREF
  _BYTE v147[72]; // [rsp+528h] [rbp+428h] BYREF
  char v148; // [rsp+570h] [rbp+470h] BYREF

  v119 = a1;
  v129[0] = 0LL;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v123 = 0;
  v106 = 1;
  v8 = 0;
  v146 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v122 = 1;
  v9 = 0;
  v118 = 0;
  v117 = 0;
  v116 = 0;
  v107 = 0;
  v115 = 0;
  v108 = 0;
  v112 = 0;
  v113 = 0;
  v110 = 0;
  v111 = 0;
  v109 = 0;
  LOBYTE(v121) = 0;
  v114 = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qZ(0xAu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, *(unsigned __int16 **)(a2 + 3912));
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v10 = *(_BYTE *)(a1 + 24);
  if ( !ndisReferenceDriver(a1, 2u) )
  {
    v55 = a1;
    goto LABEL_200;
  }
  v118 = 1;
  DestinationString.Buffer = (wchar_t *)&v148;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3848)) < 0 )
  {
    v55 = a1;
LABEL_257:
    v8 = 0;
    goto LABEL_200;
  }
  v12 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4264));
  ReenumerateSelfInterface = v12;
  v109 = v12 >= 0 || v12 == -1073741771;
  *(_QWORD *)(a2 + 1976) = a5;
  *(_QWORD *)(a2 + 432) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 1896) = ndisMDummyIndicatePacket;
  *(_QWORD *)(a2 + 2144) = ndisMDispatchReceiveNetBufferLists;
  *(_QWORD *)(a2 + 2152) = ndisMDispatchReceiveNetBufferLists;
  *(_QWORD *)(a2 + 640) = EthFilterDprIndicateReceive;
  *(_QWORD *)(a2 + 664) = EthFilterDprIndicateReceiveComplete;
  *(_QWORD *)(a2 + 440) = NdisMSendComplete;
  *(_QWORD *)(a2 + 752) = NdisMSendNetBufferListsComplete;
  *(_QWORD *)(a2 + 704) = NdisMTransferDataComplete;
  *(_QWORD *)(a2 + 456) = NdisMResetComplete;
  *(_QWORD *)(a2 + 688) = NdisMIndicateStatus;
  *(_QWORD *)(a2 + 696) = ndisFakeMiniportCancelSendPackets;
  *(_QWORD *)(a2 + 448) = NdisMSendResourcesAvailable;
  *(_QWORD *)(a2 + 712) = NdisMQueryInformationComplete;
  *(_QWORD *)(a2 + 720) = NdisMSetInformationComplete;
  *(_QWORD *)(a2 + 728) = ndisMWanSendCompleteInternal;
  *(_QWORD *)(a2 + 736) = NdisMWanIndicateReceive;
  *(_QWORD *)(a2 + 744) = NdisMWanIndicateReceiveComplete;
  *(_QWORD *)(a2 + 2408) = 48LL;
  *(_QWORD *)(a2 + 2592) = 48LL;
  *(_BYTE *)(a2 + 2673) = 1;
  *(_QWORD *)(a2 + 2440) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2400) = a2;
  *(_QWORD *)(a2 + 2416) = a2;
  *(_QWORD *)(a2 + 2624) = ndisMSendCompleteNetBufferListsInternal;
  *(_QWORD *)(a2 + 2584) = a2;
  *(_QWORD *)(a2 + 2600) = a2;
  *(_QWORD *)(a2 + 2424) = a2;
  *(_QWORD *)(a2 + 2480) = a2;
  *(_QWORD *)(a2 + 2608) = a2;
  *(_QWORD *)(a2 + 2664) = a2;
  *(_QWORD *)(a2 + 4640) = MEMORY[0xFFFFF78000000014];
  if ( v10 < 6u )
  {
    v79 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3192) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v55 = a1;
      v9 = 0;
      v8 = 0;
      goto LABEL_200;
    }
    memset(PoolWithTag, 0, v79);
    v81 = *(_QWORD **)(a2 + 3816);
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v81[16];
    *(_QWORD *)(a2 + 616) = v81[17];
    *(_QWORD *)(a2 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2360) = 64LL;
    *(_QWORD *)(a2 + 2352) = a2;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 4128) = v81[25];
    if ( v10 >= 4u )
    {
      if ( *(_QWORD *)(a1 + 224) )
        *(_DWORD *)(a2 + 1872) |= 0x10u;
      *(_QWORD *)(a2 + 2184) = v81[28];
      *(_QWORD *)(a2 + 2168) = v81[28];
      *(_QWORD *)(a2 + 2192) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v82 = *(_QWORD *)(a1 + 232);
        *(_DWORD *)(a2 + 1872) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v82;
      }
      if ( v10 >= 5u )
      {
        *(_DWORD *)(a2 + 1872) |= 0x200u;
        if ( *(_QWORD *)(a1 + 280) )
        {
          *(_DWORD *)(a2 + 120) |= 0x20000u;
          *(_QWORD *)(a1 + 552) = ndisMCoOidRequestToRequest;
          *(_QWORD *)(a2 + 2240) = a2;
        }
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(a2 + 3816);
    *(_BYTE *)(a2 + 1994) = 1;
    v15 = *(_QWORD *)(v14 + 192);
    *(_QWORD *)(a2 + 2352) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 2360) = *(_QWORD *)(a2 + 4136);
    *(_QWORD *)(a2 + 2184) = ndisSynchReturnPacketsForTranslation;
    *(_QWORD *)(a2 + 2464) = v15;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 2192) = a2;
    if ( *(_QWORD *)(a1 + 536) )
      *(_DWORD *)(a2 + 120) |= 0x20000u;
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  v117 = 1;
  if ( !*(_DWORD *)(a2 + 3924) )
  {
    *(_DWORD *)(a2 + 3924) = 1;
    *(_DWORD *)(a2 + 3936) = 1;
  }
  ndisQueryPowerCapabilities((char *)a2);
  ndisMInitializeInitMode((PVOID)a2);
  *(_QWORD *)(a2 + 4136) = NdisNblTrackerRegisterComponent(0, a2, *(_QWORD *)(a2 + 3912));
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  *(_QWORD *)(a2 + 3344) = PerProcessorSlot;
  if ( !PerProcessorSlot )
  {
    v9 = 0;
    v55 = a1;
    v8 = 0;
    goto LABEL_200;
  }
  v110 = 1;
  if ( ndisMaxNumberOfProcessors )
  {
    v17 = 0LL;
    v18 = ndisMaxNumberOfProcessors;
    do
    {
      *(_DWORD *)(v17 + *(_QWORD *)(a2 + 3344)) = 6;
      v17 += 4096LL;
      --v18;
    }
    while ( v18 );
  }
  *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0xDFFFFFFC | 0x20000002;
  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 124) |= 0x100000u;
    if ( !ndisDriverTrackAlloc
      || (v20 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = (struct _NDIS_MINIPORT_BLOCK *)a2, !v20) )
    {
      ndisMiniportTrackAlloc = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 864) && !*(_QWORD *)(a2 + 4144) )
  {
    ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(*(PDEVICE_OBJECT *)(a2 + 3896), (PVOID *)(a2 + 4144));
    if ( ReenumerateSelfInterface >= 0 )
    {
      ConfigurationHandle = 0LL;
      v83 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a2 + 4144) + 40LL) >> 1) & 1;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_dd(
          0xCu,
          &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
          v83,
          *(_DWORD *)(*(_QWORD *)(a2 + 4144) + 40LL) & 1);
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.Flags = 0;
      ConfigObject.NdisHandle = (void *)a2;
      v84 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v84;
      if ( v84 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_d(0xDu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v84);
      }
      else
      {
        ParameterValue.ParameterType = NdisParameterInteger;
        Keyword.Buffer = L"PldrCapability";
        *(_DWORD *)&Keyword.Length = 1966108;
        ParameterValue.ParameterData.IntegerData = v83;
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_d(0xEu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, Status);
        NdisCloseConfiguration(ConfigurationHandle);
      }
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_qD(0xBu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, ReenumerateSelfInterface);
      ReenumerateSelfInterface = 0;
    }
  }
  *(_DWORD *)(a2 + 2256) = 2;
  memset(v135, 0, sizeof(v135));
  memset(v143, 0, sizeof(v143));
  BYTE1(v143[0]) = 2;
  if ( v10 < 6u )
  {
    v21 = (*(__int64 (__fastcall **)(_BYTE *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(a1 + 160))(
            v130,
            &v123,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( *(_DWORD *)(a2 + 3768) == 5 )
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3384));
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    v144[1] = *(_DWORD *)(a2 + 3368);
    v144[2] = *(_DWORD *)(a2 + 3372);
    v144[3] = *(_DWORD *)(a2 + 3376);
    v144[4] = *(_DWORD *)(a2 + 3380);
    v19 = *(_QWORD *)(a2 + 944);
    v144[0] = 1311104;
    LODWORD(v135[0]) = 4194689;
    if ( v19 )
      v135[1] = v19 + 12;
    v20 = *(_DWORD *)(a2 + 3768) == 5;
    v135[2] = *(_QWORD *)(a2 + 1976);
    v135[3] = *(_QWORD *)(a2 + 4168);
    v135[6] = v144;
    v135[5] = *(_QWORD *)(a2 + 4080);
    LODWORD(v135[4]) = *(_DWORD *)(a2 + 4112);
    if ( v20 )
    {
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3384));
      v71 = v135[7];
      if ( ReenumerateSelfInterface >= 0 )
        v71 = a2 + 3384;
      v135[7] = v71;
    }
    v21 = ndisMInvokeInitialize((const struct _TlgProvider_t *)a2, (__int64)v135);
    if ( *(_DWORD *)(a2 + 3768) == 5 )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0xFu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v21);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
    Template_jqxqq(
      1LL,
      &InitializeAdapterInfo,
      (const GUID *)(a2 + 4064),
      a2 + 4064,
      *(_DWORD *)(a2 + 4112),
      *(_QWORD *)(a2 + 4080),
      1,
      v21);
  *(_DWORD *)(a2 + 120) &= ~2u;
  if ( v21 )
  {
    *(_DWORD *)(a2 + 2256) = 1;
    *(_QWORD *)(a2 + 4120) = 2LL;
    v101 = *(_QWORD *)(a2 + 4096);
    if ( v101 && *(_DWORD *)(v101 + 1112) != 2 )
    {
      *(_DWORD *)(v101 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = *(_DWORD *)(a2 + 4124);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4696) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v106 = v21;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_345;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v8 = 1;
        goto LABEL_340;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v102 = *(_QWORD *)(a2 + 3912);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v102, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v102, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_345:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3912),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
  v20 = (*(_DWORD *)(a2 + 124) & 0x8000000) == 0;
  v115 = 1;
  if ( v20 )
  {
    *(_QWORD *)(a2 + 16) = a2;
  }
  else
  {
    ndisReferenceMiniportByName((PCUNICODE_STRING)(*(_QWORD *)(a2 + 3824) + 8LL), (__int64 *)(a2 + 16), 1, 0x1Fu);
    v85 = *(_QWORD *)(a2 + 16);
    if ( v85 )
      ndisDereferenceMiniportRef(v85, 0x1Fu);
  }
  if ( v10 < 6u )
  {
    v86 = *(_QWORD *)(a2 + 112);
    if ( !v86 || *(_BYTE *)(v86 + 145) || *(_BYTE *)(v86 + 144) )
      *(_DWORD *)(a2 + 120) &= ~1u;
    else
      *(_DWORD *)(a2 + 120) |= 1u;
    if ( !*(_QWORD *)(a2 + 2072) )
    {
      *(_QWORD *)(a2 + 2072) = *(_QWORD *)(a1 + 312);
      *(_QWORD *)(a2 + 2064) = *(_QWORD *)(a2 + 24);
    }
    v87 = *((_DWORD *)ndisMediumArray + v123);
    LODWORD(v143[1]) = v87;
    *(_DWORD *)(a2 + 464) = v87;
    *(_DWORD *)(a2 + 1836) = v87;
  }
  v22 = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(a2 + 2256) = 6;
  if ( v22 <= 0xD )
  {
    v70 = 8390LL;
    if ( _bittest((const int *)&v70, v22) )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 4u )
        WPP_SF_q(0x10u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        Template_jqxq(
          v70,
          &UnsupportedMiniportMediaType,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          *(_DWORD *)(a2 + 464));
      goto LABEL_197;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( *(_DWORD *)(a2 + 464) == 3 )
  {
    if ( v10 <= 4u )
    {
      if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
        *(_QWORD *)(a2 + 632) = ndisMStartWanSends;
    }
    else if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
    {
LABEL_197:
      v106 = 32;
LABEL_199:
      v9 = 0;
      v55 = v119;
      v8 = 0;
      goto LABEL_200;
    }
  }
  v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721635;
  v24 = ndisSetWakeUpTimer(a2);
  v25 = (unsigned __int8)v121;
  if ( v24 )
    v25 = 1;
  *(_QWORD *)(a2 + 520) = 0LL;
  v121 = v25;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v23);
  ndisMStartInitMode(a2);
  if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x11u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, ReenumerateSelfInterface);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v26,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        2,
        ReenumerateSelfInterface);
    v106 = 36;
    goto LABEL_199;
  }
  if ( v10 < 6u )
  {
    memset(v147, 0, 0x3CuLL);
    v143[27] = v147;
    *(_QWORD *)(a2 + 2752) = v143;
    if ( (unsigned int)ndisGetMiniportInfo(a2, (__int64)v143, &v106, (char *)&v107, &v122)
      || (unsigned int)ndisMSetGeneralAttributes((struct _NDIS_MINIPORT_BLOCK *)a2, *(_QWORD *)(a2 + 2752)) )
    {
      goto LABEL_330;
    }
    v90 = *(_QWORD *)(a2 + 4152);
    if ( !v90 )
    {
      v28 = v122;
      goto LABEL_43;
    }
    v27 = ndisMSetOffloadAttributes(a2, v90 + 368, (_WORD *)(v90 + 368), 0LL, 0LL);
    v28 = v122;
  }
  else
  {
    v27 = 0;
    v28 = v122;
    if ( *(_BYTE *)(a2 + 929) )
      v28 = 0;
  }
  if ( v27 )
    goto LABEL_330;
LABEL_43:
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
  {
    v29 = *(_QWORD *)(a2 + 2752);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1408LL) == 2 )
    {
      v30 = ndisCheckNetworkInterfaceDataMismatch(a2, v29);
      v31 = NdisConvertNtStatusToNdisStatus(v30);
    }
    else
    {
      v31 = ndisCheckIfTypeMismatch(a2, v29);
    }
    if ( v31 )
      goto LABEL_330;
    if ( v10 < 6u )
      ndisReadMiniportDefaultPortAuthStates(a2);
  }
  Status = ndisIovCreateDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( Status )
  {
LABEL_330:
    v8 = 0;
LABEL_340:
    v55 = v119;
    if ( !v106 )
      goto LABEL_206;
    v9 = 0;
LABEL_200:
    Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v11);
    ndisNotifyBindFailureOnUnboundProtocols(a2);
    if ( v111 )
    {
      *(_QWORD *)(a2 + 4120) = 2LL;
      v88 = *(_QWORD *)(a2 + 4096);
      if ( *(_DWORD *)(v88 + 1112) != 2 )
      {
        *(_DWORD *)(v88 + 1112) = 2;
        *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = *(_DWORD *)(a2 + 4124);
        ndisNsiSyncMiniportOperStatusNotification(a2);
      }
    }
    if ( v9 )
    {
      v89 = *(void **)(a2 + 4632);
      if ( v89 )
      {
        ExFreePoolWithTag(v89, 0);
        *(_QWORD *)(a2 + 4632) = 0LL;
      }
    }
LABEL_206:
    if ( v112 )
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3880), 2u);
    if ( v113 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4208), 0);
    if ( v114 )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4888), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4888));
      *(_QWORD *)(a2 + 4896) = 0LL;
    }
    if ( v115 )
    {
      ndisIovDeleteDefaultNicSwitch((_DWORD *)a2);
      v108 = -v108;
      LOBYTE(v121) = -(char)v121;
      ndisMCommonHaltMiniport(a2);
      ndisMDeregisterBugCheckHandler(a2);
    }
    if ( !v8 )
      goto LABEL_361;
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 && *(_QWORD *)(a2 + 504) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x21u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
      ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    }
    v103 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v104 = v103;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 722730;
    if ( *(_QWORD *)(a2 + 504) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v104);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_361;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v103);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
LABEL_361:
    if ( v116 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x22u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
      ndisDeQueueMiniportOnDriver(a2, v55);
    }
    if ( v109 )
      IoDeleteSymbolicLink(&DestinationString);
    if ( v117 )
      ndisDereferenceMiniportRef(a2, 0x18u);
    if ( v118 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x23u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
      ndisDereferenceDriver(v55, 0);
    }
    v67 = v110;
    v65 = v10;
    goto LABEL_111;
  }
  if ( !*(_DWORD *)(a2 + 464) )
    ndisMNotifyMachineName(a2);
  v32 = *(_DWORD *)(a2 + 124);
  if ( ((v32 & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 3816) + 26LL) & 1) != 0) && *(_DWORD *)(a2 + 464) <= 0x13u )
  {
    if ( v28 )
      v33 = v32 & 0xFFFFFFFE;
    else
      v33 = v32 | 1;
    *(_DWORD *)(a2 + 124) = v33;
  }
  if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0)
    && (unsigned int)(*(_DWORD *)(a2 + 1040) - 2) <= 2
    && (*(_DWORD *)(a2 + 3968) & 0xC) == 0 )
  {
    DisableMagicPacketKeyword((_DWORD *)a2);
  }
  NdisInitializeTimer((PNDIS_TIMER)(a2 + 1392), (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, (PVOID)a2);
  KeInitializeEvent((PRKEVENT)(a2 + 1304), NotificationEvent, 1u);
  if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0)
    && ndisEnforceDisconnectedStandby )
  {
    *(_DWORD *)(a2 + 3920) |= 0x10u;
  }
  ndisUpdatePMCurrentCapabilities(a2);
  if ( (*(_DWORD *)(a2 + 124) & 1) != 0 )
  {
    v34 = ndisCheckMiniportWakeUpCapable(a2);
    v35 = *(_DWORD *)(a2 + 3920);
    if ( (v35 & 8) == 0 )
    {
      v36 = *(_DWORD *)(a2 + 1108);
      *(_DWORD *)(a2 + 124) |= 0x20u;
      v37 = 0;
      if ( (unsigned int)(v36 - 2) <= 2 )
      {
        *(_DWORD *)(a2 + 1132) |= 1u;
        v37 = 1;
      }
      if ( (v35 & 0x10) == 0 && v34 )
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 1104) - 2) <= 2 )
          *(_DWORD *)(a2 + 124) |= 0x40u;
        if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
        {
          *(_DWORD *)(a2 + 124) |= 0x40u;
          v37 = 1;
          *(_DWORD *)(a2 + 1124) |= 2u;
          v72 = *(_BYTE *)(a2 + 32);
          if ( v72 <= 6u && (v72 != 6 || *(_BYTE *)(a2 + 33) < 0x14u)
            || (v73 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2), (Status = v73) == 0)
            || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
          {
LABEL_139:
            ndisMiniportPMParametersUpdated(a2);
LABEL_68:
            if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
            {
              v38 = *(_DWORD *)(a2 + 124);
              if ( (v38 & 0x40) != 0 )
              {
                if ( !*(_QWORD *)(a2 + 1296) )
                {
                  *(_DWORD *)(a2 + 124) = v38 & 0xFFFFFBFF;
                  Status = ndisRequestWaitWake((char *)a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                }
              }
              else
              {
                ndisCancelWaitWake(a2);
              }
            }
            goto LABEL_71;
          }
          WPP_SF_qD(0x12u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v73);
        }
      }
      if ( !v37 )
        goto LABEL_68;
      goto LABEL_139;
    }
  }
LABEL_71:
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721913;
  if ( *(_DWORD *)(a2 + 480) == 2 )
    ndisSetMediaDisconnectTimer(a2);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v39);
  *(_QWORD *)(a2 + 4544) = a2;
  *(_QWORD *)(a2 + 4552) = ndisSignalD0CompleteWorkItem;
  *(_QWORD *)(a2 + 5488) = a2;
  *(_QWORD *)(a2 + 5496) = ndisDevicePowerOn;
  *(_QWORD *)(a2 + 5576) = a2;
  *(_QWORD *)(a2 + 5584) = ndisDevicePowerDown;
  *(_QWORD *)(a2 + 5520) = ndisWorkItemHandler;
  *(_QWORD *)(a2 + 5528) = a2 + 5488;
  *(_QWORD *)(a2 + 5504) = 0LL;
  *(_QWORD *)(a2 + 5608) = ndisWorkItemHandler;
  *(_QWORD *)(a2 + 5616) = a2 + 5576;
  *(_QWORD *)(a2 + 5592) = 0LL;
  if ( (*(_DWORD *)(a2 + 1064) & 2) != 0 )
    ndisSelectiveSuspendInitialize((_QWORD *)a2);
  if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0 )
  {
    ndisAoAcInitialize((_QWORD *)a2);
    if ( *(_QWORD *)(a2 + 4520) )
      ndisAoAcStart((struct _NDIS_MINIPORT_BLOCK *)a2);
    ndisReadModernStandyWoLMagicPacketKeywords((_DWORD *)a2);
    ndisMRegisterPDCTaskClient(a2);
    ndisMInitializePDCTaskClient((char *)a2);
  }
  if ( *(_DWORD *)(a2 + 464) )
  {
    if ( nullCreateFilter(v129) )
    {
LABEL_79:
      v40 = v107;
      *(_QWORD *)(v129[0] + 296LL) = a2;
      goto LABEL_80;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x14u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
    v106 = 30;
    v40 = 1;
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        30LL,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        6,
        30);
  }
  else
  {
    if ( EthCreateFilter(*(_DWORD *)(*(_QWORD *)(a2 + 2752) + 88LL), *(_QWORD *)(a2 + 2752) + 126LL, v129) )
      goto LABEL_79;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x13u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
    v106 = 9;
    v40 = 1;
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        9LL,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        4,
        9);
  }
LABEL_80:
  if ( *(_DWORD *)(a2 + 1836) == 16 && v10 >= 6u )
  {
    v91 = a2 + 600;
    if ( !nullCreateFilter((_QWORD *)(a2 + 600)) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x15u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
      *(_QWORD *)v91 = 0LL;
      v106 = 30;
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          30LL,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          7,
          30);
      v55 = v119;
      v9 = 0;
      goto LABEL_257;
    }
    *(_QWORD *)(*(_QWORD *)v91 + 296LL) = a2;
  }
  if ( !*(_DWORD *)(a2 + 464) )
    *(_BYTE *)(a2 + 1998) = 1;
  v41 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3880), 1u);
  v43 = v41;
  if ( v41 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_qD(0x16u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v41);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v42,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        8,
        v43);
    v106 = 31;
    v40 = 1;
    goto LABEL_264;
  }
  v9 = 1;
  v112 = 1;
  if ( v40 )
  {
LABEL_264:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_qD(0x17u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v40);
    OutputBufferLength[0] = v106;
    NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)OutputBufferLength);
    v8 = 0;
    goto LABEL_340;
  }
  if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3888));
  v44 = *(_DEVICE_OBJECT **)(a2 + 3888);
  v106 = 1;
  v45 = IoRegisterDeviceInterface(v44, &InterfaceClassGuid, (PUNICODE_STRING)(a2 + 3848), (PUNICODE_STRING)(a2 + 360));
  v8 = 0;
  v47 = v45;
  if ( v45 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x18u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v45);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v46,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        10,
        v47);
    v106 = 35;
    goto LABEL_273;
  }
  v48 = *(_QWORD *)(a2 + 4672);
  v108 = 1;
  v113 = 1;
  if ( v48 && (*(_BYTE *)(v48 + 8) & 3) == 3 )
  {
    v92 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a2 + 3888), &v146, 0LL, (PUNICODE_STRING)(a2 + 4888));
    v93 = v92;
    if ( Status < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x19u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v92);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          v46,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          0,
          v93);
      v106 = 34;
LABEL_273:
      v55 = v119;
      v9 = 0;
      goto LABEL_200;
    }
    v114 = 1;
  }
  *(_DWORD *)(*(_QWORD *)(a2 + 3880) + 48LL) &= ~0x80u;
  v11 = *(_QWORD *)(a2 + 2752);
  if ( v11 )
  {
    v49 = *(struct _NDIS_IF_BLOCK **)(a2 + 4096);
    if ( !v49 )
    {
      updated = -1073741823;
      goto LABEL_283;
    }
    updated = ndisIfUpdateInterfaceOnInitialize((struct _NDIS_MINIPORT_BLOCK *)a2, v49, v11);
  }
  else
  {
    updated = -1073741823;
  }
  if ( updated )
  {
LABEL_283:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x1Au, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, updated);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v46,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        11,
        updated);
    v106 = 32;
    goto LABEL_273;
  }
  v20 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
  v111 = 1;
  if ( !v20 )
  {
    v74 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
    *(_QWORD *)(a2 + 4632) = v74;
    if ( v74 )
      memset(v74, 0, 0x20uLL);
  }
  if ( !*(_QWORD *)(a2 + 1776) )
  {
    memset(v138, 0, sizeof(v138));
    v138[1] = a2;
    OidList = ndisQueryOidList((__int64)v138);
    v53 = OidList;
    if ( OidList )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x1Bu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, OidList);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          v52,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          12,
          v53);
    }
  }
  v54 = *(_BYTE **)(a2 + 4152);
  if ( v54 )
  {
    if ( *v54 == 1 )
    {
      v54[1] = 1;
      v75 = *(_OWORD **)(a2 + 4152);
      v76 = (_OWORD *)((char *)v75 + 188);
      v75 = (_OWORD *)((char *)v75 + 8);
      *v76 = *v75;
      v76[1] = v75[1];
      v76[2] = v75[2];
      v76[3] = v75[3];
      v76[4] = v75[4];
      v76[5] = v75[5];
      v76[6] = v75[6];
      v76 += 8;
      v77 = v75[7];
      v75 += 8;
      *(v76 - 1) = v77;
      *v76 = *v75;
      v76[1] = v75[1];
      v76[2] = v75[2];
      *((_DWORD *)v76 + 12) = *((_DWORD *)v75 + 12);
      ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4152) + 188LL);
    }
    v78 = *(_QWORD *)(a2 + 4152);
    if ( *(_BYTE *)(v78 + 2) == 1 )
    {
      *(_BYTE *)(v78 + 3) = 1;
      v94 = *(_QWORD *)(a2 + 4152);
      *(_OWORD *)(v94 + 840) = *(_OWORD *)(v94 + 860);
      *(_DWORD *)(v94 + 856) = *(_DWORD *)(v94 + 876);
    }
  }
  v55 = v119;
  if ( !(unsigned __int8)ndisQueueMiniportOnDriver(a2, v119) )
    goto LABEL_200;
  v116 = 1;
  ndisSetDeviceInterfaceState(a2, 1u);
  if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v56) < 0 )
  {
    v106 = 39;
    goto LABEL_200;
  }
  ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
  if ( Ndis::BindState::SetBinding((Ndis::BindState *)(a2 + 5120), BindingDisabled, Reason_MiniportDeviceNotStarted)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v139);
    WPP_SF_Zq(0x1Cu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v139[1], v139[0]);
  }
  if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_InitialPause)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v140);
    WPP_SF_Zq(0x1Du, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v140[1], v140[0]);
  }
  if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_RemovingMiniport)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v141);
    WPP_SF_Zq(0x1Eu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v141[1], v141[0]);
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
    && Ndis::BindState::SetBinding((Ndis::BindState *)(a2 + 5120), BindingDisabled, Reason_DefaultPortNotActive)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v142);
    WPP_SF_Zq(0x1Fu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v142[1], v142[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208), v57);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous, 0);
  ndisSetupWmiNode(
    a2,
    *(const void ***)(a2 + 3912),
    *(unsigned __int16 *)(a2 + 3864) + 2,
    (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
    &WnodeEventItem);
  v60 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v61 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
    *v61 = *(_WORD *)(a2 + 3864);
    memmove(v61 + 1, *(const void **)(a2 + 3872), *(unsigned __int16 *)(a2 + 3864));
    v62 = IoWMIWriteEvent(v60);
    v64 = v62;
    if ( v62 < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x20u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v62);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        Template_qqq(v63, &IoWMIWriteEventFailed, (const GUID *)(a2 + 4064), v64, 1, 0);
      ExFreePoolWithTag(v60, 0);
    }
  }
  v124 = (_BYTE)ndisAcOnLine == 1;
  ndisNotifyMiniports(a2, v58, &v124, v59);
  v65 = v10;
  *(_QWORD *)(a2 + 400) = v129[0];
  if ( v10 < 6u )
  {
    *(_QWORD *)(a2 + 624) = ndisMSendPackets;
    v95 = *(_DWORD *)(a2 + 120);
    if ( (v95 & 0x40000) != 0 )
    {
      v96 = ndisMSendPacketsXToMiniport;
    }
    else
    {
      if ( (v95 & 0x40) != 0 )
      {
        *(_QWORD *)(a2 + 2040) = ndisMSendPacketsSGToMiniport;
        *(_QWORD *)(a2 + 2032) = ndisMSendPacketsSGToMiniport;
        v97 = ndisMDeferredSendSG;
        if ( *(_QWORD *)(v55 + 232) )
          v97 = ndisMDeferredSendPacketsSG;
        *(_QWORD *)(a2 + 632) = v97;
        goto LABEL_107;
      }
      v96 = ndisMSendPacketsToMiniport;
    }
    *(_QWORD *)(a2 + 2040) = v96;
    *(_QWORD *)(a2 + 2032) = v96;
  }
  else
  {
    *(_QWORD *)(a2 + 2032) = ndisMSendPacketsToNetBufferLists;
    *(_QWORD *)(a2 + 2040) = ndisMSendPacketsToNetBufferLists;
  }
LABEL_107:
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 722492;
  ndisMSetIndicatePacketHandler(a2);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v66);
  if ( ndisEnforceDisconnectedStandby )
  {
    if ( (v98 = *(_DWORD *)(a2 + 124), (v98 & 0x200000) != 0) && ndisAoAcCapable
      || (*(_DWORD *)(a2 + 2688) & 0x200) != 0 )
    {
      v99 = *(_DWORD *)(a2 + 3920);
      if ( (v99 & 0x10) == 0 )
      {
        *(_DWORD *)(a2 + 124) = v98 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 3920) = v99 | 0x10;
        ndisUpdateAndIndicatePMCapabilities(a2);
      }
    }
  }
  if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0)
    && *(_DWORD *)(a2 + 1832) == 14 )
  {
    v20 = *(_BYTE *)(a2 + 1001) == 2;
    v127 = 0LL;
    InputBuffer = *(_QWORD *)(a2 + 3888);
    LODWORD(v127) = 4;
    BYTE4(v127) = 1;
    if ( !v20
      || (*(_DWORD *)(a2 + 1008) & 1) == 0
      || *(_DWORD *)(a2 + 1012) < 0x10u
      || *(_DWORD *)(a2 + 1016) < 0x4Au
      || (unsigned int)(*(_DWORD *)(a2 + 1044) - 3) > 1
      || (*(_DWORD *)(a2 + 1052) & 1) == 0
      || (v100 = *(_DWORD *)(a2 + 1028) & 3, BYTE5(v127) = 1, (_BYTE)v100 != 3) )
    {
      BYTE5(v127) = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  v106 = 0;
  v67 = 0;
LABEL_111:
  v68 = *(void **)(a2 + 2752);
  if ( v68 )
  {
    if ( v65 >= 6u )
      ExFreePoolWithTag(v68, 0);
    *(_QWORD *)(a2 + 2752) = 0LL;
  }
  if ( v67 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3344), 5403508);
    *(_QWORD *)(a2 + 3344) = 0LL;
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x24u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, v106);
  return v106;
}
