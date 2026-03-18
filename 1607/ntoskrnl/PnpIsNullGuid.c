/*
 * XREFs of PnpIsNullGuid @ 0x14048C348
 * Callers:
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiDqIrpQueryCreate @ 0x14048B3E8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637AD4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
