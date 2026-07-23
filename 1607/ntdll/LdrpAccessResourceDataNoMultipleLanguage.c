/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x18003121C
 * Callers:
 *     LdrpFindMessageInAlternateModule @ 0x18000D970 (LdrpFindMessageInAlternateModule.c)
 *     LdrpAccessResourceData @ 0x180030154 (LdrpAccessResourceData.c)
 *     LdrpGetRcConfig @ 0x18003F1C4 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 * Callees:
 *     LdrpGetImageSize @ 0x180031454 (LdrpGetImageSize.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180031670 (RtlSectionTableFromVirtualAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800318EC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x180031C10 (RtlImageNtHeader.c)
 *     RtlAddressInSectionTable @ 0x180080BE0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 BaseOfImage,
        ULONG *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  _IMAGE_SECTION_HEADER *v7; // r13
  char *v8; // r14
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  void *v13; // rdx
  PIMAGE_NT_HEADERS v14; // r11
  ULONG VirtualAddress; // r8d
  PIMAGE_SECTION_HEADER v16; // rax
  void *v17; // rdx
  _IMAGE_NT_HEADERS64 *v18; // r11
  ULONG v19; // r8d
  char *v20; // rcx
  PIMAGE_SECTION_HEADER v21; // rax
  _IMAGE_NT_HEADERS64 *v22; // r11
  _BYTE *v23; // rax
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-38h]
  PIMAGE_SECTION_HEADER v27; // [rsp+48h] [rbp-30h] BYREF

  v5 = BaseOfImage;
  v6 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (__int64)&v27);
  v7 = v27;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v27 = v7;
  if ( !v7 )
    return 3221225609LL;
  v25 = 0LL;
  ImageSize = LdrpGetImageSize(v5, &v25);
  v26 = ImageSize;
  if ( ImageSize == -1073741701 )
    return 3221225595LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v5 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v11 = v25;
  if ( v25 )
  {
    if ( (unsigned __int64)a2 >= v10 + v25 )
      return 3221225595LL;
  }
  v12 = 0;
  if ( (v5 & 3) != 0 )
  {
    v12 = (v5 & 1) != 0;
    v5 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v12 )
  {
    v14 = RtlImageNtHeader((PVOID)v5);
    if ( !v14 )
      return 3221225609LL;
    if ( v14->OptionalHeader.Magic == 267 )
    {
      VirtualAddress = v14->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else if ( v14->OptionalHeader.Magic == 523 )
    {
      VirtualAddress = v14->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      VirtualAddress = 0;
    }
    if ( !VirtualAddress )
      return 3221225609LL;
    v8 = (char *)(v5 + VirtualAddress - (_QWORD)v7);
    v16 = RtlSectionTableFromVirtualAddress(v14, v13, VirtualAddress);
    if ( !v16 )
      return 3221225609LL;
    v19 = *a2;
    if ( *a2 > v16->Misc.PhysicalAddress )
    {
      LODWORD(v25) = v16->VirtualAddress;
      v21 = RtlSectionTableFromVirtualAddress(v18, v17, v19);
      v27 = v21;
      if ( !v21 )
        return 3221225609LL;
      v23 = RtlAddressInSectionTable(v22, (PVOID)v5, v21->VirtualAddress);
      v8 += &v7->Name[v27->VirtualAddress - (unsigned __int64)(unsigned int)v25] - v23;
    }
  }
  if ( a3
    && ((v20 = (char *)(v5 + *a2 - (_QWORD)v8), *a3 = v20, (unsigned __int64)v20 <= v10)
     || v11 && (unsigned __int64)v20 >= v10 + v11) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = a2[1];
    return ImageSize;
  }
}
