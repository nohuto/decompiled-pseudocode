/*
 * XREFs of ndisDevicePowerOn @ 0x1C00E5000
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     NdisSetEvent @ 0x1C000FCA0 (NdisSetEvent.c)
 *     ndisSignalD0RequestComplete @ 0x1C00110B0 (ndisSignalD0RequestComplete.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011648 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C001165C (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ndisSetWakeUpTimer @ 0x1C001B638 (ndisSetWakeUpTimer.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F608 (ndisMRestoreOpenHandlers.c)
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0020040 (ndisSetMediaDisconnectTimer.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003EE50 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C006761C (ndisReturnQueuedLowPowerNbls.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009C754 (ndisNotifyDevicePowerStateChange.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009C88C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C009C914 (ndisQuerySetMiniportDeviceState.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C009EB9C (ndisMSetMiniportReadyForBinding.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A1A7C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A3B24 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00AB3EC (ndisSetDeviceInterfaceState.c)
 *     ndisMiniportFatalError @ 0x1C00D3F88 (ndisMiniportFatalError.c)
 *     ndisQueryMediaStatus @ 0x1C00D4A6C (ndisQueryMediaStatus.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     ndisNotifyMiniports @ 0x1C00EB1F0 (ndisNotifyMiniports.c)
 */

void __fastcall ndisDevicePowerOn(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v5; // rcx
  _IRP *v6; // r15
  int Status; // r13d
  POWER_STATE v8; // r12d
  _DEVICE_OBJECT *v9; // rcx
  POWER_STATE v10; // r8d
  char v11; // bl
  KIRQL v12; // al
  KIRQL v13; // bl
  int v14; // edx
  unsigned __int8 v15; // al
  KIRQL v16; // al
  struct _KTHREAD *v17; // rdx
  KIRQL v18; // bl
  int SetMiniportDeviceState; // eax
  int v20; // r14d
  KIRQL v21; // al
  struct _KTHREAD *v22; // rdx
  KIRQL v23; // bl
  __int64 v24; // r8
  KIRQL v25; // al
  KIRQL v26; // bl
  __int64 v27; // rdx
  KIRQL v28; // di
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rax
  KIRQL v32; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v34; // bl
  KSPIN_LOCK *v35; // rcx
  int v36; // eax
  struct _NDIS_MINIPORT_BLOCK *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // [rsp+20h] [rbp-E0h]
  char v40; // [rsp+50h] [rbp-B0h]
  char v41; // [rsp+51h] [rbp-AFh]
  char v42; // [rsp+52h] [rbp-AEh]
  char v43; // [rsp+53h] [rbp-ADh]
  unsigned int i; // [rsp+54h] [rbp-ACh]
  int v45; // [rsp+58h] [rbp-A8h]
  BOOL v46; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v47[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  __int64 v49; // [rsp+170h] [rbp+70h] BYREF
  int v50; // [rsp+178h] [rbp+78h]
  _QWORD v51[5]; // [rsp+180h] [rbp+80h] BYREF

  v42 = 0;
  v3 = 0;
  v45 = 0;
  v40 = 0;
  v43 = 0;
  v41 = 0;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v6 = 0LL;
    Status = 0;
    v8.SystemState = PowerSystemWorking;
  }
  else
  {
    v6 = *(_IRP **)(a1 + 80);
    Status = v6->IoStatus.Status;
    v8.SystemState = (_SYSTEM_POWER_STATE)v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( *(_DWORD *)(a2 + 1520) != 1 )
  {
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_q(0x40u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        v5,
        &PowerOnMiniportNotStarted,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        37);
    v9 = *(_DEVICE_OBJECT **)(a2 + 3880);
    v10.SystemState = (_SYSTEM_POWER_STATE)v6->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *(POWER_STATE *)(a2 + 3924) = v10;
    PoSetPowerState(v9, DevicePowerState, v10);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5328);
    ndisScheduleD0CompleteSignalWorkItem(a2, 0);
    IofCompleteRequest(v6, 0);
LABEL_114:
    ndisDereferenceMiniport(a2);
    ndisDereferencePackage((__int64)&ndisPkgs);
    return;
  }
  if ( (*(_DWORD *)(a2 + 124) & 0x10) == 0 )
  {
    if ( Status >= 0 )
    {
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
        WPP_SF_q(0x44u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
      if ( *(_DWORD *)(a2 + 3924) == 1 )
      {
        if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) && *(_DWORD *)(a2 + 1520) == 1 )
        {
          NdisSetEvent((PNDIS_EVENT)(a2 + 3784));
          v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(a2 + 520) = CurrentThread;
          v34 = v32;
          LOBYTE(CurrentThread) = 4;
          *(_DWORD *)(a2 + 1856) = 1706318;
          ndisMRestoreOpenHandlers(a2, (__int64)CurrentThread);
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v34);
          v11 = 1;
          v42 = 0;
          goto LABEL_23;
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895D5 >= 4u )
          WPP_SF_q(0x45u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxq(
            v5,
            &MiniportPoweringUp,
            (const GUID *)(a2 + 4064),
            a2 + 4064,
            *(_DWORD *)(a2 + 4112),
            *(_QWORD *)(a2 + 4080),
            125);
        v14 = *(_DWORD *)(a2 + 124);
        if ( (v14 & 0x20) != 0 )
        {
          if ( ndisAoAcCapable || ndisAoAcTest )
          {
            v15 = *(_BYTE *)(a2 + 32);
            if ( v15 > 6u || v15 == 6 && *(_BYTE *)(a2 + 33) >= 0x1Eu )
            {
              v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
              v17 = KeGetCurrentThread();
              *(_QWORD *)(a2 + 520) = v17;
              v18 = v16;
              LOBYTE(v17) = 4;
              *(_DWORD *)(a2 + 1856) = 1706124;
              ndisMRestoreOpenHandlers(a2, (__int64)v17);
              *(_QWORD *)(a2 + 520) = 0LL;
              *(_DWORD *)(a2 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v18);
              v3 = 1;
              v41 = 1;
            }
          }
          SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a2, v8.SystemState, -50265855, 1u);
          v20 = SetMiniportDeviceState;
          if ( (unsigned __int8)byte_1C00895D5 >= 4u )
          {
            LODWORD(v39) = SetMiniportDeviceState;
            WPP_SF_qdD(0x46u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, v8.SystemState, v39);
          }
          if ( v20 )
          {
            if ( v3 )
            {
              v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
              v22 = KeGetCurrentThread();
              *(_QWORD *)(a2 + 520) = v22;
              v23 = v21;
              LOBYTE(v22) = 4;
              *(_DWORD *)(a2 + 1856) = 1706150;
              ndisMSwapOpenHandlers(a2, (__int64)v22, v24);
              *(_QWORD *)(a2 + 520) = 0LL;
              *(_DWORD *)(a2 + 1856) = 0;
              KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v23);
              v41 = 0;
            }
          }
          else
          {
            *(POWER_STATE *)(a2 + 3924) = v8;
          }
          v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
          v26 = v25;
          *(_DWORD *)(a2 + 1856) = 1706159;
          ndisSetWakeUpTimer(a2);
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v26);
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(a2 + 3816) + 26LL) & 1) != 0 || (v14 & 0x4000) == 0 )
        {
          v20 = 0;
        }
        else
        {
          v20 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)a2);
        }
        if ( v20 )
        {
          if ( (unsigned __int8)byte_1C00895D5 >= 2u )
            WPP_SF_qD(0x48u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, v20);
          if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
            Status = -1073741823;
          else
            v6->IoStatus.Status = -1073741823;
          *(_DWORD *)(a2 + 4124) = 0;
          *(_DWORD *)(a2 + 4120) = 2;
          if ( ndisMReferenceIfBlock(a2, 0xCu) )
          {
            v31 = *(_QWORD *)(a2 + 4096);
            if ( *(_DWORD *)(v31 + 1112) != 2 )
            {
              *(_DWORD *)(v31 + 1112) = 2;
              *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = 0;
              ndisNsiSyncMiniportOperStatusNotification(a2);
              v45 = 1;
            }
            ndisMDereferenceIfBlock(a2, MPIFREF_DEVPOWERUPFAIL);
          }
        }
        else
        {
          v43 = 1;
          if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) )
          {
            NdisSetEvent((PNDIS_EVENT)(a2 + 3784));
            v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
            *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
            *(_DWORD *)(a2 + 1856) = 1706190;
            if ( !v41 )
            {
              LOBYTE(v27) = 4;
              ndisMRestoreOpenHandlers(a2, v27);
            }
            LOBYTE(v27) = 1;
            v45 = (unsigned __int8)ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)a2, v27, v28);
            *(_QWORD *)(a2 + 520) = 0LL;
            *(_DWORD *)(a2 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v28);
            _m_prefetchw((const void *)(a2 + 4488));
            if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 4488), 0) & 0x10) != 0 )
            {
              ndisSetDeviceInterfaceState(a2, 1u);
              _InterlockedAnd((volatile signed __int32 *)(a2 + 4488), 0xFFFFFFEF);
            }
            v40 = 1;
            v42 = 1;
            v46 = (_BYTE)ndisAcOnLine == 1;
            ndisNotifyMiniports(a2, v29, &v46, v30);
            if ( *(_BYTE *)(a2 + 32) < 6u )
              ndisQueryMediaStatus((void *)a2);
          }
          *(POWER_STATE *)(a2 + 3924) = v8;
          if ( (unsigned __int8)byte_1C00895D5 >= 4u )
            WPP_SF_qD(0x47u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, v8.SystemState);
          NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)a2, v8.SystemState);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            Template_jqxqq(
              v5,
              &DevicePowerStateChange,
              (const GUID *)(a2 + 4064),
              a2 + 4064,
              *(_DWORD *)(a2 + 4112),
              *(_QWORD *)(a2 + 4080),
              1,
              v8.SystemState);
          if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
            PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 3880), DevicePowerState, v8);
        }
      }
    }
    else if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    {
      WPP_SF_qD(0x43u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, Status);
    }
    v11 = v40;
