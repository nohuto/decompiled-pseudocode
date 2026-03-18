/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1401F201C
 * Callers:
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14058DA8C (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0);
}
