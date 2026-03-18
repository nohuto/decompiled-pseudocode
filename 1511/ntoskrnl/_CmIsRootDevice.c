/*
 * XREFs of _CmIsRootDevice @ 0x1404B1458
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1404B126C (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1404F1C44 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceParent @ 0x1404F1E6C (_CmGetDeviceParent.c)
 *     _CmSetDeviceRegPropWorker @ 0x14053AB90 (_CmSetDeviceRegPropWorker.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140612E20 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
