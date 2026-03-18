/*
 * XREFs of PoRegisterPowerSettingCallback_0 @ 0x1C000FC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoRegisterPowerSettingCallback_0(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  return PoRegisterPowerSettingCallback(DeviceObject, SettingGuid, Callback, Context, Handle);
}
