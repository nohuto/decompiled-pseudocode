/*
 * XREFs of Endpoint_Disable @ 0x1C00176D0
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C002EA40 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C002EC24 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002EEB0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002F230 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00304F4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00308A0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0030B00 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0030CA0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0031450 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x1C00176F4 (Endpoint_Disable_Internal.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1)
{
  Endpoint_Disable_Internal();
  return ESM_AddEvent((PVOID)(a1 + 272));
}
