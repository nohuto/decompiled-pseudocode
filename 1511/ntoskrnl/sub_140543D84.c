/*
 * XREFs of sub_140543D84 @ 0x140543D84
 * Callers:
 *     sub_140543D40 @ 0x140543D40 (sub_140543D40.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sub_14048AE6C @ 0x14048AE6C (sub_14048AE6C.c)
 *     sub_14048AE90 @ 0x14048AE90 (sub_14048AE90.c)
 *     sub_14048AF2C @ 0x14048AF2C (sub_14048AF2C.c)
 *     sub_14048AFC8 @ 0x14048AFC8 (sub_14048AFC8.c)
 *     sub_14048B030 @ 0x14048B030 (sub_14048B030.c)
 *     sub_14048B094 @ 0x14048B094 (sub_14048B094.c)
 *     sub_14048B0FC @ 0x14048B0FC (sub_14048B0FC.c)
 *     sub_14048B198 @ 0x14048B198 (sub_14048B198.c)
 *     sub_14048B200 @ 0x14048B200 (sub_14048B200.c)
 *     sub_14048B21C @ 0x14048B21C (sub_14048B21C.c)
 *     sub_14048B2D0 @ 0x14048B2D0 (sub_14048B2D0.c)
 *     sub_14048B380 @ 0x14048B380 (sub_14048B380.c)
 *     sub_14048B41C @ 0x14048B41C (sub_14048B41C.c)
 *     sub_14048B4C8 @ 0x14048B4C8 (sub_14048B4C8.c)
 *     sub_14048B52C @ 0x14048B52C (sub_14048B52C.c)
 *     sub_14048B550 @ 0x14048B550 (sub_14048B550.c)
 *     sub_14048B5B8 @ 0x14048B5B8 (sub_14048B5B8.c)
 *     sub_14048B654 @ 0x14048B654 (sub_14048B654.c)
 *     sub_14048B708 @ 0x14048B708 (sub_14048B708.c)
 *     sub_14048B76C @ 0x14048B76C (sub_14048B76C.c)
 *     sub_14048B808 @ 0x14048B808 (sub_14048B808.c)
 *     sub_14048B8BC @ 0x14048B8BC (sub_14048B8BC.c)
 *     sub_14048B958 @ 0x14048B958 (sub_14048B958.c)
 *     sub_14048B9F0 @ 0x14048B9F0 (sub_14048B9F0.c)
 *     sub_14048BA14 @ 0x14048BA14 (sub_14048BA14.c)
 *     sub_14048BAAC @ 0x14048BAAC (sub_14048BAAC.c)
 *     sub_14048BB20 @ 0x14048BB20 (sub_14048BB20.c)
 *     sub_14048BBBC @ 0x14048BBBC (sub_14048BBBC.c)
 *     sub_14048BC4C @ 0x14048BC4C (sub_14048BC4C.c)
 *     sub_14048BCB8 @ 0x14048BCB8 (sub_14048BCB8.c)
 */

__int64 __fastcall sub_140543D84(__int64 *a1)
{
  _BYTE *v1; // rdi
  unsigned __int8 *v2; // rbx
  int v4; // r11d
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // r14
  unsigned __int8 v8; // al
  int v9; // r11d
  int v10; // ecx
  int v11; // r11d
  int v12; // ecx
  __int64 result; // rax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v1 = &unk_1406FB9A1;
  v2 = (unsigned __int8 *)&unk_1406FB922;
  v18 = *a1;
  v17 = qword_1406FB2E8;
  v4 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | ((unsigned __int8)v18 << 8)) << 8)) << 8);
  LODWORD(v18) = v4;
  v5 = 0LL;
  v6 = ~(HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8));
  v16 = v6;
  v7 = 16LL;
  do
  {
    v8 = *(v1 - 1);
    if ( v8 < 0x1Fu )
    {
      v14 = funcs_140466E74[v8](v5, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
      v6 = v16;
      v4 = v14 ^ v18;
      LODWORD(v18) = v14 ^ v18;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_140466E74[(unsigned __int8)*v1](v5 + 1, v2[2], v2[3], v2[4], v2[5], (__int64)&v17, v4);
      v4 = v18;
      v6 = v15 ^ v16;
      v16 ^= v15;
    }
    v5 += 2LL;
    v1 += 2;
    v2 += 8;
    --v7;
  }
  while ( v7 );
  BYTE3(v18) = v4;
  v9 = __ROR4__(v4, 8);
  HIBYTE(v18) = v6;
  BYTE2(v18) = v9;
  v10 = __ROR4__(v6, 8);
  v11 = __ROR4__(v9, 8);
  BYTE6(v18) = v10;
  BYTE1(v18) = v11;
  v12 = __ROR4__(v10, 8);
  BYTE5(v18) = v12;
  BYTE4(v18) = __ROR4__(v12, 8);
  LOBYTE(v18) = __ROR4__(v11, 8);
  result = v18;
  *a1 = v18;
  return result;
}
