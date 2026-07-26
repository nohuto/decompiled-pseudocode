/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C00152FC
 * Callers:
 *     ndisUpdateOperationalStatus @ 0x1C00145CC (ndisUpdateOperationalStatus.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0014DC8 (ndisIndicateInitialStateToBinding.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisMIndicateStatus @ 0x1C0058440 (NdisMIndicateStatus.c)
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisDeletePatternEntry @ 0x1C000E4A8 (ndisDeletePatternEntry.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000FAE0 (ndisMRestoreOpenHandlers.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001455C (ndisScheduleWorkItemInternal.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0015FD8 (ndisWriteWmiStatusIndication.c)
 *     ndisIfSetInterfaceState @ 0x1C00161F4 (ndisIfSetInterfaceState.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C00164C4 (ndisIndicateOffloadChangeInternal.c)
 *     ndisInvokeStatus @ 0x1C0017930 (ndisInvokeStatus.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0018DAC (ndisSetMediaDisconnectTimer.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001923C (ndisCancelMediaDisconnectTimer.c)
 *     ndisMSwapOpenHandlers @ 0x1C001A640 (ndisMSwapOpenHandlers.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0021D88 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0021EB0 (ndisMIndicateNicSwitchCapsChange.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003A190 (Template_jqxqq.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003AFE4 (ndisUpdateMiniportPortStates.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     Template_jqxqqq @ 0x1C003F10C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qLq @ 0x1C003F298 (WPP_SF_qLq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisMAllocateRequest @ 0x1C00408E4 (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C00434BC (ndisQueueRequestOnTopAsync.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C0045010 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004584C (ndisUpdateAndIndicatePMCapabilities.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     WPP_SF_qLLL @ 0x1C00590B8 (WPP_SF_qLLL.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0059ADC (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C0061268 (ndisTopTcpConnectionOffloadStatus.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 */

char __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, __int128 *a2)
{
  int v2; // r12d
  __int128 *v3; // r13
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  __int64 v5; // rbx
  KIRQL v6; // di
  __int64 (__fastcall *v7)(); // r15
  __int64 (__fastcall *v8)(); // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int64 v12; // r8
  char v13; // bl
  __int64 v14; // r8
  __int64 v15; // rax
  char v16; // bl
  __int64 v17; // r15
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r14
  char v19; // si
  KIRQL v20; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r12
  KIRQL v22; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r13
  KIRQL v24; // r14
  ULONG_PTR v25; // r8
  int v26; // edx
  __int64 v27; // rcx
  ULONG_PTR v28; // r10
  bool v29; // zf
  struct _KEVENT *v30; // rcx
  KIRQL v31; // al
  ULONG_PTR v32; // r8
  KIRQL v33; // r14
  __int64 v34; // rcx
  unsigned __int8 v35; // r9
  unsigned __int8 v36; // dl
  int v37; // eax
  unsigned int v38; // edi
  _DWORD *v39; // r14
  struct _KEVENT *RemoveReadyEvent; // rcx
  KIRQL v41; // al
  ULONG_PTR v42; // r8
  KIRQL v43; // r14
  __int64 v44; // rcx
  unsigned __int8 v45; // r9
  unsigned __int8 v46; // dl
  bool v47; // bl
  __int64 v48; // rdx
  char v49; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // r14
  __int64 v52; // rdx
  KIRQL v53; // bl
  unsigned int v54; // ebx
  ULONG_PTR v55; // r8
  __int64 v56; // rax
  bool v57; // bl
  char v58; // di
  KIRQL v59; // r15
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int64 v61; // rdx
  unsigned __int8 v62; // r9
  unsigned __int8 v63; // dl
  bool v64; // r14
  _NET_IF_MEDIA_CONNECT_STATE v65; // eax
  bool v66; // cf
  int v67; // ecx
  int v68; // ecx
  unsigned int Flags; // r9d
  unsigned __int16 v70; // ax
  char v71; // bl
  unsigned int v72; // eax
  unsigned int v73; // r9d
  int v74; // eax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 v76; // r9
  unsigned __int8 v77; // dl
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  _DWORD *v82; // r14
  int v83; // ebx
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  ULONG_PTR v85; // rbx
  unsigned int v86; // edx
  ULONG_PTR v87; // rbx
  unsigned int v88; // edx
  struct _KEVENT *v89; // rcx
  ULONG_PTR v90; // rbx
  unsigned int v91; // edx
  __int64 StatusUnbindWorkItem; // rbx
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v94; // eax
  __int64 v95; // r9
  _DWORD *v96; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  ULONG_PTR v98; // rbx
  unsigned int v99; // edx
  int Src; // [rsp+20h] [rbp-E0h]
  char v102; // [rsp+50h] [rbp-B0h]
  char v103; // [rsp+51h] [rbp-AFh]
  char v104; // [rsp+52h] [rbp-AEh]
  char v105; // [rsp+53h] [rbp-ADh]
  char v106; // [rsp+54h] [rbp-ACh]
  char v107; // [rsp+55h] [rbp-ABh]
  char v108; // [rsp+56h] [rbp-AAh]
  char v109; // [rsp+57h] [rbp-A9h]
  char v110; // [rsp+58h] [rbp-A8h]
  char v111; // [rsp+59h] [rbp-A7h]
  int v112; // [rsp+5Ch] [rbp-A4h]
  unsigned int v113; // [rsp+5Ch] [rbp-A4h]
  KIRQL v114; // [rsp+60h] [rbp-A0h]
  char v115; // [rsp+64h] [rbp-9Ch]
  unsigned int v116; // [rsp+68h] [rbp-98h]
  int v117; // [rsp+6Ch] [rbp-94h]
  __int64 (__fastcall *v118)(); // [rsp+70h] [rbp-90h]
  bool v119; // [rsp+78h] [rbp-88h]
  int v120; // [rsp+7Ch] [rbp-84h]
  _DWORD *v121; // [rsp+80h] [rbp-80h]
  __int64 v123; // [rsp+90h] [rbp-70h]
  struct _NDIS_M_DRIVER_BLOCK *v124; // [rsp+98h] [rbp-68h]
  _NDIS_MINIPORT_BLOCK *v125; // [rsp+A0h] [rbp-60h]
  __int128 v127; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v128; // [rsp+C0h] [rbp-40h]
  __int128 v129; // [rsp+D0h] [rbp-30h]
  __int128 v130; // [rsp+E0h] [rbp-20h]
  __int128 v131; // [rsp+F0h] [rbp-10h]
  __int128 v132; // [rsp+100h] [rbp+0h]
  __int128 v133; // [rsp+110h] [rbp+10h]
  _QWORD v134[14]; // [rsp+120h] [rbp+20h] BYREF
  int v135; // [rsp+190h] [rbp+90h] BYREF
  __int64 v136; // [rsp+194h] [rbp+94h]
  _QWORD v137[5]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = *((_DWORD *)a2 + 5);
  v3 = a2;
  v4 = a1;
  v112 = v2;
  v5 = *((_QWORD *)a2 + 6);
  v6 = 2;
  v7 = (__int64 (__fastcall *)())*((_QWORD *)a2 + 4);
  v121 = (_DWORD *)v5;
  v118 = v7;
  v117 = 0;
  v116 = *((_DWORD *)a2 + 14);
  v106 = 0;
  v119 = 0;
  v108 = 0;
  v103 = 0;
  v109 = 0;
  v104 = 0;
  v110 = 0;
  v102 = 0;
  v111 = 0;
  v105 = 0;
  v107 = 0;
  if ( (unsigned __int8)byte_1C008531F >= 4u )
    WPP_SF_qLq(49LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, (unsigned int)v2, v7);
  if ( (char *)v7 == (char *)&ndisIntReqWmi )
  {
    v7 = 0LL;
    v118 = 0LL;
    v110 = 1;
  }
  if ( v7 && *(_BYTE *)v7 != 18 )
  {
    if ( (unsigned __int8)byte_1C008531F >= 2u )
      WPP_SF_q(50LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v4);
    v7 = 0LL;
    v118 = 0LL;
  }
  LOBYTE(v8) = v2 - 11;
  v9 = v3[1];
  v127 = *v3;
  v128 = v9;
  v10 = v3[3];
  v129 = v3[2];
  v130 = v10;
  v11 = v3[5];
  v131 = v3[4];
  v132 = v11;
  v133 = v3[6];
  if ( (unsigned int)(v2 - 1073807371) <= 1 )
    return (char)v8;
  v12 = 40LL;
  if ( v2 != 1073807383 )
  {
    v13 = 0;
    goto LABEL_10;
  }
  v64 = (*((_BYTE *)v3 + 24) & 8) != 0;
  v4->LinkStateIndicationFlags |= 7u;
  v119 = v64;
  if ( v5 && v116 >= 0x28 )
  {
    if ( (unsigned __int8)byte_1C008531F >= 4u )
      WPP_SF_qD(51LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v4, *(unsigned int *)(v5 + 4));
    if ( v116 == -2 )
    {
      v116 = 40;
      *((_DWORD *)v3 + 14) = 40;
    }
    v65 = *(_DWORD *)(v5 + 4);
    if ( v65 == MediaConnectStateConnected )
    {
      v117 = 1073807371;
      if ( v4->MediaConnectState != MediaConnectStateConnected )
      {
LABEL_158:
        v105 = 1;
        goto LABEL_146;
      }
    }
    else if ( v65 == MediaConnectStateDisconnected )
    {
      v117 = 1073807372;
      if ( v4->MediaConnectState == MediaConnectStateConnected )
        goto LABEL_158;
    }
    v104 = 1;
LABEL_146:
    v66 = v4->MajorNdisVersion < 6u;
    v4->MediaConnectState = v65;
    v4->MediaDuplexState = *(_DWORD *)(v5 + 8);
    v4->RcvLinkSpeed = *(_QWORD *)(v5 + 24);
    v4->XmitLinkSpeed = *(_QWORD *)(v5 + 16);
    v4->PauseFunctions = *(_DWORD *)(v5 + 32);
    if ( v66 )
    {
      MaxXmitLinkSpeed = v4->MaxXmitLinkSpeed;
      if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *(_QWORD *)(v5 + 16) )
        v4->MaxXmitLinkSpeed = *(_QWORD *)(v5 + 16);
      MaxRcvLinkSpeed = v4->MaxRcvLinkSpeed;
      if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *(_QWORD *)(v5 + 24) )
        v4->MaxRcvLinkSpeed = *(_QWORD *)(v5 + 24);
      v80 = v4->TopFilterRestartAttributes.MaxXmitLinkSpeed;
      if ( v80 == 0x40000000 || v80 < *(_QWORD *)(v5 + 16) )
        v4->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)(v5 + 16);
      v81 = v4->TopFilterRestartAttributes.MaxRcvLinkSpeed;
      if ( v81 == 0x40000000 || v81 < *(_QWORD *)(v5 + 24) )
        v4->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)(v5 + 24);
    }
    v4->AutoNegotiationFlags = *(_DWORD *)(v5 + 36);
    v13 = ndisIfSetInterfaceState(v4);
    v103 = v13;
LABEL_10:
    if ( v2 == 1073807394 )
    {
      LODWORD(v8) = ndisUpdateMiniportPortStates(v4, v3, v12);
      if ( (_DWORD)v8 )
      {
        if ( (unsigned __int8)byte_1C008531F >= 4u )
          LOBYTE(v8) = WPP_SF_qLq(52LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v4, 1073807394LL, v7);
        return (char)v8;
      }
      if ( *((_DWORD *)v3 + 4) )
        goto LABEL_14;
      v13 = ndisIfSetInterfaceState(v4);
      v103 = v13;
    }
    if ( v2 == 1073807379 )
    {
      v4->LinkStateIndicationFlags |= 2u;
      v82 = (_DWORD *)ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
      if ( v82 )
      {
        v82[22] |= 2u;
        v4->MiniportThread = 0LL;
        v4->LockDbg = 0;
        KeReleaseSpinLock(&v4->Lock, 2u);
        v83 = ndisQueueRequestOnTopAsync(v4, v82);
        v6 = KeAcquireSpinLockRaiseToDpc(&v4->Lock);
        v4->MiniportThread = KeGetCurrentThread();
        v4->LockDbg = 724785;
        if ( v83 != 259 )
          ExFreePoolWithTag(v82, 0);
        v13 = v103;
      }
      v108 = 1;
    }
    if ( ((v2 - 1073872897) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v8) = ndisTopTcpConnectionOffloadStatus(v4, v3, v12);
      if ( !(_BYTE)v8 )
      {
        if ( (unsigned __int8)byte_1C008531F >= 4u )
          LOBYTE(v8) = WPP_SF_d(53LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (unsigned int)v2);
        return (char)v8;
      }
    }
    if ( v2 == 1073807384 && (*((_DWORD *)v3 + 6) & 4) != 0 )
    {
      v105 = 1;
      v117 = 1073807371;
      v4->MediaConnectState = MediaConnectStateConnected;
      v103 = ndisIfSetInterfaceState(v4);
      v13 = v103;
      memset(v137, 0, sizeof(v137));
      MiniportMediaDuplexState = v4->MiniportMediaDuplexState;
      DWORD2(v128) |= 0x1000u;
      LODWORD(v137[1]) = MiniportMediaDuplexState;
      v137[2] = v4->MiniportXmitLinkSpeed;
      v137[3] = v4->MiniportRcvLinkSpeed;
      v137[4] = *(_QWORD *)&v4->MiniportPauseFunctions;
      *(_QWORD *)&v130 = v137;
      v137[0] = 0x100280180LL;
      DWORD1(v128) = 1073807383;
      DWORD2(v130) = 40;
    }
LABEL_14:
    if ( v13 )
    {
      IfBlock = v4->IfBlock;
      v136 = 0LL;
      v135 = 786816;
      v109 = 1;
      v136 = *(_QWORD *)&IfBlock->ifOperStatus;
      memset(v134, 0, sizeof(v134));
      LODWORD(v134[0]) = 7340440;
      v134[6] = &v135;
      v134[1] = v4;
      HIDWORD(v134[2]) = 1073807395;
      LODWORD(v134[7]) = 12;
    }
  }
  v120 = 0;
  v4->MiniportThread = 0LL;
  v4->LockDbg = 0;
  v125 = v4;
  KeReleaseSpinLock(&v4->Lock, v6);
  v15 = ndisReferenceTopMiniportByNameForNsi(
          (__int64)v4,
          0x200000,
          v14,
          v4->MiniportMediaType == NdisMediumNative802_11,
          1u,
          0x37u);
  v16 = 0;
  v123 = v15;
  v17 = v15;
  if ( !v15 )
  {
    v37 = -1073741823;
    goto LABEL_53;
  }
  if ( (struct _NDIS_MINIPORT_BLOCK *)v15 != v4 )
  {
    v120 = -1073741823;
    goto LABEL_28;
  }
  BaseMiniport = v4->BaseMiniport;
  v19 = 0;
  v115 = 0;
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  NextDriver = ndisMiniDriverList;
  v124 = ndisMiniDriverList;
  do
  {
    if ( !NextDriver )
      break;
    KeReleaseSpinLock(&ndisMiniDriverListLock, v20);
    v22 = KeAcquireSpinLockRaiseToDpc(&NextDriver->Ref.SpinLock);
    MiniportQueue = NextDriver->MiniportQueue;
    v114 = v22;
    while ( MiniportQueue )
    {
      if ( MiniportQueue != BaseMiniport )
        goto LABEL_23;
      v19 = 1;
      v58 = 1;
      v59 = KeAcquireSpinLockRaiseToDpc(&BaseMiniport->Ref.SpinLock);
      if ( !BaseMiniport->Ref.Closing )
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)BaseMiniport->RefCountTracker;
        if ( RefCountTracker )
          ndisReferenceWithTag(RefCountTracker, 0x36u);
        v29 = BaseMiniport->Ref.ReferenceCount++ == -1;
        if ( !v29 )
          goto LABEL_128;
        BaseMiniport->Ref.ReferenceCount = -1;
      }
      v58 = 0;
LABEL_128:
      if ( (unsigned __int8)byte_1C008531B >= 4u )
        WPP_SF_qD(
          12LL,
          &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids,
          BaseMiniport,
          BaseMiniport->Ref.ReferenceCount);
      KeReleaseSpinLock(&BaseMiniport->Ref.SpinLock, v59);
      if ( v58 )
      {
        v16 = 1;
      }
      else
      {
        if ( (BaseMiniport->Flags & 0x80200020) != 0
          || (BaseMiniport->PnPFlags & 0x1084110) != 0
          || BaseMiniport->PnPDeviceState != NdisPnPDeviceStarted
          || BaseMiniport->CurrentDevicePowerState != PowerDeviceD0 )
        {
          v16 = v115;
          goto LABEL_23;
        }
        LOBYTE(v61) = 54;
        v16 = v115;
        if ( (unsigned __int8)ndisReferenceMiniport(BaseMiniport, v61) )
          v16 = 1;
      }
      v115 = v16;
LABEL_23:
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v19 )
        break;
    }
    KeReleaseSpinLock(&v124->Ref.SpinLock, v114);
    v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v124->NextDriver;
    v124 = NextDriver;
  }
  while ( !v19 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v20);
  v4 = a1;
  v3 = a2;
  v17 = v123;
  v2 = v112;
  if ( v16 )
  {
    v125 = a1->BaseMiniport;
    v107 = 1;
  }
  v16 = 0;
LABEL_28:
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 96));
  v25 = *(_QWORD *)(v17 + 4960);
  *(_QWORD *)(v17 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v17 + 1856) = 71733;
  if ( v25 )
  {
    v26 = *(unsigned __int8 *)(v25 + 1);
    if ( *(_BYTE *)(v25 + 1) )
    {
      if ( v26 == 1 )
      {
        v85 = v25 + 72;
        v86 = *(_DWORD *)(v25 + 128);
        if ( v86 >> 17 < 0x3FFE && (unsigned __int16)v86 >> 1 == (v86 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v25 + 72));
          *(_DWORD *)(v85 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v86 & 0xFFFE) == 0 && (v86 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v25, 1uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v25 + 72), 0);
        }
        v16 = 0;
      }
    }
    else
    {
      v27 = *(_QWORD *)(v25 + 8);
      v28 = (unsigned int)(v26 + 1);
      if ( v27 && (v76 = *(_BYTE *)(v25 + 3), v77 = 0, v76) )
      {
        while ( *(_BYTE *)(v27 + 2LL * v77) != (_BYTE)v28 || !*(_BYTE *)(v27 + 2LL * v77 + 1) )
        {
          v77 += v28;
          if ( v77 >= v76 )
            goto LABEL_31;
        }
        --*(_BYTE *)(v27 + 2LL * v77 + 1);
      }
      else
      {
LABEL_31:
        if ( !_bittestandreset((signed __int32 *)(v25 + 16), 1u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v25, v28);
      }
    }
  }
  v29 = (*(_DWORD *)(v17 + 3164))-- == 1;
  if ( v29 )
  {
    v30 = *(struct _KEVENT **)(v17 + 3176);
    if ( v30 )
      KeSetEvent(v30, 0, 0);
  }
  *(_QWORD *)(v17 + 520) = 0LL;
  *(_DWORD *)(v17 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 96), v24);
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v17);
  v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 4496));
  v32 = *(_QWORD *)(v17 + 4952);
  v33 = v31;
  if ( v32 )
  {
    if ( *(_BYTE *)(v32 + 1) )
    {
      if ( *(_BYTE *)(v32 + 1) == 1 )
      {
        v87 = v32 + 3528;
        v88 = *(_DWORD *)(v32 + 3584);
        if ( v88 >> 17 < 0x3FFE && (unsigned __int16)v88 >> 1 == (v88 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v32 + 3528));
          *(_DWORD *)(v87 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v88 & 0xFFFE) == 0 && (v88 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v32, 0x37uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v32 + 3528), 0);
        }
        v16 = 0;
      }
    }
    else
    {
      v34 = *(_QWORD *)(v32 + 8);
      if ( v34 && (v35 = *(_BYTE *)(v32 + 3), v36 = 0, v35) )
      {
        while ( *(_BYTE *)(v34 + 2LL * v36) != 55 || !*(_BYTE *)(v34 + 2LL * v36 + 1) )
        {
          if ( ++v36 >= v35 )
            goto LABEL_43;
        }
        --*(_BYTE *)(v34 + 2LL * v36 + 1);
      }
      else
      {
LABEL_43:
        if ( !_bittestandreset((signed __int32 *)(v32 + 20), 0x17u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v32, 0x37uLL);
      }
    }
  }
  if ( !--*(_DWORD *)(v17 + 4504) )
    v16 = 1;
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v17, *(unsigned int *)(v17 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 4496), v33);
  if ( v16 )
  {
    v89 = *(struct _KEVENT **)(v17 + 1608);
    v16 = 0;
    if ( v89 )
      KeSetEvent(v89, 0, 0);
  }
  else
  {
    v16 = 0;
  }
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v17);
  v37 = v120;
LABEL_53:
  if ( v37 )
    v105 = 0;
  else
    v16 = v109;
  v38 = v116;
  v39 = v121;
  ndisWriteWmiStatusIndication((int)v125, (int)v125->pAdapterInstanceName, (int)v3, v2, v121, v116);
  if ( v105 )
    ndisWriteWmiStatusIndication((int)v125, (int)v125->pAdapterInstanceName, (int)v3, v117, 0LL, 0);
  if ( v16 )
    ndisWriteWmiStatusIndication((int)v125, (int)v125->pAdapterInstanceName, (int)v3, 1073807395, &v135, 12);
  KeAcquireSpinLockRaiseToDpc(&v4->Lock);
  v4->MiniportThread = KeGetCurrentThread();
  v4->LockDbg = 724916;
  if ( v107 )
  {
    if ( (unsigned __int8)byte_1C008531B >= 4u )
      WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v125);
    v41 = KeAcquireSpinLockRaiseToDpc(&v125->Ref.SpinLock);
    v42 = (ULONG_PTR)v125->RefCountTracker;
    v43 = v41;
    if ( v42 )
    {
      if ( *(_BYTE *)(v42 + 1) )
      {
        if ( *(_BYTE *)(v42 + 1) == 1 )
        {
          v90 = v42 + 3464;
          v91 = *(_DWORD *)(v42 + 3520);
          if ( v91 >> 17 < 0x3FFE && (unsigned __int16)v91 >> 1 == (v91 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v42 + 3464));
            *(_DWORD *)(v90 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v91 & 0xFFFE) == 0 && (v91 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v42, 0x36uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v42 + 3464), 0);
          }
        }
      }
      else
      {
        v44 = *(_QWORD *)(v42 + 8);
        if ( v44 && (v45 = *(_BYTE *)(v42 + 3), v46 = 0, v45) )
        {
          while ( *(_BYTE *)(v44 + 2LL * v46) != 54 || !*(_BYTE *)(v44 + 2LL * v46 + 1) )
          {
            if ( ++v46 >= v45 )
              goto LABEL_68;
          }
          --*(_BYTE *)(v44 + 2LL * v46 + 1);
        }
        else
        {
LABEL_68:
          if ( !_bittestandreset((signed __int32 *)(v42 + 20), 0x16u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v42, 0x36uLL);
        }
      }
    }
    v47 = --v125->Ref.ReferenceCount == 0;
    if ( (unsigned __int8)byte_1C008531B >= 4u )
      WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v125, v125->Ref.ReferenceCount);
    KeReleaseSpinLock(&v125->Ref.SpinLock, v43);
    if ( v47 )
    {
      RemoveReadyEvent = v125->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( (unsigned __int8)byte_1C008531B >= 4u )
      WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v125);
    v38 = v116;
    v39 = v121;
  }
  v48 = 256LL;
  if ( v2 == 1073807383 )
    v2 = v117;
  v113 = v2;
  if ( v2 == 1073807384 )
  {
    if ( (*((_DWORD *)v3 + 6) & 4) != 0 )
    {
      v2 = 1073807371;
      v113 = 1073807371;
      goto LABEL_78;
    }
    v104 = 1;
    if ( v38 >= 4 && (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
      Template_jqxq(
        (_DWORD)RemoveReadyEvent,
        (unsigned int)&MiniportStatusIndicationNetworkChange,
        (_DWORD)v4 + 4064,
        (_DWORD)v4 + 4064,
        v4->IfIndex,
        v4->NetLuid.Value,
        *v39);
    goto LABEL_85;
  }
LABEL_78:
  if ( v2 == 1073872902 )
  {
    v102 = 1;
    v49 = 1;
    ndisIndicateOffloadChangeInternal(v4, v39, v38);
    goto LABEL_86;
  }
  if ( v2 == 1073807395 )
  {
    v104 = 1;
    if ( v38 >= 0xC )
    {
      if ( (unsigned __int8)byte_1C008531F >= 4u )
      {
        WPP_SF_qdD(56LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v4, (unsigned int)v39[1], v39[2]);
        v48 = 256LL;
      }
      v67 = v39[1];
      if ( v67 == 1 )
      {
        if ( (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
          Template_jqxqq(
            1,
            (unsigned int)&MiniportStatusIndicationOperStatusUp,
            (_DWORD)v4 + 4064,
            (_DWORD)v4 + 4064,
            v4->IfIndex,
            v4->NetLuid.Value,
            1,
            v39[2]);
      }
      else if ( (Microsoft_Windows_NDISEnableBits & 0x10000000000LL) != 0 )
      {
        Template_jqxqq(
          v67,
          (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
          (_DWORD)v4 + 4064,
          (_DWORD)v4 + 4064,
          v4->IfIndex,
          v4->NetLuid.Value,
          v67,
          v39[2]);
      }
    }
LABEL_85:
    v49 = 0;
    goto LABEL_86;
  }
  if ( v2 == 1073807372 )
  {
    v68 = 1;
    Flags = v4->Flags;
    v70 = v4->MediaSenseDisconnectCount + 1;
    v4->MediaSenseDisconnectCount = v70;
    if ( (Flags & 0x20000000) != 0 || v70 == 1 )
    {
      v71 = 1;
      v106 = 1;
      if ( (unsigned __int8)byte_1C008531F >= 4u )
        WPP_SF_qLLL(54LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v4);
      if ( (Microsoft_Windows_NDISEnableBits & 0x8000000000LL) != 0 )
        Template_jqxqqq(
          v68,
          (unsigned int)&MiniportStatusIndicationDisconnect,
          (_DWORD)v4 + 4064,
          (_DWORD)v4 + 4064,
          v4->IfIndex,
          v4->NetLuid.Value,
          v4->Flags,
          v4->PnPFlags,
          v4->CurrentDevicePowerState);
    }
    else
    {
      v71 = 0;
    }
    v72 = v4->Flags & 0xDFFFFFFF;
    v4->MediaConnectState = MediaConnectStateDisconnected;
    v4->Flags = v72;
    if ( !v119 )
    {
      v4->Flags = v72 | 0x4000000;
      if ( v71 )
      {
        ndisSetMediaDisconnectTimer(v4, v48);
        goto LABEL_85;
      }
    }
  }
  else
  {
    if ( v2 != 1073807371 )
    {
      if ( v2 == 1073872912 )
      {
        LOBYTE(Src) = 1;
        ndisMIndicateReceiveFilterCapsChange(v4, 1073872912LL, v39, v38, Src);
      }
      else
      {
        v48 = 1073872960LL;
        if ( v2 == 1073872960 )
        {
          LOBYTE(Src) = 1;
          ndisMIndicateNicSwitchCapsChange(v4, 1073872960LL, v39, v38, Src);
        }
        else if ( v2 > 1073873055 && v2 <= 1073873057 )
        {
          ndisMIndicateQosParametersChange(v4);
        }
      }
      goto LABEL_85;
    }
    v73 = v4->Flags;
    ++v4->MediaSenseConnectCount;
    if ( (v73 & 0x20000000) == 0 )
    {
      v106 = 1;
      if ( (unsigned __int8)byte_1C008531F >= 4u )
        WPP_SF_qLLL(55LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v4);
      if ( (Microsoft_Windows_NDISEnableBits & 0x8000000000LL) != 0 )
        Template_jqxqqq(
          (_DWORD)RemoveReadyEvent,
          (unsigned int)&MiniportStatusIndicationConnect,
          (_DWORD)v4 + 4064,
          (_DWORD)v4 + 4064,
          v4->IfIndex,
          v4->NetLuid.Value,
          v4->Flags,
          v4->PnPFlags,
          v4->CurrentDevicePowerState);
    }
    v74 = v4->Flags | 0x20000000;
    v4->Flags = v74;
    v4->MediaConnectState = MediaConnectStateConnected;
    if ( !v119 )
    {
      v4->Flags = v74 | 0x4000000;
      ndisCancelMediaDisconnectTimer(v4);
      goto LABEL_85;
    }
  }
  v49 = 0;
LABEL_86:
  LOBYTE(v8) = 1;
  if ( v110 != 1 )
  {
    OpenQueue = v4->OpenQueue;
    if ( OpenQueue )
    {
      v8 = v118;
      while ( 1 )
      {
        if ( v8 && (char *)v8 != (char *)OpenQueue )
        {
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          goto LABEL_117;
        }
        KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
        if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
          goto LABEL_275;
        if ( v49 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
        {
          if ( !v111 )
          {
            StatusUnbindWorkItem = (__int64)OpenQueue->StatusUnbindWorkItem;
            if ( StatusUnbindWorkItem )
            {
              LOBYTE(v52) = 52;
              ndisReferenceMiniportNoCheck(v4, v52);
              v111 = 1;
              OpenQueue->StatusUnbindWorkItem = 0LL;
              ndisScheduleWorkItemInternal(StatusUnbindWorkItem);
            }
          }
          goto LABEL_275;
        }
        if ( v2 == 1073938515 )
          ndisOpenIndicatePMCapabilities(OpenQueue, v3);
        if ( v2 == 1073938513 )
        {
          if ( *((_DWORD *)v3 + 14) < 4u )
            goto LABEL_275;
          p_WOLPatternList = &OpenQueue->WOLPatternList;
        }
        else
        {
          if ( v2 != 1073938514 )
            goto LABEL_98;
          if ( *((_DWORD *)v3 + 14) < 4u )
            goto LABEL_275;
          p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
        }
        if ( ndisDeletePatternEntry(p_WOLPatternList, **((_DWORD **)v3 + 6)) )
        {
          --*((_DWORD *)v3 + 24);
LABEL_98:
          v53 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
          ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)OpenQueue->RefCountTracker, 7u);
          ++OpenQueue->References;
          KeReleaseSpinLock(&OpenQueue->RefCountLock, v53);
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          if ( OpenQueue->StatusHandler )
          {
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            OpenQueue->OpenFlags |= 0x100u;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            v4->MiniportThread = 0LL;
            v4->LockDbg = 0;
            KeReleaseSpinLockFromDpcLevel(&v4->Lock);
            if ( OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
            {
              if ( !v104 && !*((_DWORD *)v3 + 4) )
              {
                v94 = *((_DWORD *)v3 + 5);
                if ( v94 == 1073807383 || v94 == 1073807384 && (*((_DWORD *)v3 + 6) & 4) != 0 )
                {
                  v95 = 0LL;
                  v96 = 0LL;
                }
                else
                {
                  v95 = v116;
                  v96 = v39;
                }
                OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v113, v96, v95);
                StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                if ( StatusCompleteHandler )
                  StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
              }
            }
            else if ( !v108 )
            {
              v54 = *((_DWORD *)v3 + 5);
              if ( (unsigned __int8)byte_1C008531F >= 4u )
                WPP_SF_qD(103LL, &WPP_0009299248ba37495192320194ebfcad_Traceguids, OpenQueue, v54);
              ((void (__fastcall *)(void *, __int128 *))OpenQueue->StatusHandler)(OpenQueue->ProtocolBindingContext, v3);
              if ( (unsigned __int8)byte_1C008531F >= 4u )
                WPP_SF_qD(104LL, &WPP_0009299248ba37495192320194ebfcad_Traceguids, OpenQueue, v54);
              if ( *((_DWORD *)v3 + 5) == 1073807384 && (*((_DWORD *)v3 + 6) & 4) != 0 )
                ndisInvokeStatus(OpenQueue, &v127);
              if ( v103 )
                ndisInvokeStatus(OpenQueue, v134);
            }
            KeAcquireSpinLockAtDpcLevel(&v4->Lock);
            v4->MiniportThread = KeGetCurrentThread();
            v4->LockDbg = 725256;
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
            OpenQueue->OpenFlags &= ~0x100u;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          }
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->RefCountLock);
          v55 = (ULONG_PTR)OpenQueue->RefCountTracker;
          if ( v55 )
          {
            if ( *(_BYTE *)(v55 + 1) )
            {
              if ( *(_BYTE *)(v55 + 1) == 1 )
              {
                v98 = v55 + 456;
                v99 = *(_DWORD *)(v55 + 512);
                if ( v99 >> 17 < 0x3FFE && (unsigned __int16)v99 >> 1 == (v99 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v55 + 456));
                  *(_DWORD *)(v98 + 56) &= 0x10001u;
                }
                else
                {
                  if ( (v99 & 0xFFFE) == 0 && (v99 & 1) == 0 )
                    ndisBugCheckEx(0x1EuLL, 0LL, v55, 7uLL);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v55 + 456), 0);
                }
              }
            }
            else
            {
              v56 = *(_QWORD *)(v55 + 8);
              if ( v56 && (v62 = *(_BYTE *)(v55 + 3), v63 = 0, v62) )
              {
                while ( *(_BYTE *)(v56 + 2LL * v63) != 7 || !*(_BYTE *)(v56 + 2LL * v63 + 1) )
                {
                  if ( ++v63 >= v62 )
                    goto LABEL_112;
                }
                --*(_BYTE *)(v56 + 2LL * v63 + 1);
              }
              else
              {
LABEL_112:
                if ( !_bittestandreset((signed __int32 *)(v55 + 16), 7u) )
                  ndisBugCheckEx(0x1EuLL, 0LL, v55, 7uLL);
              }
            }
          }
          v29 = OpenQueue->References-- == 1;
          v57 = v29;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->RefCountLock);
          if ( v57 )
            ndisMFinishClose(OpenQueue);
          v2 = v113;
          goto LABEL_116;
        }
LABEL_275:
        MiniportNextOpen = OpenQueue->MiniportNextOpen;
        KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_116:
        v8 = v118;
LABEL_117:
        OpenQueue = MiniportNextOpen;
        if ( !MiniportNextOpen )
          break;
        v39 = v121;
        v49 = v102;
      }
    }
    if ( v2 == 1073938516 )
      LOBYTE(v8) = ndisUpdateAndIndicatePMCapabilities(v4);
    if ( v106 )
    {
      LODWORD(v8) = *((_DWORD *)v3 + 6);
      if ( ((unsigned __int8)v8 & 2) == 0 )
      {
        LOBYTE(v48) = 2;
        if ( v2 == 1073807371 )
        {
          v4->PnPFlags &= ~0x10000000u;
          ndisMRestoreOpenHandlers((__int64)v4, v48);
          v4->PacketIndicateHandler = v4->SavedPacketIndicateHandler;
          LOBYTE(v8) = v4->SavedReceivePathEnabled;
          v4->ReceivePathEnabled = (unsigned __int8)v8;
        }
        else
        {
          v4->PnPFlags |= 0x10000000u;
          ndisMSwapOpenHandlers(v4, v48);
          v8 = ndisMDummyIndicatePacket;
          v4->ReceivePathEnabled = 0;
          v4->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C008531F >= 4u )
    LOBYTE(v8) = WPP_SF_qLq(
                   57LL,
                   &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids,
                   v4,
                   (unsigned int)v2,
                   *((_QWORD *)v3 + 4));
  return (char)v8;
}
