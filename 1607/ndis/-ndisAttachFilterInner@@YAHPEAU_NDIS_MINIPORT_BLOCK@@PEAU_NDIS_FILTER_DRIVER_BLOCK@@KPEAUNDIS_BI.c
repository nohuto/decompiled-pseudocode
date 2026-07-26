/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AA6A0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisFilterAttachCleanUp @ 0x1C0011700 (ndisFilterAttachCleanUp.c)
 *     ndisIfCreateFilterInterface @ 0x1C00140D8 (ndisIfCreateFilterInterface.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0015050 (NdisNblTrackerRegisterComponent.c)
 *     ndisSetupWmiNode @ 0x1C00181A0 (ndisSetupWmiNode.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001A090 (ndisHandleFilterHandlersChange.c)
 *     ndisReferenceFilterDriver @ 0x1C001A4DC (ndisReferenceFilterDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C001A4E8 (ndisDereferenceFilterDriver.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C001A534 (ndisIndicateInitialStateToFilter.c)
 *     ndisOpenRef @ 0x1C001A924 (ndisOpenRef.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001A948 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C001AC00 (NdisIfAddIfStackEntry.c)
 *     ndisQueueFilterOnDriver @ 0x1C001AE14 (ndisQueueFilterOnDriver.c)
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C001AECC (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     ndisCloseRef @ 0x1C001AF28 (ndisCloseRef.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001AF60 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ndisFilterXStateSetFlag @ 0x1C00256B0 (ndisFilterXStateSetFlag.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003C3D8 (WPP_SF_qqDD.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0042290 (NdisIfDeleteIfStackEntry.c)
 *     Template_qqq @ 0x1C0042698 (Template_qqq.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004C908 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF_qqZ @ 0x1C004EC28 (WPP_SF_qqZ.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisIovGetNicSwitchList @ 0x1C00688D0 (ndisIovGetNicSwitchList.c)
 *     Template_jcqjzzz @ 0x1C006F92C (Template_jcqjzzz.c)
 *     Template_jqxjqxqq @ 0x1C006FA84 (Template_jqxjqxqq.c)
 *     WPP_SF_qqZddZD @ 0x1C006FCF4 (WPP_SF_qqZddZD.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1C009C270 (--2@YAPEAX_KPEAX@Z.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00A0D44 (ndisInitializeZeroBasedRef.c)
 *     ndisInitializeRef @ 0x1C00A2C40 (ndisInitializeRef.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00A3894 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00A6B70 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A6DB8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A80D4 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ndisFInvokeAttach @ 0x1C00AA08C (ndisFInvokeAttach.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AA3C8 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C00AA430 (ndisCreateFilterAdapterRegistry.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00AA828 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisMDoMiniportOp @ 0x1C00AFB04 (ndisMDoMiniportOp.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C00CDE7C (ndisCreateFilterInstanceRegistry.c)
 *     EthInitializeFilter @ 0x1C00D3724 (EthInitializeFilter.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  __int64 v7; // rdx
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // rdi
  struct NDIS_BIND_FILTER_LINK *v12; // r13
  _NDIS_FILTER_DRIVER_BLOCK *v13; // rsi
  unsigned int FilterAdapterRegistry; // r15d
  _DWORD *PoolWithTag; // rax
  __int64 v16; // rdx
  _DWORD *v17; // r14
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct Rtl::KString *v20; // rax
  unsigned __int16 v21; // bx
  _WORD *v22; // rax
  int v23; // eax
  struct _NDIS_FILTER_BLOCK *v24; // rcx
  struct _NDIS_FILTER_BLOCK *v25; // rax
  KIRQL v26; // al
  struct _NDIS_FILTER_BLOCK *v27; // rcx
  struct _NDIS_FILTER_BLOCK *v28; // r13
  __int64 v29; // rbx
  KIRQL v30; // al
  struct _NDIS_MINIPORT_BLOCK *v31; // rdx
  __int64 v32; // rax
  unsigned __int8 v33; // al
  char v34; // dl
  __int64 v35; // rax
  __int64 *v36; // r12
  __int64 v37; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // eax
  _QWORD *v39; // rcx
  _BYTE *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  void *v47; // rax
  int v48; // eax
  const struct _EVENT_DESCRIPTOR *v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // eax
  char v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  NET_IFINDEX v55; // edx
  __int64 v56; // rax
  KIRQL v57; // bl
  struct _NDIS_FILTER_BLOCK *v58; // r13
  KIRQL v59; // di
  struct _NDIS_FILTER_BLOCK *v60; // rbx
  KIRQL v61; // al
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v63; // r12
  char *v64; // rbx
  __int64 v65; // rcx
  NTSTATUS v66; // ebx
  struct _NDIS_MINIPORT_BLOCK *v67; // rdx
  __int64 v68; // rdx
  _BYTE *v70; // rax
  KIRQL v71; // bl
  int v72; // ecx
  struct _NDIS_MINIPORT_BLOCK *v73; // rdx
  __int16 v74; // ax
  KIRQL v75; // al
  int v76; // edx
  __int64 v77; // rax
  NET_IFINDEX v78; // edx
  __int64 v79; // rcx
  int v80; // ecx
  unsigned __int8 v81[8]; // [rsp+20h] [rbp-130h]
  struct _GUID *v82; // [rsp+28h] [rbp-128h]
  unsigned int v83[2]; // [rsp+30h] [rbp-120h]
  __int64 v84; // [rsp+40h] [rbp-110h]
  char v85; // [rsp+D0h] [rbp-80h]
  char v86; // [rsp+D2h] [rbp-7Eh]
  char v87; // [rsp+D3h] [rbp-7Dh]
  struct _NDIS_FILTER_BLOCK *v89; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v90; // [rsp+E8h] [rbp-68h]
  int v91; // [rsp+F0h] [rbp-60h]
  int v92; // [rsp+F4h] [rbp-5Ch]
  int v93; // [rsp+F8h] [rbp-58h]
  int v94; // [rsp+FCh] [rbp-54h]
  int v95; // [rsp+100h] [rbp-50h]
  int v96; // [rsp+104h] [rbp-4Ch]
  int v97; // [rsp+108h] [rbp-48h]
  int Data3; // [rsp+10Ch] [rbp-44h]
  int Data2; // [rsp+110h] [rbp-40h]
  struct _NDIS_FILTER_BLOCK *v100; // [rsp+118h] [rbp-38h] BYREF
  _NDIS_FILTER_DRIVER_BLOCK *v101; // [rsp+120h] [rbp-30h]
  Ndis::BindState *p_BindState; // [rsp+130h] [rbp-20h]
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  _BYTE v104[16]; // [rsp+140h] [rbp-10h] BYREF
  _QWORD v105[28]; // [rsp+150h] [rbp+0h] BYREF
  struct _UNICODE_STRING v106; // [rsp+230h] [rbp+E0h] BYREF
  wchar_t Dest[88]; // [rsp+2D0h] [rbp+180h] BYREF

  v91 = a3;
  v101 = a2;
  v90 = a1;
  v89 = 0LL;
  v100 = 0LL;
  v85 = 0;
  memset(v105, 0, sizeof(v105));
  v86 = 0;
  v87 = 0;
  if ( !ndisReferenceFilterDriver((__int64)a2, 0) )
    return 3221291010LL;
  if ( !ndisReferenceMiniport((__int64)a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(a2, v7, 0);
    return 3221291010LL;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqZ(
      0x18u,
      &WPP_95145dda949833bd55dad319dd5d3165_Traceguids,
      a2,
      a1,
      &a2->DefaultFilterCharacteristics.FriendlyName);
  ndisReferencePackage((__int64)&ndisPkgs);
  p = a4->BindDriver._p;
  v9 = a1->InterfaceGuid.Data4[7];
  v10 = a1->InterfaceGuid.Data4[6];
  WnodeEventItem = &a1->InterfaceGuid;
  v92 = v9;
  v93 = v10;
  p_BindState = (Ndis::BindState *)p;
  v94 = v90->InterfaceGuid.Data4[3];
  v95 = v90->InterfaceGuid.Data4[2];
  v96 = v90->InterfaceGuid.Data4[1];
  v97 = v90->InterfaceGuid.Data4[0];
  Data3 = v90->InterfaceGuid.Data3;
  Data2 = v90->InterfaceGuid.Data2;
  v81[0] = Data2;
  LODWORD(v82) = Data3;
  v11 = (__int64)v90;
  v12 = a4;
  if ( (int)RtlStringCbPrintfW(
              Dest,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              *(unsigned int *)WnodeEventItem) < 0 )
  {
    v13 = v101;
    FilterAdapterRegistry = -1073741823;
    goto LABEL_106;
  }
  ndisFindAdjacentFilters(v90, a4, &v100, &v89);
  v13 = v101;
  FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v101->DefaultFilterCharacteristics.ServiceName, v11);
  if ( FilterAdapterRegistry )
  {
LABEL_106:
    v17 = 0LL;
    goto LABEL_80;
  }
  if ( *(_BYTE *)(v11 + 32) < 6u && (*(_BYTE *)(v11 + 88) & 1) == 0 )
    ndisMDoMiniportOp((void *)v11, 1, 65812, (__int64)v104, 4, 1u, 1);
  if ( !ndisReferenceFilterDriver((__int64)v13, 3u) )
  {
    FilterAdapterRegistry = -1073676282;
    goto LABEL_106;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x390uLL, 0x6266444Eu);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    FilterAdapterRegistry = -1073741670;
    ndisDereferenceFilterDriver(v13, v16, 3u);
    goto LABEL_80;
  }
  memset(PoolWithTag, 0, 0x390uLL);
  v19 = operator new(v18, v17);
  if ( v19 )
    v19[5] = 0LL;
  *v17 = 59769093;
  *((_QWORD *)v17 + 2) = v13;
  v20 = Rtl::KString::Initialize(Dest);
  KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset((void **)v17 + 5, v20);
  if ( !*((_QWORD *)v17 + 5) )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_116;
  }
  v21 = v13->DefaultFilterCharacteristics.FriendlyName.Length + 14 + **(_WORD **)(v11 + 3912);
  v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v21 + 16LL, 0x7473444Eu);
  *((_QWORD *)v17 + 6) = v22;
  if ( !v22 )
  {
    FilterAdapterRegistry = -1073741670;
    goto LABEL_116;
  }
  *v22 = 0;
  *(_WORD *)(*((_QWORD *)v17 + 6) + 2LL) = v21;
  *(_QWORD *)(*((_QWORD *)v17 + 6) + 8LL) = *((_QWORD *)v17 + 6) + 16LL;
  RtlAppendUnicodeStringToString(*((PUNICODE_STRING *)v17 + 6), *(PCUNICODE_STRING *)(v11 + 3912));
  *(_WORD *)(*(_QWORD *)(*((_QWORD *)v17 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v17 + 6) >> 1)) = 45;
  **((_WORD **)v17 + 6) += 2;
  RtlAppendUnicodeStringToString(*((PUNICODE_STRING *)v17 + 6), &v13->DefaultFilterCharacteristics.FriendlyName);
  *(_WORD *)(*(_QWORD *)(*((_QWORD *)v17 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v17 + 6) >> 1)) = 45;
  **((_WORD **)v17 + 6) += 2;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v17 + 6) >> 1)) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 5) + 16LL) + 2 * (((unsigned __int64)*(unsigned __int16 *)(*((_QWORD *)v17 + 5) + 8LL) - 8) >> 1));
  **((_WORD **)v17 + 6) += 8;
  *(_WORD *)(*(_QWORD *)(*((_QWORD *)v17 + 6) + 8LL) + 2 * ((unsigned __int64)**((unsigned __int16 **)v17 + 6) >> 1)) = 0;
  *((_QWORD *)v17 + 99) = NdisNblTrackerRegisterComponent(1, (__int64)v17, *((_QWORD *)v17 + 6));
  KeInitializeSpinLock((PKSPIN_LOCK)v17 + 18);
  *((_BYTE *)v17 + 56) = 0;
  v23 = v17[14];
  if ( (v23 & 0x100) != 0 )
    v17[14] = v23 & 0xFFFFFEFF;
  v17[14] |= 8u;
  *((_BYTE *)v17 + 64) = 0;
  ndisInitializeRef((__int64)(v17 + 18), 2);
  ndisInitializeZeroBasedRef((__int64)(v17 + 78));
  ndisCloseRef((PKSPIN_LOCK)v17 + 39);
  *((_QWORD *)v17 + 73) = v13->DefaultFilterCharacteristics.SendNetBufferListsHandler;
  *((_QWORD *)v17 + 74) = v13->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
  *((_QWORD *)v17 + 76) = v13->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
  *((_QWORD *)v17 + 77) = v13->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
  *((_QWORD *)v17 + 75) = v13->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
  *((_QWORD *)v17 + 22) = v17 + 42;
  *((_QWORD *)v17 + 21) = v17 + 42;
  FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                            (struct _NDIS_FILTER_BLOCK *)v17,
                            (_QWORD *)v17 + 72,
                            0);
  if ( FilterAdapterRegistry )
    goto LABEL_116;
  v24 = v100;
  *((_QWORD *)v17 + 26) = ndisStackExpansionFallbackWorker;
  v25 = v89;
  *((_QWORD *)v17 + 27) = v17;
  *((_QWORD *)v17 + 24) = 0LL;
  *((_QWORD *)v17 + 14) = v25;
  *((_QWORD *)v17 + 15) = v24;
  if ( v25 || v24 || !*(_QWORD *)(v11 + 2056) )
  {
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 96));
    *(_QWORD *)(v11 + 520) = KeGetCurrentThread();
    v27 = v100;
    *(_DWORD *)(v11 + 1856) = 3867338;
    if ( v27 )
      v27->LowerFilter = (_NDIS_FILTER_BLOCK *)v17;
    else
      *(_QWORD *)(v11 + 2056) = v17;
    v28 = v89;
    if ( v89 )
      v89->HigherFilter = (_NDIS_FILTER_BLOCK *)v17;
    else
      *(_QWORD *)(v11 + 2048) = v17;
    *((_QWORD *)v17 + 4) = v11;
    *(_QWORD *)(v11 + 520) = 0LL;
    *(_DWORD *)(v11 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 96), v26);
    v85 = 1;
    v29 = v11;
    if ( *(_QWORD *)(v11 + 16) )
      v29 = *(_QWORD *)(v11 + 16);
    v30 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    *((_QWORD *)v17 + 13) = ndisGlobalFilterList;
    ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v17;
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v30);
    if ( ndisQueueFilterOnDriver((__int64)v17, (__int64)v13) )
    {
      if ( (v13->Bind._p->_t.FilterBindFlags & 2) == 0
        || (FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                      &v13->DefaultFilterCharacteristics.ServiceName,
                                      (__int64)v17,
                                      v11)) == 0 )
      {
        *((_BYTE *)v17 + 64) = 1;
        *((_QWORD *)v17 + 112) = a4;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v11 + 5208));
        p_BindState = &a4->BindState;
        Ndis::BindState::AddBindContext(&a4->BindState, v17);
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v11 + 5208), v31);
        memset(v105, 0, sizeof(v105));
        v32 = *((_QWORD *)v17 + 2);
        if ( *(_BYTE *)(v32 + 100) <= 6u )
        {
          v33 = *(_BYTE *)(v32 + 101);
          if ( v33 )
          {
            if ( v33 < 0x14u )
            {
              v34 = 2;
              v74 = 176;
            }
            else
            {
              if ( v33 >= 0x1Eu )
                goto LABEL_30;
              v34 = 3;
              v74 = 200;
            }
          }
          else
          {
            v34 = 1;
            v74 = 164;
          }
          WORD1(v105[0]) = v74;
LABEL_31:
          BYTE1(v105[0]) = v34;
          LOBYTE(v105[0]) = -103;
          LODWORD(v105[3]) = *(_DWORD *)(v29 + 4112);
          v105[17] = *(_QWORD *)(v29 + 4080);
          v105[5] = v29 + 3864;
          v105[4] = *(_QWORD *)(v29 + 3912);
          v35 = *((_QWORD *)v17 + 14);
          if ( v35 )
          {
            LODWORD(v105[18]) = *(_DWORD *)(v35 + 824);
            v105[19] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 14) + 832LL) + 1312LL);
          }
          else
          {
            LODWORD(v105[18]) = *(_DWORD *)(*((_QWORD *)v17 + 4) + 4112LL);
            v105[19] = *(_QWORD *)(*((_QWORD *)v17 + 4) + 4080LL);
          }
          v36 = (__int64 *)(v17 + 10);
          v37 = *((_QWORD *)v17 + 5);
          if ( v37 )
            v105[2] = v37 + 8;
          else
            v105[2] = 0LL;
          v105[10] = *(_QWORD *)(v11 + 768);
          if ( (*(_DWORD *)(v11 + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v105[9]) = 3;
          }
          else
          {
            if ( v28 )
            {
              LODWORD(v105[9]) = v28->MediaType;
              PhysicalMediaType = v28->PhysicalMediaType;
              goto LABEL_38;
            }
            LODWORD(v105[9]) = *(_DWORD *)(v11 + 1836);
          }
          PhysicalMediaType = *(_DWORD *)(v11 + 3832);
LABEL_38:
          HIDWORD(v105[9]) = PhysicalMediaType;
          v39 = (_QWORD *)*((_QWORD *)v17 + 14);
          if ( v39 )
          {
            v105[6] = *(_QWORD *)((char *)v39 + 380);
            v105[7] = v39[49];
            v105[8] = v39[50];
            v40 = (_BYTE *)v39[100];
          }
          else
          {
            v105[6] = *(_QWORD *)(v11 + 344);
            v105[7] = *(_QWORD *)(v11 + 2800);
            v105[8] = *(_QWORD *)(v11 + 2808);
            v70 = *(_BYTE **)(v11 + 4152);
            if ( !v70 || !*v70 )
            {
              v105[11] = 0LL;
              goto LABEL_41;
            }
            v40 = v70 + 8;
          }
          v105[11] = v40;
LABEL_41:
          v41 = v105[21];
          if ( *(_QWORD *)(v11 + 4328) )
            v41 = *(_QWORD *)(v11 + 4328);
          v42 = *(_QWORD *)(v11 + 3600);
          v105[21] = v41;
          v43 = v105[22];
          if ( v42 )
            v43 = v42;
          v44 = *(_QWORD *)(v11 + 3624);
          v105[22] = v43;
          v45 = v105[24];
          if ( v44 )
            v45 = v44;
          v105[24] = v45;
          if ( (unsigned __int8)v34 >= 4u )
          {
            if ( *(_QWORD *)(v11 + 4672) )
            {
              v105[26] = *(_QWORD *)(v11 + 4672);
              if ( (unsigned int)ndisIovGetNicSwitchList(v11, &v105[27]) )
              {
                FilterAdapterRegistry = -1073741823;
LABEL_129:
                v12 = a4;
                goto LABEL_116;
              }
            }
            LOBYTE(v105[25]) = *(_BYTE *)(*(_QWORD *)(v11 + 4096) + 556LL);
          }
          v46 = *(_QWORD *)(v11 + 4096);
          v105[23] = *(_QWORD *)(v11 + 3888);
          LOWORD(v105[12]) = *(_WORD *)(v46 + 1124);
          memmove((char *)&v105[12] + 2, (const void *)(v46 + 1126), LOWORD(v105[12]));
          *((_QWORD *)v17 + 43) = v105[6];
          *((_QWORD *)v17 + 44) = v105[7];
          *((_QWORD *)v17 + 45) = v105[8];
          if ( LODWORD(v105[6]) == 1 )
          {
            *((_QWORD *)v17 + 78) = ndisFilterSendNetBufferLists;
            *((_QWORD *)v17 + 79) = ndisFilterIndicateReceiveNetBufferLists;
            v47 = ndisFilterCancelSendNetBufferLists;
          }
          else
          {
            ndisFilterXStateSetFlag((__int64)v17);
            *((_QWORD *)v17 + 78) = ndisFakeFilterSendHandler;
            *((_QWORD *)v17 + 79) = ndisFakeFilterReceiveHandler;
            v47 = ndisFakeMiniportCancelSendPackets;
          }
          *((_QWORD *)v17 + 80) = v47;
          if ( (*(_DWORD *)(v11 + 568) & 0x80000001) == 0x80000001 )
            v48 = *(_DWORD *)(v11 + 464);
          else
            v48 = v105[9];
          v17[84] = v48;
          v17[85] = HIDWORD(v105[9]);
          FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v17);
          if ( FilterAdapterRegistry )
            goto LABEL_129;
          if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
            Template_jcqjzzz(
              *((_QWORD *)v17 + 4) + 4064LL,
              *v36,
              (const GUID *)(v17 + 202),
              (unsigned __int64)(v17 + 202),
              *((_BYTE *)v17 + 64),
              240,
              *((_QWORD *)v17 + 4) + 4064LL,
              *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v17 + 4) + 3912LL) + 8LL),
              *(const wchar_t **)(*v36 + 16),
              *(const wchar_t **)(*((_QWORD *)v17 + 6) + 8LL));
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
            EtwEx_tidActivityInfoTransfer(
              v50,
              v49,
              (const struct _GUID *)(v17 + 202),
              (const struct _GUID *)(v11 + 4064),
              v81[0],
              v82,
              0x200000u);
          HIDWORD(v105[0]) = v17[206];
          v87 = 1;
          v105[1] = *(_QWORD *)(*((_QWORD *)v17 + 104) + 1312LL);
          v51 = ndisFInvokeAttach((__int64)v17, (__int64)v105);
          FilterAdapterRegistry = v51;
          if ( (unsigned __int8)byte_1C00895D0 >= 4u )
          {
            LODWORD(v84) = v51;
            v83[0] = v13->DefaultFilterCharacteristics.MinorNdisVersion;
            LODWORD(v82) = v13->DefaultFilterCharacteristics.MajorNdisVersion;
            WPP_SF_qqZddZD(
              v13->DefaultFilterCharacteristics.MinorNdisVersion,
              v13->DefaultFilterCharacteristics.MajorNdisVersion,
              v11,
              v17,
              &v13->DefaultFilterCharacteristics.FriendlyName,
              v82,
              *(_QWORD *)v83,
              *(_QWORD *)(v11 + 3912),
              v84);
          }
          if ( FilterAdapterRegistry )
          {
            v12 = a4;
            a4->BindState.AllowBindDespiteMandatory = v105[20] & 1;
            v75 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v17 + 18);
            *((_QWORD *)v17 + 19) = KeGetCurrentThread();
            *((_BYTE *)v17 + 56) = 0;
            v76 = v17[14];
            v17[40] = 3867655;
            if ( (v76 & 0x100) != 0 )
              v17[14] = v76 & 0xFFFFFEFF;
            v17[14] |= 8u;
            *((_QWORD *)v17 + 19) = 0LL;
            v17[40] = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)v17 + 18, v75);
            *((_BYTE *)v17 + 64) = 0;
            if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
              Template_jcqjzzz(
                *((_QWORD *)v17 + 4) + 4064LL,
                *v36,
                (const GUID *)(v17 + 202),
                (unsigned __int64)(v17 + 202),
                0,
                19,
                *((_QWORD *)v17 + 4) + 4064LL,
                *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v17 + 4) + 3912LL) + 8LL),
                *(const wchar_t **)(*v36 + 16),
                *(const wchar_t **)(*((_QWORD *)v17 + 6) + 8LL));
            goto LABEL_116;
          }
          v52 = v105[9];
          if ( v17[84] != LODWORD(v105[9]) && (*(_DWORD *)(v11 + 568) & 0x80000001) != 0x80000001 )
          {
            if ( (unsigned __int8)byte_1C00895D4 >= 4u )
            {
              LODWORD(v82) = v105[9];
              *(_DWORD *)v81 = v17[84];
              WPP_SF_qqDD(0x1Au, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, v11, v17, *(_QWORD *)v81, v82);
              v52 = v105[9];
            }
            if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
              Template_jqxjqxqq(
                *((_QWORD *)v17 + 104),
                (__int64)(v17 + 202),
                (const GUID *)(v11 + 4064),
                v11 + 4064,
                *(_DWORD *)(v11 + 4112),
                *(_QWORD *)(v11 + 4080),
                (__int64)(v17 + 202),
                v17[206],
                *(_QWORD *)(*((_QWORD *)v17 + 104) + 1312LL),
                v17[84],
                v52);
            v86 = 1;
          }
          v53 = *((_QWORD *)v17 + 15);
          if ( v53 )
          {
            v77 = *((_QWORD *)v17 + 14);
            if ( v77 )
              v78 = *(_DWORD *)(v77 + 824);
            else
              v78 = *(_DWORD *)(v11 + 4112);
            NdisIfDeleteIfStackEntry(*(_DWORD *)(v53 + 824), v78);
          }
          v54 = *((_QWORD *)v17 + 14);
          if ( v54 )
            v55 = *(_DWORD *)(v54 + 824);
          else
            v55 = *(_DWORD *)(*((_QWORD *)v17 + 4) + 4112LL);
          NdisIfAddIfStackEntry(v17[206], v55);
          v56 = *((_QWORD *)v17 + 15);
          if ( v56 )
            NdisIfAddIfStackEntry(*(_DWORD *)(v56 + 824), v17[206]);
          v57 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          ndisIfUpdateFilterIfStack(*((_QWORD *)v17 + 4));
          KeReleaseSpinLock(&ndisIfListLock, v57);
          v58 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v17 + 14);
          v89 = v58;
          if ( v58 )
          {
            v59 = KeAcquireSpinLockRaiseToDpc(&v58->Lock);
            v60 = v89;
            v58->LockThread = KeGetCurrentThread();
            v60->LockDbg = 3867737;
            v17[86] = v60->MediaConnectStateIndicateUp;
            v17[87] = v60->MediaDuplexStateIndicateUp;
            *((_QWORD *)v17 + 44) = v60->XmitLinkSpeedIndicateUp;
            *((_QWORD *)v17 + 45) = v60->RcvLinkSpeedIndicateUp;
            v17[92] = v60->PauseFunctionsIndicateUp;
            v17[93] = v60->AutoNegotiationFlagsIndicateUp;
            ndisOpenRef((__int64)(v17 + 78));
            v58->LockThread = 0LL;
            v60->LockDbg = 0;
            KeReleaseSpinLock(&v58->Lock, v59);
            v11 = (__int64)v90;
            v13 = v101;
          }
          else
          {
            v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 96));
            *(_QWORD *)(v11 + 520) = KeGetCurrentThread();
            v72 = *(_DWORD *)(v11 + 344);
            *(_DWORD *)(v11 + 1856) = 3867752;
            v17[86] = v72;
            v17[87] = *(_DWORD *)(v11 + 348);
            *((_QWORD *)v17 + 44) = *(_QWORD *)(v11 + 2800);
            *((_QWORD *)v17 + 45) = *(_QWORD *)(v11 + 2808);
            v17[92] = *(_DWORD *)(v11 + 812);
            v17[93] = *(_DWORD *)(v11 + 816);
            ndisOpenRef((__int64)(v17 + 78));
            *(_QWORD *)(v11 + 520) = 0LL;
            *(_DWORD *)(v11 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 96), v71);
          }
          *(_DWORD *)(*((_QWORD *)v17 + 104) + 1220LL) = v17[86];
          *(_DWORD *)(*((_QWORD *)v17 + 104) + 1224LL) = v17[87];
          *(_QWORD *)(*((_QWORD *)v17 + 104) + 1208LL) = *((_QWORD *)v17 + 45);
          *(_QWORD *)(*((_QWORD *)v17 + 104) + 1200LL) = *((_QWORD *)v17 + 44);
          ndisIndicateInitialStateToFilter((__int64)v17);
          v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v17 + 18);
          CurrentThread = KeGetCurrentThread();
          *((_BYTE *)v17 + 56) = 0;
          v17[14] |= 4u;
          *((_QWORD *)v17 + 19) = CurrentThread;
          v17[40] = 3867776;
          if ( v86 )
          {
            v17[14] |= 0x8000u;
            ++*(_BYTE *)(v11 + 1997);
            v79 = *((_QWORD *)v17 + 104);
            *((_QWORD *)v17 + 42) = v105[9];
            *(_DWORD *)(v79 + 564) = v17[84];
            *(_DWORD *)(*((_QWORD *)v17 + 104) + 568LL) = v17[85];
          }
          *((_QWORD *)v17 + 19) = 0LL;
          v17[40] = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)v17 + 18, v61);
          if ( v86 )
          {
            v80 = v17[84];
            *(_DWORD *)(v11 + 464) = v80;
            *(_DWORD *)(v11 + 1832) = v17[85];
            if ( !v80 )
            {
              if ( EthInitializeFilter(
                     *(_DWORD *)(v11 + 3092),
                     *(_QWORD *)(v11 + 4096) + 1126LL,
                     *(_QWORD *)(v11 + 400)) )
              {
                *(_QWORD *)(*(_QWORD *)(v11 + 400) + 296LL) = v11;
              }
            }
          }
          *((_BYTE *)v17 + 64) = 2;
          if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
            Template_jcqjzzz(
              *((_QWORD *)v17 + 4) + 4064LL,
              *v36,
              (const GUID *)(v17 + 202),
              (unsigned __int64)(v17 + 202),
              2,
              190,
              *((_QWORD *)v17 + 4) + 4064LL,
              *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)v17 + 4) + 3912LL) + 8LL),
              *(const wchar_t **)(*v36 + 16),
              *(const wchar_t **)(*((_QWORD *)v17 + 6) + 8LL));
          ndisReferenceMiniport(v11, 0x28u);
          if ( *(_BYTE *)(v11 + 32) < 6u && !*(_BYTE *)(v11 + 1994) )
            *(_BYTE *)(v11 + 1994) = 1;
          ndisSetupWmiNode(
            v11,
            *((const void ***)v17 + 6),
            *(unsigned __int16 *)(*(_QWORD *)(v11 + 3824) + 8LL)
          + 4
          + v13->DefaultFilterCharacteristics.UniqueName.Length,
            (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
            &WnodeEventItem);
          v63 = WnodeEventItem;
          if ( WnodeEventItem )
          {
            v64 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
            memmove(
              v64,
              v13->DefaultFilterCharacteristics.UniqueName.Buffer,
              v13->DefaultFilterCharacteristics.UniqueName.Length);
            memmove(
              &v64[v13->DefaultFilterCharacteristics.UniqueName.Length + 2],
              *(const void **)(*(_QWORD *)(v11 + 3824) + 16LL),
              *(unsigned __int16 *)(*(_QWORD *)(v11 + 3824) + 8LL));
            v66 = IoWMIWriteEvent(v63);
            if ( v66 < 0 )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_(0x1Bu, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids);
              if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
                Template_qqq(v65, &FilterArrivalIndicationFailed, (const GUID *)(v17 + 202), v66, 248, 0);
              ExFreePoolWithTag(v63, 0);
            }
          }
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v11 + 5208));
          v12 = a4;
          if ( Ndis::BindState::SetPause(p_BindState, DatapathRunning, PauseReason_InitialPause)
            && (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(a4, &v106);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
              WPP_SF_Zq(0x1Cu, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, v106.Buffer, *(_QWORD *)&v106.Length);
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v11 + 5208), v67);
          if ( *(_BYTE *)(v11 + 32) < 6u && !*(_BYTE *)(v11 + 1994) )
            *(_BYTE *)(v11 + 1994) = 1;
