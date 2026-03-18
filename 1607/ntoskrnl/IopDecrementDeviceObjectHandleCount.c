/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1401C4A44
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A0C8 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
