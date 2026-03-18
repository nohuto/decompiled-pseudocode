/*
 * XREFs of Endpoint_Disable @ 0x1C00213D0
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C00301C0 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C00303A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0030630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00309B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0031A44 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031D10 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0031F70 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0032110 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0032920 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x1C00213F4 (Endpoint_Disable_Internal.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1)
{
  Endpoint_Disable_Internal();
  return ESM_AddEvent((PVOID)(a1 + 272));
}
