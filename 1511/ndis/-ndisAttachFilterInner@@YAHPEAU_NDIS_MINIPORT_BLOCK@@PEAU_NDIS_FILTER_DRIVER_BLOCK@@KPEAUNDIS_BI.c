/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A7678 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisIovGetNicSwitchList @ 0x1C0016164 (ndisIovGetNicSwitchList.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0018728 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ndisCloseRef @ 0x1C00187A0 (ndisCloseRef.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C00187D8 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ndisQueueFilterOnDriver @ 0x1C0018834 (ndisQueueFilterOnDriver.c)
 *     ndisFilterXStateSetFlag @ 0x1C00188EC (ndisFilterXStateSetFlag.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C0018930 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C0018B70 (NdisIfAddIfStackEntry.c)
 *     ndisOpenRef @ 0x1C0018D84 (ndisOpenRef.c)
 *     ndisReferenceFilterDriver @ 0x1C0018DA8 (ndisReferenceFilterDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0018DB4 (ndisDereferenceFilterDriver.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0018E00 (ndisHandleFilterHandlersChange.c)
 *     ndisIfCreateFilterInterface @ 0x1C001924C (ndisIfCreateFilterInterface.c)
 *     ndisSetupWmiNode @ 0x1C001A980 (ndisSetupWmiNode.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C001B438 (ndisIndicateInitialStateToFilter.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001B800 (NdisNblTrackerRegisterComponent.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C0038468 (WPP_SF_qqDD.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C003E620 (NdisIfDeleteIfStackEntry.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0048318 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_qqZ @ 0x1C004A270 (WPP_SF_qqZ.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054464 (ndisFilterAttachCleanUp.c)
 *     Template_jcqjzzz @ 0x1C006ACA0 (Template_jcqjzzz.c)
 *     Template_jqxjqxqq @ 0x1C006ADF8 (Template_jqxjqxqq.c)
 *     WPP_SF_qqZddZD @ 0x1C006B088 (WPP_SF_qqZddZD.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1C0097990 (--2@YAPEAX_KPEAX@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00995D8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C009CA1C (ndisCreateFilterAdapterRegistry.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C009CBB8 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ndisInitializeZeroBasedRef @ 0x1C009CC20 (ndisInitializeZeroBasedRef.c)
 *     ndisFInvokeAttach @ 0x1C009CF28 (ndisFInvokeAttach.c)
 *     ndisInitializeRef @ 0x1C00A01A0 (ndisInitializeRef.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A210C (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00A28B0 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A4FE8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00A6800 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisMDoMiniportOp @ 0x1C00ABE78 (ndisMDoMiniportOp.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00C85AC (ndisCreateFilterInstanceRegistry.c)
 *     EthInitializeFilter @ 0x1C00CD9F4 (EthInitializeFilter.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DCF60 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  int v8; // r14d
  int v9; // r15d
  struct _NDIS_MINIPORT_BLOCK *v10; // rdi
  struct NDIS_BIND_FILTER_LINK *v11; // r13
  _NDIS_FILTER_DRIVER_BLOCK *v12; // rsi
  unsigned int FilterAdapterRegistry; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct Rtl::KString *v18; // rax
  unsigned __int16 v19; // bx
  _WORD *v20; // rax
  int v21; // eax
  struct _NDIS_FILTER_BLOCK *v22; // rcx
  struct _NDIS_FILTER_BLOCK *v23; // rax
  KIRQL v24; // al
  struct _NDIS_FILTER_BLOCK *v25; // rcx
  struct _NDIS_FILTER_BLOCK *v26; // r13
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rbx
  KIRQL v28; // al
  struct _NDIS_MINIPORT_BLOCK *v29; // rdx
  __int64 v30; // rax
  unsigned __int8 v31; // al
  char v32; // dl
  __int64 v33; // rax
  __int64 *v34; // r12
  __int64 v35; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  _QWORD *v37; // rcx
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v41; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *v43; // rax
  _NDIS_IF_BLOCK *IfBlock; // rdx
  void *v45; // rax
  _NDIS_MEDIUM MediaType; // eax
  const struct _EVENT_DESCRIPTOR *v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // eax
  char v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rax
  NET_IFINDEX v53; // edx
  __int64 v54; // rax
  KIRQL v55; // bl
  struct _NDIS_FILTER_BLOCK *v56; // r13
  KIRQL v57; // di
  struct _NDIS_FILTER_BLOCK *v58; // rbx
  KIRQL v59; // al
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v61; // r12
  char *v62; // rbx
  __int64 v63; // rcx
  NTSTATUS v64; // ebx
  struct _NDIS_MINIPORT_BLOCK *v65; // rdx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  KIRQL v68; // bl
  _NET_IF_MEDIA_CONNECT_STATE MiniportMediaConnectState; // ecx
  struct _NDIS_MINIPORT_BLOCK *v70; // rdx
  __int16 v71; // ax
  KIRQL v72; // al
  int v73; // edx
  __int64 v74; // rax
  NET_IFINDEX IfIndex; // edx
  __int64 v76; // rcx
  _NDIS_MEDIUM v77; // ecx
  unsigned __int8 v78[8]; // [rsp+20h] [rbp-130h]
  struct _GUID *v79; // [rsp+28h] [rbp-128h]
  unsigned int v80[2]; // [rsp+30h] [rbp-120h]
  __int64 v81; // [rsp+40h] [rbp-110h]
  char v82; // [rsp+D0h] [rbp-80h]
  char v83; // [rsp+D1h] [rbp-7Fh]
  char v84; // [rsp+D3h] [rbp-7Dh]
  struct _NDIS_FILTER_BLOCK *v87; // [rsp+E8h] [rbp-68h] BYREF
  unsigned __int8 v88[4]; // [rsp+F0h] [rbp-60h]
  int v89; // [rsp+F4h] [rbp-5Ch]
  int v90; // [rsp+F8h] [rbp-58h]
  struct _NDIS_FILTER_BLOCK *v91; // [rsp+100h] [rbp-50h] BYREF
  int v92; // [rsp+108h] [rbp-48h]
  _NDIS_FILTER_DRIVER_BLOCK *v93; // [rsp+110h] [rbp-40h]
  int v94; // [rsp+118h] [rbp-38h]
  int v95; // [rsp+128h] [rbp-28h]
  Ndis::BindState *p_BindState; // [rsp+130h] [rbp-20h]
  int v97; // [rsp+138h] [rbp-18h]
  PVOID WnodeEventItem; // [rsp+140h] [rbp-10h] BYREF
  int v99; // [rsp+148h] [rbp-8h]
  int Data3; // [rsp+14Ch] [rbp-4h]
  struct _GUID *v101; // [rsp+150h] [rbp+0h] BYREF
  _QWORD v102[28]; // [rsp+160h] [rbp+10h] BYREF
  struct _UNICODE_STRING v103; // [rsp+240h] [rbp+F0h] BYREF
  wchar_t Dest[88]; // [rsp+2E0h] [rbp+190h] BYREF

  v94 = a3;
  v93 = a2;
  v87 = 0LL;
  v91 = 0LL;
  v82 = 0;
  memset(v102, 0, sizeof(v102));
  v84 = 0;
  v83 = 0;
  if ( !ndisReferenceFilterDriver((__int64)a2) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport((__int64)a1) )
  {
    ndisDereferenceFilterDriver(a2);
    return 3221291010LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqZ(
      0x18u,
      &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids,
      a2,
      a1,
      &a2->DefaultFilterCharacteristics.FriendlyName);
  ndisReferencePackage((__int64)&ndisPkgs);
  p = a4->BindDriver._p;
  v8 = a1->InterfaceGuid.Data4[7];
  v9 = a1->InterfaceGuid.Data4[6];
  WnodeEventItem = &a1->InterfaceGuid;
  v95 = v8;
  v99 = v9;
  p_BindState = (Ndis::BindState *)p;
  v89 = a1->InterfaceGuid.Data4[3];
  v90 = a1->InterfaceGuid.Data4[2];
  v97 = a1->InterfaceGuid.Data4[1];
  v92 = a1->InterfaceGuid.Data4[0];
  Data3 = a1->InterfaceGuid.Data3;
  *(_DWORD *)v88 = a1->InterfaceGuid.Data2;
  LODWORD(v79) = Data3;
  v78[0] = v88[0];
  v10 = a1;
  v11 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v12 = v93;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_106;
  }
  ndisFindAdjacentFilters(a1, a4, &v91, &v87);
  v12 = v93;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v93->DefaultFilterCharacteristics.ServiceName, (__int64)a1);
  if ( FilterAdapterRegistry )
  {
LABEL_106:
    v15 = 0LL;
    goto LABEL_80;
  }
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1, 65812, (__int64)&v101, 4, 1u, 1);
  if ( !ndisReferenceFilterDriver((__int64)v12) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_106;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x390uLL, 0x6266444Eu);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v12);
    goto LABEL_80;
  }
  memset(PoolWithTag, 0, 0x390uLL);
  v17 = operator new(v16, v15);
  if ( v17 )
    v17[5] = 0LL;
  *v15 = 59769093;
  *((_QWORD *)v15 + 2) = v12;
  v18 = Rtl::KString::Initialize(Dest);
  KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset((void **)v15 + 5, v18);
  if ( !*((_QWORD *)v15 + 5) )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_116;
  }
  v19 = v12->DefaultFilterCharacteristics.FriendlyName.Length + 14 + a1->pAdapterInstanceName->Length;
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v19 + 16LL, 0x7473444Eu);
  *((_QWORD *)v15 + 6) = v20;
  if ( !v20 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_116;
  }
  *v20 = 0;
  *(_WORD *)(*((_QWORD *)v15 + 6) + 2LL) = v19;
  *(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) = *((_QWORD *)v15 + 6) + 16LL;
  RtlAppendUnicodeStringToString(*((PUNICODE_STRING *)v15 + 6), a1->pAdapterInstanceName);
  *(_WORD *)(*(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v15 + 6) >> 1)) = 45;
  **((_WORD **)v15 + 6) += 2;
  RtlAppendUnicodeStringToString(*((PUNICODE_STRING *)v15 + 6), &v12->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v15 + 6) >> 1)) = 45;
  **((_WORD **)v15 + 6) += 2;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v15 + 6) >> 1)) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 5) + 16LL) + 2 * (((unsigned __int64)*(unsigned __int16 *)(*((_QWORD *)v15 + 5) + 8LL) - 8) >> 1));
  **((_WORD **)v15 + 6) += 8;
  *(_WORD *)(*(_QWORD *)(*((_QWORD *)v15 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v15 + 6) >> 1)) = 0;
  *((_QWORD *)v15 + 99) = NdisNblTrackerRegisterComponent(1, (__int64)v15, *((_QWORD *)v15 + 6));
  KeInitializeSpinLock((PKSPIN_LOCK)v15 + 18);
  *((_BYTE *)v15 + 56) = 0;
  v21 = v15[14];
  if ( (v21 & 0x100) != 0 )
    v15[14] = v21 & 0xFFFFFEFF;
  v15[14] |= 8u;
  *((_BYTE *)v15 + 64) = 0;
  ndisInitializeRef((__int64)(v15 + 18), 2);
  ndisInitializeZeroBasedRef((__int64)(v15 + 78));
  ndisCloseRef((PKSPIN_LOCK)v15 + 39);
  *((_QWORD *)v15 + 73) = v12->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *((_QWORD *)v15 + 74) = v12->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *((_QWORD *)v15 + 76) = v12->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *((_QWORD *)v15 + 77) = v12->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *((_QWORD *)v15 + 75) = v12->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *((_QWORD *)v15 + 22) = v15 + 42;
  *((_QWORD *)v15 + 21) = v15 + 42;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v15,
                            (_QWORD *)v15 + 72,
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_116;
  v22 = v91;
  *((_QWORD *)v15 + 26) = ndisStackExpansionFallbackWorker;
  v23 = v87;
  *((_QWORD *)v15 + 27) = v15;
  *((_QWORD *)v15 + 24) = 0LL;
  *((_QWORD *)v15 + 14) = v23;
  *((_QWORD *)v15 + 15) = v22;
  if ( v23 || v22 || !a1->HighestFilter )
  {
    v24 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v25 = v91;
    a1->LockDbg = 3867338;
    if ( v25 )
      v25->LowerFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      a1->HighestFilter = (_NDIS_FILTER_BLOCK *)v15;
    v26 = v87;
    if ( v87 )
      v87->HigherFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      a1->LowestFilter = (_NDIS_FILTER_BLOCK *)v15;
    *((_QWORD *)v15 + 4) = a1;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v24);
    v82 = 1;
    BaseMiniport = a1;
    if ( a1->BaseMiniport )
      BaseMiniport = a1->BaseMiniport;
    v28 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *((_QWORD *)v15 + 13) = ndisGlobalFilterList;
    ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v15;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v28);
    if ( ndisQueueFilterOnDriver((__int64)v15, (__int64)v12) )
    {
      if ( (v12->Bind._p->_t.FilterBindFlags & 2) == 0
        || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                      &v12->DefaultFilterCharacteristics.ServiceName,
                                      (__int64)v15,
                                      (__int64)a1)) == 0 )
      {
        *((_BYTE *)v15 + 64) = 1;
        *((_QWORD *)v15 + 112) = a4;
        Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
        p_BindState = &a4->BindState;
        Ndis::BindState::AddBindContext(&a4->BindState, v15);
        Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v29);
        memset(v102, 0, sizeof(v102));
        v30 = *((_QWORD *)v15 + 2);
        if ( *(_BYTE *)(v30 + 100) <= 6u )
        {
          v31 = *(_BYTE *)(v30 + 101);
          if ( v31 )
          {
            if ( v31 < 0x14u )
            {
              v32 = 2;
              v71 = 176;
            }
            else
            {
              if ( v31 >= 0x1Eu )
                goto LABEL_30;
              v32 = 3;
              v71 = 200;
            }
          }
          else
          {
            v32 = 1;
            v71 = 164;
          }
          WORD1(v102[0]) = v71;
LABEL_31:
          BYTE1(v102[0]) = v32;
          LOBYTE(v102[0]) = -103;
          LODWORD(v102[3]) = BaseMiniport->IfIndex;
          v102[17] = BaseMiniport->NetLuid.Value;
          v102[5] = &BaseMiniport->MiniportName;
          v102[4] = BaseMiniport->pAdapterInstanceName;
          v33 = *((_QWORD *)v15 + 14);
          if ( v33 )
          {
            LODWORD(v102[18]) = *(_DWORD *)(v33 + 824);
            v102[19] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 14) + 832LL) + 1312LL);
          }
          else
          {
            LODWORD(v102[18]) = *(_DWORD *)(*((_QWORD *)v15 + 4) + 4112LL);
            v102[19] = *(_QWORD *)(*((_QWORD *)v15 + 4) + 4080LL);
          }
          v34 = (__int64 *)(v15 + 10);
          v35 = *((_QWORD *)v15 + 5);
          if ( v35 )
            v102[2] = v35 + 8;
          else
            v102[2] = 0LL;
          v102[10] = a1->MediaSpecificAttributes;
          if ( (a1->MacOptions & 0x80000001) == 0x80000001 )
          {
            LODWORD(v102[9]) = 3;
          }
          else
          {
            if ( v26 )
            {
              LODWORD(v102[9]) = v26->MediaType;
              PhysicalMediaType = v26->PhysicalMediaType;
              goto LABEL_38;
            }
            LODWORD(v102[9]) = a1->MiniportMediaType;
          }
          PhysicalMediaType = a1->MiniportPhysicalMediumType;
