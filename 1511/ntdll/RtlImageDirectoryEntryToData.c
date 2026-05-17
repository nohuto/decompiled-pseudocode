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
  if ( v15 )
  {
    if ( *(_WORD *)(v15 + 24) == 267 )
    {
      LOBYTE(v10) = v8;
      v9 = RtlpImageDirectoryEntryToData32(v4, v10, a3, a4, v15, v14);
      v5 = v14[0];
    }
    else
    {
      if ( *(_WORD *)(v15 + 24) == 523 )
      {
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
      v9 = -1073741811;
    }
  }
  if ( v9 < 0 )
    return 0LL;
  return v5;
}
