/*
 * XREFs of ExpAllocateStringRoutine @ 0x1404FFFAC
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1404AABA0 (RtlpQueryRegistryDirect.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1404FEFE8 (RtlDuplicateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404FF914 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     RtlUnicodeStringToOemString @ 0x14052844C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140528508 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1405285F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140528860 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x14052EC84 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14054E47C (RtlOemStringToUnicodeString.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140588050 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryDriverNode @ 0x140588D38 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140589984 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgAppendMultiSz @ 0x140682470 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406827A0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x140682918 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140688A94 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1406C78D8 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406C7B38 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x67727453u);
}
