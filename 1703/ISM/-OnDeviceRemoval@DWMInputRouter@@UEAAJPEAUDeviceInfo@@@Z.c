/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800148A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(DWMInputRouter *this, struct DeviceInfo *a2)
{
  return DWMInputRouter::OnDeviceChange(this, a2, 0);
}
