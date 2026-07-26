/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C0016D10
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00156C0 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0016864 (ndisIndicateInitialStateToBinding.c)
 *     ndisUpdateOperationalStatus @ 0x1C00182A4 (ndisUpdateOperationalStatus.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisMIndicateStatus @ 0x1C005C8C0 (NdisMIndicateStatus.c)
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000A3BC (ndisDereferenceMiniportForNsi.c)
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisInvokeStatus @ 0x1C0017584 (ndisInvokeStatus.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017670 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisWriteWmiStatusIndication @ 0x1C00176D4 (ndisWriteWmiStatusIndication.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001791C (ndisReferenceMiniportByHandle.c)
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C00183D8 (ndisCancelMediaDisconnectTimer.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0019FE8 (ndisScheduleWorkItemInternal.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F608 (ndisMRestoreOpenHandlers.c)
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0020040 (ndisSetMediaDisconnectTimer.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00231E0 (ndisIndicateOffloadChangeInternal.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0024E7C (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0024FFC (ndisMIndicateNicSwitchCapsChange.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003EE50 (Template_jqxqq.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003FCA0 (ndisUpdateMiniportPortStates.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ndisMAllocateRequest @ 0x1C0045AE4 (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0047F94 (ndisQueueRequestOnTopAsync.c)
 *     ndisDeletePatternEntry @ 0x1C0048F5C (ndisDeletePatternEntry.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C004A0E0 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004AE24 (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_qLq @ 0x1C004EBD8 (WPP_SF_qLq.c)
 *     WPP_SF_qLLL @ 0x1C005D260 (WPP_SF_qLLL.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005DF1C (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0064D68 (ndisTopTcpConnectionOffloadStatus.c)
 */

char __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, __int128 *a2)
{
  _DWORD *v2; // r12
  __int64 (__fastcall *v4)(); // r14
  int v6; // r13d
  _NDIS_OPEN_BLOCK *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  char v11; // bl
  int v12; // ebx
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdi
  __int64 v14; // r8
  struct _NDIS_MINIPORT_BLOCK *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r14
  char v18; // r14
  int v19; // ecx
  __int64 v20; // rdx
  unsigned int Flags; // r9d
  unsigned int v22; // eax
  char v23; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // r14
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rbx
  __int64 v26; // rdx
  KIRQL v27; // bl
  __int64 v28; // rdx
  bool v29; // zf
  bool v30; // bl
  _NET_IF_MEDIA_CONNECT_STATE v31; // eax
  bool v32; // cf
  int v33; // ecx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  int v35; // ecx
  unsigned int v36; // r9d
  unsigned __int16 v37; // ax
  char v38; // bl
  unsigned int v39; // eax
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  void *v45; // r14
  int v46; // ebx
  KIRQL v47; // di
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rbx
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v51; // eax
  __int64 v52; // r9
  _DWORD *v53; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  int Src; // [rsp+20h] [rbp-E0h]
  char v57; // [rsp+50h] [rbp-B0h]
  char v58; // [rsp+51h] [rbp-AFh]
  char v59; // [rsp+52h] [rbp-AEh]
  char v60; // [rsp+53h] [rbp-ADh]
  char v61; // [rsp+54h] [rbp-ACh]
  KIRQL NewIrql; // [rsp+55h] [rbp-ABh]
  char v63; // [rsp+56h] [rbp-AAh]
  char v64; // [rsp+57h] [rbp-A9h]
  char v65; // [rsp+58h] [rbp-A8h]
  char v66; // [rsp+59h] [rbp-A7h]
  char v67; // [rsp+5Ah] [rbp-A6h]
  unsigned int v68; // [rsp+5Ch] [rbp-A4h]
  int v69; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v70)(); // [rsp+68h] [rbp-98h]
  bool v71; // [rsp+70h] [rbp-90h]
  __int128 v72; // [rsp+80h] [rbp-80h] BYREF
  __int128 v73; // [rsp+90h] [rbp-70h]
  __int128 v74; // [rsp+A0h] [rbp-60h]
  __int128 v75; // [rsp+B0h] [rbp-50h]
  __int128 v76; // [rsp+C0h] [rbp-40h]
  __int128 v77; // [rsp+D0h] [rbp-30h]
  __int128 v78; // [rsp+E0h] [rbp-20h]
  _QWORD v79[14]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+160h] [rbp+60h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+168h] [rbp+68h]
  _QWORD v82[5]; // [rsp+170h] [rbp+70h] BYREF

  v69 = 0;
  v2 = (_DWORD *)*((_QWORD *)a2 + 6);
  v4 = (__int64 (__fastcall *)())*((_QWORD *)a2 + 4);
  v6 = *((_DWORD *)a2 + 5);
  v68 = *((_DWORD *)a2 + 14);
  v63 = 0;
  v59 = 0;
  v65 = 0;
  v57 = 0;
  v66 = 0;
  v60 = 0;
  v64 = 0;
  NewIrql = 2;
  v61 = 0;
  v71 = 0;
  v70 = v4;
  v67 = 0;
  v58 = 0;
  if ( (unsigned __int8)byte_1C00895DF >= 4u )
    WPP_SF_qLq(52LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, (unsigned int)v6, v4);
  if ( (char *)v4 == (char *)&ndisIntReqWmi )
  {
    v4 = 0LL;
    v65 = 1;
    v70 = 0LL;
  }
  if ( v4 && *(_BYTE *)v4 != 18 )
  {
    if ( (unsigned __int8)byte_1C00895DF >= 2u )
      WPP_SF_q(53LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
    v4 = 0LL;
    v70 = 0LL;
  }
  LOBYTE(v7) = v6 - 11;
  v8 = a2[1];
  v72 = *a2;
  v73 = v8;
  v9 = a2[3];
  v74 = a2[2];
  v75 = v9;
  v10 = a2[5];
  v76 = a2[4];
  v77 = v10;
  v78 = a2[6];
  if ( (unsigned int)(v6 - 1073807371) <= 1 )
    return (char)v7;
  if ( v6 != 1073807383 )
  {
    v11 = 0;
    goto LABEL_10;
  }
  v30 = (*((_BYTE *)a2 + 24) & 8) != 0;
  a1->LinkStateIndicationFlags |= 7u;
  v71 = v30;
  if ( !v2 || v68 < 0x28 )
    goto LABEL_16;
  if ( (unsigned __int8)byte_1C00895DF >= 4u )
    WPP_SF_qD(54LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, (unsigned int)v2[1]);
  if ( v68 == -2 )
  {
    v68 = 40;
    *((_DWORD *)a2 + 14) = 40;
  }
  v31 = v2[1];
  if ( v31 != MediaConnectStateConnected )
  {
    if ( v31 != MediaConnectStateDisconnected )
      goto LABEL_79;
    v69 = 1073807372;
    if ( a1->MediaConnectState != MediaConnectStateConnected )
      goto LABEL_79;
LABEL_93:
    v60 = 1;
    goto LABEL_80;
  }
  v69 = 1073807371;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
    goto LABEL_93;
LABEL_79:
  v59 = 1;
LABEL_80:
  v32 = a1->MajorNdisVersion < 6u;
  a1->MediaConnectState = v31;
  a1->MediaDuplexState = v2[2];
  a1->RcvLinkSpeed = *((_QWORD *)v2 + 3);
  a1->XmitLinkSpeed = *((_QWORD *)v2 + 2);
  a1->PauseFunctions = v2[8];
  if ( v32 )
  {
    MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
    if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *((_QWORD *)v2 + 2) )
      a1->MaxXmitLinkSpeed = *((_QWORD *)v2 + 2);
    MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
    if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *((_QWORD *)v2 + 3) )
      a1->MaxRcvLinkSpeed = *((_QWORD *)v2 + 3);
    v42 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
    if ( v42 == 0x40000000 || v42 < *((_QWORD *)v2 + 2) )
      a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *((_QWORD *)v2 + 2);
    v43 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
    if ( v43 == 0x40000000 || v43 < *((_QWORD *)v2 + 3) )
      a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *((_QWORD *)v2 + 3);
  }
  a1->AutoNegotiationFlags = v2[9];
  v11 = ndisIfSetInterfaceState(a1);
  v58 = v11;
LABEL_10:
  if ( v6 == 1073807394 )
  {
    LODWORD(v7) = ndisUpdateMiniportPortStates(a1, a2);
    if ( (_DWORD)v7 )
    {
      if ( (unsigned __int8)byte_1C00895DF >= 4u )
        LOBYTE(v7) = WPP_SF_qLq(55LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, 1073807394LL, v4);
      return (char)v7;
    }
    if ( *((_DWORD *)a2 + 4) )
      goto LABEL_14;
    v11 = ndisIfSetInterfaceState(a1);
    v58 = v11;
  }
  if ( v6 == 1073807379 )
  {
    a1->LinkStateIndicationFlags |= 2u;
    v44 = ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
    v45 = (void *)v44;
    if ( v44 )
    {
      *(_DWORD *)(v44 + 88) |= 2u;
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, 2u);
      v46 = ndisQueueRequestOnTopAsync(a1, v45);
      v47 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      NewIrql = v47;
      a1->LockDbg = 724866;
      if ( v46 != 259 )
        ExFreePoolWithTag(v45, 0);
      v11 = v58;
    }
    v67 = 1;
  }
  if ( ((v6 - 1073872897) & 0xFFFFFFFD) == 0 )
  {
    LOBYTE(v7) = ndisTopTcpConnectionOffloadStatus(a1, a2);
    if ( !(_BYTE)v7 )
    {
      if ( (unsigned __int8)byte_1C00895DF >= 4u )
        LOBYTE(v7) = WPP_SF_d(56LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned int)v6);
      return (char)v7;
    }
  }
  if ( v6 == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    v60 = 1;
    v69 = 1073807371;
    a1->MediaConnectState = MediaConnectStateConnected;
    v58 = ndisIfSetInterfaceState(a1);
    v11 = v58;
    memset(v82, 0, sizeof(v82));
    MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
    DWORD2(v73) |= 0x1000u;
    LODWORD(v82[1]) = MiniportMediaDuplexState;
    v82[2] = a1->MiniportXmitLinkSpeed;
    v82[3] = a1->MiniportRcvLinkSpeed;
    v82[4] = *(_QWORD *)&a1->MiniportPauseFunctions;
    *(_QWORD *)&v75 = v82;
    v82[0] = 0x100280180LL;
    DWORD1(v73) = 1073807383;
    DWORD2(v75) = 40;
  }
LABEL_14:
  if ( v11 )
  {
    v63 = 1;
    ifOperStatusFlags = 0;
    v80 = 786816LL;
    IfBlock = a1->IfBlock;
    HIDWORD(v80) = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(v79, 0, sizeof(v79));
    LODWORD(v79[0]) = 7340440;
    v79[6] = &v80;
    v79[1] = a1;
    HIDWORD(v79[2]) = 1073807395;
    LODWORD(v79[7]) = 12;
  }
LABEL_16:
  v12 = 0;
  BaseMiniport = a1;
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  v15 = ndisReferenceTopMiniportByNameForNsi(
          (__int64)a1,
          0x200000,
          v14,
          a1->MiniportMediaType == NdisMediumNative802_11,
          1u,
          0x39u);
  v17 = (__int64)v15;
  if ( v15 )
  {
    if ( v15 == a1 )
    {
      LOBYTE(v16) = 56;
      if ( (unsigned __int8)ndisReferenceMiniportByHandle(a1->BaseMiniport, 0LL, v16) )
      {
        BaseMiniport = a1->BaseMiniport;
        v64 = 1;
      }
    }
    else
    {
      v12 = -1073741823;
    }
    ndisDereferenceMiniportForNsi(v17, 1u, 0x39u);
  }
  else
  {
    v12 = -1073741823;
  }
  if ( v12 )
  {
    v60 = 0;
    v18 = 0;
  }
  else
  {
    v18 = v63;
  }
  ndisWriteWmiStatusIndication((int)BaseMiniport, (int)BaseMiniport->pAdapterInstanceName, (int)a2, v6, v2, v68);
  if ( v60 )
    ndisWriteWmiStatusIndication((int)BaseMiniport, (int)BaseMiniport->pAdapterInstanceName, (int)a2, v69, 0LL, 0);
  if ( v18 )
    ndisWriteWmiStatusIndication(
      (int)BaseMiniport,
      (int)BaseMiniport->pAdapterInstanceName,
      (int)a2,
      1073807395,
      &v80,
      12);
  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 724997;
  if ( v64 )
    ndisDereferenceMiniport((__int64)BaseMiniport);
  v20 = 256LL;
  if ( v6 == 1073807383 )
    v6 = v69;
  if ( v6 == 1073807384 )
  {
    if ( (*((_DWORD *)a2 + 6) & 4) == 0 )
    {
      v59 = 1;
      if ( v68 >= 4 && (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
        Template_jqxq(
          v19,
          (unsigned int)&MiniportStatusIndicationNetworkChange,
          (_DWORD)a1 + 4064,
          (_DWORD)a1 + 4064,
          a1->IfIndex,
          a1->NetLuid.Value,
          *v2);
      goto LABEL_43;
    }
    v6 = 1073807371;
  }
  switch ( v6 )
  {
    case 1073807395:
      v59 = 1;
      if ( v68 >= 0xC )
      {
        if ( (unsigned __int8)byte_1C00895DF >= 4u )
        {
          WPP_SF_qdD(59LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, (unsigned int)v2[1], v2[2]);
          v20 = 256LL;
        }
        v33 = v2[1];
        if ( v33 == 1 )
        {
          if ( (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
            Template_jqxqq(
              1,
              (unsigned int)&MiniportStatusIndicationOperStatusUp,
              (_DWORD)a1 + 4064,
              (_DWORD)a1 + 4064,
              a1->IfIndex,
              a1->NetLuid.Value,
              1,
              v2[2]);
        }
        else if ( (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
        {
          Template_jqxqq(
            v33,
            (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
            (_DWORD)a1 + 4064,
            (_DWORD)a1 + 4064,
            a1->IfIndex,
            a1->NetLuid.Value,
            v33,
            v2[2]);
        }
      }
      break;
    case 1073807371:
      Flags = a1->Flags;
      ++a1->MediaSenseConnectCount;
      if ( (Flags & 0x20000000) == 0 )
      {
        v61 = 1;
        if ( (unsigned __int8)byte_1C00895DF >= 4u )
          WPP_SF_qLLL(58LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x8000000000LL) != 0 )
          Template_jqxqqq(
            v19,
            (unsigned int)&MiniportStatusIndicationConnect,
            (_DWORD)a1 + 4064,
            (_DWORD)a1 + 4064,
            a1->IfIndex,
            a1->NetLuid.Value,
            a1->Flags,
            a1->PnPFlags,
            a1->CurrentDevicePowerState);
      }
      v22 = a1->Flags | 0x20000000;
      a1->MediaConnectState = MediaConnectStateConnected;
      a1->Flags = v22;
      if ( !v71 )
      {
        a1->Flags = v22 | 0x4000000;
        ndisCancelMediaDisconnectTimer(a1);
      }
      break;
    case 1073872902:
      v57 = 1;
      v23 = 1;
      ndisIndicateOffloadChangeInternal(a1, v2, v68);
      goto LABEL_44;
    case 1073807372:
      v35 = 1;
      v36 = a1->Flags;
      v37 = a1->MediaSenseDisconnectCount + 1;
      a1->MediaSenseDisconnectCount = v37;
      if ( (v36 & 0x20000000) != 0 || v37 == 1 )
      {
        v38 = 1;
        v61 = 1;
        if ( (unsigned __int8)byte_1C00895DF >= 4u )
          WPP_SF_qLLL(57LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x8000000000LL) != 0 )
          Template_jqxqqq(
            v35,
            (unsigned int)&MiniportStatusIndicationDisconnect,
            (_DWORD)a1 + 4064,
            (_DWORD)a1 + 4064,
            a1->IfIndex,
            a1->NetLuid.Value,
            a1->Flags,
            a1->PnPFlags,
            a1->CurrentDevicePowerState);
      }
      else
      {
        v38 = 0;
      }
      v39 = a1->Flags & 0xDFFFFFFF;
      a1->MediaConnectState = MediaConnectStateDisconnected;
      a1->Flags = v39;
      if ( !v71 )
      {
        a1->Flags = v39 | 0x4000000;
        if ( v38 )
          ndisSetMediaDisconnectTimer(a1, v20);
      }
      break;
    case 1073872912:
      LOBYTE(Src) = 1;
      ndisMIndicateReceiveFilterCapsChange(a1, 1073872912LL, v2, v68, Src);
      break;
    default:
      v20 = 1073872960LL;
      if ( v6 == 1073872960 )
      {
        LOBYTE(Src) = 1;
        ndisMIndicateNicSwitchCapsChange(a1, 1073872960LL, v2, v68, Src);
      }
      else if ( v6 > 1073873055 && v6 <= 1073873057 )
      {
        ndisMIndicateQosParametersChange(a1);
      }
      break;
  }
LABEL_43:
  v23 = 0;
LABEL_44:
  LOBYTE(v7) = 1;
  if ( v65 != 1 )
  {
    OpenQueue = a1->OpenQueue;
    if ( OpenQueue )
    {
      v7 = (_NDIS_OPEN_BLOCK *)v70;
      while ( v7 && v7 != OpenQueue )
      {
        MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_65:
        OpenQueue = MiniportNextOpen;
        v29 = MiniportNextOpen == 0LL;
        v23 = v57;
        if ( v29 )
          goto LABEL_66;
      }
      KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
      if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
        goto LABEL_154;
      if ( v23 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
      {
        if ( !v66 )
        {
          StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
          if ( StatusUnbindWorkItem )
          {
            LOBYTE(v26) = 54;
            ndisReferenceMiniportNoCheck(a1, v26);
            OpenQueue->StatusUnbindWorkItem = 0LL;
            v66 = 1;
            ndisScheduleWorkItemInternal(StatusUnbindWorkItem);
          }
        }
        goto LABEL_154;
      }
      if ( v6 == 1073938515 )
        ndisOpenIndicatePMCapabilities(OpenQueue, a2);
      if ( v6 == 1073938513 )
      {
        if ( *((_DWORD *)a2 + 14) < 4u )
          goto LABEL_154;
        p_WOLPatternList = &OpenQueue->WOLPatternList;
      }
      else
      {
        if ( v6 != 1073938514 )
        {
LABEL_56:
          v27 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)OpenQueue->RefCountTracker);
          ++OpenQueue->References;
          KeReleaseSpinLock(&OpenQueue->RefCountLock, v27);
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          if ( OpenQueue->StatusHandler )
          {
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            OpenQueue->OpenFlags |= 0x100u;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            a1->MiniportThread = 0LL;
            a1->LockDbg = 0;
            KeReleaseSpinLockFromDpcLevel(&a1->Lock);
            if ( OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
            {
              if ( !v59 && !*((_DWORD *)a2 + 4) )
              {
                v51 = *((_DWORD *)a2 + 5);
                if ( v51 == 1073807383 || v51 == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
                {
                  v52 = 0LL;
                  v53 = 0LL;
                }
                else
                {
                  v52 = v68;
                  v53 = v2;
                }
                OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v6, v53, v52);
                StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                if ( StatusCompleteHandler )
                  StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
              }
            }
            else if ( !v67 )
            {
              ndisInvokeStatus(OpenQueue, a2);
              if ( *((_DWORD *)a2 + 5) == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
                ndisInvokeStatus(OpenQueue, &v72);
              if ( v58 )
                ndisInvokeStatus(OpenQueue, v79);
            }
            KeAcquireSpinLockAtDpcLevel(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
            a1->LockDbg = 725337;
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            OpenQueue->OpenFlags &= ~0x100u;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          }
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          LOBYTE(v28) = 7;
          ndisMDereferenceOpenLocked(OpenQueue, v28);
          goto LABEL_64;
        }
        if ( *((_DWORD *)a2 + 14) < 4u )
        {
LABEL_154:
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_64:
          v7 = (_NDIS_OPEN_BLOCK *)v70;
          goto LABEL_65;
        }
        p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
      }
      if ( (unsigned __int8)ndisDeletePatternEntry(p_WOLPatternList, **((unsigned int **)a2 + 6)) )
      {
        --*((_DWORD *)a2 + 24);
        goto LABEL_56;
      }
      goto LABEL_154;
    }
LABEL_66:
    if ( v6 == 1073938516 )
      LOBYTE(v7) = ndisUpdateAndIndicatePMCapabilities(a1);
    if ( v61 )
    {
      LODWORD(v7) = *((_DWORD *)a2 + 6);
      if ( ((unsigned __int8)v7 & 2) == 0 )
      {
        LOBYTE(v20) = 2;
        if ( v6 == 1073807371 )
        {
          a1->PnPFlags &= ~0x10000000u;
          ndisMRestoreOpenHandlers(a1, v20);
          a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
          LOBYTE(v7) = a1->SavedReceivePathEnabled;
          a1->ReceivePathEnabled = (unsigned __int8)v7;
        }
        else
        {
          a1->PnPFlags |= 0x10000000u;
          ndisMSwapOpenHandlers(a1, v20);
          v7 = (_NDIS_OPEN_BLOCK *)ndisMDummyIndicatePacket;
          a1->ReceivePathEnabled = 0;
          a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895DF >= 4u )
    LOBYTE(v7) = WPP_SF_qLq(
                   60LL,
                   &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
                   a1,
                   (unsigned int)v6,
                   *((_QWORD *)a2 + 4));
  return (char)v7;
}
