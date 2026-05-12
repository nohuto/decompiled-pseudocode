/*
 * XREFs of RaidUnitSetPowerIrp @ 0x1C0007D04
 * Callers:
 *     RaUnitPowerIrp @ 0x1C0007C30 (RaUnitPowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0007E80 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0007FCC (RaidUnitSetDevicePowerIrp.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0027A0C (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaidUnitSetPowerIrp(PVOID Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Options; // r15d
  PDEVICE_OBJECT v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart <= 6 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        48LL,
        &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids,
        Context,
        Irp,
        Options);
      v6 = WPP_GLOBAL_Control;
    }
    if ( Options )
    {
      if ( Options != 1 )
      {
        v8 = -1073741823;
        goto LABEL_8;
      }
      v7 = RaidUnitSetDevicePowerIrp(Context, Irp);
    }
    else
    {
      v7 = RaidUnitSetSystemPowerIrp(Context, Irp);
    }
    v6 = WPP_GLOBAL_Control;
    v8 = v7;
LABEL_8:
    if ( v6 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v6->Timer) & 4) != 0 && BYTE1(v6->Timer) >= 4u )
      WPP_SF_qqDD(v6->AttachedDevice, 49LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, Context, Irp, Options, v8);
    return v8;
  }
  v8 = RaidCompleteRequestEx(Irp, 0, 0);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 47LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, Context, Irp);
  }
  return v8;
}
