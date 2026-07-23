/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180032000
 * Callers:
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     RtlInsertInvertedFunctionTable @ 0x18000F9C4 (RtlInsertInvertedFunctionTable.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18000FF68 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x180010044 (LdrpCfgProcessLoadConfig.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18003052C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrpInitializeTls @ 0x1800407A4 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 *     LdrpAccessResourceData @ 0x18007031C (LdrpAccessResourceData.c)
 *     LdrpRelocateImage @ 0x1800802E4 (LdrpRelocateImage.c)
 *     LdrRelocateImage @ 0x1800805C0 (LdrRelocateImage.c)
 *     LdrpCorValidateImage @ 0x180084488 (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180087A00 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpCorFixupImage @ 0x18008DE80 (LdrpCorFixupImage.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800C9A74 (LdrpGetDelayloadDescriptor.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 *     LdrEnumResources @ 0x1800D39B0 (LdrEnumResources.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EA2C4 (RtlpGuardIsSuppressedAddress.c)
 *     EtwpFindDebugId @ 0x1800F4984 (EtwpFindDebugId.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x180031578 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007C2B0 (RtlAddressInSectionTable.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  char *v4; // rdi
  PVOID v5; // rbx
  BOOLEAN v8; // si
  int v9; // eax
  void *v10; // rdx
  PIMAGE_NT_HEADERS v11; // rcx
  __int64 VirtualAddress; // rdx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF

  v4 = (char *)BaseOfImage;
  OutHeaders = 0LL;
  v5 = 0LL;
  v14[0] = 0LL;
  v8 = MappedAsImage;
  if ( ((unsigned __int8)BaseOfImage & 3) != 0 )
  {
    v8 = MappedAsImage;
    if ( ((unsigned __int8)BaseOfImage & 1) != 0 )
      v8 = 0;
    v4 = (char *)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v9 = RtlImageNtHeaderEx(1u, v4, 0LL, &OutHeaders);
  v11 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      LOBYTE(v10) = v8;
      v9 = RtlpImageDirectoryEntryToData32((__int64)v4, v10, DirectoryEntry, Size, OutHeaders, v14);
      v5 = (PVOID)v14[0];
    }
    else
    {
      if ( OutHeaders->OptionalHeader.Magic == 523 )
      {
        if ( DirectoryEntry >= OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
          return 0LL;
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[DirectoryEntry].VirtualAddress;
        if ( !(_DWORD)VirtualAddress )
          return 0LL;
        *Size = OutHeaders->OptionalHeader.DataDirectory[DirectoryEntry].Size;
        if ( !v8 && (unsigned int)VirtualAddress >= v11->OptionalHeader.SizeOfHeaders )
        {
          v5 = RtlAddressInSectionTable(v11, v4, VirtualAddress);
          if ( v5 )
            return v5;
          return 0LL;
        }
        return &v4[VirtualAddress];
      }
      v9 = -1073741811;
    }
  }
  if ( v9 < 0 )
    return 0LL;
  return v5;
}
