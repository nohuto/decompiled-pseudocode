/*
 * XREFs of ExpAllocateStringRoutine @ 0x1403F6F7C
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x140210748 (RtlGetAppContainerNamedObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14022FB68 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F68E0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x1403F6E40 (RtlDuplicateUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x1404A7B5C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1404A7C18 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1404A7D00 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404A7F54 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1404AD658 (RtlDowncaseUnicodeString.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 *     RtlpQueryRegistryDirect @ 0x1404DB708 (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     RtlOemStringToUnicodeString @ 0x140549F28 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x14055211C (PiDrvDbCreateNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgAppendMultiSz @ 0x140632414 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140632698 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406327B8 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x140632930 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140685564 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406857C4 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x67727453u);
}
