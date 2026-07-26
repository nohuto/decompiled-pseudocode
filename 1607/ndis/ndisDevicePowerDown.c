/*
 * XREFs of ndisDevicePowerDown @ 0x1C00E5F90
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011648 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisIfSetInterfaceState @ 0x1C0017AB8 (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     ndisIsMiniportStarted @ 0x1C00180A4 (ndisIsMiniportStarted.c)
 *     NdisMIndicateStatusEx @ 0x1C0019ED0 (NdisMIndicateStatusEx.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F608 (ndisMRestoreOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003EE50 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C009C754 (ndisNotifyDevicePowerStateChange.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C009C88C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C009C914 (ndisQuerySetMiniportDeviceState.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A1A7C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A3B24 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00AB3EC (ndisSetDeviceInterfaceState.c)
 *     ndisMiniportFatalError @ 0x1C00D3F88 (ndisMiniportFatalError.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerDown(__int64 a1, __int64 a2)
{
  int v2; // esi
  _IRP *v5; // r13
  int Status; // r12d
  POWER_STATE v7; // ebx
  __int64 v8; // rcx
  KIRQL v9; // al
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  int v16; // ebx
  __int64 v17; // rcx
  int SetMiniportDeviceState; // eax
  int v19; // edi
  __int64 v20; // rcx
  struct _NDIS_MINIPORT_BLOCK *v21; // rdx
  KIRQL v22; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v24; // di
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int64 v29; // rax
  struct _KEVENT *v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-E0h]
  KIRQL NewIrql; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+54h] [rbp-ACh]
  _QWORD v34[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  __int64 v36; // [rsp+170h] [rbp+70h] BYREF
  int v37; // [rsp+178h] [rbp+78h]

  v2 = 0;
  v33 = 0;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x4Eu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v5 = 0LL;
    Status = 0;
    v7.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v5 = *(_IRP **)(a1 + 80);
    Status = v5->IoStatus.Status;
    v7.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) || *(_DWORD *)(a2 + 1520) != 1 )
      goto LABEL_22;
    v15 = byte_1C00895D5;
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
    {
      WPP_SF_qD(0x50u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, v5->IoStatus.Status);
      v15 = byte_1C00895D5;
    }
    v16 = *(_DWORD *)(a2 + 3924);
    if ( (unsigned __int8)v15 >= 4u )
      WPP_SF_qD(0x51u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, v16);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)a2, *(_DWORD *)(a2 + 3924));
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        v17,
        &DevicePowerStateChange,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        1,
        *(_DWORD *)(a2 + 3924));
    if ( (*(_DWORD *)(a2 + 124) & 0x20) != 0 )
    {
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a2, v16, -50265855, 1u);
      v19 = SetMiniportDeviceState;
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      {
        LODWORD(v31) = SetMiniportDeviceState;
        WPP_SF_qdD(0x52u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, v16, v31);
      }
    }
    else
    {
      v19 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)a2);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5328);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
        WPP_SF_q(0x54u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
        Template_jqxqqq(
          v20,
          &PowerDownFailedCannotReinitialize,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          v19,
          5,
          0);
      if ( ndisMReferenceIfBlock(a2, 0xFu) )
      {
        v29 = *(_QWORD *)(a2 + 4096);
        *(_QWORD *)(a2 + 4120) = 2LL;
        if ( *(_DWORD *)(v29 + 1112) != 2 )
        {
          *(_DWORD *)(v29 + 1112) = 2;
          *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification(a2);
          v33 = 1;
        }
        ndisMDereferenceIfBlock(a2, MPIFREF_POWERDOWNFAIL);
      }
      ndisMiniportFatalError(a2, 0x4Bu);
      if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
        Status = -1073741823;
      else
        v5->IoStatus.Status = -1073741823;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
      if ( Ndis::BindState::SetPause((Ndis::BindState *)(a2 + 5120), DatapathRunning, PauseReason_LowPower)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v34);
        WPP_SF_Zq(0x53u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (unsigned __int16 *)v34[1], v34[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208), v21);
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous, 0);
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(a2 + 520) = CurrentThread;
      v24 = v22;
      LOBYTE(CurrentThread) = 4;
      *(_DWORD *)(a2 + 1856) = 1706788;
      ndisMRestoreOpenHandlers(a2, (__int64)CurrentThread);
      LOBYTE(v25) = 1;
      v26 = ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)a2, v25, v24);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      v33 = v26;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v24);
      _m_prefetchw((const void *)(a2 + 4488));
      v27 = *(_DWORD *)(a2 + 4488);
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4488), v27, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(a2, 1u);
        _InterlockedAnd((volatile signed __int32 *)(a2 + 4488), 0xFFFFFFEF);
      }
      ndisNotifyDevicePowerStateChange(a2, v16);
      ndisIssueNetEventSetPowerEvent((struct _NDIS_MINIPORT_BLOCK *)a2, v16);
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_qD(0x4Fu, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2, v7.SystemState);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)a2, v7.SystemState);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        v8,
        &DevicePowerStateChange,
        (const GUID *)(a2 + 4064),
        a2 + 4064,
        *(_DWORD *)(a2 + 4112),
        *(_QWORD *)(a2 + 4080),
        1,
        v7.SystemState);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    NewIrql = v9;
    v10 = *(_DWORD *)(a2 + 4124) & 0xFEFFFFF7 | 8;
    *(_DWORD *)(a2 + 1856) = 1706632;
    *(_DWORD *)(a2 + 4124) = v10;
    *(_DWORD *)(a2 + 4120) = 5;
    if ( ndisMReferenceIfBlock(a2, 0xEu) )
    {
      v11 = *(_QWORD *)(a2 + 4096);
      if ( *(_DWORD *)(v11 + 1112) != 5 )
      {
        *(_DWORD *)(v11 + 1112) = 5;
        v2 = 1;
        v33 = 1;
        *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = *(_DWORD *)(a2 + 4124);
      }
      ndisMDereferenceIfBlock(a2, MPIFREF_POWERDOWN);
    }
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), NewIrql);
    if ( v2 )
      ndisNsiSyncMiniportOperStatusNotification(a2);
    v13 = *(_DWORD *)(a2 + 120);
    *(POWER_STATE *)(a2 + 3924) = v7;
    if ( (v13 & 0x80u) == 0 )
      PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 3880), DevicePowerState, v7);
  }
  if ( v33 && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) && *(_DWORD *)(a2 + 1520) == 1 )
  {
    v14 = *(_QWORD *)(a2 + 4096);
    v37 = 0;
    v36 = 786816LL;
    HIDWORD(v36) = *(_DWORD *)(v14 + 1112);
    v37 = *(_DWORD *)(v14 + 1116);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = &v36;
    StatusIndication.SourceHandle = (void *)a2;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx((NDIS_HANDLE)a2, &StatusIndication);
  }
LABEL_22:
  *(_DWORD *)(a2 + 4528) = 0;
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    Template_jqxq(
      v12,
      &DevicePowerDownComplete,
      (const GUID *)(a2 + 4064),
      a2 + 4064,
      *(_DWORD *)(a2 + 4112),
      *(_QWORD *)(a2 + 4080),
      Status);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) == 0 )
    IofCompleteRequest(v5, 0);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v30 = *(struct _KEVENT **)(a2 + 5472);
    *(_DWORD *)(a2 + 5480) = Status;
    KeSetEvent(v30, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x55u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a2);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
