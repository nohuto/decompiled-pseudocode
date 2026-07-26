/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEB60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisDereferenceFilterDriver @ 0x1C0014580 (ndisDereferenceFilterDriver.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0016828 (ndisIndicateInitialStateToFilter.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0017988 (ndisHandleFilterHandlersChange.c)
 *     ndisReferenceFilterDriver @ 0x1C0019000 (ndisReferenceFilterDriver.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0019AD0 (NdisNblTrackerRegisterComponent.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001A154 (ndisIfUpdateFilterIfStack.c)
 *     ndisSetupWmiNode @ 0x1C001A53C (ndisSetupWmiNode.c)
 *     ndisIfCreateFilterInterface @ 0x1C001A7E0 (ndisIfCreateFilterInterface.c)
 *     NdisIfAddIfStackEntry @ 0x1C001A910 (NdisIfAddIfStackEntry.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C001E388 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001E960 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ndisQueueFilterOnDriver @ 0x1C001F898 (ndisQueueFilterOnDriver.c)
 *     ndisFilterXStateSetFlag @ 0x1C001FACC (ndisFilterXStateSetFlag.c)
 *     ndisCloseRef @ 0x1C0020064 (ndisCloseRef.c)
 *     ndisOpenRef @ 0x1C0020204 (ndisOpenRef.c)
 *     ndisIovGetNicSwitchList @ 0x1C0021BF4 (ndisIovGetNicSwitchList.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C003D590 (NdisIfDeleteIfStackEntry.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0046FF8 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_qqZ @ 0x1C00499D4 (WPP_SF_qqZ.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054074 (ndisFilterAttachCleanUp.c)
 *     Template_jcqjzzz @ 0x1C006BBA0 (Template_jcqjzzz.c)
 *     Template_jqxjqxqq @ 0x1C006BCF8 (Template_jqxjqxqq.c)
 *     WPP_SF_qqZddZD @ 0x1C006BF88 (WPP_SF_qqZddZD.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1C009A818 (--2@YAPEAX_KPEAX@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C009C0F4 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00A1B74 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A33B8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisInitializeRef @ 0x1C00A68C4 (ndisInitializeRef.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00A8F38 (ndisInitializeZeroBasedRef.c)
 *     ndisMDoMiniportOp @ 0x1C00ACC10 (ndisMDoMiniportOp.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AF570 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B03A0 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C00B06E0 (ndisCreateFilterAdapterRegistry.c)
 *     ndisFInvokeAttach @ 0x1C00B17D0 (ndisFInvokeAttach.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00CF19C (ndisCreateFilterInstanceRegistry.c)
 *     EthInitializeFilter @ 0x1C00D4264 (EthInitializeFilter.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  struct Rtl::KString *v19; // rcx
  struct Rtl::KString *v20; // rbx
  unsigned __int16 v21; // bx
  _WORD *v22; // rax
  int v23; // eax
  struct _NDIS_FILTER_BLOCK *v24; // rcx
  struct _NDIS_FILTER_BLOCK *v25; // rax
  KIRQL v26; // al
  struct _NDIS_FILTER_BLOCK *v27; // rcx
  struct _NDIS_FILTER_BLOCK *v28; // r13
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rbx
  KIRQL v30; // al
  __int64 v31; // rax
  unsigned __int8 v32; // al
  char v33; // dl
  __int64 v34; // rax
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
  char v49; // r12
  unsigned int v50; // eax
  char v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  NET_IFINDEX v54; // edx
  __int64 v55; // rax
  KIRQL v56; // bl
  struct _NDIS_FILTER_BLOCK *v57; // r13
  KIRQL v58; // di
  struct _NDIS_FILTER_BLOCK *v59; // rbx
  KIRQL v60; // al
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v62; // r12
  char *v63; // rbx
  __int64 v64; // rcx
  NTSTATUS v65; // ebx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  KIRQL v68; // bl
  _NET_IF_MEDIA_CONNECT_STATE MiniportMediaConnectState; // ecx
  __int16 v70; // ax
  KIRQL v71; // al
  int v72; // edx
  __int64 v73; // rax
  NET_IFINDEX IfIndex; // edx
  __int64 v75; // rcx
  _NDIS_MEDIUM v76; // ecx
  unsigned __int8 v77[8]; // [rsp+20h] [rbp-130h]
  struct _GUID *v78; // [rsp+28h] [rbp-128h]
  unsigned int v79[2]; // [rsp+30h] [rbp-120h]
  __int64 v80; // [rsp+40h] [rbp-110h]
  char v81; // [rsp+D1h] [rbp-7Fh]
  char v82; // [rsp+D2h] [rbp-7Eh]
  struct _NDIS_FILTER_BLOCK *v85; // [rsp+E8h] [rbp-68h] BYREF
  unsigned __int8 v86[4]; // [rsp+F0h] [rbp-60h]
  int v87; // [rsp+F4h] [rbp-5Ch]
  int v88; // [rsp+F8h] [rbp-58h]
  struct _NDIS_FILTER_BLOCK *v89; // [rsp+100h] [rbp-50h] BYREF
  int v90; // [rsp+108h] [rbp-48h]
  _NDIS_FILTER_DRIVER_BLOCK *v91; // [rsp+110h] [rbp-40h]
  int v92; // [rsp+118h] [rbp-38h]
  int v93; // [rsp+128h] [rbp-28h]
  Ndis::BindState *p_BindState; // [rsp+130h] [rbp-20h]
  int v95; // [rsp+138h] [rbp-18h]
  PVOID WnodeEventItem; // [rsp+140h] [rbp-10h] BYREF
  int v97; // [rsp+148h] [rbp-8h]
  int Data3; // [rsp+14Ch] [rbp-4h]
  struct _GUID *v99; // [rsp+150h] [rbp+0h] BYREF
  _QWORD v100[28]; // [rsp+160h] [rbp+10h] BYREF
  struct _UNICODE_STRING v101; // [rsp+240h] [rbp+F0h] BYREF
  wchar_t Dest[88]; // [rsp+2E0h] [rbp+190h] BYREF

  v92 = a3;
  v91 = a2;
  v85 = 0LL;
  v89 = 0LL;
  v81 = 0;
  memset(v100, 0, sizeof(v100));
  v82 = 0;
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)a2) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport((__int64)a1, 0x25u) )
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
  v93 = v8;
  v97 = v9;
  p_BindState = (Ndis::BindState *)p;
  v87 = a1->InterfaceGuid.Data4[3];
  v88 = a1->InterfaceGuid.Data4[2];
  v95 = a1->InterfaceGuid.Data4[1];
  v90 = a1->InterfaceGuid.Data4[0];
  Data3 = a1->InterfaceGuid.Data3;
  *(_DWORD *)v86 = a1->InterfaceGuid.Data2;
  LODWORD(v78) = Data3;
  v77[0] = v86[0];
  v10 = a1;
  v11 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v12 = v91;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_109;
  }
  ndisFindAdjacentFilters(a1, a4, &v89, &v85);
  v12 = v91;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v91->DefaultFilterCharacteristics.ServiceName, (__int64)a1);
  if ( FilterAdapterRegistry )
  {
LABEL_109:
    v15 = 0LL;
    goto LABEL_85;
  }
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1, 65812, (__int64)&v99, 4, 1u, 1);
  if ( !(unsigned __int8)ndisReferenceFilterDriver((__int64)v12) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_109;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x390uLL, 0x6266444Eu);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v12);
    goto LABEL_85;
  }
  memset(PoolWithTag, 0, 0x390uLL);
  v17 = operator new(v16, v15);
  if ( v17 )
    v17[5] = 0LL;
  *v15 = 59769093;
  *((_QWORD *)v15 + 2) = v12;
  v18 = Rtl::KString::Initialize(Dest);
  v19 = (struct Rtl::KString *)*((_QWORD *)v15 + 5);
  v20 = v18;
  if ( v18 != v19 )
  {
    if ( v19 )
      ExFreePoolWithTag(v19, 0x7274534Bu);
    *((_QWORD *)v15 + 5) = v20;
  }
  if ( !*((_QWORD *)v15 + 5) )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_115;
  }
  v21 = v12->DefaultFilterCharacteristics.FriendlyName.Length + 14 + a1->pAdapterInstanceName->Length;
  v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v21 + 16LL, 0x7473444Eu);
  *((_QWORD *)v15 + 6) = v22;
  if ( !v22 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_121;
  }
  *v22 = 0;
  *(_WORD *)(*((_QWORD *)v15 + 6) + 2LL) = v21;
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
  v23 = v15[14];
  if ( (v23 & 0x100) != 0 )
    v15[14] = v23 & 0xFFFFFEFF;
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
    goto LABEL_115;
  v24 = v89;
  *((_QWORD *)v15 + 26) = ndisStackExpansionFallbackWorker;
  v25 = v85;
  *((_QWORD *)v15 + 27) = v15;
  *((_QWORD *)v15 + 24) = 0LL;
  *((_QWORD *)v15 + 14) = v25;
  *((_QWORD *)v15 + 15) = v24;
  if ( v25 || v24 || !a1->HighestFilter )
  {
    v26 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v27 = v89;
    a1->LockDbg = 3867338;
    if ( v27 )
      v27->LowerFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      a1->HighestFilter = (_NDIS_FILTER_BLOCK *)v15;
    v28 = v85;
    if ( v85 )
      v85->HigherFilter = (_NDIS_FILTER_BLOCK *)v15;
    else
      a1->LowestFilter = (_NDIS_FILTER_BLOCK *)v15;
    *((_QWORD *)v15 + 4) = a1;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v26);
    v81 = 1;
    BaseMiniport = a1;
    if ( a1->BaseMiniport )
      BaseMiniport = a1->BaseMiniport;
    v30 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *((_QWORD *)v15 + 13) = ndisGlobalFilterList;
    ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v15;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v30);
    if ( !ndisQueueFilterOnDriver((__int64)v15, (__int64)v12) )
    {
      v11 = a4;
      FilterAdapterRegistry = -1073676286;
      v49 = 0;
      goto LABEL_116;
    }
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
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
      memset(v100, 0, sizeof(v100));
      v31 = *((_QWORD *)v15 + 2);
      if ( *(_BYTE *)(v31 + 100) <= 6u )
      {
        v32 = *(_BYTE *)(v31 + 101);
        if ( v32 )
        {
          if ( v32 < 0x14u )
          {
            v33 = 2;
            v70 = 176;
          }
          else
          {
            if ( v32 >= 0x1Eu )
              goto LABEL_34;
            v33 = 3;
            v70 = 200;
          }
        }
        else
        {
          v33 = 1;
          v70 = 164;
        }
        WORD1(v100[0]) = v70;
LABEL_35:
        BYTE1(v100[0]) = v33;
        LOBYTE(v100[0]) = -103;
        LODWORD(v100[3]) = BaseMiniport->IfIndex;
        v100[17] = BaseMiniport->NetLuid.Value;
        v100[5] = &BaseMiniport->MiniportName;
        v100[4] = BaseMiniport->pAdapterInstanceName;
        v34 = *((_QWORD *)v15 + 14);
        if ( v34 )
        {
          LODWORD(v100[18]) = *(_DWORD *)(v34 + 824);
          v100[19] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 14) + 832LL) + 1312LL);
        }
        else
        {
          LODWORD(v100[18]) = *(_DWORD *)(*((_QWORD *)v15 + 4) + 4112LL);
          v100[19] = *(_QWORD *)(*((_QWORD *)v15 + 4) + 4080LL);
        }
        v35 = *((_QWORD *)v15 + 5);
        if ( v35 )
          v100[2] = v35 + 8;
        else
          v100[2] = 0LL;
        v100[10] = a1->MediaSpecificAttributes;
        if ( (a1->MacOptions & 0x80000001) == 0x80000001 )
        {
          LODWORD(v100[9]) = 3;
        }
        else
        {
          if ( v28 )
          {
            LODWORD(v100[9]) = v28->MediaType;
            PhysicalMediaType = v28->PhysicalMediaType;
            goto LABEL_42;
          }
          LODWORD(v100[9]) = a1->MiniportMediaType;
        }
        PhysicalMediaType = a1->MiniportPhysicalMediumType;
LABEL_42:
        HIDWORD(v100[9]) = PhysicalMediaType;
        v37 = (_QWORD *)*((_QWORD *)v15 + 14);
        if ( v37 )
        {
          v100[6] = *(_QWORD *)((char *)v37 + 380);
          v100[7] = v37[49];
          v100[8] = v37[50];
          p_MiniportCurrentConfig = (_NDIS_OFFLOAD *)v37[100];
        }
        else
        {
          v100[6] = *(_QWORD *)&a1->Reserved20.Length;
          v100[7] = a1->MiniportXmitLinkSpeed;
          v100[8] = a1->MiniportRcvLinkSpeed;
          Offload = a1->Offload;
          if ( !Offload || !Offload->SupportsOffload )
          {
            v100[11] = 0LL;
LABEL_45:
            HDSplitCurrentConfig = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)v100[21];
            if ( a1->HDSplitCurrentConfig )
              HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
            TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
            v100[21] = HDSplitCurrentConfig;
            v41 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)v100[22];
            if ( TopReceiveFilterCurrentCapabilities )
              v41 = TopReceiveFilterCurrentCapabilities;
            TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
            v100[22] = v41;
            v43 = (_NDIS_NIC_SWITCH_CAPABILITIES *)v100[24];
            if ( TopNicSwitchCurrentCapabilities )
              v43 = TopNicSwitchCurrentCapabilities;
            v100[24] = v43;
            if ( (unsigned __int8)v33 >= 4u )
            {
              if ( a1->SriovCurrentCapabilities )
              {
                v100[26] = a1->SriovCurrentCapabilities;
                if ( (unsigned int)ndisIovGetNicSwitchList((__int64)a1, &v100[27]) )
                {
                  FilterAdapterRegistry = -1073741823;
                  goto LABEL_134;
                }
              }
              LOBYTE(v100[25]) = a1->IfBlock->ifConnectorPresent;
            }
            IfBlock = a1->IfBlock;
            v100[23] = a1->PhysicalDeviceObject;
            LOWORD(v100[12]) = IfBlock->ifPhysAddress.Length;
            memmove((char *)&v100[12] + 2, IfBlock->ifPhysAddress.Address, LOWORD(v100[12]));
            *((_QWORD *)v15 + 43) = v100[6];
            *((_QWORD *)v15 + 44) = v100[7];
            *((_QWORD *)v15 + 45) = v100[8];
            if ( LODWORD(v100[6]) == 1 )
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
              MediaType = v100[9];
            v15[84] = MediaType;
            v15[85] = HIDWORD(v100[9]);
            FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v15);
            if ( !FilterAdapterRegistry )
            {
              if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                Template_jcqjzzz(
                  *((_QWORD *)v15 + 4) + 4064LL,
                  *((_QWORD *)v15 + 5),
                  (const GUID *)(v15 + 202),
                  (unsigned __int64)(v15 + 202),
                  *((_BYTE *)v15 + 64),
                  240,
                  *((_QWORD *)v15 + 4) + 4064LL,
                  *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v15 + 4) + 3912LL) + 8LL),
                  *(const wchar_t **)(*((_QWORD *)v15 + 5) + 16LL),
                  *(const wchar_t **)(*((_QWORD *)v15 + 6) + 8LL));
              if ( Microsoft_Windows_Networking_CorrelationEnabled )
                EtwEx_tidActivityInfoTransfer(
                  v48,
                  v47,
                  (const struct _GUID *)(v15 + 202),
                  &a1->InterfaceGuid,
                  v77[0],
                  v78,
                  0x200000u);
              HIDWORD(v100[0]) = v15[206];
              v49 = 1;
              v100[1] = *(_QWORD *)(*((_QWORD *)v15 + 104) + 1312LL);
              v50 = ndisFInvokeAttach((__int64)v15, (__int64)v100);
              FilterAdapterRegistry = v50;
              if ( (unsigned __int8)byte_1C0085310 >= 4u )
              {
                LODWORD(v80) = v50;
                v79[0] = v12->DefaultFilterCharacteristics.MinorNdisVersion;
                LODWORD(v78) = v12->DefaultFilterCharacteristics.MajorNdisVersion;
                WPP_SF_qqZddZD(
                  v12->DefaultFilterCharacteristics.MinorNdisVersion,
                  v12->DefaultFilterCharacteristics.MajorNdisVersion,
                  a1,
                  v15,
                  &v12->DefaultFilterCharacteristics.FriendlyName,
                  v78,
                  *(_QWORD *)v79,
                  a1->pAdapterInstanceName,
                  v80);
              }
              if ( FilterAdapterRegistry )
              {
                v11 = a4;
                a4->BindState.AllowBindDespiteMandatory = v100[20] & 1;
                v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 + 18);
                *((_QWORD *)v15 + 19) = KeGetCurrentThread();
                *((_BYTE *)v15 + 56) = 0;
                v72 = v15[14];
                v15[40] = 3867655;
                if ( (v72 & 0x100) != 0 )
                  v15[14] = v72 & 0xFFFFFEFF;
                v15[14] |= 8u;
                *((_QWORD *)v15 + 19) = 0LL;
                v15[40] = 0;
                KeReleaseSpinLock((PKSPIN_LOCK)v15 + 18, v71);
                *((_BYTE *)v15 + 64) = 0;
                if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
                  Template_jcqjzzz(
                    *((_QWORD *)v15 + 4) + 4064LL,
                    *((_QWORD *)v15 + 5),
                    (const GUID *)(v15 + 202),
                    (unsigned __int64)(v15 + 202),
                    0,
                    19,
                    *((_QWORD *)v15 + 4) + 4064LL,
                    *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v15 + 4) + 3912LL) + 8LL),
                    *(const wchar_t **)(*((_QWORD *)v15 + 5) + 16LL),
                    *(const wchar_t **)(*((_QWORD *)v15 + 6) + 8LL));
                goto LABEL_116;
              }
              v51 = v100[9];
              if ( v15[84] != LODWORD(v100[9]) && (a1->MacOptions & 0x80000001) != 0x80000001 )
              {
                if ( (unsigned __int8)byte_1C0085314 >= 4u )
                {
                  LODWORD(v78) = v100[9];
                  *(_DWORD *)v77 = v15[84];
                  WPP_SF_qqDD(0x1Au, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, a1, v15, *(_QWORD *)v77, v78);
                  v51 = v100[9];
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
                    v51);
                v82 = 1;
              }
              v52 = *((_QWORD *)v15 + 15);
              if ( v52 )
              {
                v73 = *((_QWORD *)v15 + 14);
                if ( v73 )
                  IfIndex = *(_DWORD *)(v73 + 824);
                else
                  IfIndex = a1->IfIndex;
                NdisIfDeleteIfStackEntry(*(_DWORD *)(v52 + 824), IfIndex);
              }
              v53 = *((_QWORD *)v15 + 14);
              if ( v53 )
                v54 = *(_DWORD *)(v53 + 824);
              else
                v54 = *(_DWORD *)(*((_QWORD *)v15 + 4) + 4112LL);
              NdisIfAddIfStackEntry(v15[206], v54);
              v55 = *((_QWORD *)v15 + 15);
              if ( v55 )
                NdisIfAddIfStackEntry(*(_DWORD *)(v55 + 824), v15[206]);
              v56 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              ndisIfUpdateFilterIfStack(*((_QWORD *)v15 + 4));
              KeReleaseSpinLock(&ndisIfListLock, v56);
              v57 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v15 + 14);
              v85 = v57;
              if ( v57 )
              {
                v58 = KeAcquireSpinLockRaiseToDpc(&v57->Lock);
                v59 = v85;
                v57->LockThread = KeGetCurrentThread();
                v59->LockDbg = 3867737;
                v15[86] = v59->MediaConnectStateIndicateUp;
                v15[87] = v59->MediaDuplexStateIndicateUp;
                *((_QWORD *)v15 + 44) = v59->XmitLinkSpeedIndicateUp;
                *((_QWORD *)v15 + 45) = v59->RcvLinkSpeedIndicateUp;
                v15[92] = v59->PauseFunctionsIndicateUp;
                v15[93] = v59->AutoNegotiationFlagsIndicateUp;
                ndisOpenRef((__int64)(v15 + 78));
                v57->LockThread = 0LL;
                v59->LockDbg = 0;
                KeReleaseSpinLock(&v57->Lock, v58);
                v10 = a1;
                v12 = v91;
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
              v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 + 18);
              CurrentThread = KeGetCurrentThread();
              *((_BYTE *)v15 + 56) = 0;
              v15[14] |= 4u;
              *((_QWORD *)v15 + 19) = CurrentThread;
              v15[40] = 3867776;
              if ( v82 )
              {
                v15[14] |= 0x8000u;
                ++v10->MediaChangeFilters;
                v75 = *((_QWORD *)v15 + 104);
                *((_QWORD *)v15 + 42) = v100[9];
                *(_DWORD *)(v75 + 564) = v15[84];
                *(_DWORD *)(*((_QWORD *)v15 + 104) + 568LL) = v15[85];
              }
              *((_QWORD *)v15 + 19) = 0LL;
              v15[40] = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)v15 + 18, v60);
              if ( v82 )
              {
                v76 = v15[84];
                v10->MediaType = v76;
                v10->PhysicalMediumType = v15[85];
                if ( v76 == NdisMedium802_3 )
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
                  *((_QWORD *)v15 + 5),
                  (const GUID *)(v15 + 202),
                  (unsigned __int64)(v15 + 202),
                  2,
                  190,
                  *((_QWORD *)v15 + 4) + 4064LL,
                  *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v15 + 4) + 3912LL) + 8LL),
                  *(const wchar_t **)(*((_QWORD *)v15 + 5) + 16LL),
                  *(const wchar_t **)(*((_QWORD *)v15 + 6) + 8LL));
              ndisReferenceMiniport((__int64)v10, 0x26u);
              if ( v10->MajorNdisVersion < 6u && !v10->Miniport5HasNdis6Component )
                v10->Miniport5HasNdis6Component = 1;
              ndisSetupWmiNode(
                (__int64)v10,
                *((const void ***)v15 + 6),
                v10->BindPaths->Paths[0].Length + 4 + v12->DefaultFilterCharacteristics.UniqueName.Length,
                (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
                &WnodeEventItem);
              v62 = WnodeEventItem;
              if ( WnodeEventItem )
              {
                v63 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                memmove(
                  v63,
                  v12->DefaultFilterCharacteristics.UniqueName.Buffer,
                  v12->DefaultFilterCharacteristics.UniqueName.Length);
                memmove(
                  &v63[v12->DefaultFilterCharacteristics.UniqueName.Length + 2],
                  v10->BindPaths->Paths[0].Buffer,
                  v10->BindPaths->Paths[0].Length);
                v65 = IoWMIWriteEvent(v62);
                if ( v65 < 0 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                    WPP_SF_(0x1Bu, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids);
                  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
                    Template_qqq(v64, &FilterArrivalIndicationFailed, (const GUID *)(v15 + 202), v65, 248, 0);
                  ExFreePoolWithTag(v62, 0);
                }
              }
              Ndis::BindEngine::BeginPolicyUpdates(&v10->BindEngine);
              v11 = a4;
              if ( Ndis::BindState::SetPause(p_BindState, DatapathRunning, PauseReason_InitialPause) )
              {
                if ( (unsigned __int8)byte_1C0085323 >= 4u )
                {
                  ndisGetBindLinkNameForTracing(a4, &v101);
                  if ( (unsigned __int8)byte_1C0085323 >= 4u )
                    WPP_SF_Zq(
                      0x1Cu,
                      &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids,
                      (__int64 *)v101.Buffer,
                      *(_QWORD *)&v101.Length);
                }
              }
              Ndis::BindEngine::EndPolicyUpdates(&v10->BindEngine);
              if ( v10->MajorNdisVersion < 6u && !v10->Miniport5HasNdis6Component )
                v10->Miniport5HasNdis6Component = 1;
LABEL_85:
              if ( ndisVerifierNdisDispatch
                && v15
                && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*((_QWORD *)v15 + 2) + 16LL))
                && !*((_QWORD *)v15 + 113)
                && ((int (__fastcall *)(_DEVICE_OBJECT *, _DWORD *, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
                     v12->DriverObject->DeviceObject,
                     v15,
                     &v12->FilterDriverContext) < 0
                && (unsigned __int8)byte_1C0085314 >= 2u )
              {
                WPP_SF_q(0x1Du, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)v15);
              }
              goto LABEL_86;
            }
