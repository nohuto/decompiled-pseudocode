/*
 * XREFs of wcschr @ 0x140145B68
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401C04F4 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x140207860 (SmUniqueIdParseProductName.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043C61C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043E634 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140444650 (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x140444D58 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1404561C8 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiGetDeviceRegProperty @ 0x140459C20 (PiGetDeviceRegProperty.c)
 *     PiSwFindSwDevice @ 0x1404968E4 (PiSwFindSwDevice.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404969B0 (PiPnpRtlGetFilteredDeviceList.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1404C6B3C (DrvDbGetDeviceIdMappedProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1404E6394 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PiNormalizeDeviceText @ 0x1404F1278 (PiNormalizeDeviceText.c)
 *     BiCreatePartitionDevice @ 0x1404FDDA4 (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x14050A338 (MmCallDllInitialize.c)
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405112BC (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     SepParseElamCertResources @ 0x140521C94 (SepParseElamCertResources.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140530F6C (_CmGetMatchingDeviceListForSubkey.c)
 *     AslPathClean @ 0x140536240 (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140536360 (SdbpCreateSearchPathPartsFromPath.c)
 *     PiGetDeviceRegistryProperty @ 0x140600514 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14060C394 (PiDevCfgResolveVariableKeyHandle.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     LocalGetSDDLDeliminator @ 0x140686834 (LocalGetSDDLDeliminator.c)
 *     LocalpConvertStringSidToSid @ 0x140686C0C (LocalpConvertStringSidToSid.c)
 *     BiDoesHiveKeyExist @ 0x14068E2AC (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14068E664 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14069B588 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x14069C8C0 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14069C930 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14069C990 (DrvDbValidateDriverInfFileName.c)
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
