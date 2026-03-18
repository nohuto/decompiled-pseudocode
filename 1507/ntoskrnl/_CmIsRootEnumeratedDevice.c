/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x1404E2280
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x1404D83F4 (PiPnpRtlSetObjectProperty.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1404E2194 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14058C1FC (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_140291478, &DestinationString, 1u);
}
