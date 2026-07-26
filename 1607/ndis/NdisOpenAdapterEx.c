/*
 * XREFs of NdisOpenAdapterEx @ 0x1C00E75A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceProtocol @ 0x1C0015C20 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0016800 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018BCC (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisQueueWorkItem @ 0x1C001B848 (ndisQueueWorkItem.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C001BB74 (ndisRemoveOpenFromGlobalList.c)
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C00446D4 (WPP_SF_qqqL.c)
 *     WPP_SF_qZZ @ 0x1C005AD18 (WPP_SF_qZZ.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C009C1D0 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisAllocateOpenBlock @ 0x1C00A23B4 (ndisAllocateOpenBlock.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A6DB8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C00F277C (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  BOOL v5; // r12d
  _NDIS_PROTOCOL_BLOCK *v6; // r14
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  char v10; // r15
  __int64 MediumArraySize; // rdx
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  __int64 BindingAdapter; // rdi
  __int64 i; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v17; // r8
  KIRQL v18; // al
  KSPIN_LOCK *v19; // r13
  KIRQL v20; // al
  _QWORD *v21; // r12
  _DWORD *v22; // rbx
  _DWORD *v23; // r15
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r12d
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  NDIS_BIND_PROTOCOL_LINK *p_Blink; // rcx
  struct _NDIS_MINIPORT_BLOCK *v30; // rdx
  NDIS_STATUS v31; // ebx
  _QWORD *v32; // r15
  _BYTE *v34; // rbx
  _DWORD *v35; // r14
  _QWORD *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // [rsp+28h] [rbp-58h]
  char v39; // [rsp+31h] [rbp-4Fh]
  KIRQL NewIrql; // [rsp+32h] [rbp-4Eh]
  unsigned int j; // [rsp+34h] [rbp-4Ch]
  int v42; // [rsp+38h] [rbp-48h] BYREF
  __int64 v43; // [rsp+40h] [rbp-40h] BYREF
  BOOL v44; // [rsp+48h] [rbp-38h]
  _QWORD *PoolWithTag; // [rsp+50h] [rbp-30h]
  _UNICODE_STRING *v46; // [rsp+58h] [rbp-28h]
  _UNICODE_STRING *v47; // [rsp+60h] [rbp-20h]
  _DWORD *v48; // [rsp+68h] [rbp-18h]
  _QWORD *v49; // [rsp+70h] [rbp-10h]
  _DWORD *v50; // [rsp+78h] [rbp-8h]

  v6 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
  v43 = 0LL;
  LOBYTE(v5) = 0;
  v44 = v5;
  *NdisBindingHandle = 0LL;
  PoolWithTag = 0LL;
  OpenBlock = 0LL;
  v39 = 0;
  v10 = 0;
  v42 = -1073741823;
  if ( NdisProtocolHandle )
  {
    if ( (unsigned __int8)byte_1C00895CD >= 4u )
      WPP_SF_qZZ(
        0x3Cu,
        (__int64)ProtocolBindingContext,
        (__int64)NdisProtocolHandle,
        (unsigned __int16 *)NdisProtocolHandle + 36,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((__int64)&ndisPkgs);
    if ( v6->MutexOwnerThread == KeGetCurrentThread() )
    {
      if ( ndisReferenceProtocol((__int64)v6, 9u) )
      {
        BindDeviceName = v6->BindDeviceName;
        v46 = BindDeviceName;
        if ( BindDeviceName )
        {
          RootDeviceName = v6->RootDeviceName;
          BindingAdapter = (__int64)v6->BindingAdapter;
          v47 = RootDeviceName;
          v43 = BindingAdapter;
        }
        else
        {
          ndisFindRootDevice(OpenParameters->AdapterName, (__int64)&v43, 45);
          BindingAdapter = v43;
          BindDeviceName = v46;
          v44 = v43 != 0;
          RootDeviceName = v47;
        }
        v6->BindDeviceName = 0LL;
        if ( !BindingAdapter )
          goto LABEL_56;
        OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, (__int64)v6, 1);
        if ( !OpenBlock )
        {
LABEL_57:
          v31 = -1073741670;
          goto LABEL_46;
        }
        v50 = (_DWORD *)(BindingAdapter + 124);
        if ( (*(_DWORD *)(BindingAdapter + 124) & 0x100) == 0
          && (*(_BYTE *)(BindingAdapter + 1995)
           || *(_DWORD *)(BindingAdapter + 2256) == 6
           || *(_BYTE *)(BindingAdapter + 32) < 6u) )
        {
          if ( !*(_BYTE *)(BindingAdapter + 1994) )
            *(_BYTE *)(BindingAdapter + 1994) = 1;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
          OpenBlock->ProtocolHandle = v6;
          OpenBlock->ProtocolBindingContext = ProtocolBindingContext;
          *NdisBindingHandle = OpenBlock;
          MediumArraySize = OpenParameters->MediumArraySize;
          if ( (*(_DWORD *)(BindingAdapter + 568) & 0x80000001) == 0x80000001 )
          {
            for ( i = 0LL; (unsigned int)i < (unsigned int)MediumArraySize; i = (unsigned int)(i + 1) )
            {
              if ( OpenParameters->MediumArray[i] == NdisMediumWan )
                break;
            }
          }
          else
          {
            for ( i = 0LL; (unsigned int)i < (unsigned int)MediumArraySize; i = (unsigned int)(i + 1) )
            {
              if ( OpenParameters->MediumArray[i] == *(_DWORD *)(BindingAdapter + 464) )
                break;
            }
          }
          if ( (_DWORD)i != (_DWORD)MediumArraySize )
          {
            *OpenParameters->SelectedMediumIndex = i;
            FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
            if ( FrameTypeArraySize <= 4 )
            {
              v17 = 0LL;
              for ( OpenBlock->FrameTypeArraySize = FrameTypeArraySize;
                    (unsigned int)v17 < OpenParameters->FrameTypeArraySize;
                    v17 = (unsigned int)(v17 + 1) )
              {
                OpenBlock->FrameTypeArray[v17] = __ROL2__(OpenParameters->FrameTypeArray[v17], 8);
              }
              v18 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
              OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
              ndisGlobalOpenList = OpenBlock;
              v39 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v18);
              v19 = (KSPIN_LOCK *)(BindingAdapter + 96);
              v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v21 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v43;
              *v21 = KeGetCurrentThread();
              NewIrql = v20;
              v49 = v21;
              v22 = (_DWORD *)(BindingAdapter + 1856);
              v23 = (_DWORD *)(BindingAdapter + 120);
              *(_DWORD *)(BindingAdapter + 1856) = 986479;
              v24 = (*(_DWORD *)(BindingAdapter + 120) & 0x40000) == 0;
              v48 = (_DWORD *)(BindingAdapter + 1856);
              if ( v24 )
              {
                v34 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v35 = v48;
                  do
                  {
                    *v21 = 0LL;
                    *v35 = 0;
                    KeReleaseSpinLockFromDpcLevel(v19);
                    for ( j = 0; j < 0x32; ++j )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v19);
                    *v21 = KeGetCurrentThread();
                    *v35 = 986486;
                  }
                  while ( *v34 );
                  BindingAdapter = v43;
                  v6 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
                }
                *v34 = 1;
                v22 = v48;
                *(_DWORD *)(BindingAdapter + 1860) = 986486;
                BindingAdapter = v43;
                *(_QWORD *)(v43 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v42, OpenBlock, BindingAdapter);
              v27 = v42;
              if ( !v42 )
              {
                if ( (unsigned __int8)byte_1C00895CD >= 4u )
                  WPP_SF_qqq(0x3Du, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, OpenBlock, v6, BindingAdapter);
                if ( (*v23 & 0x20020000) == 0 )
                {
                  LOBYTE(v25) = 2;
                  ndisMSwapOpenHandlers(BindingAdapter, v25, v26);
                }
                if ( (*v23 & 0x20000) != 0 && v6->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v36 = PoolWithTag;
                    BindingAdapter = v43;
                    v27 = v42;
                    *PoolWithTag = OpenBlock;
                    v36[1] = 0LL;
                    v36[3] = ndisMFinishQueuedPendingOpen;
                    v36[4] = v36;
                  }
                  else if ( (unsigned __int8)byte_1C00895DA >= 2u )
                  {
                    WPP_SF_q(0x3Eu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v23 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              *v49 = 0LL;
              *v22 = 0;
              KeReleaseSpinLock(v19, NewIrql);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208));
              CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5208));
              if ( CurrentLink )
                p_Blink = (NDIS_BIND_PROTOCOL_LINK *)&CurrentLink[-1].DriverLinkage.Blink;
              else
                p_Blink = 0LL;
              OpenBlock->Bind = p_Blink;
              if ( !Ndis::BindState::AddBindContext(&p_Blink->BindState, OpenBlock) )
                v27 = -1073741670;
              v31 = v27;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208), v30);
              if ( !v27 )
              {
                if ( (*v50 & 0x2000) != 0 )
                {
                  v37 = *(_QWORD *)(BindingAdapter + 4040);
                  if ( v37 )
                    (*(void (__fastcall **)(_QWORD))(v37 + 32))(*(_QWORD *)(v37 + 8));
                }
                v32 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v32 )
                  goto LABEL_38;
                v6->OpenAdapterCompleteHandlerEx(OpenBlock->ProtocolBindingContext, 0);
                ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                ndisQueueWorkItem((PLIST_ENTRY)(v32 + 1));
                v31 = 259;
              }
              if ( v31 == 259 )
              {
LABEL_38:
                ndisDereferencePackage((__int64)&ndisPkgs);
                if ( v44 )
                  ndisDereferenceMiniport(BindingAdapter);
                if ( (unsigned __int8)byte_1C00895CD >= 4u )
                {
                  LODWORD(v38) = v31;
                  WPP_SF_qqqL(
                    0x3Fu,
                    &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids,
                    v6,
                    BindingAdapter,
                    OpenBlock,
                    v38);
                }
                return v31;
              }
              goto LABEL_46;
            }
            goto LABEL_57;
          }
          v31 = -1073676263;
        }
        else
        {
LABEL_56:
          v31 = -1073676282;
        }
LABEL_46:
        v10 = 1;
LABEL_47:
        *NdisBindingHandle = 0LL;
        if ( v10 )
          ndisDereferenceProtocol(v6, MediumArraySize, 9u);
        if ( v39 )
          ndisRemoveOpenFromGlobalList(OpenBlock);
        goto LABEL_38;
      }
      v31 = -1073676286;
    }
    else
    {
      v31 = v42;
    }
    BindingAdapter = v43;
    goto LABEL_47;
  }
  if ( (unsigned __int8)byte_1C00895CD >= 2u )
    WPP_SF_(0x3Bu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids);
  return -1073741823;
}
