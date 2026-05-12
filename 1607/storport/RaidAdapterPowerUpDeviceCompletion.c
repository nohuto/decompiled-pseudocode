/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x1C000A980
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidPowerPassToMiniPort @ 0x1C000AA40 (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0019DEC (RaidAdapterSendPowerToMiniport.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
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
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 29LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, v2, a2);
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
        &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
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
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 31LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, v2, a2, v6);
  }
  return 3221225494LL;
}
