/*
 * XREFs of ndisOpenAdapterLegacyProtocol @ 0x1C0056A24
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD908 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C00F36E0 (NdisOpenAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C000EE44 (ndisRemoveOpenFromGlobalList.c)
 *     ndisQueueWorkItem @ 0x1C000FD5C (ndisQueueWorkItem.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018E48 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 *     ndisMSwapOpenHandlers @ 0x1C001A640 (ndisMSwapOpenHandlers.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_qZZ @ 0x1C0056688 (WPP_SF_qZZ.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C006EDDC (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PR.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C009A804 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisFreeOpenBlock @ 0x1C009AD7C (ndisFreeOpenBlock.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A33B8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C00A6788 (ndisAllocateOpenBlock.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00A7C88 (ndisNotifyWmiBindUnbind.c)
 *     ndisMDoMiniportOp @ 0x1C00ACC10 (ndisMDoMiniportOp.c)
 *     ndisInvokeOpenAdapterComplete @ 0x1C00D0638 (ndisInvokeOpenAdapterComplete.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3130 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C00F1F44 (ndisFindRootDevice.c)
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
  __int64 v23; // rcx
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  __int64 v25; // rdx
  KIRQL v26; // al
  __int64 v27; // rcx
  _DWORD *v28; // rax
  KSPIN_LOCK *v29; // r12
  KIRQL v30; // al
  _QWORD *v31; // r13
  _DWORD *v32; // rcx
  _DWORD *v33; // r15
  _BYTE *v34; // r15
  _DWORD *v35; // r14
  _QWORD *v36; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  NDIS_BIND_PROTOCOL_LINK *p_Blink; // rcx
  __int64 v39; // rcx
  _DWORD *v40; // rcx
  _QWORD *v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  __int64 v46; // [rsp+28h] [rbp-D8h]
  unsigned int i; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v49[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v50; // [rsp+58h] [rbp-A8h]
  _QWORD *PoolWithTag; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *v52; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING *v53; // [rsp+70h] [rbp-90h]
  _DWORD *v54; // [rsp+78h] [rbp-88h]
  _DWORD *v55; // [rsp+80h] [rbp-80h]
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v57[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v58[26]; // [rsp+E0h] [rbp-20h] BYREF
  char v59; // [rsp+1C0h] [rbp+C0h]
  char v61; // [rsp+208h] [rbp+108h]
  KIRQL NewIrqla; // [rsp+210h] [rbp+110h]

  BindingAdapter = 0LL;
  *(_DWORD *)&String1.Length = 2359330;
  PoolWithTag = 0LL;
  OpenBlock = 0LL;
  v59 = 0;
  v14 = 0;
  v48 = 0LL;
  v61 = 0;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a7;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qZZ(0x15u, a2, (__int64)a7, (__int64 *)&a7->Name, &SourceString->Length);
  ndisReferencePackage(&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol((__int64)a7, 9u) )
  {
    *a1 = -1073676286;
    v20 = 0;
    goto LABEL_84;
  }
  BindDeviceName = a7->BindDeviceName;
  v52 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = a7->RootDeviceName;
    BindingAdapter = (__int64)a7->BindingAdapter;
    v53 = RootDeviceName;
    v48 = BindingAdapter;
    goto LABEL_18;
  }
  ndisFindRootDevice(SourceString, (__int64)&v48, 42);
  BindingAdapter = v48;
  if ( !v48 )
  {
    BindDeviceName = v52;
    RootDeviceName = v53;
    v61 = 1;
LABEL_18:
    a7->BindDeviceName = 0LL;
    if ( BindingAdapter && (v50 = (_DWORD *)(BindingAdapter + 120), (*(_DWORD *)(BindingAdapter + 120) & 0x10000) != 0) )
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
          v26 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
          OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
          ndisGlobalOpenList = OpenBlock;
          v59 = 1;
          KeReleaseSpinLock(&ndisGlobalOpenListLock, v26);
          v18 = a6;
          OpenBlock->ProtocolBindingContext = a8;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
          OpenBlock->ProtocolHandle = a7;
          *a3 = OpenBlock;
          if ( (*(_DWORD *)(BindingAdapter + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v27) = 0;
            if ( a6 )
            {
              v28 = a5;
              do
              {
                if ( *v28 == 3 )
                  break;
                LODWORD(v27) = v27 + 1;
                ++v28;
              }
              while ( (unsigned int)v27 < a6 );
            }
          }
          else
          {
            v27 = 0LL;
            if ( a6 )
            {
              v19 = *(unsigned int *)(BindingAdapter + 464);
              do
              {
                if ( a5[v27] == (_DWORD)v19 )
                  break;
                v27 = (unsigned int)(v27 + 1);
              }
              while ( (unsigned int)v27 < a6 );
            }
          }
          if ( (_DWORD)v27 == a6 )
          {
            *a1 = -1073676263;
          }
          else
          {
            *a4 = v27;
            v55 = (_DWORD *)(BindingAdapter + 124);
            if ( (*(_DWORD *)(BindingAdapter + 124) & 0x40000000) != 0
              && (v49[0] = 524672,
                  v49[1] = 1,
                  (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 66078, (unsigned int)v49, 8, 1, 1)) )
            {
              *a1 = -1073741823;
            }
            else
            {
              v29 = (KSPIN_LOCK *)(BindingAdapter + 96);
              v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v31 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v48;
              *v31 = KeGetCurrentThread();
              v32 = v50;
              NewIrqla = v30;
              v33 = (_DWORD *)(BindingAdapter + 1856);
              *(_DWORD *)(BindingAdapter + 1856) = 984269;
              LODWORD(v32) = *v32;
              v54 = (_DWORD *)(BindingAdapter + 1856);
              if ( ((unsigned int)v32 & 0x40000) == 0 )
              {
                v34 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v35 = v54;
                  do
                  {
                    *v31 = 0LL;
                    *v35 = 0;
                    KeReleaseSpinLockFromDpcLevel(v29);
                    for ( i = 0; i < 0x32; ++i )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v29);
                    *v31 = KeGetCurrentThread();
                    *v35 = 984276;
                  }
                  while ( *v34 );
                  BindingAdapter = v48;
                  v17 = a7;
                }
                *v34 = 1;
                v33 = v54;
                *(_DWORD *)(BindingAdapter + 1860) = 984276;
                BindingAdapter = v48;
                *(_QWORD *)(v48 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
              if ( !*a1 )
              {
                if ( (unsigned __int8)byte_1C008530D >= 4u )
                  WPP_SF_qqq(0x17u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, OpenBlock, v17, BindingAdapter);
                if ( v61 )
                {
                  OpenBlock->OpenFlags |= 0x400000u;
                  BindingAdapter = v48;
                }
                if ( (*v50 & 0x20020000) == 0 )
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                if ( (*v50 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v36 = PoolWithTag;
                    BindingAdapter = v48;
                    *PoolWithTag = OpenBlock;
                    v36[1] = 0LL;
                    v36[3] = ndisMFinishQueuedPendingOpen;
                    v36[4] = v36;
                  }
                  else if ( (unsigned __int8)byte_1C008531A >= 2u )
                  {
                    WPP_SF_q(0x18u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v50 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              *v31 = 0LL;
              *v33 = 0;
              KeReleaseSpinLock(v29, NewIrqla);
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
                  if ( (*v55 & 0x2000) != 0 )
                  {
                    v39 = *(_QWORD *)(BindingAdapter + 4040);
                    if ( v39 )
                      (*(void (__fastcall **)(_QWORD))(v39 + 32))(*(_QWORD *)(v39 + 8));
                  }
                  v40 = a12;
                  if ( a12 )
                  {
                    a12 = 0LL;
                    *v40 = *a1;
                  }
                  v41 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    v42 = (unsigned int)*a1;
                    if ( v17->MajorNdisVersion < 6u )
                      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v42, v42);
                    else
                      ndisInvokeOpenAdapterComplete(OpenBlock, v42);
                    ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                    if ( v61 )
                    {
                      LOBYTE(v44) = 1;
                      ndisNotifyWmiBindUnbind(v43, v17, v44);
                      v61 = 0;
                    }
                    ndisQueueWorkItem((PLIST_ENTRY)(v41 + 1));
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
    v14 = v61;
    goto LABEL_84;
  }
  NdisTraceLoggingRareFeaturePath(v23, v48, a7);
  memset(v57, 0, sizeof(v57));
  v57[1] = a3;
  v57[3] = a5;
  v57[7] = SourceString;
  LODWORD(v57[4]) = a6;
  v57[6] = a8;
  v57[0] = a1;
  v57[2] = a4;
  v57[5] = a7;
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208));
  DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                       BindingAdapter + 5064,
                                                       &a7->Bind,
                                                       BindingAdapter,
                                                       4LL);
  if ( DynamicBinding )
  {
    DynamicBinding->BindState.m_AdditionalContext = v57;
    if ( Ndis::BindState::SetBinding(
           &DynamicBinding->BindState,
           BindingEnabled,
           Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v58);
      WPP_SF_Zq(0x16u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)v58[1], v58[0]);
    }
  }
  else
  {
    *a1 = -1073741670;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(BindingAdapter + 5208), RunSynchronous);
  if ( !*(_QWORD *)v57[1] && !*a1 )
    *a1 = -1073676271;
  v20 = 0;
  ndisDereferenceProtocol(a7, v25, 9u);
  ndisDereferenceMiniport(BindingAdapter, 0x2Au);
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
      if ( v59 )
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
  if ( (unsigned __int8)byte_1C008530D >= 4u )
  {
    LODWORD(v46) = *a1;
    WPP_SF_qqqL(0x19u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, v17, BindingAdapter, OpenBlock, v46);
  }
}
