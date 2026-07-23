/*
 * XREFs of _CmIsRootDevice @ 0x14050CCF4
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14050B6D4 (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceParent @ 0x14050CB90 (_CmGetDeviceParent.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C9A8 (PiCMGetRelatedDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571A40 (_CmSetDeviceRegPropWorker.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140647448 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
