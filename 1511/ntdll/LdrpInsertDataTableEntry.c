/*
 * XREFs of LdrpInsertDataTableEntry @ 0x18000EB38
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpLoadKnownDll @ 0x1800105C0 (LdrpLoadKnownDll.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpHashUnicodeString @ 0x180018FBC (LdrpHashUnicodeString.c)
 */

void __fastcall LdrpInsertDataTableEntry(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  char *v4; // rcx
  char **v5; // rax
  bool v6; // zf
  __int64 **v7; // rcx
  __int64 **v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx

  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
  {
    v2 = LdrpHashUnicodeString(a1 + 88);
    *(_DWORD *)(a1 + 264) = v2;
    v3 = a1 + 112;
    v4 = (char *)&LdrpHashTable + 16 * (v2 & 0x1F);
    v5 = (char **)*((_QWORD *)v4 + 1);
    *(_QWORD *)(a1 + 112) = v4;
    *(_QWORD *)(a1 + 120) = v5;
    if ( *v5 != v4 )
      __fastfail(3u);
    v6 = a1 == LdrpImageEntry;
    *v5 = (char *)v3;
    *((_QWORD *)v4 + 1) = v3;
    if ( v6 )
    {
      v9 = qword_180145210;
      *(_QWORD *)a1 = qword_180145210;
      *(_QWORD *)(a1 + 8) = &qword_180145210;
      if ( *(__int64 **)(v9 + 8) != &qword_180145210 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = a1;
      v10 = qword_180145220;
      qword_180145210 = a1;
      *(_QWORD *)(a1 + 16) = qword_180145220;
      *(_QWORD *)(a1 + 24) = &qword_180145220;
      if ( *(__int64 **)(v10 + 8) != &qword_180145220 )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = a1 + 16;
      qword_180145220 = a1 + 16;
    }
    else
    {
      v7 = (__int64 **)qword_180145218;
      *(_QWORD *)a1 = &qword_180145210;
      *(_QWORD *)(a1 + 8) = v7;
      if ( *v7 != &qword_180145210 )
        __fastfail(3u);
      *v7 = (__int64 *)a1;
      v8 = (__int64 **)qword_180145228;
      qword_180145218 = a1;
      *(_QWORD *)(a1 + 16) = &qword_180145220;
      *(_QWORD *)(a1 + 24) = v8;
      if ( *v8 != &qword_180145220 )
        __fastfail(3u);
      *v8 = (__int64 *)(a1 + 16);
      qword_180145228 = a1 + 16;
    }
    *(_DWORD *)(a1 + 104) |= 0x40u;
  }
}
