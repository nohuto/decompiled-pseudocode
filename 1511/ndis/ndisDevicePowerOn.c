/*
 * XREFs of ndisDevicePowerOn @ 0x1C00DF3D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     NdisSetEvent @ 0x1C0010070 (NdisSetEvent.c)
 *     ndisSignalD0RequestComplete @ 0x1C00121C0 (ndisSignalD0RequestComplete.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C00126D0 (ndisReturnQueuedLowPowerNbls.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001273C (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0012760 (ndisMRestoreOpenHandlers.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0012800 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisMSwapOpenHandlers @ 0x1C0019720 (ndisMSwapOpenHandlers.c)
 *     NdisMIndicateStatusEx @ 0x1C0019810 (NdisMIndicateStatusEx.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C001DC98 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001DD3C (ndisMReferenceIfBlock.c)
 *     ndisSetWakeUpTimer @ 0x1C002497C (ndisSetWakeUpTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0024B88 (ndisSetMediaDisconnectTimer.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C0097A4C (ndisQuerySetMiniportDeviceState.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C0097EE8 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0097F64 (ndisNotifyDevicePowerStateChange.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A6AD0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A6E98 (ndisMSetMiniportReadyForBinding.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00A8768 (ndisSetDeviceInterfaceState.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A930C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisMiniportFatalError @ 0x1C00CDFC8 (ndisMiniportFatalError.c)
 *     ndisQueryMediaStatus @ 0x1C00CEA1C (ndisQueryMediaStatus.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD09C (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerOn(PIRP *P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  char v2; // bl
  char v5; // di
  __int64 v6; // rcx
  _IRP *v7; // r13
  int Status; // r12d
  POWER_STATE v9; // r15d
  int SetMiniportDeviceState; // eax
  int v11; // r14d
  KIRQL v12; // al
  KIRQL v13; // bl
  __int64 v14; // rdx
  KIRQL v15; // di
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned int FilterPnPFlags; // eax
  _NDIS_IF_BLOCK *v19; // rcx
  _DEVICE_POWER_STATE DeviceState; // r8d
  _DEVICE_OBJECT *DeviceObject; // rcx
  unsigned __int8 MajorNdisVersion; // al
  KIRQL v23; // al
  struct _KTHREAD *v24; // rdx
  KIRQL v25; // bl
  KIRQL v26; // al
  KIRQL v27; // bl
  _NDIS_IF_BLOCK *IfBlock; // rax
  KIRQL v29; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v31; // bl
  KIRQL v32; // al
  KIRQL v33; // bl
  unsigned __int64 *p_Lock; // rcx
  struct _NDIS_MINIPORT_BLOCK *v35; // rdx
  struct _KEVENT *PowerCompleteEvent; // rcx
  __int64 v37; // [rsp+20h] [rbp-E0h]
  char v38; // [rsp+50h] [rbp-B0h]
  char v39; // [rsp+51h] [rbp-AFh]
  char v40; // [rsp+52h] [rbp-AEh]
  unsigned int i; // [rsp+54h] [rbp-ACh]
  int v42; // [rsp+58h] [rbp-A8h]
  BOOL v43; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID Pa; // [rsp+60h] [rbp-A0h]
  _QWORD v45[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+110h] [rbp+10h] BYREF
  int v47; // [rsp+180h] [rbp+80h] BYREF
  __int64 v48; // [rsp+184h] [rbp+84h]
  _QWORD v49[5]; // [rsp+190h] [rbp+90h] BYREF

  Pa = P;
  v2 = 0;
  v39 = 0;
  v38 = 0;
  v42 = 0;
  v5 = 0;
  v40 = 0;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(0x3Eu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( a2->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(0x3Fu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        v6,
        &PowerOnMiniportNotStarted,
        &a2->InterfaceGuid,
        (unsigned __int64)&a2->InterfaceGuid,
        a2->IfIndex,
        a2->NetLuid.Value,
        235);
    DeviceState = P[10]->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.DeviceState;
    DeviceObject = a2->DeviceObject;
    a2->CurrentDevicePowerState = DeviceState;
    PoSetPowerState(DeviceObject, DevicePowerState, (POWER_STATE)DeviceState);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a2->MiniportOwner);
    ndisScheduleD0CompleteSignalWorkItem((__int64)a2, 0);
    IofCompleteRequest(P[10], 0);
    ndisDereferenceMiniport((__int64)a2, 0xCu);
    ExFreePoolWithTag(P, 0);
    goto LABEL_60;
  }
  if ( (a2->Flags & 0x80u) != 0 )
  {
    v7 = 0LL;
    Status = 0;
    v9.SystemState = PowerSystemWorking;
  }
  else
  {
    v7 = P[10];
    Status = v7->IoStatus.Status;
    v9.SystemState = (_SYSTEM_POWER_STATE)v7->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  if ( (a2->PnPFlags & 0x10) == 0 )
  {
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_qD(0x42u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2, Status);
    }
    else
    {
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_q(0x43u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2);
      if ( a2->CurrentDevicePowerState == PowerDeviceD0 )
      {
        if ( ndisIsMiniportStarted(a2) && a2->PnPDeviceState == NdisPnPDeviceStarted )
        {
          NdisSetEvent(&a2->OpenReadyEvent);
          v29 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          CurrentThread = KeGetCurrentThread();
          a2->MiniportThread = CurrentThread;
          v31 = v29;
          LOBYTE(CurrentThread) = 4;
          a2->LockDbg = 1706278;
          ndisMRestoreOpenHandlers((__int64)a2, (__int64)CurrentThread);
          a2->MiniportThread = 0LL;
          a2->LockDbg = 0;
          KeReleaseSpinLock(&a2->Lock, v31);
          v5 = 1;
          v39 = 0;
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083715 >= 4u )
          WPP_SF_q(0x44u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxq(
            v6,
            &MiniportPoweringUp,
            &a2->InterfaceGuid,
            (unsigned __int64)&a2->InterfaceGuid,
            a2->IfIndex,
            a2->NetLuid.Value,
            85);
        if ( (a2->PnPFlags & 0x20) != 0 )
        {
          if ( ndisAoAcCapable || ndisAoAcTest )
          {
            MajorNdisVersion = a2->MajorNdisVersion;
            if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
            {
              v23 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
              v24 = KeGetCurrentThread();
              a2->MiniportThread = v24;
              v25 = v23;
              LOBYTE(v24) = 4;
              a2->LockDbg = 1706084;
              ndisMRestoreOpenHandlers((__int64)a2, (__int64)v24);
              a2->MiniportThread = 0LL;
              a2->LockDbg = 0;
              KeReleaseSpinLock(&a2->Lock, v25);
              v2 = 1;
              v38 = 1;
            }
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState((__int64)a2, v9.SystemState, -50265855, 1u);
          v11 = SetMiniportDeviceState;
          if ( (unsigned __int8)byte_1C0083715 >= 4u )
          {
            LODWORD(v37) = SetMiniportDeviceState;
            WPP_SF_qdD(0x45u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2, v9.SystemState, v37);
          }
          if ( v11 )
          {
            if ( v2 )
            {
              v26 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
              a2->MiniportThread = KeGetCurrentThread();
              v27 = v26;
              a2->LockDbg = 1706110;
              ndisMSwapOpenHandlers((__int64)a2, 4u);
              a2->MiniportThread = 0LL;
              a2->LockDbg = 0;
              KeReleaseSpinLock(&a2->Lock, v27);
              v38 = 0;
            }
          }
          else
          {
            a2->CurrentDevicePowerState = v9.DeviceState;
          }
          v12 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          a2->MiniportThread = KeGetCurrentThread();
          v13 = v12;
          a2->LockDbg = 1706119;
          ndisSetWakeUpTimer((__int64)a2);
          a2->MiniportThread = 0LL;
          a2->LockDbg = 0;
          KeReleaseSpinLock(&a2->Lock, v13);
          v5 = 0;
        }
        else if ( (a2->DriverHandle->Flags & 1) == 0 && (a2->PnPFlags & 0x4000) != 0 )
        {
          v11 = ndisPmInitializeMiniport(a2);
        }
        else
        {
          v11 = 0;
        }
        if ( v11 )
        {
          if ( (unsigned __int8)byte_1C0083715 >= 2u )
            WPP_SF_qD(0x47u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2, v11);
          if ( (a2->Flags & 0x80u) != 0 )
            Status = -1073741823;
          else
            v7->IoStatus.Status = -1073741823;
          a2->OperStatusFlags = 0;
          a2->OperStatus = NET_IF_OPER_STATUS_DOWN;
          if ( ndisMReferenceIfBlock((__int64)a2, 0xCu) )
          {
            IfBlock = a2->IfBlock;
            if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
            {
              IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
              a2->IfBlock->ifOperStatusFlags = 0;
              ndisNsiSyncMiniportOperStatusNotification((__int64)a2);
              v42 = 1;
            }
            ndisMDereferenceIfBlock((__int64)a2, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          v40 = 1;
          if ( ndisIsMiniportStarted(a2) )
          {
            NdisSetEvent(&a2->OpenReadyEvent);
            v15 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
            a2->MiniportThread = KeGetCurrentThread();
            a2->LockDbg = 1706150;
            if ( !v38 )
            {
              LOBYTE(v14) = 4;
              ndisMRestoreOpenHandlers((__int64)a2, v14);
            }
            LOBYTE(v14) = 1;
            v42 = (unsigned __int8)ndisIfSetInterfaceState((const struct _TlgProvider_t *)a2, v14, v15);
            a2->MiniportThread = 0LL;
            a2->LockDbg = 0;
            KeReleaseSpinLock(&a2->Lock, v15);
            _m_prefetchw(&a2->InterlockedFlags);
            if ( (_InterlockedOr((volatile signed __int32 *)&a2->InterlockedFlags, 0) & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState((__int64)a2, 1u);
              _InterlockedAnd((volatile signed __int32 *)&a2->InterlockedFlags, 0xFFFFFFEF);
            }
            v5 = 1;
            v39 = 1;
            v43 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(a2, v16, &v43, v17);
            if ( a2->MajorNdisVersion < 6u )
              ndisQueryMediaStatus(a2);
          }
          a2->CurrentDevicePowerState = v9.DeviceState;
          if ( (unsigned __int8)byte_1C0083715 >= 4u )
            WPP_SF_qD(0x46u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2, v9.SystemState);
          NDIS_COUNT_POWER_TRANSITION(a2, v9.SystemState);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            Template_jqxqq(
              v6,
              &DevicePowerStateChange,
              &a2->InterfaceGuid,
              (unsigned __int64)&a2->InterfaceGuid,
              a2->IfIndex,
              a2->NetLuid.Value,
              1,
              v9.SystemState);
          if ( (a2->Flags & 0x80u) == 0 )
            PoSetPowerState(a2->DeviceObject, DevicePowerState, v9);
        }
      }
    }
    if ( (a2->Flags & 0x80u) == 0 )
    {
      Status = v7->IoStatus.Status;
      IofCompleteRequest(v7, 0);
    }
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_qD(0x48u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2, Status);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
        Template_jqxqqq(
          v6,
          &DevicePowerOnFailed,
          &a2->InterfaceGuid,
          (unsigned __int64)&a2->InterfaceGuid,
          a2->IfIndex,
          a2->NetLuid.Value,
          Status,
          81,
          0);
      ndisMiniportFatalError((__int64)a2, 0x4Au);
    }
    if ( (a2->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls((__int64)a2, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a2->MiniportOwner);
    if ( v5 )
    {
      ndisIssueNetEventSetPowerEvent(a2, v9.SystemState);
      ndisNotifyDevicePowerStateChange((__int64)a2, v9.SystemState);
      if ( (a2->PnPFlags & 0x10000000) != 0 && (a2->Flags & 0x20000000) != 0 )
      {
        v32 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
        a2->MiniportThread = KeGetCurrentThread();
        v33 = v32;
        while ( 1 )
        {
          a2->LockDbg = 1706355;
          p_Lock = &a2->Lock;
          if ( !a2->LockAcquired )
            break;
          a2->MiniportThread = 0LL;
          a2->LockDbg = 0;
          KeReleaseSpinLock(p_Lock, v33);
          for ( i = 0; i < 0x32; ++i )
            ;
          v33 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          a2->MiniportThread = KeGetCurrentThread();
        }
        a2->LockAcquired = 1;
        a2->LockDbgX = 1706355;
        a2->LockThread = KeGetCurrentThread();
        a2->MiniportThread = 0LL;
        a2->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        a2->Flags &= ~0x20000000u;
        memset(v49, 0, sizeof(v49));
        LODWORD(v49[1]) = a2->MiniportMediaDuplexState;
        v49[2] = a2->MiniportXmitLinkSpeed;
        v49[3] = a2->MiniportRcvLinkSpeed;
        v49[4] = *(_QWORD *)&a2->MiniportPauseFunctions;
        v49[0] = 0x100280180LL;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Flags |= 8u;
        StatusIndication.StatusBuffer = v49;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = a2;
        StatusIndication.StatusCode = 1073807383;
        StatusIndication.StatusBufferSize = 40;
        NdisMIndicateStatusEx(a2, &StatusIndication);
        a2->LockAcquired = 0;
        a2->LockDbgX = 0;
        a2->LockThread = 0LL;
        if ( v33 != 2 )
          KeLowerIrql(v33);
      }
      if ( (a2->Flags & 0x20000000) == 0 && v39 )
        ndisSetMediaDisconnectTimer((__int64)a2);
    }
    ndisSignalD0RequestComplete(a2, Status);
    ndisMSetMiniportReadyForBinding(a2, 1, Reason_MiniportLowPower, RunAsynchronous);
    if ( v40 )
    {
      FilterPnPFlags = a2->FilterPnPFlags;
      if ( (FilterPnPFlags & 0x100) != 0 )
      {
        a2->FilterPnPFlags = FilterPnPFlags & 0xFFFFFEFF;
        Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
        if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_LowPower)
          && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v45);
          WPP_SF_Zq(0x49u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64 *)v45[1], v45[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine, v35);
        Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous);
      }
    }
    if ( (!ndisAoAcCapable && !ndisAoAcTest || v42)
      && ndisIsMiniportStarted(a2)
      && a2->PnPDeviceState == NdisPnPDeviceStarted
      && ndisMReferenceIfBlock((__int64)a2, 0xDu) )
    {
      v19 = a2->IfBlock;
      v48 = 0LL;
      v47 = 786816;
      v48 = *(_QWORD *)&v19->ifOperStatus;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v47;
      StatusIndication.SourceHandle = a2;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx(a2, &StatusIndication);
      ndisMDereferenceIfBlock((__int64)a2, MPIFREF_DEVPOWERUP);
    }
    ExFreePoolWithTag(Pa, 0);
    if ( (a2->Flags & 0x80u) != 0 )
    {
      PowerCompleteEvent = a2->PowerCompleteEvent;
      a2->PowerCompleteStatus = Status;
      KeSetEvent(PowerCompleteEvent, 0, 0);
    }
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(0x4Au, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2);
    ndisDereferenceMiniport((__int64)a2, 0xCu);
LABEL_60:
    ndisDereferencePackage((__int64)&ndisPkgs);
    return;
  }
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(0x40u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqxq(
      v6,
      &PowerOnMiniportRemoved,
      &a2->InterfaceGuid,
      (unsigned __int64)&a2->InterfaceGuid,
      a2->IfIndex,
      a2->NetLuid.Value,
      37);
  IofCompleteRequest(v7, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a2->MiniportOwner);
  ndisSignalD0RequestComplete(a2, 0);
  ndisDereferenceMiniport((__int64)a2, 0xCu);
  ExFreePoolWithTag(P, 0);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(0x41u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, (__int64)a2);
}
