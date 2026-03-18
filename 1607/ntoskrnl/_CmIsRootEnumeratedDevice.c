/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x1403F4C50
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1403F4B68 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14062F6CC (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1404FDFD0 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_140257390, &DestinationString, 1u);
}
