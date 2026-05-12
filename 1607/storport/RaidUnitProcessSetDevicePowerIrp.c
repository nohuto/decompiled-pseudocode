/*
 * XREFs of RaidUnitProcessSetDevicePowerIrp @ 0x1C000A578
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000A488 (RaidUnitSetDevicePowerIrp.c)
 * Callees:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1C002AE50 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0031544 (RaidUnitSendPowerToMiniport.c)
 *     Template_qcccpqcqqqq @ 0x1C0032D98 (Template_qcccpqcqqqq.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrp(char *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v5; // r14d
  unsigned int LowPart; // esi
  unsigned int v8; // eax
  int v9; // [rsp+70h] [rbp-48h] BYREF
  __int64 v10; // [rsp+74h] [rbp-44h]
  int v11; // [rsp+7Ch] [rbp-3Ch]

  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 52LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *((_DWORD *)Context + 49);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v9);
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      Template_qcccpqcqqqq(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[88],
        Context[89],
        Context[90],
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryFile.FileInformationClass,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *((_DWORD *)Context + 138) = 0;
  if ( (unsigned __int8)RaidIsUnitControlSupported(Context, 3LL) )
  {
    v8 = RaidUnitSendPowerToMiniport(Context, Irp);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, v8);
    }
  }
  RaidUnitProcessSetDevicePowerIrpComplete(Context, Irp);
  return 0LL;
}
