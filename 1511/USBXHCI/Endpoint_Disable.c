/*
 * XREFs of Endpoint_Disable @ 0x1C0020DE0
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C002FC50 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C002FE34 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C00300C0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0030440 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00313C4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031690 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C00318F0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0031A90 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0032240 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x1C0020E04 (Endpoint_Disable_Internal.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1)
{
  Endpoint_Disable_Internal();
  return ESM_AddEvent((PVOID)(a1 + 272));
}
