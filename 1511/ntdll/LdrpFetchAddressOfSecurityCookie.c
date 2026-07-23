/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x18000FF68
 * Callers:
 *     LdrInitSecurityCookie @ 0x18000FE38 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180031610 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        PVOID BaseOfImage,
        unsigned int a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rbp
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdi
  PIMAGE_SECTION_HEADER v10; // rax
  __int64 v11; // r11
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-28h] BYREF
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  v8 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  *a3 = 0;
  if ( v8
    && Size
    && Size == *(_DWORD *)v8
    && *(_DWORD *)v8 >= 0x70u
    && (v9 = v8[11], v9 > (unsigned __int64)BaseOfImage)
    && v9 < (unsigned __int64)BaseOfImage + v5 - 8 )
  {
    v10 = RtlSectionTableFromVirtualAddress(OutHeaders, (PVOID)Size, (int)v9 - (int)BaseOfImage);
    if ( v10 && (v10->Characteristics & 0x80000000) == 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = v11;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( v8 && Size && Size == *(_DWORD *)v8 && *(_DWORD *)v8 >= 4u )
        *a4 = v8;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
