/*
 * XREFs of LdrpAppCompatRedirect @ 0x1800090C4
 * Callers:
 *     LdrpMapDllFullPath @ 0x18000946C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall LdrpAppCompatRedirect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // esi
  __int64 v12; // rbx
  void (__fastcall *v13)(_BYTE *, _BYTE *, __int64); // rdi
  _WORD *v14; // rax
  _BYTE v15[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-40h] BYREF

  v6 = a6;
  if ( g_ShimsEnabled )
  {
    v15[0] = 0;
    v12 = a1;
    v13 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                                g_pfnSE_LdrResolveDllName,
                                                                                                64
                                                                                              - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)));
    if ( a6 >= 0 )
      v12 = a2;
    v13(v16, v15, v12);
    if ( v15[0] )
    {
      *(_DWORD *)(a1 + 24) |= 0x10000u;
      LdrpFreeUnicodeString(a2);
      v14 = *(_WORD **)(a4 + 8);
      *(_WORD *)a4 = 0;
      *v14 = 0;
      return (unsigned int)LdrpResolveDllName(v16, a4, a3, a2, a5, *(_DWORD *)(a1 + 24));
    }
  }
  return v6;
}
