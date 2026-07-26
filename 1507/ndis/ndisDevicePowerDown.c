/*
 * XREFs of ndisDevicePowerDown @ 0x1C00E5B90
 * Callers:
 *     <none>
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C000EDF0 (ndisMDereferenceIfBlock.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F388 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMRestoreOpenHandlers @ 0x1C000FAE0 (ndisMRestoreOpenHandlers.c)
 *     ndisIfSetInterfaceState @ 0x1C00161F4 (ndisIfSetInterfaceState.c)
 *     ndisMReferenceIfBlock @ 0x1C0017410 (ndisMReferenceIfBlock.c)
 *     NdisMIndicateStatusEx @ 0x1C0018460 (NdisMIndicateStatusEx.c)
 *     ndisIsMiniportStarted @ 0x1C0019940 (ndisIsMiniportStarted.c)
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
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A8C70 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00ABB58 (ndisSetDeviceInterfaceState.c)
 *     ndisMiniportFatalError @ 0x1C00D4838 (ndisMiniportFatalError.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 */

void __fastcall ndisDevicePowerDown(_QWORD *a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v4; // rdi
  _IRP *v5; // r13
  int Status; // r12d
  POWER_STATE v7; // ebx
  __int64 v8; // rcx
  KIRQL v9; // al
  struct _KTHREAD *CurrentThread; // rcx
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
  KIRQL v21; // al
  __int64 v22; // rdx
  KIRQL v23; // di
  unsigned __int8 v24; // al
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  struct _KEVENT *v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-E0h]
  KIRQL NewIrql; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+54h] [rbp-ACh]
  _QWORD v33[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  int v35; // [rsp+170h] [rbp+70h] BYREF
  int v36; // [rsp+174h] [rbp+74h]
  int v37; // [rsp+178h] [rbp+78h]

  v2 = 0;
  v31 = 0;
  v4 = a1;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x4Du, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v5 = 0LL;
    Status = 0;
    v7.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v5 = (_IRP *)v4[10];
    Status = v5->IoStatus.Status;
    v7.SystemState = (_SYSTEM_POWER_STATE)v5->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  }
  if ( Status < 0 )
  {
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) || *(_DWORD *)(a2 + 1520) != 1 )
      goto LABEL_23;
    v15 = byte_1C0085315;
    if ( (unsigned __int8)byte_1C0085315 >= 2u )
    {
      WPP_SF_qD(0x4Fu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2, v5->IoStatus.Status);
      v15 = byte_1C0085315;
    }
    v16 = *(_DWORD *)(a2 + 3924);
    if ( (unsigned __int8)v15 >= 4u )
      WPP_SF_qD(0x50u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2, v16);
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
      if ( (unsigned __int8)byte_1C0085315 >= 4u )
      {
        LODWORD(v29) = SetMiniportDeviceState;
        WPP_SF_qdD(0x51u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2, v16, v29);
      }
    }
    else
    {
      v19 = ndisPmInitializeMiniport((struct _NDIS_MINIPORT_BLOCK *)a2);
    }
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a2 + 5344);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C0085315 >= 4u )
        WPP_SF_q(0x53u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
        Template_jqxqqq(
          v20,
          &PowerDownFailedCannotReinitialize,
          (const GUID *)(a2 + 4064),
          a2 + 4064,
          *(_DWORD *)(a2 + 4112),
          *(_QWORD *)(a2 + 4080),
          v19,
          240,
          0);
      if ( ndisMReferenceIfBlock(a2, 0xFu) )
      {
        v27 = *(_QWORD *)(a2 + 4096);
        *(_QWORD *)(a2 + 4120) = 2LL;
        if ( *(_DWORD *)(v27 + 1112) != 2 )
        {
          *(_DWORD *)(v27 + 1112) = 2;
          *(_DWORD *)(*(_QWORD *)(a2 + 4096) + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification(a2);
          v31 = 1;
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
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a2, (struct NDIS_PNPTRACE_LOCALS *)v33);
        WPP_SF_Zq(0x52u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64 *)v33[1], v33[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous);
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      LOBYTE(v22) = 4;
      *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
      v23 = v21;
      *(_DWORD *)(a2 + 1856) = 1706767;
      ndisMRestoreOpenHandlers(a2, v22);
      v24 = ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)a2, 1, v23);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      v31 = v24;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v23);
      _m_prefetchw((const void *)(a2 + 4488));
      v25 = *(_DWORD *)(a2 + 4488);
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4488), v25, v25);
      }
      while ( v26 != v25 );
      if ( (v25 & 0x10) != 0 )
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
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_qD(0x4Eu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2, v7.SystemState);
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
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(a2 + 4124) |= 8u;
    *(_QWORD *)(a2 + 520) = CurrentThread;
    NewIrql = v9;
    *(_DWORD *)(a2 + 1856) = 1706615;
    *(_DWORD *)(a2 + 4120) = 5;
    if ( ndisMReferenceIfBlock(a2, 0xEu) )
    {
      v11 = *(_QWORD *)(a2 + 4096);
      if ( *(_DWORD *)(v11 + 1112) != 5 )
      {
        *(_DWORD *)(v11 + 1112) = 5;
        v2 = 1;
        v31 = 1;
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
  if ( v31 && ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a2) && *(_DWORD *)(a2 + 1520) == 1 )
  {
    v14 = *(_QWORD *)(a2 + 4096);
    v36 = 0;
    v37 = 0;
    v35 = 786816;
    v36 = *(_DWORD *)(v14 + 1112);
    v37 = *(_DWORD *)(v14 + 1116);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = &v35;
    StatusIndication.SourceHandle = (void *)a2;
    StatusIndication.StatusCode = 1073807395;
    StatusIndication.StatusBufferSize = 12;
    NdisMIndicateStatusEx((NDIS_HANDLE)a2, &StatusIndication);
  }
  v4 = a1;
LABEL_23:
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
  ExFreePoolWithTag(v4, 0);
  if ( (*(_DWORD *)(a2 + 120) & 0x80u) != 0 )
  {
    v28 = *(struct _KEVENT **)(a2 + 5488);
    *(_DWORD *)(a2 + 5496) = Status;
    KeSetEvent(v28, 0, 0);
  }
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0x54u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a2);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
