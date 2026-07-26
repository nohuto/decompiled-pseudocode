/*
 * XREFs of ndisMInitializeAdapter @ 0x1C00E9E1C
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00AC230 (ndisInitializeAdapter.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C000DBCC (ndisAllocatePerProcessorSlot.c)
 *     ndisFreePerProcessorSlot @ 0x1C000E728 (ndisFreePerProcessorSlot.c)
 *     ndisDereferenceDriver @ 0x1C000F414 (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C000F7E0 (ndisIovDeleteDefaultNicSwitch.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0011390 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisMSetGeneralAttributes @ 0x1C0013AA0 (ndisMSetGeneralAttributes.c)
 *     ndisMergeOffloadCapsAndRegistry @ 0x1C0016558 (ndisMergeOffloadCapsAndRegistry.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0018DAC (ndisSetMediaDisconnectTimer.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0019AD0 (NdisNblTrackerRegisterComponent.c)
 *     ndisSetupWmiNode @ 0x1C001A53C (ndisSetupWmiNode.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001AED4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisMSetIndicatePacketHandler @ 0x1C001B728 (ndisMSetIndicatePacketHandler.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C001B834 (ndisCheckMiniportWakeUpCapable.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C001B8C8 (ndisUpdatePMCurrentCapabilities.c)
 *     NdisInitializeTimer @ 0x1C001BB70 (NdisInitializeTimer.c)
 *     ndisSetWakeUpTimer @ 0x1C001BBF8 (ndisSetWakeUpTimer.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     ndisReferenceDriver @ 0x1C001BD38 (ndisReferenceDriver.c)
 *     ndisCancelWaitWake @ 0x1C001BD44 (ndisCancelWaitWake.c)
 *     ndisAddWoLMagicPacket @ 0x1C001BF64 (ndisAddWoLMagicPacket.c)
 *     ndisCheckIfTypeMismatch @ 0x1C0021F14 (ndisCheckIfTypeMismatch.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022190 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003A190 (Template_jqxqq.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004584C (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ndisDereferenceMiniportRef @ 0x1C0057758 (ndisDereferenceMiniportRef.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BD10 (ndisDereferenceDmaAdapter.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009BD18 (ndisMDeregisterBugCheckHandler.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C009C3EC (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ndisMSetOffloadAttributes @ 0x1C009F4EC (ndisMSetOffloadAttributes.c)
 *     ndisMInvokeInitialize @ 0x1C00A043C (ndisMInvokeInitialize.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A8C70 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AABCC (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisQueryOidList @ 0x1C00AB464 (ndisQueryOidList.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00ABB08 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00ABB58 (ndisSetDeviceInterfaceState.c)
 *     ndisMInitializeInitMode @ 0x1C00ABC3C (ndisMInitializeInitMode.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00ABC88 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisCreateNdisSupportedOidList @ 0x1C00ABD94 (ndisCreateNdisSupportedOidList.c)
 *     ndisMStartInitMode @ 0x1C00ABF54 (ndisMStartInitMode.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00ABFB0 (ndisMRegisterBugCheckHandler.c)
 *     ndisQueryPowerCapabilities @ 0x1C00ABFD8 (ndisQueryPowerCapabilities.c)
 *     nullCreateFilter @ 0x1C00AC5D8 (nullCreateFilter.c)
 *     EthCreateFilter @ 0x1C00AC65C (EthCreateFilter.c)
 *     ndisRequestWaitWake @ 0x1C00AC7D4 (ndisRequestWaitWake.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ACAAC (ndisMiniportPMParametersUpdated.c)
 *     ndisMNotifyMachineName @ 0x1C00ACAB8 (ndisMNotifyMachineName.c)
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00ACCE8 (ndisMReadPciPropertiesFromConfigSpace.c)
 *     ndisGetPciDeviceCustomProperties @ 0x1C00ACE04 (ndisGetPciDeviceCustomProperties.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B03A0 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisInitializeNsi @ 0x1C00B3934 (ndisInitializeNsi.c)
 *     DisableMagicPacketKeyword @ 0x1C00C9A08 (DisableMagicPacketKeyword.c)
 *     ndisGetMiniportInfo @ 0x1C00D1DE8 (ndisGetMiniportInfo.c)
 *     ndisQueryReenumerateSelfInterface @ 0x1C00D3C4C (ndisQueryReenumerateSelfInterface.c)
 *     ndisIovTeardownVf @ 0x1C00D9F0C (ndisIovTeardownVf.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C00DCC7C (ndisSelectiveSuspendInitialize.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00DD23C (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00DD364 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00E6CD0 (ndisDeQueueMiniportOnDriver.c)
 *     ndisReferenceMiniportByName @ 0x1C00E8720 (ndisReferenceMiniportByName.c)
 *     ndisNotifyMiniports @ 0x1C00EAC48 (ndisNotifyMiniports.c)
 *     ndisQueueMiniportOnDriver @ 0x1C00EACD4 (ndisQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisMInitializeAdapter(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // r13
  char v9; // si
  unsigned __int8 v10; // r12
  __int64 v11; // r8
  NTSTATUS v12; // eax
  int PciDeviceCustomProperties; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 PerProcessorSlot; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // ebx
  unsigned int v23; // eax
  KIRQL v24; // bl
  char v25; // al
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rdx
  int v31; // eax
  int DefaultNicSwitch; // r15d
  int v33; // edx
  unsigned int v34; // edx
  char v35; // al
  int v36; // r8d
  int v37; // ecx
  char v38; // bl
  int v39; // eax
  __int64 v40; // rdx
  KIRQL v41; // bl
  unsigned __int8 v42; // si
  NTSTATUS v43; // eax
  __int64 v44; // rcx
  char v45; // bl
  _DEVICE_OBJECT *v46; // rcx
  NTSTATUS v47; // eax
  __int64 v48; // rcx
  char v49; // bl
  __int64 v50; // rax
  struct _NDIS_IF_BLOCK *v51; // rdx
  int updated; // ebx
  int OidList; // eax
  __int64 v54; // rcx
  char v55; // bl
  _BYTE *v56; // rax
  __int64 v57; // r15
  enum Ndis::ReadBindingsOptions::Flags v58; // r8d
  __int64 v59; // rdx
  __int64 v60; // r9
  PVOID v61; // rbx
  _WORD *v62; // rcx
  NTSTATUS v63; // eax
  __int64 v64; // rcx
  int v65; // esi
  unsigned __int8 v66; // bl
  KIRQL v67; // dl
  char v68; // si
  void *v69; // rcx
  ULONG_PTR v71; // rax
  __int64 v72; // rcx
  unsigned __int8 v73; // al
  int v74; // eax
  PVOID v75; // rax
  _OWORD *v76; // rax
  _OWORD *v77; // rcx
  __int128 v78; // xmm1
  __int64 v79; // rax
  int v80; // eax
  unsigned int v81; // ebx
  PVOID PoolWithTag; // rax
  _QWORD *v83; // rcx
  __int64 v84; // rax
  int ReenumerateSelfInterface; // eax
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rdx
  ULONG_PTR v90; // rbx
  NTSTATUS v91; // eax
  char v92; // bl
  __int64 v93; // rcx
  int v94; // eax
  void *v95; // rax
  char (__fastcall *v96)(__int64); // rax
  int v97; // ecx
  int v98; // eax
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // r9
  __int64 v102; // rax
  void *v103; // rcx
  char v104; // r14
  char v105; // si
  char v106; // bl
  bool v107; // cf
  int v108; // ecx
  KIRQL v109; // al
  KIRQL v110; // si
  __int64 v111; // rbx
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v113; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v114; // [rsp+48h] [rbp-B8h] BYREF
  char v115; // [rsp+49h] [rbp-B7h]
  bool v116; // [rsp+4Ah] [rbp-B6h]
  char v117; // [rsp+4Bh] [rbp-B5h]
  char v118; // [rsp+4Ch] [rbp-B4h]
  char v119; // [rsp+4Dh] [rbp-B3h]
  char v120; // [rsp+4Eh] [rbp-B2h]
  char v121; // [rsp+4Fh] [rbp-B1h]
  char v122; // [rsp+50h] [rbp-B0h]
  char v123; // [rsp+51h] [rbp-AFh]
  char v124; // [rsp+52h] [rbp-AEh]
  char v125; // [rsp+53h] [rbp-ADh]
  int v126; // [rsp+54h] [rbp-ACh] BYREF
  int v127; // [rsp+58h] [rbp-A8h]
  unsigned int v128; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v129; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v130; // [rsp+68h] [rbp-98h]
  __int64 InputBuffer; // [rsp+70h] [rbp-90h] BYREF
  __int64 v132; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v134[4]; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER Timeout; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v136[8]; // [rsp+B8h] [rbp-48h] BYREF
  PVOID WnodeEventItem[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v138[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v140[5]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v141[20]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v142[20]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v143[20]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v144[20]; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v145[28]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _DWORD v146[6]; // [rsp+4B0h] [rbp+3B0h] BYREF
  GUID v147; // [rsp+4C8h] [rbp+3C8h] BYREF
  GUID InterfaceClassGuid; // [rsp+4D8h] [rbp+3D8h] BYREF
  _BYTE v149[72]; // [rsp+4E8h] [rbp+3E8h] BYREF
  char v150; // [rsp+530h] [rbp+430h] BYREF

  v130 = a1;
  v134[0] = 0LL;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v128 = 0;
  v113 = 1;
  v8 = 0;
  v147 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  v126 = 1;
  v9 = 0;
  v120 = 0;
  v119 = 0;
  v123 = 0;
  v114 = 0;
  v124 = 0;
  v117 = 0;
  v122 = 0;
  v118 = 0;
  v115 = 0;
  v125 = 0;
  v116 = 0;
  LOBYTE(v127) = 0;
  v121 = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qZ(0xAu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, *(__int64 **)(a2 + 3912));
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  v10 = *(_BYTE *)(a1 + 24);
  if ( !ndisReferenceDriver(a1, 2u) )
    goto LABEL_325;
  v120 = 1;
  DestinationString.Buffer = (wchar_t *)&v150;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
  if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(a2 + 3848)) < 0 )
  {
    v8 = 0;
    goto LABEL_325;
  }
  v12 = IoCreateSymbolicLink(&DestinationString, (PUNICODE_STRING)(a2 + 4264));
  PciDeviceCustomProperties = v12;
  v116 = v12 >= 0 || v12 == -1073741771;
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
    v81 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 112 * ndisMaxNumberOfProcessors, 0x2020444Eu);
    *(_QWORD *)(a2 + 3192) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = 0;
      v8 = 0;
      goto LABEL_325;
    }
    memset(PoolWithTag, 0, v81);
    v83 = *(_QWORD **)(a2 + 3816);
    *(_QWORD *)(a2 + 632) = ndisMDeferredSend;
    *(_QWORD *)(a2 + 608) = v83[16];
    *(_QWORD *)(a2 + 616) = v83[17];
    *(_QWORD *)(a2 + 2464) = ndisReturnNetBufferListsToPackets;
    *(_QWORD *)(a2 + 2360) = 64LL;
    *(_QWORD *)(a2 + 2352) = a2;
    *(_QWORD *)(a2 + 2368) = a2;
    *(_QWORD *)(a2 + 4128) = v83[25];
    if ( v10 >= 4u )
    {
      if ( *(_QWORD *)(a1 + 224) )
        *(_DWORD *)(a2 + 1872) |= 0x10u;
      *(_QWORD *)(a2 + 2184) = v83[28];
      *(_QWORD *)(a2 + 2168) = v83[28];
      *(_QWORD *)(a2 + 2192) = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a1 + 232) )
      {
        *(_BYTE *)(a2 + 928) |= 1u;
        *(_QWORD *)(a2 + 632) = ndisMDeferredSendPackets;
        v84 = *(_QWORD *)(a1 + 232);
        *(_DWORD *)(a2 + 1872) |= 0x8000000u;
        *(_QWORD *)(a2 + 1808) = v84;
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
  v119 = 1;
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
    goto LABEL_191;
  }
  v115 = 1;
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
  if ( *(_QWORD *)(a1 + 864) )
  {
    if ( !*(_QWORD *)(a2 + 4144) )
    {
      ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(*(PDEVICE_OBJECT *)(a2 + 3896), (PVOID *)(a2 + 4144));
      PciDeviceCustomProperties = ReenumerateSelfInterface;
      if ( ReenumerateSelfInterface < 0 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_qD(0xBu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, ReenumerateSelfInterface);
        PciDeviceCustomProperties = 0;
      }
    }
  }
  *(_DWORD *)(a2 + 2256) = 2;
  memset(v138, 0, sizeof(v138));
  memset(v145, 0, sizeof(v145));
  BYTE1(v145[0]) = 2;
  if ( v10 < 6u )
  {
    v22 = (*(__int64 (__fastcall **)(_BYTE *, unsigned int *, PVOID, __int64, ULONG_PTR, __int64))(a1 + 160))(
            v136,
            &v128,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( *(_DWORD *)(a2 + 3768) == 5 )
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3384));
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    v146[1] = *(_DWORD *)(a2 + 3368);
    v146[2] = *(_DWORD *)(a2 + 3372);
    v146[3] = *(_DWORD *)(a2 + 3376);
    v146[4] = *(_DWORD *)(a2 + 3380);
    v19 = *(_QWORD *)(a2 + 944);
    v146[0] = 1311104;
    LODWORD(v138[0]) = 4194689;
    if ( v19 )
      v138[1] = v19 + 12;
    v20 = *(_DWORD *)(a2 + 3768) == 5;
    v138[2] = *(_QWORD *)(a2 + 1976);
    v138[3] = *(_QWORD *)(a2 + 4168);
    v138[6] = v146;
    v138[5] = *(_QWORD *)(a2 + 4080);
    LODWORD(v138[4]) = *(_DWORD *)(a2 + 4112);
    if ( v20 )
    {
      PciDeviceCustomProperties = ndisGetPciDeviceCustomProperties(a2, (_DWORD *)(a2 + 3384));
      v71 = v138[7];
      if ( PciDeviceCustomProperties >= 0 )
        v71 = a2 + 3384;
      v138[7] = v71;
    }
    v22 = ndisMInvokeInitialize((const struct _TlgProvider_t *)a2, (__int64)v138);
    if ( *(_DWORD *)(a2 + 3768) == 5 )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0xCu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v22);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
    Template_jqxqq(
      v21,
      &InitializeAdapterInfo,
      (const GUID *)(a2 + 4064),
      a2 + 4064,
      *(_DWORD *)(a2 + 4112),
      *(_QWORD *)(a2 + 4080),
      1,
      v22);
  *(_DWORD *)(a2 + 120) &= ~2u;
  if ( v22 )
  {
    *(_DWORD *)(a2 + 2256) = 1;
    *(_QWORD *)(a2 + 4120) = 2LL;
    v100 = *(_QWORD *)(a2 + 4096);
    if ( v100 && *(_DWORD *)(v100 + 1112) != 2 )
    {
      *(_DWORD *)(v100 + 1112) = 2;
      *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = *(_DWORD *)(a2 + 4124);
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( *(_QWORD *)(a2 + 4696) )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    v113 = v22;
    ndisLastFailedInitErrorCode = v22;
    if ( !*(_QWORD *)(a2 + 560) )
    {
      if ( *(_QWORD *)(a2 + 112) )
        goto LABEL_321;
      if ( !*(_QWORD *)(a2 + 784) )
      {
        v8 = 1;
        goto LABEL_316;
      }
    }
    if ( !*(_QWORD *)(a2 + 112) )
    {
      v101 = *(_QWORD *)(a2 + 3912);
      if ( *(_QWORD *)(a2 + 784) )
      {
        DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v101, "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 784), 0LL);
      }
      DbgPrintEx(0x78u, 0, " ***NDIS*** : Miniport %Z - %s\n", v101, "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, a2, *(_QWORD *)(a2 + 560), 0LL);
    }
LABEL_321:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *(_QWORD *)(a2 + 3912),
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, a2, *(_QWORD *)(a2 + 112), 0LL);
  }
  v20 = (*(_DWORD *)(a2 + 124) & 0x8000000) == 0;
  v124 = 1;
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
    v88 = *((_DWORD *)ndisMediumArray + v128);
    LODWORD(v145[1]) = v88;
    *(_DWORD *)(a2 + 464) = v88;
    *(_DWORD *)(a2 + 1836) = v88;
  }
  v23 = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(a2 + 2256) = 6;
  if ( v23 <= 0xD )
  {
    v72 = 8390LL;
    if ( _bittest((const int *)&v72, v23) )
    {
      if ( (unsigned __int8)byte_1C0085314 >= 4u )
        WPP_SF_q(0xDu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000000) != 0 )
        Template_jqxq(
          v72,
          &UnsupportedMiniportMediaType,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          *(_DWORD *)(a2 + 464));
      goto LABEL_189;
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
LABEL_189:
      v113 = 32;
      v9 = 0;
LABEL_191:
      v8 = 0;
      goto LABEL_325;
    }
  }
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721583;
  v25 = ndisSetWakeUpTimer(a2);
  v26 = (unsigned __int8)v127;
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  if ( v25 )
    v26 = 1;
  v127 = v26;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v24);
  ndisMStartInitMode(a2);
  if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0xEu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, PciDeviceCustomProperties);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v27,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        2,
        PciDeviceCustomProperties);
    v113 = 36;
    goto LABEL_202;
  }
  if ( v10 < 6u )
  {
    memset(v149, 0, 0x3CuLL);
    v145[27] = v149;
    *(_QWORD *)(a2 + 2752) = v145;
    if ( (unsigned int)ndisGetMiniportInfo(a2, (__int64)v145, &v113, (char *)&v114, &v126)
      || (unsigned int)ndisMSetGeneralAttributes((struct _NDIS_MINIPORT_BLOCK *)a2, *(_QWORD *)(a2 + 2752)) )
    {
      goto LABEL_306;
    }
    v89 = *(_QWORD *)(a2 + 4152);
    if ( !v89 )
    {
      v29 = v126;
      goto LABEL_43;
    }
    v28 = ndisMSetOffloadAttributes(a2, v89 + 368, (_WORD *)(v89 + 368), 0LL, 0LL);
    v29 = v126;
  }
  else
  {
    v28 = 0;
    v29 = v126;
    if ( *(_BYTE *)(a2 + 929) )
      v29 = 0;
  }
  if ( v28 )
  {
LABEL_306:
    v8 = 0;
LABEL_316:
    if ( !v113 )
      goto LABEL_331;
    v9 = 0;
LABEL_325:
    Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)v11);
    ndisNotifyBindFailureOnUnboundProtocols(a2);
    if ( v125 )
    {
      *(_QWORD *)(a2 + 4120) = 2LL;
      v102 = *(_QWORD *)(a2 + 4096);
      if ( *(_DWORD *)(v102 + 1112) != 2 )
      {
        *(_DWORD *)(v102 + 1112) = 2;
        *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = *(_DWORD *)(a2 + 4124);
        ndisNsiSyncMiniportOperStatusNotification(a2);
      }
    }
    if ( v9 )
    {
      v103 = *(void **)(a2 + 4632);
      if ( v103 )
      {
        ExFreePoolWithTag(v103, 0);
        *(_QWORD *)(a2 + 4632) = 0LL;
      }
    }
LABEL_331:
    v104 = v122;
    if ( v122 )
    {
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3880), 2u);
      v104 = 0;
    }
    v105 = v118;
    if ( v118 )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4208), 0);
      v105 = 0;
    }
    v106 = v121;
    if ( v121 )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(a2 + 4888), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(a2 + 4888));
      *(_QWORD *)(a2 + 4896) = 0LL;
      v106 = 0;
    }
    if ( v124 )
    {
      ndisIovDeleteDefaultNicSwitch((_DWORD *)a2);
      v107 = v117 != 0;
      v117 = -v117;
      v108 = (v107 ? 4 : 0) | (v104 != 0 ? 2 : 0);
      v107 = (_BYTE)v127 != 0;
      LOBYTE(v127) = -(char)v127;
      ndisMCommonHaltMiniport(a2, (v105 != 0 ? 0x40 : 0) | 0x80 | (v107 ? 8 : 0) | v108 | (v106 != 0 ? 0x100 : 0));
      ndisMDeregisterBugCheckHandler(a2);
    }
    if ( !v8 )
      goto LABEL_350;
    if ( (*(_DWORD *)(a2 + 120) & 0x40) != 0 && *(_QWORD *)(a2 + 504) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x1Eu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
      ndisDereferenceDmaAdapter(*(PVOID *)(a2 + 504));
    }
    v109 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v110 = v109;
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 722651;
    if ( *(_QWORD *)(a2 + 504) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(*(_QWORD *)(a2 + 504) + 80LL) = &Event;
      Timeout.QuadPart = -300000000LL;
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v110);
      if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) )
        goto LABEL_350;
    }
    else
    {
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v109);
    }
    *(_DWORD *)(a2 + 120) &= ~0x40u;
LABEL_350:
    if ( v123 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x1Fu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
      v111 = v130;
      ndisDeQueueMiniportOnDriver(a2, v130);
    }
    else
    {
      v111 = v130;
    }
    if ( v116 )
      IoDeleteSymbolicLink(&DestinationString);
    if ( v119 )
      ndisDereferenceMiniportRef(a2, 0x16u);
    if ( v120 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x20u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
      ndisDereferenceDriver(v111, 0);
    }
    v68 = v115;
    v66 = v10;
    goto LABEL_110;
  }
LABEL_43:
  v30 = *(_QWORD *)(a2 + 2752);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1408LL) == 2 )
  {
    v80 = ndisCheckNetworkInterfaceDataMismatch(a2, v30);
    v31 = NdisConvertNtStatusToNdisStatus(v80);
  }
  else
  {
    v31 = ndisCheckIfTypeMismatch(a2, v30);
  }
  if ( v31 )
    goto LABEL_306;
  if ( v10 < 6u )
    ndisReadMiniportDefaultPortAuthStates(a2);
  DefaultNicSwitch = ndisIovCreateDefaultNicSwitch(a2);
  if ( DefaultNicSwitch )
    goto LABEL_306;
  if ( !*(_DWORD *)(a2 + 464) )
    ndisMNotifyMachineName(a2);
  v33 = *(_DWORD *)(a2 + 124);
  if ( ((v33 & 0x8001) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 3816) + 26LL) & 1) != 0) && *(_DWORD *)(a2 + 464) <= 0x13u )
  {
    if ( v29 )
      v34 = v33 & 0xFFFFFFFE;
    else
      v34 = v33 | 1;
    *(_DWORD *)(a2 + 124) = v34;
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
    v35 = ndisCheckMiniportWakeUpCapable(a2);
    v36 = *(_DWORD *)(a2 + 3920);
    if ( (v36 & 8) == 0 )
    {
      v37 = *(_DWORD *)(a2 + 1108);
      *(_DWORD *)(a2 + 124) |= 0x20u;
      v38 = 0;
      if ( (unsigned int)(v37 - 2) <= 2 )
      {
        *(_DWORD *)(a2 + 1132) |= 1u;
        v38 = 1;
      }
      if ( (v36 & 0x10) == 0 && v35 )
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 1104) - 2) <= 2 )
          *(_DWORD *)(a2 + 124) |= 0x40u;
        if ( (unsigned int)(*(_DWORD *)(a2 + 1100) - 2) <= 2 )
        {
          *(_DWORD *)(a2 + 124) |= 0x40u;
          v38 = 1;
          *(_DWORD *)(a2 + 1124) |= 2u;
          v73 = *(_BYTE *)(a2 + 32);
          if ( v73 <= 6u && (v73 != 6 || *(_BYTE *)(a2 + 33) < 0x14u)
            || (v74 = ndisAddWoLMagicPacket((KSPIN_LOCK *)a2), (DefaultNicSwitch = v74) == 0)
            || (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
          {
LABEL_135:
            ndisMiniportPMParametersUpdated(a2);
LABEL_67:
            if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
            {
              v39 = *(_DWORD *)(a2 + 124);
              if ( (v39 & 0x40) != 0 )
              {
                if ( !*(_QWORD *)(a2 + 1296) )
                {
                  *(_DWORD *)(a2 + 124) = v39 & 0xFFFFFBFF;
                  DefaultNicSwitch = ndisRequestWaitWake(
                                       (char *)a2,
                                       (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                }
              }
              else
              {
                ndisCancelWaitWake(a2);
              }
            }
            goto LABEL_70;
          }
          WPP_SF_qD(0xFu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v74);
        }
      }
      if ( !v38 )
        goto LABEL_67;
      goto LABEL_135;
    }
  }
LABEL_70:
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 721858;
  if ( *(_DWORD *)(a2 + 480) == 2 )
    ndisSetMediaDisconnectTimer(a2, v40);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v41);
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
    if ( nullCreateFilter(v134) )
    {
LABEL_78:
      v42 = v114;
      *(_QWORD *)(v134[0] + 296LL) = a2;
      goto LABEL_79;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x11u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
    v113 = 30;
    v42 = 1;
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
    if ( EthCreateFilter(*(_DWORD *)(*(_QWORD *)(a2 + 2752) + 88LL), *(_QWORD *)(a2 + 2752) + 126LL, v134) )
      goto LABEL_78;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_q(0x10u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
    v113 = 9;
    v42 = 1;
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
LABEL_79:
  if ( *(_DWORD *)(a2 + 1836) == 16 && v10 >= 6u )
  {
    v90 = a2 + 600;
    if ( !nullCreateFilter((_QWORD *)(a2 + 600)) )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_q(0x12u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
      *(_QWORD *)v90 = 0LL;
      v113 = 30;
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
LABEL_202:
      v9 = 0;
LABEL_204:
      v8 = 0;
      goto LABEL_325;
    }
    *(_QWORD *)(*(_QWORD *)v90 + 296LL) = a2;
  }
  if ( !*(_DWORD *)(a2 + 464) )
    *(_BYTE *)(a2 + 1998) = 1;
  v43 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a2 + 3880), 1u);
  v45 = v43;
  if ( v43 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_qD(0x13u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v43);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v44,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        8,
        v45);
    v113 = 31;
    v42 = 1;
    goto LABEL_242;
  }
  v122 = 1;
  if ( v42 )
  {
LABEL_242:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
      WPP_SF_qD(0x14u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v42);
    OutputBufferLength[0] = v113;
    NdisWriteErrorLogEntry((NDIS_HANDLE)a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)OutputBufferLength);
    v8 = 0;
    goto LABEL_316;
  }
  if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a2 + 3888));
  v46 = *(_DEVICE_OBJECT **)(a2 + 3888);
  v113 = 1;
  v47 = IoRegisterDeviceInterface(v46, &InterfaceClassGuid, (PUNICODE_STRING)(a2 + 3848), (PUNICODE_STRING)(a2 + 360));
  v9 = 0;
  v49 = v47;
  if ( v47 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x15u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v47);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v48,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        10,
        v49);
    v113 = 35;
    goto LABEL_191;
  }
  v50 = *(_QWORD *)(a2 + 4672);
  v117 = 1;
  v118 = 1;
  if ( v50 && (*(_BYTE *)(v50 + 8) & 3) == 3 )
  {
    v91 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(a2 + 3888), &v147, 0LL, (PUNICODE_STRING)(a2 + 4888));
    v92 = v91;
    if ( DefaultNicSwitch < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x16u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v91);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          v48,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          0,
          v92);
      v113 = 34;
      goto LABEL_204;
    }
    v121 = 1;
  }
  *(_DWORD *)(*(_QWORD *)(a2 + 3880) + 48LL) &= ~0x80u;
  v11 = *(_QWORD *)(a2 + 2752);
  if ( v11 )
  {
    v51 = *(struct _NDIS_IF_BLOCK **)(a2 + 4096);
    if ( !v51 )
    {
      updated = -1073741823;
      goto LABEL_257;
    }
    updated = ndisIfUpdateInterfaceOnInitialize((struct _NDIS_MINIPORT_BLOCK *)a2, v51, v11);
  }
  else
  {
    updated = -1073741823;
  }
  if ( updated )
  {
LABEL_257:
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0x17u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, updated);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
      Template_jqxqq(
        v48,
        &InitializeAdapterFailed,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        11,
        updated);
    v113 = 32;
    goto LABEL_204;
  }
  v20 = (*(_DWORD *)(a2 + 124) & 0x200000) == 0;
  v125 = 1;
  if ( !v20 )
  {
    v75 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7763444Eu);
    *(_QWORD *)(a2 + 4632) = v75;
    if ( v75 )
      memset(v75, 0, 0x20uLL);
  }
  v9 = 1;
  if ( !*(_QWORD *)(a2 + 1776) )
  {
    memset(v140, 0, 0x20uLL);
    v140[1] = a2;
    OidList = ndisQueryOidList((__int64)v140);
    v55 = OidList;
    if ( OidList )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x18u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, OidList);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000) != 0 )
        Template_jqxqq(
          v54,
          &InitializeAdapterFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          12,
          v55);
    }
  }
  v56 = *(_BYTE **)(a2 + 4152);
  if ( v56 )
  {
    if ( *v56 == 1 )
    {
      v56[1] = 1;
      v76 = *(_OWORD **)(a2 + 4152);
      v77 = (_OWORD *)((char *)v76 + 188);
      v76 = (_OWORD *)((char *)v76 + 8);
      *v77 = *v76;
      v77[1] = v76[1];
      v77[2] = v76[2];
      v77[3] = v76[3];
      v77[4] = v76[4];
      v77[5] = v76[5];
      v77[6] = v76[6];
      v77 += 8;
      v78 = v76[7];
      v76 += 8;
      *(v77 - 1) = v78;
      *v77 = *v76;
      v77[1] = v76[1];
      v77[2] = v76[2];
      *((_DWORD *)v77 + 12) = *((_DWORD *)v76 + 12);
      ndisMergeOffloadCapsAndRegistry(a2, *(_QWORD *)(a2 + 4152) + 188LL);
    }
    v79 = *(_QWORD *)(a2 + 4152);
    if ( *(_BYTE *)(v79 + 2) == 1 )
    {
      *(_BYTE *)(v79 + 3) = 1;
      v93 = *(_QWORD *)(a2 + 4152);
      *(_OWORD *)(v93 + 840) = *(_OWORD *)(v93 + 860);
      *(_DWORD *)(v93 + 856) = *(_DWORD *)(v93 + 876);
    }
  }
  v57 = v130;
  if ( !(unsigned __int8)ndisQueueMiniportOnDriver(a2, v130) )
    goto LABEL_268;
  v123 = 1;
  ndisSetDeviceInterfaceState(a2, 1u);
  if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v58) < 0 )
  {
    v113 = 39;
LABEL_268:
    v8 = 0;
    goto LABEL_325;
  }
  ndisPcwNotifyMiniportCreation((struct _NDIS_MINIPORT_BLOCK *)a2);
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
  if ( Ndis::BindState::SetBinding((Ndis::BindState *)(a2 + 5120), BindingDisabled, Reason_MiniportDeviceNotStarted)
    && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v141);
    WPP_SF_Zq(0x19u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64 *)v141[1], v141[0]);
  }
  if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_InitialPause)
    && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v142);
    WPP_SF_Zq(0x1Au, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64 *)v142[1], v142[0]);
  }
  if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_RemovingMiniport)
    && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v143);
    WPP_SF_Zq(0x1Bu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64 *)v143[1], v143[0]);
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0
    && Ndis::BindState::SetBinding((Ndis::BindState *)(a2 + 5120), BindingDisabled, Reason_DefaultPortNotActive)
    && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v144);
    WPP_SF_Zq(0x1Cu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64 *)v144[1], v144[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous);
  ndisSetupWmiNode(
    a2,
    *(const void ***)(a2 + 3912),
    *(unsigned __int16 *)(a2 + 3864) + 2,
    (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL,
    WnodeEventItem);
  v61 = WnodeEventItem[0];
  if ( WnodeEventItem[0] )
  {
    v62 = (char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14);
    *v62 = *(_WORD *)(a2 + 3864);
    memmove(v62 + 1, *(const void **)(a2 + 3872), *(unsigned __int16 *)(a2 + 3864));
    v63 = IoWMIWriteEvent(v61);
    v65 = v63;
    if ( v63 < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x1Du, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v63);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
        Template_qqq(v64, &IoWMIWriteEventFailed, (const GUID *)(a2 + 4064), v65, 178, 0);
      ExFreePoolWithTag(v61, 0);
    }
  }
  v129 = (_BYTE)ndisAcOnLine == 1;
  ndisNotifyMiniports(a2, v59, &v129, v60);
  v66 = v10;
  *(_QWORD *)(a2 + 400) = v134[0];
  if ( v10 < 6u )
  {
    *(_QWORD *)(a2 + 624) = ndisMSendPackets;
    v94 = *(_DWORD *)(a2 + 120);
    if ( (v94 & 0x40000) != 0 )
    {
      v95 = ndisMSendPacketsXToMiniport;
    }
    else
    {
      if ( (v94 & 0x40) != 0 )
      {
        *(_QWORD *)(a2 + 2040) = ndisMSendPacketsSGToMiniport;
        *(_QWORD *)(a2 + 2032) = ndisMSendPacketsSGToMiniport;
        v96 = ndisMDeferredSendSG;
        if ( *(_QWORD *)(v57 + 232) )
          v96 = ndisMDeferredSendPacketsSG;
        *(_QWORD *)(a2 + 632) = v96;
        goto LABEL_106;
      }
      v95 = ndisMSendPacketsToMiniport;
    }
    *(_QWORD *)(a2 + 2040) = v95;
    *(_QWORD *)(a2 + 2032) = v95;
  }
  else
  {
    *(_QWORD *)(a2 + 2032) = ndisMSendPacketsToNetBufferLists;
    *(_QWORD *)(a2 + 2040) = ndisMSendPacketsToNetBufferLists;
  }
LABEL_106:
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 722413;
  ndisMSetIndicatePacketHandler(a2);
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v67);
  if ( ndisEnforceDisconnectedStandby )
  {
    if ( (v97 = *(_DWORD *)(a2 + 124), (v97 & 0x200000) != 0) && ndisAoAcCapable
      || (*(_DWORD *)(a2 + 2688) & 0x200) != 0 )
    {
      v98 = *(_DWORD *)(a2 + 3920);
      if ( (v98 & 0x10) == 0 )
      {
        *(_DWORD *)(a2 + 124) = v97 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 3920) = v98 | 0x10;
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
      || (v99 = *(_DWORD *)(a2 + 1028) & 3, BYTE5(v132) = 1, (_BYTE)v99 != 3) )
    {
      BYTE5(v132) = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  v113 = 0;
  v68 = 0;
LABEL_110:
  v69 = *(void **)(a2 + 2752);
  if ( v69 )
  {
    if ( v66 >= 6u )
      ExFreePoolWithTag(v69, 0);
    *(_QWORD *)(a2 + 2752) = 0LL;
  }
  if ( v68 )
  {
    ndisFreePerProcessorSlot(*(_QWORD *)(a2 + 3344), 5403508);
    *(_QWORD *)(a2 + 3344) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x21u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, v113);
  return v113;
}
