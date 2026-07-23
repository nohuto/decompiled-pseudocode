/*
 * XREFs of wcschr @ 0x14014F504
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEC6C (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14021FCA8 (SmUniqueIdParseProductName.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1403F14A8 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiSwFindSwDevice @ 0x1404867FC (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1404B8CDC (DrvDbGetDeviceIdMappedProperty.c)
 *     LocalGetSDDLDeliminator @ 0x1404BABBC (LocalGetSDDLDeliminator.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404C5784 (PiPnpRtlGetFilteredDeviceList.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x1404DC820 (PiGetDeviceRegProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DD804 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1404DEB08 (DrvDbGetObjectDatabaseNode.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404DF0E0 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404E12F0 (_CmGetDeviceRegPropWorker.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140529454 (_CmGetDeviceInterfaceReferenceString.c)
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x1405447E0 (MmCallDllInitialize.c)
 *     SepParseElamCertResources @ 0x14054FC08 (SepParseElamCertResources.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561FD8 (_CmGetMatchingDeviceListForSubkey.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1406C193C (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x1406C5FDC (AslPathClean.c)
 *     LocalpConvertStringSidToSid @ 0x1406CBA30 (LocalpConvertStringSidToSid.c)
 *     BiDoesHiveKeyExist @ 0x1406D2BC8 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x1406D2F88 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E2108 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406E3484 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     DrvDbValidateDeviceIdName @ 0x1406E35E0 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x1406E3650 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x1406E36B0 (DrvDbValidateDriverInfFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
