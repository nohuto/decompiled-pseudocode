/*
 * XREFs of _CmIsRootDevice @ 0x1404CFC28
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1404CE608 (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceParent @ 0x1404CFAC4 (_CmGetDeviceParent.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C468 (PiCMGetRelatedDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571500 (_CmSetDeviceRegPropWorker.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140647364 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