LABEL_38:
          HIDWORD(v102[9]) = PhysicalMediaType;
          v37 = (_QWORD *)*((_QWORD *)v15 + 14);
          if ( v37 )
          {
            v102[6] = *(_QWORD *)((char *)v37 + 380);
            v102[7] = v37[49];
            v102[8] = v37[50];
            p_MiniportCurrentConfig = (_NDIS_OFFLOAD *)v37[100];
          }
          else
          {
            v102[6] = *(_QWORD *)&a1->Reserved20.Length;
            v102[7] = a1->MiniportXmitLinkSpeed;
            v102[8] = a1->MiniportRcvLinkSpeed;
            Offload = a1->Offload;
            if ( !Offload || !Offload->SupportsOffload )
            {
              v102[11] = 0LL;
              goto LABEL_41;
            }
            p_MiniportCurrentConfig = &Offload->MiniportCurrentConfig;
          }
          v102[11] = p_MiniportCurrentConfig;
LABEL_41:
          HDSplitCurrentConfig = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)v102[21];
          if ( a1->HDSplitCurrentConfig )
            HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
          TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
          v102[21] = HDSplitCurrentConfig;
          v41 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)v102[22];
          if ( TopReceiveFilterCurrentCapabilities )
            v41 = TopReceiveFilterCurrentCapabilities;
          TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
          v102[22] = v41;
          v43 = (_NDIS_NIC_SWITCH_CAPABILITIES *)v102[24];
          if ( TopNicSwitchCurrentCapabilities )
            v43 = TopNicSwitchCurrentCapabilities;
          v102[24] = v43;
          if ( (unsigned __int8)v32 >= 4u )
          {
            if ( a1->SriovCurrentCapabilities )
            {
              v102[26] = a1->SriovCurrentCapabilities;
              if ( (unsigned int)ndisIovGetNicSwitchList((__int64)a1, &v102[27]) )
              {
                FilterAdapterRegistry = -1073741823;
LABEL_128:
                v11 = a4;
                goto LABEL_116;
              }
            }
            LOBYTE(v102[25]) = a1->IfBlock->ifConnectorPresent;
          }
          IfBlock = a1->IfBlock;
          v102[23] = a1->PhysicalDeviceObject;
          LOWORD(v102[12]) = IfBlock->ifPhysAddress.Length;
          memmove((char *)&v102[12] + 2, IfBlock->ifPhysAddress.Address, LOWORD(v102[12]));
          *((_QWORD *)v15 + 43) = v102[6];
          *((_QWORD *)v15 + 44) = v102[7];
          *((_QWORD *)v15 + 45) = v102[8];
          if ( LODWORD(v102[6]) == 1 )
          {
            *((_QWORD *)v15 + 78) = ndisFilterSendNetBufferLists;
            *((_QWORD *)v15 + 79) = ndisFilterIndicateReceiveNetBufferLists;
            v45 = ndisFilterCancelSendNetBufferLists;
          }
          else
          {
            ndisFilterXStateSetFlag((__int64)v15);
            *((_QWORD *)v15 + 78) = ndisFakeFilterSendHandler;
            *((_QWORD *)v15 + 79) = ndisFakeFilterReceiveHandler;
            v45 = ndisFakeMiniportCancelSendPackets;
          }
          *((_QWORD *)v15 + 80) = v45;
          if ( (a1->MacOptions & 0x80000001) == 0x80000001 )
            MediaType = a1->MediaType;
          else
            MediaType = v102[9];
          v15[84] = MediaType;
          v15[85] = HIDWORD(v102[9]);
          FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v15);
          if ( FilterAdapterRegistry )
            goto LABEL_128;
          if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
            Template_jcqjzzz(
              *((_QWORD *)v15 + 4) + 4064LL,
              *v34,
              (const GUID *)(v15 + 202),
              (unsigned __int64)(v15 + 202),
              *((_BYTE *)v15 + 64),
              240,
              *((_QWORD *)v15 + 4) + 4064LL,
              *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v15 + 4) + 3912LL) + 8LL),
              *(const wchar_t **)(*v34 + 16),
              *(const wchar_t **)(*((_QWORD *)v15 + 6) + 8LL));
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
            EtwEx_tidActivityInfoTransfer(
              v48,
              v47,
              (const struct _GUID *)(v15 + 202),
              &a1->InterfaceGuid,
              v78[0],
              v79,
              0x200000u);
          HIDWORD(v102[0]) = v15[206];
          v83 = 1;
          v102[1] = *(_QWORD *)(*((_QWORD *)v15 + 104) + 1312LL);
          v49 = ndisFInvokeAttach((__int64)v15, (__int64)v102);
          FilterAdapterRegistry = v49;
          if ( (unsigned __int8)byte_1C0083710 >= 4u )
          {
            LODWORD(v81) = v49;
            v80[0] = v12->DefaultFilterCharacteristics.MinorNdisVersion;
            LODWORD(v79) = v12->DefaultFilterCharacteristics.MajorNdisVersion;
            WPP_SF_qqZddZD(
              v12->DefaultFilterCharacteristics.MinorNdisVersion,
              v12->DefaultFilterCharacteristics.MajorNdisVersion,
              a1,
              v15,
              &v12->DefaultFilterCharacteristics.FriendlyName,
              v79,
              *(_QWORD *)v80,
              a1->pAdapterInstanceName,
              v81);
          }
          if ( FilterAdapterRegistry )
          {
            v11 = a4;
            a4->BindState.AllowBindDespiteMandatory = v102[20] & 1;
            v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 + 18);
            *((_QWORD *)v15 + 19) = KeGetCurrentThread();
            *((_BYTE *)v15 + 56) = 0;
            v73 = v15[14];
            v15[40] = 3867655;
            if ( (v73 & 0x100) != 0 )
              v15[14] = v73 & 0xFFFFFEFF;
            v15[14] |= 8u;
            *((_QWORD *)v15 + 19) = 0LL;
            v15[40] = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)v15 + 18, v72);
            *((_BYTE *)v15 + 64) = 0;
            if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
              Template_jcqjzzz(
                *((_QWORD *)v15 + 4) + 4064LL,
                *v34,
                (const GUID *)(v15 + 202),
                (unsigned __int64)(v15 + 202),
                0,
                19,
                *((_QWORD *)v15 + 4) + 4064LL,
                *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v15 + 4) + 3912LL) + 8LL),
                *(const wchar_t **)(*v34 + 16),
                *(const wchar_t **)(*((_QWORD *)v15 + 6) + 8LL));
            goto LABEL_116;
          }
          v50 = v102[9];
          if ( v15[84] != LODWORD(v102[9]) && (a1->MacOptions & 0x80000001) != 0x80000001 )
          {
            if ( (unsigned __int8)byte_1C0083714 >= 4u )
            {
              LODWORD(v79) = v102[9];
              *(_DWORD *)v78 = v15[84];
              WPP_SF_qqDD(0x1Au, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, a1, v15, *(_QWORD *)v78, v79);
              v50 = v102[9];
            }
            if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
              Template_jqxjqxqq(
                *((_QWORD *)v15 + 104),
                (__int64)(v15 + 202),
                &a1->InterfaceGuid,
                (unsigned __int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                (__int64)(v15 + 202),
                v15[206],
                *(_QWORD *)(*((_QWORD *)v15 + 104) + 1312LL),
                v15[84],
                v50);
            v84 = 1;
          }
          v51 = *((_QWORD *)v15 + 15);
          if ( v51 )
          {
            v74 = *((_QWORD *)v15 + 14);
            if ( v74 )
              IfIndex = *(_DWORD *)(v74 + 824);
            else
              IfIndex = a1->IfIndex;
            NdisIfDeleteIfStackEntry(*(_DWORD *)(v51 + 824), IfIndex);
          }
          v52 = *((_QWORD *)v15 + 14);
          if ( v52 )
            v53 = *(_DWORD *)(v52 + 824);
          else
            v53 = *(_DWORD *)(*((_QWORD *)v15 + 4) + 4112LL);
          NdisIfAddIfStackEntry(v15[206], v53);
          v54 = *((_QWORD *)v15 + 15);
          if ( v54 )
            NdisIfAddIfStackEntry(*(_DWORD *)(v54 + 824), v15[206]);
          v55 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          ndisIfUpdateFilterIfStack(*((_QWORD *)v15 + 4));
          KeReleaseSpinLock(&ndisIfListLock, v55);
          v56 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v15 + 14);
          v87 = v56;
          if ( v56 )
          {
            v57 = KeAcquireSpinLockRaiseToDpc(&v56->Lock);
            v58 = v87;
            v56->LockThread = KeGetCurrentThread();
            v58->LockDbg = 3867737;
            v15[86] = v58->MediaConnectStateIndicateUp;
            v15[87] = v58->MediaDuplexStateIndicateUp;
            *((_QWORD *)v15 + 44) = v58->XmitLinkSpeedIndicateUp;
            *((_QWORD *)v15 + 45) = v58->RcvLinkSpeedIndicateUp;
            v15[92] = v58->PauseFunctionsIndicateUp;
            v15[93] = v58->AutoNegotiationFlagsIndicateUp;
            ndisOpenRef((__int64)(v15 + 78));
            v56->LockThread = 0LL;
            v58->LockDbg = 0;
            KeReleaseSpinLock(&v56->Lock, v57);
            v10 = a1;
            v12 = v93;
          }
          else
          {
            v68 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
            MiniportMediaConnectState = a1->MiniportMediaConnectState;
            a1->LockDbg = 3867752;
            v15[86] = MiniportMediaConnectState;
            v15[87] = a1->MiniportMediaDuplexState;
            *((_QWORD *)v15 + 44) = a1->MiniportXmitLinkSpeed;
            *((_QWORD *)v15 + 45) = a1->MiniportRcvLinkSpeed;
            v15[92] = a1->MiniportPauseFunctions;
            v15[93] = a1->MiniportAutoNegotiationFlags;
            ndisOpenRef((__int64)(v15 + 78));
            a1->MiniportThread = 0LL;
            a1->LockDbg = 0;
            KeReleaseSpinLock(&a1->Lock, v68);
          }
          *(_DWORD *)(*((_QWORD *)v15 + 104) + 1220LL) = v15[86];
          *(_DWORD *)(*((_QWORD *)v15 + 104) + 1224LL) = v15[87];
          *(_QWORD *)(*((_QWORD *)v15 + 104) + 1208LL) = *((_QWORD *)v15 + 45);
          *(_QWORD *)(*((_QWORD *)v15 + 104) + 1200LL) = *((_QWORD *)v15 + 44);
          ndisIndicateInitialStateToFilter((__int64)v15);
          v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 + 18);
          CurrentThread = KeGetCurrentThread();
          *((_BYTE *)v15 + 56) = 0;
          v15[14] |= 4u;
          *((_QWORD *)v15 + 19) = CurrentThread;
          v15[40] = 3867776;
          if ( v84 )
          {
            v15[14] |= 0x8000u;
            ++v10->MediaChangeFilters;
            v76 = *((_QWORD *)v15 + 104);
            *((_QWORD *)v15 + 42) = v102[9];
            *(_DWORD *)(v76 + 564) = v15[84];
            *(_DWORD *)(*((_QWORD *)v15 + 104) + 568LL) = v15[85];
          }
          *((_QWORD *)v15 + 19) = 0LL;
          v15[40] = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)v15 + 18, v59);
          if ( v84 )
          {
            v77 = v15[84];
            v10->MediaType = v77;
            v10->PhysicalMediumType = v15[85];
            if ( v77 == NdisMedium802_3 )
            {
              if ( EthInitializeFilter(
                     v10->TopFilterRestartAttributes.MaxMulticastListSize,
                     (__int64)v10->IfBlock->ifPhysAddress.Address,
                     (__int64)v10->EthDB) )
              {
                v10->EthDB->Miniport = v10;
              }
            }
          }
          *((_BYTE *)v15 + 64) = 2;
          if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
            Template_jcqjzzz(
              *((_QWORD *)v15 + 4) + 4064LL,
              *v34,
              (const GUID *)(v15 + 202),
              (unsigned __int64)(v15 + 202),
              2,
              190,
              *((_QWORD *)v15 + 4) + 4064LL,
              *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v15 + 4) + 3912LL) + 8LL),
              *(const wchar_t **)(*v34 + 16),
              *(const wchar_t **)(*((_QWORD *)v15 + 6) + 8LL));
          ndisReferenceMiniport((__int64)v10);
          if ( v10->MajorNdisVersion < 6u && !v10->Miniport5HasNdis6Component )
            v10->Miniport5HasNdis6Component = 1;
          ndisSetupWmiNode(
            (__int64)v10,
            *((const void ***)v15 + 6),
            v10->BindPaths->Paths[0].Length + 4 + v12->DefaultFilterCharacteristics.UniqueName.Length,
            (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
            &WnodeEventItem);
          v61 = WnodeEventItem;
          if ( WnodeEventItem )
          {
            v62 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
            memmove(
              v62,
              v12->DefaultFilterCharacteristics.UniqueName.Buffer,
              v12->DefaultFilterCharacteristics.UniqueName.Length);
            memmove(
              &v62[v12->DefaultFilterCharacteristics.UniqueName.Length + 2],
              v10->BindPaths->Paths[0].Buffer,
              v10->BindPaths->Paths[0].Length);
            v64 = IoWMIWriteEvent(v61);
            if ( v64 < 0 )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_(0x1Bu, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids);
              if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
                Template_qqq(v63, &FilterArrivalIndicationFailed, (const GUID *)(v15 + 202), v64, 248, 0);
              ExFreePoolWithTag(v61, 0);
            }
          }
          Ndis::BindEngine::BeginPolicyUpdates(&v10->BindEngine);
          v11 = a4;
          if ( Ndis::BindState::SetPause(p_BindState, DatapathRunning, PauseReason_InitialPause)
            && (unsigned __int8)byte_1C0083723 >= 4u )
          {
            ndisGetBindLinkNameForTracing(a4, &v103);
            if ( (unsigned __int8)byte_1C0083723 >= 4u )
              WPP_SF_Zq(
                0x1Cu,
                &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids,
                (__int64 *)v103.Buffer,
                *(_QWORD *)&v103.Length);
          }
          Ndis::BindEngine::EndPolicyUpdates(&v10->BindEngine, v65);
          if ( v10->MajorNdisVersion < 6u && !v10->Miniport5HasNdis6Component )
            v10->Miniport5HasNdis6Component = 1;
