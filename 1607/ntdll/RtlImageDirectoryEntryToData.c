/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x180031B00
 * Callers:
 *     EtwpFindDebugId @ 0x180002004 (EtwpFindDebugId.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapAndSnapDependency @ 0x180016434 (LdrpMapAndSnapDependency.c)
 *     LdrpHandleTlsData @ 0x18002DED4 (LdrpHandleTlsData.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F770 (RtlInsertInvertedFunctionTable.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002FB2C (LdrpCfgProcessLoadConfig.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002FF00 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpAccessResourceData @ 0x180030164 (LdrpAccessResourceData.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310E8 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180039AF0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpInitializeTls @ 0x180051188 (LdrpInitializeTls.c)
 *     RtlFindExportedRoutineByName @ 0x18007A290 (RtlFindExportedRoutineByName.c)
 *     LdrpRelocateImage @ 0x180084B78 (LdrpRelocateImage.c)
 *     LdrRelocateImage @ 0x180084E2C (LdrRelocateImage.c)
 *     LdrpCorValidateImage @ 0x1800885AC (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE60 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpCorFixupImage @ 0x1800908B0 (LdrpCorFixupImage.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800D0EF4 (LdrpGetDelayloadDescriptor.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     LdrEnumResources @ 0x1800DBC30 (LdrEnumResources.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316C4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180080BF0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  char v8; // si
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v15 = 0LL;
  v5 = 0LL;
  v14[0] = 0LL;
  v8 = a2;
  if ( (a1 & 3) != 0 )
  {
    v8 = a2;
    if ( (a1 & 1) != 0 )
      v8 = 0;
    v4 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v9 = RtlImageNtHeaderEx(1LL, v4, 0LL, &v15);
  v11 = v15;
  if ( !v15 )
  {
LABEL_15:
    if ( v9 >= 0 )
      return v5;
    return 0LL;
  }
  if ( *(_WORD *)(v15 + 24) == 267 )
  {
    LOBYTE(v10) = v8;
    v9 = RtlpImageDirectoryEntryToData32(v4, v10, a3, a4, v15, v14);
    v5 = v14[0];
    goto LABEL_15;
  }
  if ( *(_WORD *)(v15 + 24) != 523 )
  {
    v9 = -1073741811;
    goto LABEL_15;
  }
  if ( (unsigned int)a3 >= *(_DWORD *)(v15 + 132) )
    return 0LL;
  v12 = *(unsigned int *)(v15 + 8LL * a3 + 136);
  if ( !(_DWORD)v12 )
    return 0LL;
  *a4 = *(_DWORD *)(v15 + 8LL * a3 + 140);
  if ( !v8 && (unsigned int)v12 >= *(_DWORD *)(v11 + 84) )
  {
    v5 = RtlAddressInSectionTable(v11, v4, (unsigned int)v12);
    if ( v5 )
      return v5;
    return 0LL;
  }
  return v4 + v12;
}
