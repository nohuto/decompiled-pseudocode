/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180031AF0
 * Callers:
 *     EtwpFindDebugId @ 0x180002004 (EtwpFindDebugId.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     LdrpHandleTlsData @ 0x18002DEC4 (LdrpHandleTlsData.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F760 (RtlInsertInvertedFunctionTable.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002FB1C (LdrpCfgProcessLoadConfig.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002FEF0 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpAccessResourceData @ 0x180030154 (LdrpAccessResourceData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310D8 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180039AE0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpInitializeTls @ 0x180051178 (LdrpInitializeTls.c)
 *     RtlFindExportedRoutineByName @ 0x18007A280 (RtlFindExportedRoutineByName.c)
 *     LdrpRelocateImage @ 0x180084B68 (LdrpRelocateImage.c)
 *     LdrRelocateImage @ 0x180084E1C (LdrRelocateImage.c)
 *     LdrpCorValidateImage @ 0x18008859C (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE50 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpCorFixupImage @ 0x1800908A0 (LdrpCorFixupImage.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800D0FB4 (LdrpGetDelayloadDescriptor.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     LdrEnumResources @ 0x1800DBCF0 (LdrEnumResources.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316B4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180080BE0 (RtlAddressInSectionTable.c)
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
  if ( !OutHeaders )
  {
LABEL_15:
    if ( v9 >= 0 )
      return v5;
    return 0LL;
  }
  if ( OutHeaders->OptionalHeader.Magic == 267 )
  {
    LOBYTE(v10) = v8;
    v9 = RtlpImageDirectoryEntryToData32((__int64)v4, v10, DirectoryEntry, Size, OutHeaders, v14);
    v5 = (PVOID)v14[0];
    goto LABEL_15;
  }
  if ( OutHeaders->OptionalHeader.Magic != 523 )
  {
    v9 = -1073741811;
    goto LABEL_15;
  }
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
