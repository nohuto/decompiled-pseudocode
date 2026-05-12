/*
 * XREFs of RaUnitSetQOSIoctl @ 0x1C0032864
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C0023BCC (RaidAdapterEnableQosWaitTimeoutCheck.c)
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0034230 (RaidUnitDisableWaitCheckTimer.c)
 *     Template_qcccjq @ 0x1C0035FCC (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C003A2B8 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitSetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rcx
  unsigned int v5; // edi
  _BYTE *v6; // rax
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // dx
  unsigned int *v9; // rcx
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int v12; // r8d
  unsigned int IrpCount; // r8d
  unsigned int Flags; // r8d
  unsigned int SystemBuffer_high; // r8d
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 652) || *(_DWORD *)(a1 + 660) || *(_DWORD *)(a1 + 656) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v8 = 45;
    goto LABEL_80;
  }
  v6 = *(_BYTE **)(a1 + 96);
  if ( v6 && (*v6 & 0x1F) != 0 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v8 = 46;
LABEL_80:
    WPP_SF_q((__int64)v7->AttachedDevice, v8, (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids, a1);
LABEL_81:
    v5 = -1073741811;
    goto LABEL_82;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x24 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Fu,
        (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
        a1);
    }
    v5 = -1073741820;
    goto LABEL_82;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 36 || *(_DWORD *)(&MasterIrp->Size + 1) != 36 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v8 = 48;
    goto LABEL_80;
  }
  if ( !LOBYTE(MasterIrp->MdlAddress) )
  {
    if ( !*(_BYTE *)(a1 + 2528) )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x31u,
          (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
          a1);
      }
      goto LABEL_82;
    }
    v9 = *(unsigned int **)(a1 + 200);
    v10 = *v9 & 0xFFFFFFFD;
    *v9 = v10;
    if ( (v10 & 4) == 0 )
      *v9 = v10 & 0xFFFFFFFE;
    *(_QWORD *)(a1 + 2568) = -1LL;
    v11 = (*(_BYTE *)(a1 + 146) & 2) == 0;
    *(_BYTE *)(a1 + 2528) = 0;
    *(_QWORD *)(a1 + 2540) = 0LL;
    *(_QWORD *)(a1 + 2548) = 0LL;
    *(_DWORD *)(a1 + 2536) = 0;
    if ( !v11 )
    {
      if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
        Template_qcccjq(
          *(_DWORD *)(a1 + 88) >> 8,
          (unsigned int)&EventUnitResponsive,
          a1 + 1688,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_DWORD *)(a1 + 88),
          BYTE1(*(_DWORD *)(a1 + 88)),
          BYTE2(*(_DWORD *)(a1 + 88)),
          a1 + 1688,
          3);
      StorpTelemetryMarkUnitResponsive(a1);
      *(_BYTE *)(a1 + 146) &= ~2u;
    }
    RaidUnitDisableWaitCheckTimer(a1);
LABEL_31:
    *(_BYTE *)(a1 + 2556) = 1;
    goto LABEL_82;
  }
  v12 = *(&MasterIrp->Flags + 1);
  if ( v12 < 0x3E8 || v12 != 1000 * (v12 / 0x3E8) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v8 = 50;
    goto LABEL_80;
  }
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount < 0x3E8 || IrpCount != 1000 * (IrpCount / 0x3E8) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v8 = 51;
    goto LABEL_80;
  }
  Flags = MasterIrp->Flags;
  if ( Flags != -1 && Flags != 500 * (Flags / 0x1F4) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v8 = 52;
    goto LABEL_80;
  }
  SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( SystemBuffer_high != -1 && SystemBuffer_high != 500 * (SystemBuffer_high / 0x1F4) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v8 = 53;
    goto LABEL_80;
  }
  *(_DWORD *)(a1 + 2532) = HIDWORD(MasterIrp->MdlAddress);
  *(_DWORD *)(a1 + 2544) = *(&MasterIrp->Flags + 1) / 0x3E8;
  v16 = MasterIrp->Flags;
  if ( v16 == -1 )
    *(_DWORD *)(a1 + 2552) = -1;
  else
    *(_DWORD *)(a1 + 2552) = v16 / 0x1F4;
  *(_DWORD *)(a1 + 2548) = MasterIrp->AssociatedIrp.IrpCount / 0x3E8u;
  *(_DWORD *)(a1 + 2540) = MasterIrp->ThreadListEntry.Flink;
  v17 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( v17 == -1 )
    *(_DWORD *)(a1 + 2536) = -1;
  else
    *(_DWORD *)(a1 + 2536) = v17 / 0x1F4;
  if ( *(_DWORD *)(a1 + 2552) == -1 && !*(_DWORD *)(a1 + 2540) && *(_DWORD *)(a1 + 2536) == -1 )
  {
    RaidUnitDisableWaitCheckTimer(a1);
  }
  else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2560), 1, 0) )
  {
    RaidAdapterEnableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  v18 = 10000000 * (*(_DWORD *)(a1 + 2544) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 2536) + *(_DWORD *)(a1 + 2552)) >> 1));
  if ( (unsigned int)v18 > 0x11E1A300 )
    v18 = 300000000LL;
  *(_QWORD *)(a1 + 2568) = v18;
  if ( !*(_BYTE *)(a1 + 2528) )
  {
    **(_DWORD **)(a1 + 200) |= 3u;
    *(_BYTE *)(a1 + 2528) = 1;
    goto LABEL_31;
  }
LABEL_82:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
