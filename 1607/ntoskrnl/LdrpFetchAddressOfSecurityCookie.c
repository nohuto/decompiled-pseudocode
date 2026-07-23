/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x1404831CC
 * Callers:
 *     LdrInitSecurityCookie @ 0x140483128 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140013DE0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        PVOID BaseAddress,
        unsigned int a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rbp
  _QWORD *v8; // rax
  unsigned __int64 v9; // r9
  PIMAGE_NT_HEADERS Size; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &Size);
  v8 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0xAu, (PULONG)&Size);
  *a3 = 0;
  if ( v8
    && (_DWORD)Size
    && (_DWORD)Size == *(_DWORD *)v8
    && *(_DWORD *)v8 >= 0x70u
    && (v9 = v8[11], v9 > (unsigned __int64)BaseAddress)
    && v9 < (unsigned __int64)BaseAddress + v5 - 8 )
  {
    if ( a4 )
      *a4 = v8;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( v8 && (_DWORD)Size && (_DWORD)Size == *(_DWORD *)v8 && *(_DWORD *)v8 >= 4u )
        *a4 = v8;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
