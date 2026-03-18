/*
 * XREFs of ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C002C3EC
 * Callers:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002BC88 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Mx::MxHasEnoughRemainingThreadStack()
{
  unsigned __int64 HighLimit; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp+10h] BYREF

  IoGetStackLimits(&LowLimit, &HighLimit);
  return (unsigned __int64)&HighLimit - LowLimit >= 0x3000;
}
