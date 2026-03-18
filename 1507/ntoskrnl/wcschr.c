/*
 * XREFs of wcschr @ 0x140173B98
 * Callers:
 *     SmUniqueIdParseProductName @ 0x140256ABC (SmUniqueIdParseProductName.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043D720 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1404DDE94 (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DE5F8 (_RegRtlCreateTreeTransacted.c)
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1404E3B60 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiSwFindSwDevice @ 0x140538814 (PiSwFindSwDevice.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140555D3C (PiPnpRtlGetFilteredDeviceList.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14055EC58 (_CmGetDeviceInterfaceReferenceString.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1405887F4 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405894BC (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     SepParseElamCertResources @ 0x140590958 (SepParseElamCertResources.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A7F40 (_CmGetMatchingDeviceListForSubkey.c)
 *     AslPathClean @ 0x1405ABD5C (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1405ABE7C (SdbpCreateSearchPathPartsFromPath.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     BiDoesHiveKeyExist @ 0x14070DDC4 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14070E17C (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14071BB44 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x14071CF1C (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14071CF8C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14071CFEC (DrvDbValidateDriverInfFileName.c)
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
