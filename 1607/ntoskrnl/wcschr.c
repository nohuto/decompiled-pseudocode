/*
 * XREFs of wcschr @ 0x14014EF44
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEED8 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14021FE7C (SmUniqueIdParseProductName.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1403F25E4 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PiSwFindSwDevice @ 0x1404C63C0 (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1404D56D8 (DrvDbGetDeviceIdMappedProperty.c)
 *     LocalGetSDDLDeliminator @ 0x1404D75B8 (LocalGetSDDLDeliminator.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404E2820 (PiPnpRtlGetFilteredDeviceList.c)
 *     EtwpGenerateFileName @ 0x1404F08C8 (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x1404F9894 (PiGetDeviceRegProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404FA878 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1404FBB78 (DrvDbGetObjectDatabaseNode.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404FC150 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404FE360 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140528F14 (_CmGetDeviceInterfaceReferenceString.c)
 *     BiCreatePartitionDevice @ 0x14053E80C (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x1405442A0 (MmCallDllInitialize.c)
 *     SepParseElamCertResources @ 0x14054F6C8 (SepParseElamCertResources.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561A98 (_CmGetMatchingDeviceListForSubkey.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A568 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637AD4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063C998 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1406C1804 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     AslPathClean @ 0x1406C5EA4 (AslPathClean.c)
 *     LocalpConvertStringSidToSid @ 0x1406CB8F8 (LocalpConvertStringSidToSid.c)
 *     BiDoesHiveKeyExist @ 0x1406D2A90 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x1406D2E50 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406E334C (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     DrvDbValidateDeviceIdName @ 0x1406E34A8 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x1406E3518 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x1406E3578 (DrvDbValidateDriverInfFileName.c)
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
