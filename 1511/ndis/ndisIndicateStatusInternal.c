/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C001CD04
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisUpdateOperationalStatus @ 0x1C001BF84 (ndisUpdateOperationalStatus.c)
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C001C7F0 (ndisIndicateInitialStateToBinding.c)
 *     NdisMIndicateStatus @ 0x1C0058130 (NdisMIndicateStatus.c)
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C0001348 (ndisDeletePatternEntry.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisDereferenceWithTag @ 0x1C000B124 (ndisDereferenceWithTag.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B25C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0012760 (ndisMRestoreOpenHandlers.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C001623C (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00162D4 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisMSwapOpenHandlers @ 0x1C0019720 (ndisMSwapOpenHandlers.c)
 *     ndisInvokeStatus @ 0x1C001D604 (ndisInvokeStatus.c)
 *     ndisWriteWmiStatusIndication @ 0x1C001D65C (ndisWriteWmiStatusIndication.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001D878 (ndisReferenceMiniportByHandle.c)
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C001DDB4 (ndisIndicateOffloadChangeInternal.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001EBA8 (ndisCancelMediaDisconnectTimer.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0024B88 (ndisSetMediaDisconnectTimer.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003BD24 (ndisUpdateMiniportPortStates.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_qLq @ 0x1C00409D8 (WPP_SF_qLq.c)
 *     ndisMAllocateRequest @ 0x1C0041FE4 (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0044A54 (ndisQueueRequestOnTopAsync.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C00465A0 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0046DDC (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_qLLL @ 0x1C0058DA8 (WPP_SF_qLLL.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0059A7C (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0060A28 (ndisTopTcpConnectionOffloadStatus.c)
 */

char __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, __int128 *a2)
{
  _DWORD *Src; // r12
  __int64 (__fastcall *v5)(); // r14
  KIRQL v6; // bl
  int v7; // r13d
  _NDIS_OPEN_BLOCK *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  char v12; // di
  int v13; // r14d
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdi
  __int64 v15; // r8
  struct _NDIS_MINIPORT_BLOCK *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rbx
  KIRQL v19; // al
  ULONG_PTR v20; // rcx
  bool v21; // zf
  struct _KEVENT *v22; // rcx
  char v23; // r14
  int v24; // ecx
  __int64 v25; // rdx
  char v26; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // r14
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rbx
  __int64 v29; // rdx
  KIRQL v30; // bl
  bool v31; // di
  _NET_IF_MEDIA_CONNECT_STATE v32; // eax
  bool v33; // cf
  int v34; // ecx
  int v35; // ecx
  __int64 Flags; // r9
  unsigned __int16 v37; // ax
  char v38; // bl
  unsigned int v39; // eax
  __int64 v40; // r9
  unsigned int v41; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  void *v48; // r14
  int v49; // ebx
  KIRQL v50; // al
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rbx
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v54; // eax
  __int64 v55; // r9
  _DWORD *v56; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  char v59; // [rsp+50h] [rbp-B0h]
  char v60; // [rsp+51h] [rbp-AFh]
  char v61; // [rsp+52h] [rbp-AEh]
  char v62; // [rsp+53h] [rbp-ADh]
  KIRQL v63; // [rsp+53h] [rbp-ADh]
  char v64; // [rsp+54h] [rbp-ACh]
  char v65; // [rsp+55h] [rbp-ABh]
  char v66; // [rsp+56h] [rbp-AAh]
  char v67; // [rsp+57h] [rbp-A9h]
  char v68; // [rsp+58h] [rbp-A8h]
  char v69; // [rsp+59h] [rbp-A7h]
  unsigned int v70; // [rsp+5Ch] [rbp-A4h]
  KIRQL NewIrql; // [rsp+60h] [rbp-A0h]
  int v72; // [rsp+64h] [rbp-9Ch]
  __int64 (__fastcall *v73)(); // [rsp+68h] [rbp-98h]
  bool v74; // [rsp+70h] [rbp-90h]
  __int128 v75; // [rsp+80h] [rbp-80h] BYREF
  __int128 v76; // [rsp+90h] [rbp-70h]
  __int128 v77; // [rsp+A0h] [rbp-60h]
  __int128 v78; // [rsp+B0h] [rbp-50h]
  __int128 v79; // [rsp+C0h] [rbp-40h]
  __int128 v80; // [rsp+D0h] [rbp-30h]
  __int128 v81; // [rsp+E0h] [rbp-20h]
  _QWORD v82[14]; // [rsp+F0h] [rbp-10h] BYREF
  int v83; // [rsp+160h] [rbp+60h] BYREF
  _NET_IF_OPER_STATUS ifOperStatus; // [rsp+164h] [rbp+64h]
  unsigned int ifOperStatusFlags; // [rsp+168h] [rbp+68h]
  _QWORD v86[5]; // [rsp+170h] [rbp+70h] BYREF

  v72 = 0;
  Src = (_DWORD *)*((_QWORD *)a2 + 6);
  v5 = (__int64 (__fastcall *)())*((_QWORD *)a2 + 4);
  v6 = 2;
  v7 = *((_DWORD *)a2 + 5);
  v70 = *((_DWORD *)a2 + 14);
  v68 = 0;
  v61 = 0;
  v67 = 0;
  v59 = 0;
  v66 = 0;
  v64 = 0;
  v69 = 0;
  v65 = 0;
  v74 = 0;
  v73 = v5;
  v62 = 0;
  v60 = 0;
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    WPP_SF_qLq(52LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, (unsigned int)v7, v5);
  if ( (char *)v5 == (char *)&ndisIntReqWmi )
  {
    v5 = 0LL;
    v67 = 1;
    v73 = 0LL;
  }
  if ( v5 && *(_BYTE *)v5 != 18 )
  {
    if ( (unsigned __int8)byte_1C008371F >= 2u )
      WPP_SF_q(53LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
    v5 = 0LL;
    v73 = 0LL;
  }
  LOBYTE(v8) = v7 - 11;
  v9 = a2[1];
  v75 = *a2;
  v76 = v9;
  v10 = a2[3];
  v77 = a2[2];
  v78 = v10;
  v11 = a2[5];
  v79 = a2[4];
  v80 = v11;
  v81 = a2[6];
  if ( (unsigned int)(v7 - 1073807371) <= 1 )
    return (char)v8;
  if ( v7 != 1073807383 )
  {
    v12 = 0;
    goto LABEL_10;
  }
  v31 = (*((_BYTE *)a2 + 24) & 8) != 0;
  a1->LinkStateIndicationFlags |= 7u;
  v74 = v31;
  if ( !Src || v70 < 0x28 )
    goto LABEL_16;
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    WPP_SF_qD(54LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, (unsigned int)Src[1]);
  if ( v70 == -2 )
  {
    v70 = 40;
    *((_DWORD *)a2 + 14) = 40;
  }
  v32 = Src[1];
  if ( v32 == MediaConnectStateConnected )
  {
    v72 = 1073807371;
    if ( a1->MediaConnectState != MediaConnectStateConnected )
    {
LABEL_93:
      v64 = 1;
      goto LABEL_79;
    }
  }
  else if ( v32 == MediaConnectStateDisconnected )
  {
    v72 = 1073807372;
    if ( a1->MediaConnectState == MediaConnectStateConnected )
      goto LABEL_93;
  }
  v61 = 1;
LABEL_79:
  v33 = a1->MajorNdisVersion < 6u;
  a1->MediaConnectState = v32;
  a1->MediaDuplexState = Src[2];
  a1->RcvLinkSpeed = *((_QWORD *)Src + 3);
  a1->XmitLinkSpeed = *((_QWORD *)Src + 2);
  a1->PauseFunctions = Src[8];
  if ( v33 )
  {
    MaxXmitLinkSpeed = a1->MaxXmitLinkSpeed;
    if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *((_QWORD *)Src + 2) )
      a1->MaxXmitLinkSpeed = *((_QWORD *)Src + 2);
    MaxRcvLinkSpeed = a1->MaxRcvLinkSpeed;
    if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *((_QWORD *)Src + 3) )
      a1->MaxRcvLinkSpeed = *((_QWORD *)Src + 3);
    v45 = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
    if ( v45 == 0x40000000 || v45 < *((_QWORD *)Src + 2) )
      a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *((_QWORD *)Src + 2);
    v46 = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
    if ( v46 == 0x40000000 || v46 < *((_QWORD *)Src + 3) )
      a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *((_QWORD *)Src + 3);
  }
  a1->AutoNegotiationFlags = Src[9];
  v12 = ndisIfSetInterfaceState(a1);
  v60 = v12;
LABEL_10:
  if ( v7 == 1073807394 )
  {
    LODWORD(v8) = ndisUpdateMiniportPortStates(a1, a2);
    if ( (_DWORD)v8 )
    {
      if ( (unsigned __int8)byte_1C008371F >= 4u )
        LOBYTE(v8) = WPP_SF_qLq(55LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, 1073807394LL, v5);
      return (char)v8;
    }
    if ( *((_DWORD *)a2 + 4) )
      goto LABEL_14;
    v12 = ndisIfSetInterfaceState(a1);
    v60 = v12;
  }
  if ( v7 == 1073807379 )
  {
    a1->LinkStateIndicationFlags |= 2u;
    v47 = ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
    v48 = (void *)v47;
    if ( v47 )
    {
      *(_DWORD *)(v47 + 88) |= 2u;
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, 2u);
      v49 = ndisQueueRequestOnTopAsync(a1, v48);
      v50 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      v63 = v50;
      a1->LockDbg = 724837;
      if ( v49 == 259 )
      {
        v6 = v50;
      }
      else
      {
        ExFreePoolWithTag(v48, 0);
        v6 = v63;
      }
      v12 = v60;
    }
    v62 = 1;
  }
  if ( ((v7 - 1073872897) & 0xFFFFFFFD) == 0 )
  {
    LOBYTE(v8) = ndisTopTcpConnectionOffloadStatus(a1, a2);
    if ( !(_BYTE)v8 )
    {
      if ( (unsigned __int8)byte_1C008371F >= 4u )
        LOBYTE(v8) = WPP_SF_d(56LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (unsigned int)v7);
      return (char)v8;
    }
  }
  if ( v7 == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    v64 = 1;
    v72 = 1073807371;
    a1->MediaConnectState = MediaConnectStateConnected;
    v60 = ndisIfSetInterfaceState(a1);
    v12 = v60;
    memset(v86, 0, sizeof(v86));
    MiniportMediaDuplexState = a1->MiniportMediaDuplexState;
    DWORD2(v76) |= 0x1000u;
    LODWORD(v86[1]) = MiniportMediaDuplexState;
    v86[2] = a1->MiniportXmitLinkSpeed;
    v86[3] = a1->MiniportRcvLinkSpeed;
    v86[4] = *(_QWORD *)&a1->MiniportPauseFunctions;
    *(_QWORD *)&v78 = v86;
    v86[0] = 0x100280180LL;
    DWORD1(v76) = 1073807383;
    DWORD2(v78) = 40;
  }
LABEL_14:
  if ( v12 )
  {
    ifOperStatus = 0;
    ifOperStatusFlags = 0;
    IfBlock = a1->IfBlock;
    v83 = 786816;
    v68 = 1;
    ifOperStatus = IfBlock->ifOperStatus;
    ifOperStatusFlags = IfBlock->ifOperStatusFlags;
    memset(v82, 0, sizeof(v82));
    LODWORD(v82[0]) = 7340440;
    v82[6] = &v83;
    LODWORD(v82[7]) = 12;
    v82[1] = a1;
    HIDWORD(v82[2]) = 1073807395;
  }
LABEL_16:
  v13 = 0;
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  BaseMiniport = a1;
  KeReleaseSpinLock(&a1->Lock, v6);
  v16 = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceTopMiniportByNameForNsi(
                                         (__int64)a1,
                                         0x200000,
                                         v15,
                                         a1->MiniportMediaType == NdisMediumNative802_11,
                                         1u,
                                         0x37u);
  v18 = (__int64)v16;
  if ( v16 )
  {
    if ( v16 == a1 )
    {
      LOBYTE(v17) = 54;
      if ( (unsigned __int8)ndisReferenceMiniportByHandle(a1->BaseMiniport, 0LL, v17) )
      {
        BaseMiniport = a1->BaseMiniport;
        v69 = 1;
      }
    }
    else
    {
      v13 = -1073741823;
    }
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 96));
    *(_QWORD *)(v18 + 520) = KeGetCurrentThread();
    v20 = *(_QWORD *)(v18 + 4960);
    NewIrql = v19;
    *(_DWORD *)(v18 + 1856) = 71717;
    ndisDereferenceWithTag(v20, 1u);
    v21 = (*(_DWORD *)(v18 + 3164))-- == 1;
    if ( v21 )
    {
      v22 = *(struct _KEVENT **)(v18 + 3176);
      if ( v22 )
        KeSetEvent(v22, 0, 0);
    }
    *(_QWORD *)(v18 + 520) = 0LL;
    *(_DWORD *)(v18 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 96), NewIrql);
    ndisDereferenceMiniport(v18, 0x37u);
  }
  else
  {
    v13 = -1073741823;
  }
  if ( v13 )
  {
    v64 = 0;
    v23 = 0;
  }
  else
  {
    v23 = v68;
  }
  ndisWriteWmiStatusIndication((int)BaseMiniport, (int)BaseMiniport->pAdapterInstanceName, (int)a2, v7, Src, v70);
  if ( v64 )
    ndisWriteWmiStatusIndication((int)BaseMiniport, (int)BaseMiniport->pAdapterInstanceName, (int)a2, v72, 0LL, 0);
  if ( v23 )
    ndisWriteWmiStatusIndication(
      (int)BaseMiniport,
      (int)BaseMiniport->pAdapterInstanceName,
      (int)a2,
      1073807395,
      &v83,
      12);
  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 724968;
  if ( v69 )
    ndisDereferenceMiniport((__int64)BaseMiniport, 0x36u);
  v25 = 256LL;
  if ( v7 == 1073807383 )
    v7 = v72;
  if ( v7 == 1073807384 )
  {
    if ( (*((_DWORD *)a2 + 6) & 4) == 0 )
    {
      v61 = 1;
      if ( v70 >= 4 && (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
        Template_jqxq(
          v24,
          (unsigned int)&MiniportStatusIndicationNetworkChange,
          (_DWORD)a1 + 4064,
          (_DWORD)a1 + 4064,
          a1->IfIndex,
          a1->NetLuid.Value,
          *Src);
      goto LABEL_42;
    }
    v7 = 1073807371;
  }
  switch ( v7 )
  {
    case 1073872902:
      v59 = 1;
      v26 = 1;
      ndisIndicateOffloadChangeInternal(a1, Src, v70);
      goto LABEL_43;
    case 1073807395:
      v61 = 1;
      if ( v70 >= 0xC )
      {
        if ( (unsigned __int8)byte_1C008371F >= 4u )
        {
          WPP_SF_qdD(59LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, (unsigned int)Src[1], Src[2]);
          v25 = 256LL;
        }
        v34 = Src[1];
        if ( v34 == 1 )
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
              Src[2]);
        }
        else if ( (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
        {
          Template_jqxqq(
            v34,
            (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
            (_DWORD)a1 + 4064,
            (_DWORD)a1 + 4064,
            a1->IfIndex,
            a1->NetLuid.Value,
            v34,
            Src[2]);
        }
      }
      break;
    case 1073807372:
      v35 = 1;
      Flags = a1->Flags;
      v37 = a1->MediaSenseDisconnectCount + 1;
      a1->MediaSenseDisconnectCount = v37;
      if ( (Flags & 0x20000000) != 0 || v37 == 1 )
      {
        v38 = 1;
        v65 = 1;
        if ( (unsigned __int8)byte_1C008371F >= 4u )
          WPP_SF_qLLL(
            57LL,
            &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids,
            a1,
            Flags,
            a1->PnPFlags,
            a1->CurrentDevicePowerState);
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
      if ( !v74 )
      {
        a1->Flags = v39 | 0x4000000;
        if ( v38 )
          ndisSetMediaDisconnectTimer(a1, v25);
      }
      break;
    case 1073807371:
      v40 = a1->Flags;
      ++a1->MediaSenseConnectCount;
      if ( (v40 & 0x20000000) == 0 )
      {
        v65 = 1;
        if ( (unsigned __int8)byte_1C008371F >= 4u )
          WPP_SF_qLLL(
            58LL,
            &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids,
            a1,
            v40,
            a1->PnPFlags,
            a1->CurrentDevicePowerState);
        if ( (Microsoft_Windows_NDISEnableBits & 0x8000000000LL) != 0 )
          Template_jqxqqq(
            v24,
            (unsigned int)&MiniportStatusIndicationConnect,
            (_DWORD)a1 + 4064,
            (_DWORD)a1 + 4064,
            a1->IfIndex,
            a1->NetLuid.Value,
            a1->Flags,
            a1->PnPFlags,
            a1->CurrentDevicePowerState);
      }
      v41 = a1->Flags | 0x20000000;
      a1->MediaConnectState = MediaConnectStateConnected;
      a1->Flags = v41;
      if ( !v74 )
      {
        a1->Flags = v41 | 0x4000000;
        ndisCancelMediaDisconnectTimer(a1);
      }
      break;
    case 1073872912:
      ndisMIndicateReceiveFilterCapsChange((__int64)a1, 1073872912, Src, v70, 1);
      break;
    default:
      v25 = 1073872960LL;
      if ( v7 == 1073872960 )
      {
        ndisMIndicateNicSwitchCapsChange(a1, 1073872960, Src, v70, 1);
      }
      else if ( v7 > 1073873055 && v7 <= 1073873057 )
      {
        ndisMIndicateQosParametersChange(a1);
      }
      break;
  }
LABEL_42:
  v26 = 0;
LABEL_43:
  LOBYTE(v8) = 1;
  if ( v67 != 1 )
  {
    OpenQueue = a1->OpenQueue;
    if ( OpenQueue )
    {
      v8 = (_NDIS_OPEN_BLOCK *)v73;
      while ( v8 && v8 != OpenQueue )
      {
        MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_49:
        OpenQueue = MiniportNextOpen;
        v21 = MiniportNextOpen == 0LL;
        v26 = v59;
        if ( v21 )
          goto LABEL_50;
      }
      KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
      if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
        goto LABEL_158;
      if ( v26 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
      {
        if ( !v66 )
        {
          StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
          if ( StatusUnbindWorkItem )
          {
            LOBYTE(v29) = 52;
            ndisReferenceMiniportNoCheck(a1, v29);
            OpenQueue->StatusUnbindWorkItem = 0LL;
            v66 = 1;
            ndisScheduleWorkItemInternal(StatusUnbindWorkItem);
          }
        }
        goto LABEL_158;
      }
      if ( v7 == 1073938515 )
        ndisOpenIndicatePMCapabilities(OpenQueue, a2);
      if ( v7 == 1073938513 )
      {
        if ( *((_DWORD *)a2 + 14) < 4u )
          goto LABEL_158;
        p_WOLPatternList = &OpenQueue->WOLPatternList;
      }
      else
      {
        if ( v7 != 1073938514 )
        {
LABEL_61:
          v30 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
          ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)OpenQueue->RefCountTracker, 7u);
          ++OpenQueue->References;
          KeReleaseSpinLock(&OpenQueue->RefCountLock, v30);
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
              if ( !v61 && !*((_DWORD *)a2 + 4) )
              {
                v54 = *((_DWORD *)a2 + 5);
                if ( v54 == 1073807383 || v54 == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
                {
                  v55 = 0LL;
                  v56 = 0LL;
                }
                else
                {
                  v55 = v70;
                  v56 = Src;
                }
                OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v7, v56, v55);
                StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                if ( StatusCompleteHandler )
                  StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
              }
            }
            else if ( !v62 )
            {
              ndisInvokeStatus(OpenQueue, a2);
              if ( *((_DWORD *)a2 + 5) == 1073807384 && (*((_DWORD *)a2 + 6) & 4) != 0 )
                ndisInvokeStatus(OpenQueue, &v75);
              if ( v60 )
                ndisInvokeStatus(OpenQueue, v82);
            }
            KeAcquireSpinLockAtDpcLevel(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
            a1->LockDbg = 725308;
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            OpenQueue->OpenFlags &= ~0x100u;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          }
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          ndisMDereferenceOpenLocked((__int64)OpenQueue, 7u);
          goto LABEL_69;
        }
        if ( *((_DWORD *)a2 + 14) < 4u )
        {
LABEL_158:
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_69:
          v8 = (_NDIS_OPEN_BLOCK *)v73;
          goto LABEL_49;
        }
        p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
      }
      if ( ndisDeletePatternEntry(p_WOLPatternList, **((_DWORD **)a2 + 6)) )
      {
        --*((_DWORD *)a2 + 24);
        goto LABEL_61;
      }
      goto LABEL_158;
    }
LABEL_50:
    if ( v7 == 1073938516 )
      LOBYTE(v8) = ndisUpdateAndIndicatePMCapabilities(a1);
    if ( v65 )
    {
      LODWORD(v8) = *((_DWORD *)a2 + 6);
      if ( ((unsigned __int8)v8 & 2) == 0 )
      {
        LOBYTE(v25) = 2;
        if ( v7 == 1073807371 )
        {
          a1->PnPFlags &= ~0x10000000u;
          ndisMRestoreOpenHandlers((__int64)a1, v25);
          a1->PacketIndicateHandler = a1->SavedPacketIndicateHandler;
          LOBYTE(v8) = a1->SavedReceivePathEnabled;
          a1->ReceivePathEnabled = (unsigned __int8)v8;
        }
        else
        {
          a1->PnPFlags |= 0x10000000u;
          ndisMSwapOpenHandlers((__int64)a1, 2u);
          v8 = (_NDIS_OPEN_BLOCK *)ndisMDummyIndicatePacket;
          a1->ReceivePathEnabled = 0;
          a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    LOBYTE(v8) = WPP_SF_qLq(
                   60LL,
                   &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids,
                   a1,
                   (unsigned int)v7,
                   *((_QWORD *)a2 + 4));
  return (char)v8;
}
