/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x180041260
 * Callers:
 *     LdrInitSecurityCookie @ 0x180041130 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180017440 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1, a1, 0LL, v13);
  v8 = RtlImageDirectoryEntryToData(a1, 1, 0xAu, &v14);
  *a3 = 0;
  if ( v8
    && v14
    && v14 == *(_DWORD *)v8
    && *(_DWORD *)v8 >= 0x70u
    && (v9 = *(_QWORD *)(v8 + 88), v9 > a1)
    && v9 < v5 + a1 - 8 )
  {
    v10 = RtlSectionTableFromVirtualAddress(v13[0], v14, (int)v9 - (int)a1);
    if ( v10 && *(int *)(v10 + 36) >= 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = v11;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( v8 && v14 && v14 == *(_DWORD *)v8 && *(_DWORD *)v8 >= 4u )
        *a4 = v8;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
