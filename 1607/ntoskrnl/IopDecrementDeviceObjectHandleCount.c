/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1401C4928
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A1AC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
