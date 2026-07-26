/*
 * XREFs of ndisOpenAdapterLegacyProtocol @ 0x1C005B088
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD208 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C00F4350 (NdisOpenAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceProtocol @ 0x1C0015C20 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0016800 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018BCC (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisQueueWorkItem @ 0x1C001B848 (ndisQueueWorkItem.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C001BB74 (ndisRemoveOpenFromGlobalList.c)
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF_qZZ @ 0x1C005AD18 (WPP_SF_qZZ.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C009C1D0 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisAllocateOpenBlock @ 0x1C00A23B4 (ndisAllocateOpenBlock.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A6DB8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A92DC (ndisNotifyWmiBindUnbind.c)
 *     ndisFreeOpenBlock @ 0x1C00AC8AC (ndisFreeOpenBlock.c)
 *     ndisMDoMiniportOp @ 0x1C00AFB04 (ndisMDoMiniportOp.c)
 *     ndisInvokeOpenAdapterComplete @ 0x1C00CF468 (ndisInvokeOpenAdapterComplete.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3484 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C00F277C (ndisFindRootDevice.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        _DWORD *a1,
        __int64 a2,
        struct _NDIS_OPEN_BLOCK **a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        _NDIS_PROTOCOL_BLOCK *a7,
        void *a8,
        PCUNICODE_STRING SourceString,
        char a10,
        KIRQL NewIrql,
        _DWORD *a12)
{
  __int64 BindingAdapter; // rbx
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  char v14; // r15
  _NDIS_PROTOCOL_BLOCK *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // r12
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  __int64 v24; // rdx
  KIRQL v25; // al
  __int64 v26; // rcx
  _DWORD *v27; // rax
  KSPIN_LOCK *v28; // r12
  KIRQL v29; // al
  _QWORD *v30; // r13
  _DWORD *v31; // rcx
  _DWORD *v32; // r15
  _BYTE *v33; // r15
  _DWORD *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  NDIS_BIND_PROTOCOL_LINK *p_Blink; // rcx
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  __int64 v47; // [rsp+28h] [rbp-D8h]
  unsigned int i; // [rsp+40h] [rbp-C0h]
  __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v50[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v51; // [rsp+58h] [rbp-A8h]
  _QWORD *PoolWithTag; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *v53; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING *v54; // [rsp+70h] [rbp-90h]
  _DWORD *v55; // [rsp+78h] [rbp-88h]
  _DWORD *v56; // [rsp+80h] [rbp-80h]
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v58[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v59[26]; // [rsp+E0h] [rbp-20h] BYREF
  char v60; // [rsp+1C0h] [rbp+C0h]
  char v62; // [rsp+208h] [rbp+108h]
  KIRQL NewIrqla; // [rsp+210h] [rbp+110h]

  BindingAdapter = 0LL;
  *(_DWORD *)&String1.Length = 2359330;
  PoolWithTag = 0LL;
  OpenBlock = 0LL;
  v60 = 0;
  v14 = 0;
  v49 = 0LL;
  v62 = 0;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a7;
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qZZ(0x15u, a2, (__int64)a7, &a7->Name.Length, &SourceString->Length);
  ndisReferencePackage(&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol((__int64)a7, 9u) )
  {
    *a1 = -1073676286;
    v20 = 0;
    goto LABEL_84;
  }
  BindDeviceName = a7->BindDeviceName;
  v53 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = a7->RootDeviceName;
    BindingAdapter = (__int64)a7->BindingAdapter;
    v54 = RootDeviceName;
    v49 = BindingAdapter;
    goto LABEL_18;
  }
  ndisFindRootDevice(SourceString, (__int64)&v49, 44);
  BindingAdapter = v49;
  if ( !v49 )
  {
    BindDeviceName = v53;
    RootDeviceName = v54;
    v62 = 1;
LABEL_18:
    a7->BindDeviceName = 0LL;
    if ( BindingAdapter && (v51 = (_DWORD *)(BindingAdapter + 120), (*(_DWORD *)(BindingAdapter + 120) & 0x10000) != 0) )
    {
      if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(BindingAdapter + 360), 1u) )
      {
        *a1 = -1073676281;
      }
      else
      {
        OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, a7, 0LL);
        if ( OpenBlock )
        {
          v25 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
          OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
          ndisGlobalOpenList = OpenBlock;
          v60 = 1;
          KeReleaseSpinLock(&ndisGlobalOpenListLock, v25);
          v18 = a6;
          OpenBlock->ProtocolBindingContext = a8;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
          OpenBlock->ProtocolHandle = a7;
          *a3 = OpenBlock;
          if ( (*(_DWORD *)(BindingAdapter + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v26) = 0;
            if ( a6 )
            {
              v27 = a5;
              do
              {
                if ( *v27 == 3 )
                  break;
                LODWORD(v26) = v26 + 1;
                ++v27;
              }
              while ( (unsigned int)v26 < a6 );
            }
          }
          else
          {
            v26 = 0LL;
            if ( a6 )
            {
              v19 = *(unsigned int *)(BindingAdapter + 464);
              do
              {
                if ( a5[v26] == (_DWORD)v19 )
                  break;
                v26 = (unsigned int)(v26 + 1);
              }
              while ( (unsigned int)v26 < a6 );
            }
          }
          if ( (_DWORD)v26 == a6 )
          {
            *a1 = -1073676263;
          }
          else
          {
            *a4 = v26;
            v56 = (_DWORD *)(BindingAdapter + 124);
            if ( (*(_DWORD *)(BindingAdapter + 124) & 0x40000000) != 0
              && (v50[0] = 524672,
                  v50[1] = 1,
                  (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 66078, (unsigned int)v50, 8, 1, 1)) )
            {
              *a1 = -1073741823;
            }
            else
            {
              v28 = (KSPIN_LOCK *)(BindingAdapter + 96);
              v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v30 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v49;
              *v30 = KeGetCurrentThread();
              v31 = v51;
              NewIrqla = v29;
              v32 = (_DWORD *)(BindingAdapter + 1856);
              *(_DWORD *)(BindingAdapter + 1856) = 984274;
              LODWORD(v31) = *v31;
              v55 = (_DWORD *)(BindingAdapter + 1856);
              if ( ((unsigned int)v31 & 0x40000) == 0 )
              {
                v33 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v34 = v55;
                  do
                  {
                    *v30 = 0LL;
                    *v34 = 0;
                    KeReleaseSpinLockFromDpcLevel(v28);
                    for ( i = 0; i < 0x32; ++i )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v28);
                    *v30 = KeGetCurrentThread();
                    *v34 = 984281;
                  }
                  while ( *v33 );
                  BindingAdapter = v49;
                  v17 = a7;
                }
                *v33 = 1;
                v32 = v55;
                *(_DWORD *)(BindingAdapter + 1860) = 984281;
                BindingAdapter = v49;
                *(_QWORD *)(v49 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
              if ( !*a1 )
              {
                if ( (unsigned __int8)byte_1C00895CD >= 4u )
                  WPP_SF_qqq(0x17u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, OpenBlock, v17, BindingAdapter);
                if ( v62 )
                {
                  OpenBlock->OpenFlags |= 0x400000u;
                  BindingAdapter = v49;
                }
                if ( (*v51 & 0x20020000) == 0 )
                {
                  LOBYTE(v35) = 2;
                  ndisMSwapOpenHandlers(BindingAdapter, v35, v36);
                }
                if ( (*v51 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v37 = PoolWithTag;
                    BindingAdapter = v49;
                    *PoolWithTag = OpenBlock;
                    v37[1] = 0LL;
                    v37[3] = ndisMFinishQueuedPendingOpen;
                    v37[4] = v37;
                  }
                  else if ( (unsigned __int8)byte_1C00895DA >= 2u )
                  {
                    WPP_SF_q(0x18u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v51 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              *v30 = 0LL;
              *v32 = 0;
              KeReleaseSpinLock(v28, NewIrqla);
              if ( !*a1 )
              {
                Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208));
                CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5208));
                if ( CurrentLink )
                  p_Blink = (NDIS_BIND_PROTOCOL_LINK *)&CurrentLink[-1].DriverLinkage.Blink;
                else
                  p_Blink = 0LL;
                OpenBlock->Bind = p_Blink;
                if ( !Ndis::BindState::AddBindContext(&p_Blink->BindState, OpenBlock) )
                  *a1 = -1073741670;
                Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208));
                if ( !*a1 )
                {
                  if ( (*v56 & 0x2000) != 0 )
                  {
                    v40 = *(_QWORD *)(BindingAdapter + 4040);
                    if ( v40 )
                      (*(void (__fastcall **)(_QWORD))(v40 + 32))(*(_QWORD *)(v40 + 8));
                  }
                  v41 = a12;
                  if ( a12 )
                  {
                    a12 = 0LL;
                    *v41 = *a1;
                  }
                  v42 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    v43 = (unsigned int)*a1;
                    if ( v17->MajorNdisVersion < 6u )
                      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v43, v43);
                    else
                      ndisInvokeOpenAdapterComplete(OpenBlock, v43);
                    ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                    if ( v62 )
                    {
                      LOBYTE(v45) = 1;
                      ndisNotifyWmiBindUnbind(v44, v17, v45);
                      v62 = 0;
                    }
                    ndisQueueWorkItem((PLIST_ENTRY)(v42 + 1));
                    *a1 = 259;
                  }
                }
              }
            }
          }
        }
        else
        {
          *a1 = -1073741670;
        }
      }
    }
    else
    {
      *a1 = -1073676282;
    }
    v20 = 1;
    v14 = v62;
    goto LABEL_84;
  }
  memset(v58, 0, sizeof(v58));
  v58[1] = a3;
  v58[3] = a5;
  v58[7] = SourceString;
  LODWORD(v58[4]) = a6;
  v58[6] = a8;
  v58[0] = a1;
  v58[2] = a4;
  v58[5] = a7;
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v49 + 5208));
  DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                       BindingAdapter + 5064,
                                                       &a7->Bind,
                                                       BindingAdapter,
                                                       4LL);
  if ( DynamicBinding )
  {
    DynamicBinding->BindState.m_AdditionalContext = v58;
    if ( Ndis::BindState::SetBinding(
           &DynamicBinding->BindState,
           BindingEnabled,
           Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v59);
      WPP_SF_Zq(0x16u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (unsigned __int16 *)v59[1], v59[0]);
    }
  }
  else
  {
    *a1 = -1073741670;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(BindingAdapter + 5208), RunSynchronous, 0);
  if ( !*(_QWORD *)v58[1] && !*a1 )
    *a1 = -1073676271;
  v20 = 0;
  ndisDereferenceProtocol(a7, v24, 9u);
  ndisDereferenceMiniport(BindingAdapter);
  v14 = 0;
LABEL_84:
  if ( a12 )
    *a12 = *a1;
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v20 )
        ndisDereferenceProtocol(v17, v18, 9u);
      if ( v60 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
      if ( OpenBlock )
      {
        StatusUnbindWorkItem = OpenBlock->StatusUnbindWorkItem;
        if ( StatusUnbindWorkItem )
        {
          ExFreePoolWithTag(StatusUnbindWorkItem, 0);
          OpenBlock->StatusUnbindWorkItem = 0LL;
        }
        ndisFreeOpenBlock(OpenBlock);
      }
      *a3 = 0LL;
    }
  }
  else if ( v14 && BindingAdapter )
  {
    LOBYTE(v19) = 1;
    ndisNotifyWmiBindUnbind(BindingAdapter, v17, v19);
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
  {
    LODWORD(v47) = *a1;
    WPP_SF_qqqL(0x19u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, v17, BindingAdapter, OpenBlock, v47);
  }
}