LABEL_80:
          if ( ndisVerifierNdisDispatch
            && v17
            && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*((_QWORD *)v17 + 2) + 16LL))
            && !*((_QWORD *)v17 + 113)
            && ((int (__fastcall *)(_DEVICE_OBJECT *, _DWORD *, void **))ndisVerifierNdisDispatch->NdisAllocateVerifierContext)(
                 v13->DriverObject->DeviceObject,
                 v17,
                 &v13->FilterDriverContext) < 0
            && (unsigned __int8)byte_1C00895D4 >= 2u )
          {
            WPP_SF_q(0x1Du, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, (__int64)v17);
          }
          goto LABEL_81;
        }
LABEL_30:
        WORD1(v105[0]) = 224;
        v34 = 4;
        goto LABEL_31;
      }
    }
    else
    {
      FilterAdapterRegistry = -1073676286;
    }
    v12 = a4;
    goto LABEL_116;
  }
  FilterAdapterRegistry = -1073741823;
LABEL_116:
  if ( *((_QWORD *)v17 + 112) )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v11 + 5208));
    Ndis::BindState::RemoveBindContext(&v12->BindState, v17);
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v11 + 5208), v73);
    *((_QWORD *)v17 + 112) = 0LL;
  }
  ndisFilterAttachCleanUp(v17, v11 & -(__int64)(v85 != 0), v87);
LABEL_81:
  ndisHandleFilterHandlersChange(v11);
  if ( v105[27] )
  {
    ExFreePoolWithTag((PVOID)v105[27], 0);
    v105[27] = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v12->BindState.AllowBindDespiteMandatory
    && (v12->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v11);
  }
  ndisDereferenceMiniport(v11);
  ndisDereferenceFilterDriver(v13, v68, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    *(_DWORD *)v81 = FilterAdapterRegistry;
    WPP_SF_qqd(0x1Eu, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, v13, v11, *(_QWORD *)v81);
  }
  return FilterAdapterRegistry;
}
