/*
 * XREFs of ExpAllocateStringRoutine @ 0x140447224
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14012C154 (PnpDuplicateUnicodeString.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 *     sub_140215C6C @ 0x140215C6C (sub_140215C6C.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403BD5A0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1404470E8 (RtlDuplicateUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     RtlUnicodeStringToOemString @ 0x14049DCF8 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14049DDB4 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14049DE9C (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14049E0F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1404A638C (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1404C0420 (RtlOemStringToUnicodeString.c)
 *     CmpQueryNameString @ 0x1404C2294 (CmpQueryNameString.c)
 *     RtlpQueryRegistryDirect @ 0x1404C8F40 (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140511948 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildIndirectString @ 0x140512E14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140514A28 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgAppendMultiSz @ 0x1406076CC (PiDevCfgAppendMultiSz.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14064484C (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140644AAC (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x67727453u);
}
