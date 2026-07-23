/*
 * XREFs of LdrpAppCompatRedirect @ 0x180042DFC
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180042CB4 (LdrpMapDllFullPath.c)
 * Callees:
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall LdrpAppCompatRedirect(
        __int64 a1,
        _OWORD *a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // esi
  _OWORD *v12; // rbx
  void (__fastcall *v13)(_UNICODE_STRING *, _BYTE *, _OWORD *); // rdi
  unsigned __int16 *Buffer; // rax
  _BYTE v15[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNICODE_STRING v16; // [rsp+38h] [rbp-40h] BYREF

  v6 = a6;
  if ( g_ShimsEnabled )
  {
    v15[0] = 0;
    v12 = (_OWORD *)a1;
    v13 = (void (__fastcall *)(_UNICODE_STRING *, _BYTE *, _OWORD *))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_LdrResolveDllName, 64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)));
    if ( a6 >= 0 )
      v12 = a2;
    v13(&v16, v15, v12);
    if ( v15[0] )
    {
      *(_DWORD *)(a1 + 24) |= 0x10000u;
      LdrpFreeUnicodeString((__int64)a2);
      Buffer = a4->Buffer;
      a4->Length = 0;
      *Buffer = 0;
      return (unsigned int)LdrpResolveDllName(&v16, a4, a3, a2, a5, *(_DWORD *)(a1 + 24));
    }
  }
  return v6;
}
