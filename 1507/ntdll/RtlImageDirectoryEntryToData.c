/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180016860
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180018438 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpAccessResourceData @ 0x180018AC0 (LdrpAccessResourceData.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     LdrpCfgProcessLoadConfig @ 0x180040ECC (LdrpCfgProcessLoadConfig.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180041260 (LdrpFetchAddressOfSecurityCookie.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800413CC (RtlInsertInvertedFunctionTable.c)
 *     LdrpInitializeTls @ 0x180055594 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180055754 (LdrpHandleTlsData.c)
 *     LdrpRelocateImage @ 0x180073308 (LdrpRelocateImage.c)
 *     LdrRelocateImage @ 0x1800735D8 (LdrRelocateImage.c)
 *     LdrpCorValidateImage @ 0x180078A1C (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18007F190 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpCorFixupImage @ 0x180083A50 (LdrpCorFixupImage.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800BCD54 (LdrpGetDelayloadDescriptor.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 *     LdrEnumResources @ 0x1800CAFC0 (LdrEnumResources.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800E57F0 (RtlpGuardIsSuppressedAddress.c)
 *     EtwpFindDebugId @ 0x1800F4F84 (EtwpFindDebugId.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180015594 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, a4, v7);
  v5 = v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
