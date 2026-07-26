/*
 * XREFs of ndisSetDevicePower @ 0x1C001227C
 * Callers:
 *     ndisSetPower @ 0x1C0097B38 (ndisSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00CCD00 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012550 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012E30 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012FB0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C001378C (ndisCancelWakeUpDpcTimer.c)
 *     ndisWaitForResetCompletion @ 0x1C0013838 (ndisWaitForResetCompletion.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C0045484 (WPP_SF_LqZ.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C0097A4C (ndisQuerySetMiniportDeviceState.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0097EBC (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A6AD0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00A8768 (ndisSetDeviceInterfaceState.c)
 *     ndisSetPowerResume @ 0x1C00D684C (ndisSetPowerResume.c)
 *     ndisSetPowerSuspend @ 0x1C00D68BC (ndisSetPowerSuspend.c)
 *     ndisPmHaltMiniport @ 0x1C00EF254 (ndisPmHaltMiniport.c)
 */

__int64 __fastcall ndisSetDevicePower(PIRP Irp, __int64 a2, enum _NDIS_DEVICE_POWER_STATE a3, __int64 a4)
{
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // r9
  unsigned int SetMiniportDeviceState; // eax
  int v11; // ecx
  unsigned int v12; // ebx
  _IO_STACK_LOCATION *v13; // rax
  _IO_STACK_LOCATION *v14; // rax
  __int64 v15; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v17; // rax
  char v19; // al
  KIRQL v21; // al
  __int64 v22; // rdx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  KIRQL v25; // al

  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_LqZ(95LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqxqq(
      (_DWORD)Irp,
      (unsigned int)&MiniportPowerDeviceState,
      a4 + 4064,
      a4 + 4064,
      *(_DWORD *)(a4 + 4112),
      *(_QWORD *)(a4 + 4080),
      1,
      a3);
  if ( a3 == NdisDeviceStateD0 )
  {
    _m_prefetchw((const void *)(a4 + 4488));
    v19 = _InterlockedAnd((volatile signed __int32 *)(a4 + 4488), 0xFFFFFFFD);
    if ( (v19 & 2) != 0 )
    {
      v15 = *(_QWORD *)(a4 + 4512);
      if ( v15 )
      {
        v25 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4512));
        if ( (*(_DWORD *)(v15 + 480) & 0x120) == 0x20 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)v15, v25);
          return (unsigned int)ndisSetPowerResume(Irp);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v15, v25);
      }
      if ( (*(_DWORD *)(a4 + 120) & 0x80u) == 0 )
      {
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
        *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                                   + 24);
        CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
        CurrentStackLocation[-1].Control = 0;
        v17 = Irp->Tail.Overlay.CurrentStackLocation;
        v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
        v17[-1].Context = (void *)a4;
        v17[-1].Control = -32;
        if ( (unsigned __int8)byte_1C0083715 >= 4u )
          WPP_SF_q(96LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a4);
        goto LABEL_28;
      }
      return (unsigned int)ndisSetDevicePowerOnComplete(*(_QWORD *)(a4 + 3888), 0LL, a4);
    }
    goto LABEL_31;
  }
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    v12 = -1073741811;
    goto LABEL_54;
  }
  _m_prefetchw((const void *)(a4 + 4488));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4488), 0xFFFFFFFB) & 4) == 0 )
  {
LABEL_31:
    _InterlockedOr((volatile signed __int32 *)(a4 + 4488), 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3896), Irp);
  }
  v7 = *(_QWORD *)(a4 + 4512);
  if ( v7 )
  {
    v21 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4512));
    if ( (*(_DWORD *)(v7 + 480) & 0x108) == 8 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v7, v21);
      return (unsigned int)ndisSetPowerSuspend(Irp);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v21);
  }
  if ( !(unsigned __int8)ndisIsMiniportStarted(a4) || *(_DWORD *)(a4 + 1520) != 1 )
    goto LABEL_19;
  if ( (*(_DWORD *)(a4 + 124) & 0x800) == 0 )
  {
    KeClearEvent((PRKEVENT)(a4 + 3784));
    ndisPrepForLowPower((PVOID)a4, a3);
  }
  if ( (*(_DWORD *)(a4 + 124) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a4 + 3816) + 26LL) & 1) == 0 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_q(99LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a4);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        Template_jqxq(
          v8,
          (unsigned int)&PowerHaltMiniport,
          a4 + 4064,
          a4 + 4064,
          *(_DWORD *)(a4 + 4112),
          *(_QWORD *)(a4 + 4080),
          64);
      if ( (*(_DWORD *)(a4 + 124) & 0x100) == 0 )
      {
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5328);
        ndisPmHaltMiniport((struct _NDIS_MINIPORT_BLOCK *)a4);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(a4 + 5328, 1LL);
      }
    }
    goto LABEL_19;
  }
  ndisCancelWakeUpDpcTimer(a4);
  ndisWaitForResetCompletion(a4);
  if ( (*(_DWORD *)(a4 + 124) & 0x800) != 0 )
  {
    ndisSetDeviceInterfaceState(a4, 0LL);
    _InterlockedOr((volatile signed __int32 *)(a4 + 4488), 0x10u);
  }
  LOBYTE(v9) = 1;
  SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (unsigned int)a3, 4244701441LL, v9);
  v12 = SetMiniportDeviceState;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qdD(97LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a4, (unsigned int)a3, SetMiniportDeviceState);
  if ( !v12 )
  {
LABEL_19:
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(100LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a4);
    if ( (*(_DWORD *)(a4 + 120) & 0x80u) == 0 )
    {
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v13[-1].MajorFunction = *(_OWORD *)&v13->MajorFunction;
      *(_OWORD *)&v13[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v13->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v13[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v13->Parameters.SetLock + 24);
      v13[-1].FileObject = v13->FileObject;
      v13[-1].Control = 0;
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      v14[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
      v14[-1].Context = (void *)a4;
      v14[-1].Control = -32;
LABEL_28:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3896), Irp);
      return 259;
    }
    return (unsigned int)ndisSetDevicePowerDownComplete(*(struct _DEVICE_OBJECT **)(a4 + 3888), 0LL, (void *)a4);
  }
  if ( (unsigned __int8)byte_1C0083715 >= 2u )
    WPP_SF_q(98LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a4);
  if ( (Microsoft_Windows_NDISEnableBits & 0x40000000) != 0 )
    Template_jqxqqq(
      v11,
      (unsigned int)&PowerDownFailed,
      a4 + 4064,
      a4 + 4064,
      *(_DWORD *)(a4 + 4112),
      *(_QWORD *)(a4 + 4080),
      v12,
      26,
      0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5328);
  _m_prefetchw((const void *)(a4 + 4488));
  v23 = *(_DWORD *)(a4 + 4488);
  do
  {
    v24 = v23;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 4488), v23, v23);
  }
  while ( v24 != v23 );
  if ( (v23 & 0x10) != 0 )
  {
    LOBYTE(v22) = 1;
    ndisSetDeviceInterfaceState(a4, v22);
    _InterlockedAnd((volatile signed __int32 *)(a4 + 4488), 0xFFFFFFEF);
  }
  if ( (*(_DWORD *)(a4 + 120) & 0x80u) == 0 )
  {
LABEL_54:
    Irp->IoStatus.Status = v12;
    IofCompleteRequest(Irp, 0);
  }
  return v12;
}
