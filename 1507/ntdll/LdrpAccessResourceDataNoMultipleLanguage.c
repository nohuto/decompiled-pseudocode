/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554
 * Callers:
 *     LdrpGetRcConfig @ 0x180018978 (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x180018AC0 (LdrpAccessResourceData.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindMessageInAlternateModule @ 0x180065170 (LdrpFindMessageInAlternateModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180015594 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlAddressInSectionTable @ 0x180017410 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180017440 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpGetImageSize @ 0x180017484 (LdrpGetImageSize.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r11
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r11
  unsigned int v19; // r8d
  unsigned __int64 v20; // rcx
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF

  v5 = a1;
  v6 = RtlpImageDirectoryEntryToDataEx(a1, 1, 2u, &v22, &v24);
  v7 = v24;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v24 = v7;
  if ( !v7 )
    return 3221225609LL;
  v22 = 0LL;
  ImageSize = LdrpGetImageSize(v5, &v22);
  v23 = ImageSize;
  if ( ImageSize == -1073741701 )
    return 3221225595LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v5 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v11 = v22;
  if ( v22 )
  {
    if ( (unsigned __int64)a2 >= v10 + v22 )
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
    v14 = RtlImageNtHeader(v5);
    if ( !v14 )
      return 3221225609LL;
    if ( *(_WORD *)(v14 + 24) == 267 )
    {
      v15 = *(_DWORD *)(v14 + 136);
    }
    else if ( *(_WORD *)(v14 + 24) == 523 )
    {
      v15 = *(_DWORD *)(v14 + 152);
    }
    else
    {
      v15 = 0;
    }
    if ( !v15 )
      return 3221225609LL;
    v8 = v5 + v15 - v7;
    v16 = RtlSectionTableFromVirtualAddress(v14, v13, v15);
    if ( !v16 )
      return 3221225609LL;
    v19 = *a2;
    if ( *a2 > *(_DWORD *)(v16 + 8) )
    {
      LODWORD(v22) = *(_DWORD *)(v16 + 12);
      v24 = RtlSectionTableFromVirtualAddress(v18, v17, v19);
      if ( !v24 )
        return 3221225609LL;
      v8 += v7 + *(unsigned int *)(v24 + 12) - (unsigned __int64)(unsigned int)v22 - RtlAddressInSectionTable();
    }
  }
  if ( a3 && ((v20 = v5 + *a2 - v8, *a3 = v20, v20 <= v10) || v11 && v20 >= v10 + v11) )
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
