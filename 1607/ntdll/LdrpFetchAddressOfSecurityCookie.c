/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x18002FF00
 * Callers:
 *     LdrInitSecurityCookie @ 0x18002FDD0 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180031680 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1LL, a1, 0LL, v14);
  LOBYTE(v8) = 1;
  v9 = RtlImageDirectoryEntryToData(a1, v8, 10LL, &v15);
  *a3 = 0;
  if ( v9
    && v15
    && v15 == *(_DWORD *)v9
    && *(_DWORD *)v9 >= 0x70u
    && (v10 = *(_QWORD *)(v9 + 88), v10 > a1)
    && v10 < v5 + a1 - 8 )
  {
    v11 = RtlSectionTableFromVirtualAddress(v14[0], v15, (unsigned int)(v10 - a1));
    if ( v11 && *(int *)(v11 + 36) >= 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = v12;
    return v10;
  }
  else
  {
    if ( a4 )
    {
      if ( v9 && v15 && v15 == *(_DWORD *)v9 && *(_DWORD *)v9 >= 4u )
        *a4 = v9;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
