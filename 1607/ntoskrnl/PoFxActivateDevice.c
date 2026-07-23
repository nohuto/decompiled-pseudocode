/*
 * XREFs of PoFxActivateDevice @ 0x140007BF4
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1403F026C (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x1403F0B80 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNode @ 0x140485CFC (PnpDeleteLockedDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x1406303E8 (PnpQueryStopDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14064999C (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL);
}
