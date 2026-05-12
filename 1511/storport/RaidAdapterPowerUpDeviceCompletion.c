/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x1C0008BD0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidPowerPassToMiniPort @ 0x1C0008C90 (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C002CB2C (RaidAdapterSendPowerToMiniport.c)
 */

__int64 __fastcall RaidAdapterPowerUpDeviceCompletion(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  int Status; // esi
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 29LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, v2, a2);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6LL) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
    if ( Status >= 0 )
    {
LABEL_17:
      RaidAdapterPowerUpDeviceCompletionLastStep(a2, v2);
      return 3221225494LL;
    }
LABEL_13:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        30LL,
        &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids,
        v2,
        a2,
        Status);
    }
    goto LABEL_17;
  }
  v6 = RaidPowerPassToMiniPort(a1, a2, RaidAdapterDevicePowerUpSrbComplete);
  Status = v6;
  if ( v6 < 0 )
    goto LABEL_13;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 31LL, &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids, v2, a2, v6);
  }
  return 3221225494LL;
}
