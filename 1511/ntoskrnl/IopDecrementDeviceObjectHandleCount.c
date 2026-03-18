/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1401B6EF8
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404A0A7C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140615674 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0);
}