LABEL_134:
            v11 = a4;
            goto LABEL_115;
          }
          p_MiniportCurrentConfig = &Offload->MiniportCurrentConfig;
        }
        v100[11] = p_MiniportCurrentConfig;
        goto LABEL_45;
      }
LABEL_34:
      WORD1(v100[0]) = 224;
      v33 = 4;
      goto LABEL_35;
    }
    v11 = a4;
LABEL_121:
    v49 = 0;
    goto LABEL_116;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_115:
  v49 = 0;
LABEL_116:
  if ( *((_QWORD *)v15 + 112) )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Ndis::BindState::RemoveBindContext(&v11->BindState, v15);
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    *((_QWORD *)v15 + 112) = 0LL;
  }
  ndisFilterAttachCleanUp(v15, (unsigned __int64)a1 & -(__int64)(v81 != 0), v49);
LABEL_86:
  ndisHandleFilterHandlersChange((__int64)v10);
  if ( v100[27] )
  {
    ExFreePoolWithTag((PVOID)v100[27], 0);
    v100[27] = 0LL;
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
    *(_DWORD *)v77 = FilterAdapterRegistry;
    WPP_SF_qqd(0x1Eu, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, v12, v10, *(_QWORD *)v77);
  }
  return FilterAdapterRegistry;
}
