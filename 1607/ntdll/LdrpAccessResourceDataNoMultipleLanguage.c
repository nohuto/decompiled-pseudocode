/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x18003122C
 * Callers:
 *     LdrpFindMessageInAlternateModule @ 0x18000D980 (LdrpFindMessageInAlternateModule.c)
 *     LdrpAccessResourceData @ 0x180030164 (LdrpAccessResourceData.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 * Callees:
 *     LdrpGetImageSize @ 0x180031464 (LdrpGetImageSize.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180031680 (RtlSectionTableFromVirtualAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800318FC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     RtlAddressInSectionTable @ 0x180080BF0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned int ImageSize; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h] BYREF

  v5 = a1;
  v6 = RtlpImageDirectoryEntryToDataEx(a1, 1, 2, (unsigned int)&v25, (__int64)&v27);
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
    v14 = RtlImageNtHeader(v5);
    if ( !v14 )
      return 3221225609LL;
    if ( *(_WORD *)(v14 + 24) == 267 )
    {
      v15 = *(unsigned int *)(v14 + 136);
    }
    else if ( *(_WORD *)(v14 + 24) == 523 )
    {
      v15 = *(unsigned int *)(v14 + 152);
    }
    else
    {
      v15 = 0LL;
    }
    if ( !(_DWORD)v15 )
      return 3221225609LL;
    v8 = v5 + (unsigned int)v15 - v7;
    v16 = RtlSectionTableFromVirtualAddress(v14, v13, v15);
    if ( !v16 )
      return 3221225609LL;
    v19 = *a2;
    if ( (unsigned int)v19 > *(_DWORD *)(v16 + 8) )
    {
      LODWORD(v25) = *(_DWORD *)(v16 + 12);
      v21 = RtlSectionTableFromVirtualAddress(v18, v17, v19);
      v27 = v21;
      if ( !v21 )
        return 3221225609LL;
      v23 = RtlAddressInSectionTable(v22, v5, *(unsigned int *)(v21 + 12));
      v8 += v7 + *(unsigned int *)(v27 + 12) - (unsigned __int64)(unsigned int)v25 - v23;
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
