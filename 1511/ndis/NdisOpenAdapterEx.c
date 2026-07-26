/*
 * XREFs of NdisOpenAdapterEx @ 0x1C00E3930
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C001348C (ndisRemoveOpenFromGlobalList.c)
 *     ndisQueueWorkItem @ 0x1C0014314 (ndisQueueWorkItem.c)
 *     ndisMSwapOpenHandlers @ 0x1C0019720 (ndisMSwapOpenHandlers.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001AAF0 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceProtocol @ 0x1C001BE60 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_qqqL @ 0x1C0040C54 (WPP_SF_qqqL.c)
 *     WPP_SF_qZZ @ 0x1C0056518 (WPP_SF_qZZ.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C009797C (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisAllocateOpenBlock @ 0x1C00A0064 (ndisAllocateOpenBlock.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A4FE8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C00EBAE4 (ndisFindRootDevice.c)
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
  int v25; // r12d
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  NDIS_BIND_PROTOCOL_LINK *p_Blink; // rcx
  struct _NDIS_MINIPORT_BLOCK *v28; // rdx
  NDIS_STATUS v29; // ebx
  _QWORD *v30; // r15
  _BYTE *v32; // rbx
  _DWORD *v33; // r14
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // [rsp+28h] [rbp-58h]
  char v37; // [rsp+31h] [rbp-4Fh]
  KIRQL NewIrql; // [rsp+32h] [rbp-4Eh]
  __int64 v39; // [rsp+38h] [rbp-48h] BYREF
  unsigned int j; // [rsp+40h] [rbp-40h]
  int v41; // [rsp+44h] [rbp-3Ch] BYREF
  BOOL v42; // [rsp+48h] [rbp-38h]
  _QWORD *PoolWithTag; // [rsp+50h] [rbp-30h]
  _UNICODE_STRING *v44; // [rsp+58h] [rbp-28h]
  _DWORD *v45; // [rsp+60h] [rbp-20h]
  _UNICODE_STRING *v46; // [rsp+68h] [rbp-18h]
  _QWORD *v47; // [rsp+70h] [rbp-10h]
  _DWORD *v48; // [rsp+78h] [rbp-8h]

  v6 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
  v39 = 0LL;
  LOBYTE(v5) = 0;
  v42 = v5;
  *NdisBindingHandle = 0LL;
  PoolWithTag = 0LL;
  OpenBlock = 0LL;
  v37 = 0;
  v10 = 0;
  v41 = -1073741823;
  if ( NdisProtocolHandle )
  {
    if ( (unsigned __int8)byte_1C008370D >= 4u )
      WPP_SF_qZZ(
        0x3Cu,
        (__int64)ProtocolBindingContext,
        (__int64)NdisProtocolHandle,
        (__int64 *)NdisProtocolHandle + 9,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((__int64)&ndisPkgs);
    if ( v6->MutexOwnerThread == KeGetCurrentThread() )
    {
      if ( ndisReferenceProtocol((__int64)v6, 9u) )
      {
        BindDeviceName = v6->BindDeviceName;
        v44 = BindDeviceName;
        if ( BindDeviceName )
        {
          RootDeviceName = v6->RootDeviceName;
          BindingAdapter = (__int64)v6->BindingAdapter;
          v46 = RootDeviceName;
          v39 = BindingAdapter;
        }
        else
        {
          ndisFindRootDevice(OpenParameters->AdapterName, (__int64)&v39, 43);
          BindingAdapter = v39;
          BindDeviceName = v44;
          v42 = v39 != 0;
          RootDeviceName = v46;
        }
        v6->BindDeviceName = 0LL;
        if ( !BindingAdapter )
          goto LABEL_56;
        OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, (__int64)v6, 1);
        if ( !OpenBlock )
        {
LABEL_57:
          v29 = -1073741670;
          goto LABEL_46;
        }
        v48 = (_DWORD *)(BindingAdapter + 124);
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
              v37 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v18);
              v19 = (KSPIN_LOCK *)(BindingAdapter + 96);
              v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v21 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v39;
              *v21 = KeGetCurrentThread();
              NewIrql = v20;
              v47 = v21;
              v22 = (_DWORD *)(BindingAdapter + 1856);
              v23 = (_DWORD *)(BindingAdapter + 120);
              *(_DWORD *)(BindingAdapter + 1856) = 986484;
              v24 = (*(_DWORD *)(BindingAdapter + 120) & 0x40000) == 0;
              v45 = (_DWORD *)(BindingAdapter + 1856);
              if ( v24 )
              {
                v32 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v33 = v45;
                  do
                  {
                    *v21 = 0LL;
                    *v33 = 0;
                    KeReleaseSpinLockFromDpcLevel(v19);
                    for ( j = 0; j < 0x32; ++j )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v19);
                    *v21 = KeGetCurrentThread();
                    *v33 = 986491;
                  }
                  while ( *v32 );
                  BindingAdapter = v39;
                  v6 = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
                }
                *v32 = 1;
                v22 = v45;
                *(_DWORD *)(BindingAdapter + 1860) = 986491;
                BindingAdapter = v39;
                *(_QWORD *)(v39 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v41, (__int64)OpenBlock, BindingAdapter);
              v25 = v41;
              if ( !v41 )
              {
                if ( (unsigned __int8)byte_1C008370D >= 4u )
                  WPP_SF_qqq(0x3Du, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, OpenBlock, v6, BindingAdapter);
                if ( (*v23 & 0x20020000) == 0 )
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                if ( (*v23 & 0x20000) != 0 && v6->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v34 = PoolWithTag;
                    BindingAdapter = v39;
                    v25 = v41;
                    *PoolWithTag = OpenBlock;
                    v34[1] = 0LL;
                    v34[3] = ndisMFinishQueuedPendingOpen;
                    v34[4] = v34;
                  }
                  else if ( (unsigned __int8)byte_1C008371A >= 2u )
                  {
                    WPP_SF_q(0x3Eu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v23 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1860) = 0;
                *(_QWORD *)(BindingAdapter + 1864) = 0LL;
              }
              *v47 = 0LL;
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
                v25 = -1073741670;
              v29 = v25;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5208), v28);
              if ( !v25 )
              {
                if ( (*v48 & 0x2000) != 0 )
                {
                  v35 = *(_QWORD *)(BindingAdapter + 4040);
                  if ( v35 )
                    (*(void (__fastcall **)(_QWORD))(v35 + 32))(*(_QWORD *)(v35 + 8));
                }
                v30 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v30 )
                  goto LABEL_38;
                v6->OpenAdapterCompleteHandlerEx(OpenBlock->ProtocolBindingContext, 0);
                ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                ndisQueueWorkItem((PLIST_ENTRY)(v30 + 1));
                v29 = 259;
              }
              if ( v29 == 259 )
              {
LABEL_38:
                ndisDereferencePackage((__int64)&ndisPkgs);
                if ( v42 )
                  ndisDereferenceMiniport(BindingAdapter, 0x2Bu);
                if ( (unsigned __int8)byte_1C008370D >= 4u )
                {
                  LODWORD(v36) = v29;
                  WPP_SF_qqqL(
                    0x3Fu,
                    &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids,
                    v6,
                    BindingAdapter,
                    OpenBlock,
                    v36);
                }
                return v29;
              }
              goto LABEL_46;
            }
            goto LABEL_57;
          }
          v29 = -1073676263;
        }
        else
        {
LABEL_56:
          v29 = -1073676282;
        }
LABEL_46:
        v10 = 1;
LABEL_47:
        *NdisBindingHandle = 0LL;
        if ( v10 )
          ndisDereferenceProtocol(v6, MediumArraySize, 9u);
        if ( v37 )
          ndisRemoveOpenFromGlobalList(OpenBlock);
        goto LABEL_38;
      }
      v29 = -1073676286;
    }
    else
    {
      v29 = v41;
    }
    BindingAdapter = v39;
    goto LABEL_47;
  }
  if ( (unsigned __int8)byte_1C008370D >= 2u )
    WPP_SF_(0x3Bu, &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids);
  return -1073741823;
}