LABEL_80:
          if ( ndisVerifierNdisDispatch
            && v15
            && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*((_QWORD *)v15 + 2) + 16LL))
            && !*((_QWORD *)v15 + 113)
            && ((int (__fastcall *)(_DEVICE_OBJECT *, _DWORD *, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
                 v12->DriverObject->DeviceObject,
                 v15,
                 &v12->FilterDriverContext) < 0
            && (unsigned __int8)byte_1C0083714 >= 2u )
          {
            WPP_SF_q(0x1Du, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)v15);
          }
          goto LABEL_81;
        }
LABEL_30:
        WORD1(v102[0]) = 224;
        v32 = 4;
        goto LABEL_31;
      }
    }
    else
    {
      FilterAdapterRegistry = -1073676286;
    }
    v11 = a4;
    goto LABEL_116;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_116:
  if ( *((_QWORD *)v15 + 112) )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Ndis::BindState::RemoveBindContext(&v11->BindState, v15);
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v70);
    *((_QWORD *)v15 + 112) = 0LL;
  }
  ndisFilterAttachCleanUp(v15, (unsigned __int64)a1 & -(__int64)(v82 != 0), v83);
LABEL_81:
  ndisHandleFilterHandlersChange((__int64)v10);
  if ( v102[27] )
  {
    ExFreePoolWithTag((PVOID)v102[27], 0);
    v102[27] = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v11->BindState.AllowBindDespiteMandatory
    && (v11->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols((__int64)v10);
  }
  ndisDereferenceMiniport((__int64)v10, 0x25u);
  ndisDereferenceFilterDriver(v12);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    *(_DWORD *)v78 = FilterAdapterRegistry;
    WPP_SF_qqd(0x1Eu, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, v12, v10, *(_QWORD *)v78);
  }
  return FilterAdapterRegistry;
}
