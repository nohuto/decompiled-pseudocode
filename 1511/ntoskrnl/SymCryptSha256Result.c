/*
 * XREFs of SymCryptSha256Result @ 0x140134764
 * Callers:
 *     SymCryptSha256 @ 0x1401346FC (SymCryptSha256.c)
 * Callees:
 *     SymCryptSha256AppendBlocks_ul1 @ 0x14013D370 (SymCryptSha256AppendBlocks_ul1.c)
 *     SymCryptWipeAsm @ 0x14014FC80 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptSha256Result(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // r8
  unsigned int v5; // r8d
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *((_BYTE *)a1 + v2 + 32) = 0x80;
  v5 = v2 + 1;
  if ( v5 > 0x38 )
  {
    SymCryptWipeAsm((char *)a1 + v5 + 32, 64 - v5);
    SymCryptSha256AppendBlocks_ul1(a1 + 24, a1 + 8, 64LL, &v10);
    v5 = 0;
  }
  SymCryptWipeAsm((char *)a1 + v5 + 32, 64 - v5);
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  SymCryptSha256AppendBlocks_ul1(a1 + 24, a1 + 8, 64LL, &v10);
  v6 = (__int64 *)(a1 + 24);
  v7 = 4LL;
  do
  {
    v8 = *v6++;
    *a2++ = _byteswap_uint64(__ROL8__(v8, 32));
    --v7;
  }
  while ( v7 );
  result = SymCryptWipeAsm(a1, 128LL);
  *((_OWORD *)a1 + 6) = xmmword_140249BD8;
  *((_OWORD *)a1 + 7) = xmmword_140249BE8;
  return result;
}
