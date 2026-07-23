/*
 * XREFs of SymCryptSha256Result @ 0x140136E50
 * Callers:
 *     SymCryptSha256 @ 0x140136DE8 (SymCryptSha256.c)
 * Callees:
 *     SymCryptSha256AppendBlocks_ul1 @ 0x140136F40 (SymCryptSha256AppendBlocks_ul1.c)
 *     SymCryptWipeAsm @ 0x140159710 (SymCryptWipeAsm.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x140235918 (SymCryptSha256AppendBlocks_shani.c)
 */

__int64 __fastcall SymCryptSha256Result(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // r8
  unsigned int v5; // r8d
  unsigned int *v6; // rdx
  unsigned int *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int *v12; // rdx
  unsigned int *v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *((_BYTE *)a1 + v2 + 32) = 0x80;
  v5 = v2 + 1;
  if ( v5 > 0x38 )
  {
    SymCryptWipeAsm((char *)a1 + v5 + 32, 64 - v5);
    v12 = a1 + 8;
    v13 = a1 + 24;
    if ( (g_SymCryptCpuFeaturesNotPresent & 0x42) != 0 )
      SymCryptSha256AppendBlocks_ul1(v13, v12, 64LL, &v14);
    else
      SymCryptSha256AppendBlocks_shani(v13, v12, 64LL, &v14);
    v5 = 0;
  }
  SymCryptWipeAsm((char *)a1 + v5 + 32, 64 - v5);
  v6 = a1 + 8;
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  v7 = a1 + 24;
  if ( (g_SymCryptCpuFeaturesNotPresent & 0x42) != 0 )
    SymCryptSha256AppendBlocks_ul1(v7, v6, 64LL, &v14);
  else
    SymCryptSha256AppendBlocks_shani(v7, v6, 64LL, &v14);
  v8 = (__int64 *)(a1 + 24);
  v9 = 4LL;
  do
  {
    v10 = *v8++;
    *a2++ = _byteswap_uint64(__ROL8__(v10, 32));
    --v9;
  }
  while ( v9 );
  result = SymCryptWipeAsm(a1, 128LL);
  *((_OWORD *)a1 + 6) = xmmword_140271FE0;
  *((_OWORD *)a1 + 7) = xmmword_140271FF0;
  return result;
}
