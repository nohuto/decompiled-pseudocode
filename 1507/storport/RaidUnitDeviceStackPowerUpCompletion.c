/*
 * XREFs of RaidUnitDeviceStackPowerUpCompletion @ 0x1C0013420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDeviceStackPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context)
{
  Context[144] &= ~0x80u;
}
