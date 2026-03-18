/*
 * XREFs of ExpAllocateStringRoutine @ 0x1403F80BC
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x1401CF450 (PnpDuplicateUnicodeString.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x14021091C (RtlGetAppContainerNamedObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14022FD3C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F7370 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1403F75E4 (RtlCreateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F7A20 (RtlFormatCurrentUserKeyPath.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x1403F7F80 (RtlDuplicateUnicodeString.c)
 *     CmpQueryNameString @ 0x14049B4E4 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     RtlUnicodeStringToOemString @ 0x1404BBE2C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1404BBEE8 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1404BBFD0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404BC224 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1404C1928 (RtlDowncaseUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1404F877C (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeString @ 0x140514D50 (RtlUpcaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1405499E8 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgAppendMultiSz @ 0x140632360 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406325E4 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140632704 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x14063287C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140639900 (PiDevCfgLogDeviceConfigured.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140685480 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406856E0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x67727453u);
}
