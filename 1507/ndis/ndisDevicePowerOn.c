/*
 * XREFs of ndisDevicePowerOn @ 0x1C00E5640
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     NdisSetEvent @ 0x1C000DB00 (NdisSetEvent.c)
 *     ndisSignalD0RequestComplete @ 0x1C000EA90 (ndisSignalD0RequestComplete.c)
 *     ndisMDereferenceIfBlock @ 0x1C000EDF0 (ndisMDereferenceIfBlock.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F388 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C000FA2C (ndisReturnQueuedLowPowerNbls.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000FAE0 (ndisMRestoreOpenHandlers.c)
 *     ndisIfSetInterfaceState @ 0x1C00161F4 (ndisIfSetInterfaceState.c)
 *     ndisMReferenceIfBlock @ 0x1C0017410 (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C0018460 (NdisMIndicateStatusEx.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0018DAC (ndisSetMediaDisconnectTimer.c)
 *     ndisIsMiniportStarted @ 0x1C0019940 (ndisIsMiniportStarted.c)
 *     ndisMSwapOpenHandlers @ 0x1C001A640 (ndisMSwapOpenHandlers.c)
 *     ndisSetWakeUpTimer @ 0x1C001BBF8 (ndisSetWakeUpTimer.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003A190 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C003F10C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009B078 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C009B1E4 (ndisQuerySetMiniportDeviceState.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009B2D0 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009B924 (ndisNotifyDevicePowerStateChange.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A8C70 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00ABB58 (ndisSetDeviceInterfaceState.c)
 *     ndisMiniportFatalError @ 0x1C00D4838 (ndisMiniportFatalError.c)
 *     ndisQueryMediaStatus @ 0x1C00D525C (ndisQueryMediaStatus.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisNotifyMiniports @ 0x1C00EAC48 (ndisNotifyMiniports.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerOn(_IRP **P, struct _NDIS_MINIPORT_BLOCK *a2)
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
  __int64 v18; // rdx
  unsigned int FilterPnPFlags; // eax
  _NDIS_IF_BLOCK *v20; // rcx
  unsigned __int8 MajorNdisVersion; // al
  KIRQL v22; // al
  struct _KTHREAD *v23; // rdx
  KIRQL v24; // bl
  KIRQL v25; // al
  KIRQL v26; // bl
  _NDIS_IF_BLOCK *IfBlock; // rax
  KIRQL v28; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v30; // bl
  KIRQL v31; // al
  KIRQL v32; // bl
  unsigned __int64 *p_Lock; // rcx
  struct _KEVENT *PowerCompleteEvent; // rcx
  __int64 v35; // [rsp+20h] [rbp-E0h]
  char v36; // [rsp+50h] [rbp-B0h]
  char v37; // [rsp+51h] [rbp-AFh]
  char v38; // [rsp+52h] [rbp-AEh]
  unsigned int i; // [rsp+54h] [rbp-ACh]
  int v40; // [rsp+58h] [rbp-A8h]
  BOOL v41; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID Pa; // [rsp+60h] [rbp-A0h]
  _QWORD v43[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+110h] [rbp+10h] BYREF
  int v45; // [rsp+180h] [rbp+80h] BYREF
  __int64 v46; // [rsp+184h] [rbp+84h]
  _QWORD v47[5]; // [rsp+190h] [rbp+90h] BYREF

  Pa = P;
  v2 = 0;
  v37 = 0;
  v36 = 0;
  v40 = 0;
  v5 = 0;
  v38 = 0;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x3Eu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
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
  if ( (a2->PnPFlags & 0x10) != 0 )
  {
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(0x3Fu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        v6,
        &PowerOnMiniportRemoved,
        &a2->InterfaceGuid,
        (unsigned __int64)&a2->InterfaceGuid,
        a2->IfIndex,
        a2->NetLuid.Value,
        255);
    IofCompleteRequest(v7, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a2->MiniportOwner);
    ndisSignalD0RequestComplete(a2, 0);
    ndisDereferenceMiniport((__int64)a2, 0xCu);
    ExFreePoolWithTag(P, 0);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(0x40u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2);
  }
  else
  {
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C0085315 >= 4u )
        WPP_SF_qD(0x41u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2, Status);
    }
    else
    {
      if ( (unsigned __int8)byte_1C0085315 >= 4u )
        WPP_SF_q(0x42u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2);
      if ( a2->CurrentDevicePowerState == PowerDeviceD0 )
      {
        if ( ndisIsMiniportStarted(a2) && a2->PnPDeviceState == NdisPnPDeviceStarted )
        {
          NdisSetEvent(&a2->OpenReadyEvent);
          v28 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          CurrentThread = KeGetCurrentThread();
          a2->MiniportThread = CurrentThread;
          v30 = v28;
          LOBYTE(CurrentThread) = 4;
          a2->LockDbg = 1706240;
          ndisMRestoreOpenHandlers((__int64)a2, (__int64)CurrentThread);
          a2->MiniportThread = 0LL;
          a2->LockDbg = 0;
          KeReleaseSpinLock(&a2->Lock, v30);
          v5 = 1;
          v37 = 0;
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085315 >= 4u )
          WPP_SF_q(0x43u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxq(
            v6,
            &MiniportPoweringUp,
            &a2->InterfaceGuid,
            (unsigned __int64)&a2->InterfaceGuid,
            a2->IfIndex,
            a2->NetLuid.Value,
            47);
        if ( (a2->PnPFlags & 0x20) != 0 )
        {
          if ( ndisAoAcCapable || ndisAoAcTest )
          {
            MajorNdisVersion = a2->MajorNdisVersion;
            if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
            {
              v22 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
              v23 = KeGetCurrentThread();
              a2->MiniportThread = v23;
              v24 = v22;
              LOBYTE(v23) = 4;
              a2->LockDbg = 1706046;
              ndisMRestoreOpenHandlers((__int64)a2, (__int64)v23);
              a2->MiniportThread = 0LL;
              a2->LockDbg = 0;
              KeReleaseSpinLock(&a2->Lock, v24);
              v2 = 1;
              v36 = 1;
            }
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState((__int64)a2, v9.SystemState, -50265855, 1u);
          v11 = SetMiniportDeviceState;
          if ( (unsigned __int8)byte_1C0085315 >= 4u )
          {
            LODWORD(v35) = SetMiniportDeviceState;
            WPP_SF_qdD(0x44u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2, v9.SystemState, v35);
          }
          if ( v11 )
          {
            if ( v2 )
            {
              v25 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
              a2->MiniportThread = KeGetCurrentThread();
              v26 = v25;
              a2->LockDbg = 1706072;
              ndisMSwapOpenHandlers((__int64)a2, 4u);
              a2->MiniportThread = 0LL;
              a2->LockDbg = 0;
              KeReleaseSpinLock(&a2->Lock, v26);
              v36 = 0;
            }
          }
          else
          {
            a2->CurrentDevicePowerState = v9.DeviceState;
          }
          v12 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          a2->MiniportThread = KeGetCurrentThread();
          v13 = v12;
          a2->LockDbg = 1706081;
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
          if ( (unsigned __int8)byte_1C0085315 >= 2u )
            WPP_SF_qD(0x46u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2, v11);
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
              v40 = 1;
            }
            ndisMDereferenceIfBlock((__int64)a2, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          v38 = 1;
          if ( ndisIsMiniportStarted(a2) )
          {
            NdisSetEvent(&a2->OpenReadyEvent);
            v15 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
            a2->MiniportThread = KeGetCurrentThread();
            a2->LockDbg = 1706112;
            if ( !v36 )
            {
              LOBYTE(v14) = 4;
              ndisMRestoreOpenHandlers((__int64)a2, v14);
            }
            v40 = (unsigned __int8)ndisIfSetInterfaceState(a2, 1, v15);
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
            v37 = 1;
            v41 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(a2, v16, &v41, v17);
            if ( a2->MajorNdisVersion < 6u )
              ndisQueryMediaStatus(a2);
          }
          a2->CurrentDevicePowerState = v9.DeviceState;
          if ( (unsigned __int8)byte_1C0085315 >= 4u )
            WPP_SF_qD(0x45u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2, v9.SystemState);
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
      if ( (unsigned __int8)byte_1C0085315 >= 2u )
        WPP_SF_qD(0x47u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2, Status);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
        Template_jqxqqq(
          v6,
          &DevicePowerOnFailed,
          &a2->InterfaceGuid,
          (unsigned __int64)&a2->InterfaceGuid,
          a2->IfIndex,
          a2->NetLuid.Value,
          Status,
          43,
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
      if ( (a2->Flags & 0x20000000) != 0 && (a2->PnPFlags & 0x10000000) != 0 )
      {
        v31 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
        a2->MiniportThread = KeGetCurrentThread();
        v32 = v31;
        while ( 1 )
        {
          a2->LockDbg = 1706317;
          p_Lock = &a2->Lock;
          if ( !a2->LockAcquired )
            break;
          a2->MiniportThread = 0LL;
          a2->LockDbg = 0;
          KeReleaseSpinLock(p_Lock, v32);
          for ( i = 0; i < 0x32; ++i )
            ;
          v32 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
          a2->MiniportThread = KeGetCurrentThread();
        }
        a2->LockAcquired = 1;
        a2->LockDbgX = 1706317;
        a2->LockThread = KeGetCurrentThread();
        a2->MiniportThread = 0LL;
        a2->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        a2->Flags &= ~0x20000000u;
        memset(v47, 0, sizeof(v47));
        LODWORD(v47[1]) = a2->MiniportMediaDuplexState;
        v47[2] = a2->MiniportXmitLinkSpeed;
        v47[3] = a2->MiniportRcvLinkSpeed;
        v47[4] = *(_QWORD *)&a2->MiniportPauseFunctions;
        v47[0] = 0x100280180LL;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Flags |= 8u;
        StatusIndication.StatusBuffer = v47;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = a2;
        StatusIndication.StatusCode = 1073807383;
        StatusIndication.StatusBufferSize = 40;
        NdisMIndicateStatusEx(a2, &StatusIndication);
        a2->LockAcquired = 0;
        a2->LockDbgX = 0;
        a2->LockThread = 0LL;
        if ( v32 != 2 )
          KeLowerIrql(v32);
      }
      if ( (a2->Flags & 0x20000000) == 0 && v37 )
        ndisSetMediaDisconnectTimer((__int64)a2, v18);
    }
    ndisSignalD0RequestComplete(a2, Status);
    ndisMSetMiniportReadyForBinding(a2, 1, Reason_MiniportLowPower, RunAsynchronous);
    if ( v38 )
    {
      FilterPnPFlags = a2->FilterPnPFlags;
      if ( (FilterPnPFlags & 0x100) != 0 )
      {
        a2->FilterPnPFlags = FilterPnPFlags & 0xFFFFFEFF;
        Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
        if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_LowPower)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v43);
          WPP_SF_Zq(0x48u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64 *)v43[1], v43[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine);
        Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous);
      }
    }
    if ( (!ndisAoAcCapable && !ndisAoAcTest || v40)
      && ndisIsMiniportStarted(a2)
      && a2->PnPDeviceState == NdisPnPDeviceStarted
      && ndisMReferenceIfBlock((__int64)a2, 0xDu) )
    {
      v20 = a2->IfBlock;
      v46 = 0LL;
      v45 = 786816;
      v46 = *(_QWORD *)&v20->ifOperStatus;
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v45;
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
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(0x49u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)a2);
    ndisDereferenceMiniport((__int64)a2, 0xCu);
    ndisDereferencePackage((__int64)&ndisPkgs);
  }
}
