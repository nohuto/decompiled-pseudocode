/*
 * XREFs of ndisMInitializeAdapter @ 0x1C00E405C
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00AA8C4 (ndisInitializeAdapter.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C001013C (ndisAllocatePerProcessorSlot.c)
 *     ndisFreePerProcessorSlot @ 0x1C0010D48 (ndisFreePerProcessorSlot.c)
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0013940 (ndisIovDeleteDefaultNicSwitch.c)
 *     NdisWriteErrorLogEntry @ 0x1C0016460 (NdisWriteErrorLogEntry.c)
 *     NdisInitializeTimer @ 0x1C0016F70 (NdisInitializeTimer.c)
 *     ndisMSetGeneralAttributes @ 0x1C0017278 (ndisMSetGeneralAttributes.c)
 *     ndisSetupWmiNode @ 0x1C001A980 (ndisSetupWmiNode.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001B800 (NdisNblTrackerRegisterComponent.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C001DE48 (ndisMergeOffloadCapsAndRegistry.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001F3E8 (ndisMSetIndicatePacketHandler.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C001FB7C (ndisCheckMiniportWakeUpCapable.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001FC54 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C00246F4 (ndisAddWoLMagicPacket.c)
 *     ndisSetWakeUpTimer @ 0x1C002497C (ndisSetWakeUpTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0024B88 (ndisSetMediaDisconnectTimer.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0025070 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisReferenceDriver @ 0x1C0025210 (ndisReferenceDriver.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0046DDC (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ndisDereferenceMiniportRef @ 0x1C0057484 (ndisDereferenceMiniportRef.c)
 *     ndisCheckIfTypeMismatch @ 0x1C0058FF4 (ndisCheckIfTypeMismatch.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BA80 (ndisDereferenceDmaAdapter.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C0098F88 (ndisMDeregisterBugCheckHandler.c)
 *     ndisInitializeNsi @ 0x1C0099EB4 (ndisInitializeNsi.c)
 *     ndisMInitializeInitMode @ 0x1C009A2F4 (ndisMInitializeInitMode.c)
 *     ndisMSetOffloadAttributes @ 0x1C009A5AC (ndisMSetOffloadAttributes.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C009BFA8 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisMInvokeInitialize @ 0x1C009C608 (ndisMInvokeInitialize.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00A6800 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8724 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00A8768 (ndisSetDeviceInterfaceState.c)
 *     ndisQueryOidList @ 0x1C00A8D7C (ndisQueryOidList.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A930C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00A9B28 (ndisMReadPciPropertiesFromConfigSpace.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00AA4DC (ndisMiniportPMParametersUpdated.c)
 *     ndisQueryPowerCapabilities @ 0x1C00AAE3C (ndisQueryPowerCapabilities.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AB088 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C00AB254 (ndisGetPciDeviceCustomProperties.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C00AB8C8 (ndisCreateNdisSupportedOidList.c)
 *     ndisMNotifyMachineName @ 0x1C00ABD20 (ndisMNotifyMachineName.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00AC080 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     EthCreateFilter @ 0x1C00AC308 (EthCreateFilter.c)
 *     ndisMStartInitMode @ 0x1C00AC5D0 (ndisMStartInitMode.c)
 *     ndisRequestWaitWake @ 0x1C00AC8D0 (ndisRequestWaitWake.c)
 *     nullCreateFilter @ 0x1C00ACCE0 (nullCreateFilter.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00ACD64 (ndisMRegisterBugCheckHandler.c)
 *     DisableMagicPacketKeyword @ 0x1C00C2E28 (DisableMagicPacketKeyword.c)
 *     NdisWriteConfiguration @ 0x1C00C6E70 (NdisWriteConfiguration.c)
 *     ndisGetMiniportInfo @ 0x1C00CB158 (ndisGetMiniportInfo.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C00CD3DC (ndisQueryReenumerateSelfInterface.c)
 *     ndisIovTeardownVf @ 0x1C00D364C (ndisIovTeardownVf.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00D65CC (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D6B8C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D6CB4 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD09C (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E0D84 (ndisDeQueueMiniportOnDriver.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00E4EAC (ndisQueueMiniportOnDriver.c)
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
  ULONG_PTR v21; // rax
  __int64 v22; // rcx
  int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // rcx
  KIRQL v26; // bl
  char v27; // al
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // ebx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  unsigned __int8 v36; // si
  unsigned int v37; // edx
  char v38; // al
  int v39; // r8d
  int v40; // ecx
  char v41; // bl
  unsigned __int8 v42; // al
  int v43; // eax
  int v44; // eax
  KIRQL v45; // bl
  NTSTATUS v46; // eax
  __int64 v47; // rcx
  char v48; // bl
  _DEVICE_OBJECT *v49; // rcx
  NTSTATUS v50; // eax
  __int64 v51; // rcx
  char v52; // bl
  __int64 v53; // rax
  struct _NDIS_IF_BLOCK *v54; // rdx
  int updated; // ebx
  PVOID v56; // rax
  int OidList; // eax
  __int64 v58; // rcx
  char v59; // bl
  _BYTE *v60; // rax
  _OWORD *v61; // rax
  _OWORD *v62; // rcx
  __int128 v63; // xmm1
  __int64 v64; // rax
  __int64 v65; // r14
  enum Ndis::ReadBindingsOptions::Flags v66; // r8d
  struct _NDIS_MINIPORT_BLOCK *v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // r9
  PVOID v70; // rbx
  _WORD *v71; // rcx
  NTSTATUS v72; // eax
  __int64 v73; // rcx
  int v74; // esi
  unsigned __int8 v75; // bl
  KIRQL v76; // dl
  char v77; // si
  void *v78; // rcx
  unsigned int v80; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v82; // rcx
  __int64 v83; // rax
  int v84; // ebx
  NDIS_STATUS v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rdx
  ULONG_PTR v90; // rbx
  NTSTATUS v91; // eax
  char v92; // bl
  __int64 v93; // rcx
  __int64 v94; // rax
  void *v95; // rcx
  char v96; // r15
  char v97; // si
  char v98; // bl
  bool v99; // cf
  int v100; // ecx
  int v101; // eax
  void *v102; // rax
  char (__fastcall *v103)(__int64); // rax
  int v104; // ecx
  int v105; // eax
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // r9
  KIRQL v109; // al
  KIRQL v110; // si
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v112; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v113; // [rsp+48h] [rbp-B8h] BYREF
  char v114; // [rsp+49h] [rbp-B7h]
  bool v115; // [rsp+4Ah] [rbp-B6h]
  char v116; // [rsp+4Bh] [rbp-B5h]
  char v117; // [rsp+4Ch] [rbp-B4h]
  char v118; // [rsp+4Dh] [rbp-B3h]
  char v119; // [rsp+4Eh] [rbp-B2h]
  char v120; // [rsp+4Fh] [rbp-B1h]
  char v121; // [rsp+50h] [rbp-B0h]
  char v122; // [rsp+51h] [rbp-AFh]
  char v123; // [rsp+52h] [rbp-AEh]
  char v124; // [rsp+53h] [rbp-ADh]
  __int64 v125; // [rsp+58h] [rbp-A8h]
  int Status; // [rsp+60h] [rbp-A0h] BYREF
  int v127; // [rsp+64h] [rbp-9Ch]
  int v128; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v129; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID ConfigurationHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 InputBuffer; // [rsp+78h] [rbp-88h] BYREF
  __int64 v132; // [rsp+80h] [rbp-80h]
  BOOL v133; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v135[4]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Keyword; // [rsp+C0h] [rbp-40h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+D0h] [rbp-30h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v139[8]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID WnodeEventItem; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v141[8]; // [rsp+100h] [rbp+0h] BYREF
  struct _KEVENT Event; // [rsp+140h] [rbp+40h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v144[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v145[20]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v146[20]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v147[20]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _QWORD v148[20]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v149[28]; // [rsp+410h] [rbp+310h] BYREF
  _DWORD v150[6]; // [rsp+4F0h] [rbp+3F0h] BYREF
  GUID v151; // [rsp+508h] [rbp+408h] BYREF
  GUID InterfaceClassGuid; // [rsp+518h] [rbp+418h] BYREF
  _BYTE v153[72]; // [rsp+528h] [rbp+428h] BYREF
  char v154; // [rsp+570h] [rbp+470h] BYREF

  v125 = a1;
  v135[0] = 0LL;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v129 = 0;
  v112 = 1;
  v8 = 0;
  v151 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v128 = 1;
  v9 = 0;
  v122 = 0;
  v120 = 0;
  v118 = 0;
  v113 = 0;
  v121 = 0;
  v116 = 0;
  v124 = 0;
  v119 = 0;
  v114 = 0;
  v117 = 0;
  v115 = 0;
  LOBYTE(v127) = 0;
  v123 = 0;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qZ(0xAu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, *(__int64 **)(a2 + 3912));
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v10 = *(_BYTE *)(a1 + 24);
  if ( !ndisReferenceDriver(a1) )
  {
    v65 = a1;
    goto LABEL_274;
  }
  v122 = 1;
  DestinationString.Buffer = (wchar_t *)&v154;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3848)) < 0 )
  {
    v65 = a1;
    v8 = 0;
    goto LABEL_274;
  }
  v12 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4264));
  ReenumerateSelfInterface = v12;
  v115 = v12 >= 0 || v12 == -1073741771;
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
    v80 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3192) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v65 = a1;
      v9 = 0;
      v8 = 0;
      goto LABEL_274;
    }
    memset(PoolWithTag, 0, v80);
    v82 = *(_QWORD **)(a2 + 3816);
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v82[16];
    *(_QWORD *)(a2 + 616) = v82[17];
    *(_QWORD *)(a2 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2360) = 64LL;
    *(_QWORD *)(a2 + 2352) = a2;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 4128) = v82[25];
    if ( v10 >= 4u )
    {
      if ( *(_QWORD *)(a1 + 224) )
        *(_DWORD *)(a2 + 1872) |= 0x10u;
      *(_QWORD *)(a2 + 2184) = v82[28];
      *(_QWORD *)(a2 + 2168) = v82[28];
      *(_QWORD *)(a2 + 2192) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v83 = *(_QWORD *)(a1 + 232);
        *(_DWORD *)(a2 + 1872) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v83;
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
  ndisReferenceMiniportNoCheck(a2, 0x16u);
  v120 = 1;
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
    v65 = a1;
    v8 = 0;
    goto LABEL_274;
  }
  v114 = 1;
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
      v84 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a2 + 4144) + 40LL) >> 1) & 1;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_dd(
          0xCu,
          &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids,
          v84,
          *(_DWORD *)(*(_QWORD *)(a2 + 4144) + 40LL) & 1);
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.Flags = 0;
      ConfigObject.NdisHandle = (void *)a2;
      v85 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v85;
      if ( v85 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_d(0xDu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v85);
      }
      else
      {
        ParameterValue.ParameterType = NdisParameterInteger;
        Keyword.Buffer = L"PldrCapability";
        *(_DWORD *)&Keyword.Length = 1966108;
        ParameterValue.ParameterData.IntegerData = v84;
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_d(0xEu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, Status);
        NdisCloseConfiguration(ConfigurationHandle);
      }
    }
    else
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_qD(0xBu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, ReenumerateSelfInterface);
      ReenumerateSelfInterface = 0;
    }
  }
  *(_DWORD *)(a2 + 2256) = 2;
  memset(v141, 0, sizeof(v141));
  memset(v149, 0, sizeof(v149));
  BYTE1(v149[0]) = 2;
  if ( v10 < 6u )
  {
    v23 = (*(__int64 (__fastcall **)(_BYTE *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(a1 + 160))(
            v139,
            &v129,
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
    v150[1] = *(_DWORD *)(a2 + 3368);
    v150[2] = *(_DWORD *)(a2 + 3372);
    v150[3] = *(_DWORD *)(a2 + 3376);
    v150[4] = *(_DWORD *)(a2 + 3380);
    v19 = *(_QWORD *)(a2 + 944);
    v150[0] = 1311104;
    LODWORD(v141[0]) = 4194689;
    if ( v19 )
      v141[1] = v19 + 12;
    v20 = *(_DWORD *)(a2 + 3768) == 5;
    v141[2] = *(_QWORD *)(a2 + 1976);
    v141[3] = *(_QWORD *)(a2 + 4168);
    v141[6] = v150;
    v141[5] = *(_QWORD *)(a2 + 4080);
    LODWORD(v141[4]) = *(_DWORD *)(a2 + 4112);
    if ( v20 )
    {
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3384));
      v21 = v141[7];
      if ( ReenumerateSelfInterface >= 0 )
        v21 = a2 + 3384;
      v141[7] = v21;
    }
    v23 = ndisMInvokeInitialize((const struct _TlgProvider_t *)a2, (__int64)v141);
    if ( *(_DWORD *)(a2 + 3768) == 5 )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0xFu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v23);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
    Template_jqxqq(
      v22,
      &InitializeAdapterInfo,
      (const GUID *)(a2 + 4064),
      a2 + 4064,
      *(_DWORD *)(a2 + 4112),
      *(_QWORD *)(a2 + 4080),
      1,
      v23);
  *(_DWORD *)(a2 + 120) &= ~2u;
  if ( v23 )
  {
    *(_DWORD *)(a2 + 2256) = 1;
    *(_QWORD *)(a2 + 4120) = 2LL;
    v107 = *(_QWORD *)(a2 + 4096);
    if ( v107 && *(_DWORD *)(v107 + 1112) != 2 )
    {
      *(_DWORD *)(v107 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = *(_DWORD *)(a2 + 4124);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4696) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v112 = v23;
    ndisLastFailedInitErrorCode = v23;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_340;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v8 = 1;
        goto LABEL_335;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v108 = *(_QWORD *)(a2 + 3912);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v108, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v108, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_340:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3912),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
  v20 = (*(_DWORD *)(a2 + 124) & 0x8000000) == 0;
  v121 = 1;
  if ( v20 )
  {
    *(_QWORD *)(a2 + 16) = a2;
  }
  else
  {
    ndisReferenceMiniportByName((__int64 *)(*(_QWORD *)(a2 + 3824) + 8LL), (__int64 *)(a2 + 16), 1, 0x1Du);
    v86 = *(_QWORD *)(a2 + 16);
    if ( v86 )
      ndisDereferenceMiniportRef(v86, 0x1Du);
  }
  if ( v10 < 6u )
  {
    v87 = *(_QWORD *)(a2 + 112);
    if ( !v87 || *(_BYTE *)(v87 + 145) || *(_BYTE *)(v87 + 144) )
      *(_DWORD *)(a2 + 120) &= ~1u;
    else
      *(_DWORD *)(a2 + 120) |= 1u;
    if ( !*(_QWORD *)(a2 + 2072) )
    {
      *(_QWORD *)(a2 + 2072) = *(_QWORD *)(a1 + 312);
      *(_QWORD *)(a2 + 2064) = *(_QWORD *)(a2 + 24);
    }
    v88 = *((_DWORD *)ndisMediumArray + v129);
    LODWORD(v149[1]) = v88;
    *(_DWORD *)(a2 + 464) = v88;
    *(_DWORD *)(a2 + 1836) = v88;
  }
  v24 = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(a2 + 2256) = 6;
  if ( v24 <= 0xD )
  {
    v25 = 8390LL;
    if ( _bittest((const int *)&v25, v24) )
    {
      if ( (unsigned __int8)byte_1C0083714 >= 4u )
        WPP_SF_q(0x10u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        Template_jqxq(
          v25,
          &UnsupportedMiniportMediaType,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          *(_DWORD *)(a2 + 464));
      goto LABEL_193;
    }
  }
  ndisMRegisterBugCheckHandler((char *)a2);
  if ( *(_DWORD *)(a2 + 464) != 3 )
    goto LABEL_40;
  if ( v10 <= 4u )
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 632) = ndisMStartWanSends;
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x20000) == 0 )
  {
LABEL_193:
    v112 = 32;
LABEL_195:
    v65 = v125;
LABEL_197:
    v9 = 0;
LABEL_200:
    v8 = 0;
    goto LABEL_274;
  }
LABEL_40:
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721635;
  v27 = ndisSetWakeUpTimer(a2);
  v28 = (unsigned __int8)v127;
  if ( v27 )
    v28 = 1;
  *(_QWORD *)(a2 + 520) = 0LL;
  v127 = v28;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v26);
  ndisMStartInitMode(a2);
  if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x11u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, ReenumerateSelfInterface);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v29,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        2,
        ReenumerateSelfInterface);
    v112 = 36;
    v65 = a1;
    goto LABEL_197;
  }
  if ( v10 < 6u )
  {
    memset(v153, 0, 0x3CuLL);
    v149[27] = v153;
    *(_QWORD *)(a2 + 2752) = v149;
    if ( (unsigned int)ndisGetMiniportInfo(a2, (__int64)v149, &v112, (char *)&v113, &v128)
      || (unsigned int)ndisMSetGeneralAttributes((struct _NDIS_MINIPORT_BLOCK *)a2, *(_QWORD *)(a2 + 2752)) )
    {
      goto LABEL_325;
    }
    v89 = *(_QWORD *)(a2 + 4152);
    if ( !v89 )
    {
      v31 = v128;
      goto LABEL_47;
    }
    v30 = ndisMSetOffloadAttributes(a2, v89 + 368, (_WORD *)(v89 + 368), 0LL, 0LL);
    v31 = v128;
  }
  else
  {
    v30 = 0;
    v31 = v128;
    if ( *(_BYTE *)(a2 + 929) )
      v31 = 0;
  }
  if ( v30 )
  {
LABEL_325:
    v8 = 0;
LABEL_335:
    v65 = v125;
    if ( !v112 )
      goto LABEL_280;
    v9 = 0;
LABEL_274:
    Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v11);
    ndisNotifyBindFailureOnUnboundProtocols(a2);
    if ( v117 )
    {
      *(_QWORD *)(a2 + 4120) = 2LL;
      v94 = *(_QWORD *)(a2 + 4096);
      if ( *(_DWORD *)(v94 + 1112) != 2 )
      {
        *(_DWORD *)(v94 + 1112) = 2;
        *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = *(_DWORD *)(a2 + 4124);
        ndisNsiSyncMiniportOperStatusNotification(a2);
      }
    }
    if ( v9 )
    {
      v95 = *(void **)(a2 + 4632);
      if ( v95 )
      {
        ExFreePoolWithTag(v95, 0);
        *(_QWORD *)(a2 + 4632) = 0LL;
      }
    }
LABEL_280:
    v96 = v124;
    if ( v124 )
    {
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3880), 2u);
      v96 = 0;
    }
    v97 = v119;
    if ( v119 )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4208), 0);
      v97 = 0;
    }
    v98 = v123;
    if ( v123 )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4888), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4888));
      *(_QWORD *)(a2 + 4896) = 0LL;
      v98 = 0;
    }
    if ( v121 )
    {
      ndisIovDeleteDefaultNicSwitch((_DWORD *)a2);
      v99 = v116 != 0;
      v116 = -v116;
      v100 = (v99 ? 4 : 0) | (v96 != 0 ? 2 : 0);
      v99 = (_BYTE)v127 != 0;
      LOBYTE(v127) = -(char)v127;
      ndisMCommonHaltMiniport(a2, (v97 != 0 ? 0x40 : 0) | 0x80 | (v99 ? 8 : 0) | v100 | (v98 != 0 ? 0x100 : 0));
      ndisMDeregisterBugCheckHandler(a2);
    }
    if ( !v8 )
      goto LABEL_357;
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 && *(_QWORD *)(a2 + 504) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x21u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
      ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    }
    v109 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v110 = v109;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 722703;
    if ( *(_QWORD *)(a2 + 504) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v110);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_357;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v109);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
LABEL_357:
    if ( v118 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x22u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
      ndisDeQueueMiniportOnDriver(a2, v65);
    }
    if ( v115 )
      IoDeleteSymbolicLink(&DestinationString);
    if ( v120 )
      ndisDereferenceMiniportRef(a2, 0x16u);
    if ( v122 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x23u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
      ndisDereferenceDriver(v65, 0);
    }
    v77 = v114;
    v75 = v10;
    goto LABEL_132;
  }
LABEL_47:
  v32 = *(_QWORD *)(a2 + 2752);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1408LL) == 2 )
  {
    v33 = ndisCheckNetworkInterfaceDataMismatch(a2, v32);
    v34 = NdisConvertNtStatusToNdisStatus(v33);
  }
  else
  {
    v34 = ndisCheckIfTypeMismatch(a2, v32);
  }
  if ( v34 )
    goto LABEL_325;
  if ( v10 < 6u )
    ndisReadMiniportDefaultPortAuthStates(a2);
  Status = ndisIovCreateDefaultNicSwitch((struct _NDIS_MINIPORT_BLOCK *)a2);
  if ( Status )
    goto LABEL_325;
  if ( !*(_DWORD *)(a2 + 464) )
    ndisMNotifyMachineName(a2);
  v35 = *(_DWORD *)(a2 + 124);
  v36 = 1;
  if ( ((v35 & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 3816) + 26LL) & 1) != 0) && *(_DWORD *)(a2 + 464) <= 0x13u )
  {
    if ( v31 )
      v37 = v35 & 0xFFFFFFFE;
    else
      v37 = v35 | 1;
    *(_DWORD *)(a2 + 124) = v37;
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
    v38 = ndisCheckMiniportWakeUpCapable(a2);
    v39 = *(_DWORD *)(a2 + 3920);
    if ( (v39 & 8) == 0 )
    {
      v40 = *(_DWORD *)(a2 + 1108);
      *(_DWORD *)(a2 + 124) |= 0x20u;
      v41 = 0;
      if ( (unsigned int)(v40 - 2) <= 2 )
      {
        *(_DWORD *)(a2 + 1132) |= 1u;
        v41 = 1;
      }
      if ( (v39 & 0x10) == 0 && v38 )
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 1104) - 2) <= 2 )
          *(_DWORD *)(a2 + 124) |= 0x40u;
        if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
        {
          *(_DWORD *)(a2 + 124) |= 0x40u;
          v41 = 1;
          *(_DWORD *)(a2 + 1124) |= 2u;
          v42 = *(_BYTE *)(a2 + 32);
          if ( v42 <= 6u && (v42 != 6 || *(_BYTE *)(a2 + 33) < 0x14u) )
            goto LABEL_79;
          v43 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2);
          Status = v43;
          if ( !v43 || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
            goto LABEL_79;
          WPP_SF_qD(0x12u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v43);
        }
      }
      if ( !v41 )
      {
LABEL_80:
        if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
        {
          v44 = *(_DWORD *)(a2 + 124);
          if ( (v44 & 0x40) != 0 )
          {
            if ( !*(_QWORD *)(a2 + 1296) )
            {
              *(_DWORD *)(a2 + 124) = v44 & 0xFFFFFBFF;
              Status = ndisRequestWaitWake((char *)a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
            }
          }
          else
          {
            ndisCancelWaitWake(a2);
          }
        }
        goto LABEL_84;
      }
LABEL_79:
      ndisMiniportPMParametersUpdated(a2);
      goto LABEL_80;
    }
  }
LABEL_84:
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721910;
  if ( *(_DWORD *)(a2 + 480) == 2 )
    ndisSetMediaDisconnectTimer(a2);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v45);
  *(_QWORD *)(a2 + 4544) = a2;
  *(_QWORD *)(a2 + 4552) = ndisSignalD0CompleteWorkItem;
  if ( (*(_DWORD *)(a2 + 1064) & 2) != 0 )
    ndisSelectiveSuspendInitialize((_QWORD *)a2);
  if ( (*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0 )
  {
    ndisAoAcInitialize((_QWORD *)a2);
    if ( *(_QWORD *)(a2 + 4520) )
      ndisAoAcStart((struct _NDIS_MINIPORT_BLOCK *)a2);
  }
  if ( *(_DWORD *)(a2 + 464) )
  {
    if ( nullCreateFilter(v135) )
      goto LABEL_93;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x14u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
    v112 = 30;
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
    if ( EthCreateFilter(*(_DWORD *)(*(_QWORD *)(a2 + 2752) + 88LL), *(_QWORD *)(a2 + 2752) + 126LL, v135) )
    {
LABEL_93:
      v36 = v113;
      *(_QWORD *)(v135[0] + 296LL) = a2;
      goto LABEL_94;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x13u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
    v112 = 9;
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
LABEL_94:
  if ( *(_DWORD *)(a2 + 1836) == 16 && v10 >= 6u )
  {
    v90 = a2 + 600;
    if ( !nullCreateFilter((_QWORD *)(a2 + 600)) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x15u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
      *(_QWORD *)v90 = 0LL;
      v112 = 30;
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) == 0 )
      {
        v65 = v125;
        v9 = 0;
        v8 = 0;
        goto LABEL_274;
      }
      Template_jqxqq(
        30LL,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        7,
        30);
      goto LABEL_195;
    }
    *(_QWORD *)(*(_QWORD *)v90 + 296LL) = a2;
  }
  if ( !*(_DWORD *)(a2 + 464) )
    *(_BYTE *)(a2 + 1998) = 1;
  v46 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3880), 1u);
  v48 = v46;
  if ( v46 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_qD(0x16u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v46);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v47,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        8,
        v48);
    v112 = 31;
    v36 = 1;
    goto LABEL_248;
  }
  v124 = 1;
  if ( v36 )
  {
LABEL_248:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_qD(0x17u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v36);
    OutputBufferLength[0] = v112;
    NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)OutputBufferLength);
    v8 = 0;
    goto LABEL_335;
  }
  if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3888));
  v49 = *(_DEVICE_OBJECT **)(a2 + 3888);
  v9 = 1;
  v112 = 1;
  v50 = IoRegisterDeviceInterface(v49, &InterfaceClassGuid, (PUNICODE_STRING)(a2 + 3848), (PUNICODE_STRING)(a2 + 360));
  v8 = 0;
  v52 = v50;
  if ( v50 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x18u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v50);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v51,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        10,
        v52);
    v112 = 35;
    goto LABEL_199;
  }
  v53 = *(_QWORD *)(a2 + 4672);
  v116 = 1;
  v119 = 1;
  if ( v53 && (*(_BYTE *)(v53 + 8) & 3) == 3 )
  {
    v91 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a2 + 3888), &v151, 0LL, (PUNICODE_STRING)(a2 + 4888));
    v92 = v91;
    if ( Status < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x19u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v91);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          v51,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          0,
          v92);
      v112 = 34;
LABEL_199:
      v65 = v125;
      v9 = 0;
      goto LABEL_200;
    }
    v123 = 1;
  }
  *(_DWORD *)(*(_QWORD *)(a2 + 3880) + 48LL) &= ~0x80u;
  v11 = *(_QWORD *)(a2 + 2752);
  if ( v11 )
  {
    v54 = *(struct _NDIS_IF_BLOCK **)(a2 + 4096);
    if ( !v54 )
    {
      updated = -1073741823;
      goto LABEL_263;
    }
    updated = ndisIfUpdateInterfaceOnInitialize((struct _TlgProvider_t *)a2, v54, v11);
  }
  else
  {
    updated = -1073741823;
  }
  if ( updated )
  {
LABEL_263:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x1Au, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, updated);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v51,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        11,
        updated);
    v112 = 32;
    goto LABEL_199;
  }
  v20 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
  v117 = 1;
  if ( !v20 )
  {
    v56 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
    *(_QWORD *)(a2 + 4632) = v56;
    if ( v56 )
      memset(v56, 0, 0x20uLL);
  }
  if ( !*(_QWORD *)(a2 + 1776) )
  {
    memset(v144, 0, sizeof(v144));
    v144[1] = a2;
    OidList = ndisQueryOidList((__int64)v144);
    v59 = OidList;
    if ( OidList )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x1Bu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, OidList);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          v58,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          12,
          v59);
    }
  }
  v60 = *(_BYTE **)(a2 + 4152);
  if ( v60 )
  {
    if ( *v60 == 1 )
    {
      v60[1] = 1;
      v61 = *(_OWORD **)(a2 + 4152);
      v62 = (_OWORD *)((char *)v61 + 188);
      v61 = (_OWORD *)((char *)v61 + 8);
      *v62 = *v61;
      v62[1] = v61[1];
      v62[2] = v61[2];
      v62[3] = v61[3];
      v62[4] = v61[4];
      v62[5] = v61[5];
      v62[6] = v61[6];
      v62 += 8;
      v63 = v61[7];
      v61 += 8;
      *(v62 - 1) = v63;
      *v62 = *v61;
      v62[1] = v61[1];
      v62[2] = v61[2];
      *((_DWORD *)v62 + 12) = *((_DWORD *)v61 + 12);
      ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4152) + 188LL);
    }
    v64 = *(_QWORD *)(a2 + 4152);
    if ( *(_BYTE *)(v64 + 2) == 1 )
    {
      *(_BYTE *)(v64 + 3) = 1;
      v93 = *(_QWORD *)(a2 + 4152);
      *(_OWORD *)(v93 + 840) = *(_OWORD *)(v93 + 860);
      *(_DWORD *)(v93 + 856) = *(_DWORD *)(v93 + 876);
    }
  }
  v65 = v125;
  if ( !(unsigned __int8)ndisQueueMiniportOnDriver(a2, v125) )
    goto LABEL_274;
  v118 = 1;
  ndisSetDeviceInterfaceState(a2, 1u);
  if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v66) < 0 )
  {
    v112 = 39;
    goto LABEL_274;
  }
  ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
  if ( Ndis::BindState::SetBinding((Ndis::BindState *)(a2 + 5120), BindingDisabled, Reason_MiniportDeviceNotStarted)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v145);
    WPP_SF_Zq(0x1Cu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64 *)v145[1], v145[0]);
  }
  if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_InitialPause)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v146);
    WPP_SF_Zq(0x1Du, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64 *)v146[1], v146[0]);
  }
  if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_RemovingMiniport)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v147);
    WPP_SF_Zq(0x1Eu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64 *)v147[1], v147[0]);
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
    && Ndis::BindState::SetBinding((Ndis::BindState *)(a2 + 5120), BindingDisabled, Reason_DefaultPortNotActive)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v148);
    WPP_SF_Zq(0x1Fu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64 *)v148[1], v148[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208), v67);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous);
  ndisSetupWmiNode(
    a2,
    *(const void ***)(a2 + 3912),
    *(unsigned __int16 *)(a2 + 3864) + 2,
    (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
    &WnodeEventItem);
  v70 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v71 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
    *v71 = *(_WORD *)(a2 + 3864);
    memmove(v71 + 1, *(const void **)(a2 + 3872), *(unsigned __int16 *)(a2 + 3864));
    v72 = IoWMIWriteEvent(v70);
    v74 = v72;
    if ( v72 < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x20u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v72);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        Template_qqq(v73, &IoWMIWriteEventFailed, (const GUID *)(a2 + 4064), v74, 230, 0);
      ExFreePoolWithTag(v70, 0);
    }
  }
  v133 = (_BYTE)ndisAcOnLine == 1;
  ndisNotifyMiniports(a2, v68, &v133, v69);
  v75 = v10;
  *(_QWORD *)(a2 + 400) = v135[0];
  if ( v10 < 6u )
  {
    *(_QWORD *)(a2 + 624) = ndisMSendPackets;
    v101 = *(_DWORD *)(a2 + 120);
    if ( (v101 & 0x40000) != 0 )
    {
      v102 = ndisMSendPacketsXToMiniport;
    }
    else
    {
      if ( (v101 & 0x40) != 0 )
      {
        *(_QWORD *)(a2 + 2040) = ndisMSendPacketsSGToMiniport;
        *(_QWORD *)(a2 + 2032) = ndisMSendPacketsSGToMiniport;
        v103 = ndisMDeferredSendSG;
        if ( *(_QWORD *)(v65 + 232) )
          v103 = ndisMDeferredSendPacketsSG;
        *(_QWORD *)(a2 + 632) = v103;
        goto LABEL_127;
      }
      v102 = ndisMSendPacketsToMiniport;
    }
    *(_QWORD *)(a2 + 2040) = v102;
    *(_QWORD *)(a2 + 2032) = v102;
  }
  else
  {
    *(_QWORD *)(a2 + 2032) = ndisMSendPacketsToNetBufferLists;
    *(_QWORD *)(a2 + 2040) = ndisMSendPacketsToNetBufferLists;
  }
LABEL_127:
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 722465;
  ndisMSetIndicatePacketHandler(a2);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v76);
  if ( ndisEnforceDisconnectedStandby )
  {
    if ( (v104 = *(_DWORD *)(a2 + 124), (v104 & 0x200000) != 0) && ndisAoAcCapable
      || (*(_DWORD *)(a2 + 2688) & 0x200) != 0 )
    {
      v105 = *(_DWORD *)(a2 + 3920);
      if ( (v105 & 0x10) == 0 )
      {
        *(_DWORD *)(a2 + 124) = v104 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 3920) = v105 | 0x10;
        ndisUpdateAndIndicatePMCapabilities(a2);
      }
    }
  }
  if ( ((*(_DWORD *)(a2 + 124) & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(a2 + 2688) & 0x200) != 0)
    && *(_DWORD *)(a2 + 1832) == 14 )
  {
    v20 = *(_BYTE *)(a2 + 1001) == 2;
    v132 = 0LL;
    InputBuffer = *(_QWORD *)(a2 + 3888);
    LODWORD(v132) = 4;
    BYTE4(v132) = 1;
    if ( !v20
      || (*(_DWORD *)(a2 + 1008) & 1) == 0
      || *(_DWORD *)(a2 + 1012) < 0x10u
      || *(_DWORD *)(a2 + 1016) < 0x4Au
      || (unsigned int)(*(_DWORD *)(a2 + 1044) - 3) > 1
      || (*(_DWORD *)(a2 + 1052) & 1) == 0
      || (v106 = *(_DWORD *)(a2 + 1028) & 3, BYTE5(v132) = 1, (_BYTE)v106 != 3) )
    {
      BYTE5(v132) = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  v112 = 0;
  v77 = 0;
LABEL_132:
  v78 = *(void **)(a2 + 2752);
  if ( v78 )
  {
    if ( v75 >= 6u )
      ExFreePoolWithTag(v78, 0);
    *(_QWORD *)(a2 + 2752) = 0LL;
  }
  if ( v77 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3344), 5403508);
    *(_QWORD *)(a2 + 3344) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x24u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, v112);
  return v112;
}
