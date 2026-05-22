/*
 * XREFs of ?SendCommandToInputDevice@Win32kInterop@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18000ACB0
 * Callers:
 *     ?DeliverInput@DWMLegacyInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x18001BA10 (-DeliverInput@DWMLegacyInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMLegacyInputTarget@@WBA@EAAJPEAUInputInfo@@@Z @ 0x18001BA30 (-DeliverInput@DWMLegacyInputTarget@@WBA@EAAJPEAUInputInfo@@@Z.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18009CFC0 (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::SendCommandToInputDevice(
        Win32kInterop *this,
        __int64 a2,
        const struct DeviceCommandMessage *a3)
{
  return 0LL;
}
