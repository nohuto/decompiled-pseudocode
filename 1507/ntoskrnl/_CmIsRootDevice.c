/*
 * XREFs of _CmIsRootDevice @ 0x1404DEBD8
 * Callers:
 *     _CmGetDeviceParent @ 0x1404DEA74 (_CmGetDeviceParent.c)
 *     _CmSetDeviceMappedProperty @ 0x140542890 (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405B2384 (_CmSetDeviceRegPropWorker.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