LABEL_23:
    if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
    {
      Status = v6->IoStatus.Status;
      IofCompleteRequest(v6, 0);
    }
    if ( Status < 0 )
    {
      if ( (unsigned __int8)byte_1C00895D5 >= 2u )
        WPP_SF_qD(0x49u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, Status);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000000) != 0 )
        Template_jqxqqq(
          v5,
          &DevicePowerOnFailed,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          Status,
          121,
          0);
      ndisMiniportFatalError(a2, 0x4Au);
    }
    if ( *(int *)(a2 + 1872) < 0 )
      ndisReturnQueuedLowPowerNbls(a2, 0);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5328);
    if ( v11 )
    {
      ndisIssueNetEventSetPowerEvent((struct _NDIS_MINIPORT_BLOCK *)a2, v8.SystemState);
      ndisNotifyDevicePowerStateChange(a2, v8.SystemState);
      if ( (*(_DWORD *)(a2 + 124) & 0x10000000) != 0 && (*(_DWORD *)(a2 + 120) & 0x20000000) != 0 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
        *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
        v13 = v12;
        while ( 1 )
        {
          *(_DWORD *)(a2 + 1856) = 1706395;
          v35 = (KSPIN_LOCK *)(a2 + 96);
          if ( !*(_BYTE *)(a2 + 89) )
            break;
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1856) = 0;
          KeReleaseSpinLock(v35, v13);
          for ( i = 0; i < 0x32; ++i )
            ;
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
        }
        *(_BYTE *)(a2 + 89) = 1;
        *(_DWORD *)(a2 + 1860) = 1706395;
        *(_QWORD *)(a2 + 1864) = KeGetCurrentThread();
        *(_QWORD *)(a2 + 520) = 0LL;
        *(_DWORD *)(a2 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel(v35);
        *(_DWORD *)(a2 + 120) &= ~0x20000000u;
        memset(v51, 0, sizeof(v51));
        LODWORD(v51[1]) = *(_DWORD *)(a2 + 348);
        v51[2] = *(_QWORD *)(a2 + 2800);
        v51[3] = *(_QWORD *)(a2 + 2808);
        v51[4] = *(_QWORD *)(a2 + 812);
        v51[0] = 0x100280180LL;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Flags |= 8u;
        StatusIndication.StatusBuffer = v51;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = (void *)a2;
        StatusIndication.StatusCode = 1073807383;
        StatusIndication.StatusBufferSize = 40;
        NdisMIndicateStatusEx((NDIS_HANDLE)a2, &StatusIndication);
        *(_BYTE *)(a2 + 89) = 0;
        *(_DWORD *)(a2 + 1860) = 0;
        *(_QWORD *)(a2 + 1864) = 0LL;
        if ( v13 != 2 )
          KeLowerIrql(v13);
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x20000000) == 0 && v42 )
        ndisSetMediaDisconnectTimer(a2);
    }
    ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)a2, Status);
    ndisMSetMiniportReadyForBinding((struct _NDIS_MINIPORT_BLOCK *)a2, 1, Reason_MiniportLowPower, RunAsynchronous);
    if ( v43 )
    {
      v36 = *(_DWORD *)(a2 + 2688);
      if ( (v36 & 0x100) != 0 )
      {
        *(_DWORD *)(a2 + 2688) = v36 & 0xFFFFFEFF;
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
        if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_LowPower)
          && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v47);
          WPP_SF_Zq(0x4Au, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (unsigned __int16 *)v47[1], v47[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208), v37);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous, 1);
      }
    }
    if ( (!ndisAoAcCapable && !ndisAoAcTest || v45)
      && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2)
      && *(_DWORD *)(a2 + 1520) == 1
      && ndisMReferenceIfBlock(a2, 0xDu) )
    {
      v38 = *(_QWORD *)(a2 + 4096);
      v50 = 0;
      v49 = 786816LL;
      HIDWORD(v49) = *(_DWORD *)(v38 + 1112);
      v50 = *(_DWORD *)(v38 + 1116);
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v49;
      StatusIndication.SourceHandle = (void *)a2;
      StatusIndication.StatusCode = 1073807395;
      StatusIndication.StatusBufferSize = 12;
      NdisMIndicateStatusEx((NDIS_HANDLE)a2, &StatusIndication);
      ndisMDereferenceIfBlock(a2, MPIFREF_DEVPOWERUP);
    }
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_q(0x4Bu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
    goto LABEL_114;
  }
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x41u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqxq(
      v5,
      &PowerOnMiniportRemoved,
      (const GUID *)(a2 + 4064),
      a2 + 4064,
      *(_DWORD *)(a2 + 4112),
      *(_QWORD *)(a2 + 4080),
      79);
  IofCompleteRequest(v6, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5328);
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)a2, 0);
  ndisDereferenceMiniport(a2);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x42u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
}
