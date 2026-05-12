/*
 * XREFs of RaUnitPowerIrp @ 0x1C000A1B4
 * Callers:
 *     RaDriverPowerIrp @ 0x1C000B910 (RaDriverPowerIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000207C (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidUnitSetPowerIrp @ 0x1C000A288 (RaidUnitSetPowerIrp.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C002B114 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaUnitPowerIrp(struct _KEVENT *Context, PIRP Irp)
{
  signed int v4; // eax
  int MinorFunction; // ebp
  PDEVICE_OBJECT v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned int v10; // r8d

  v4 = RaUnitAcquireRemoveLock((__int64)Context);
  if ( v4 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v4);
  }
  else
  {
    MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        44LL,
        &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
        Context,
        Irp,
        MinorFunction);
      v6 = WPP_GLOBAL_Control;
    }
    if ( MinorFunction == 2 )
    {
      v7 = RaidUnitSetPowerIrp(Context, Irp);
    }
    else
    {
      if ( MinorFunction == 3 )
      {
        if ( v6 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v6->Timer) & 4) != 0 && BYTE1(v6->Timer) >= 4u )
          WPP_SF_qq(v6->AttachedDevice, 46LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, Context, Irp);
        v10 = 0;
      }
      else
      {
        v10 = -1073741637;
      }
      v7 = RaidCompleteRequestEx(Irp, 0, v10);
    }
    v8 = v7;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        45LL,
        &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
        Context,
        Irp,
        MinorFunction,
        v7);
    }
    RaUnitReleaseRemoveLock(Context);
    return v8;
  }
}
