/*
 * XREFs of PoFxActivateDevice @ 0x140026F90
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140461484 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x140680E54 (PnpQueryStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140693CC4 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL);
}
