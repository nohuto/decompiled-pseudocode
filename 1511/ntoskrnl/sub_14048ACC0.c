/*
 * XREFs of sub_14048ACC0 @ 0x14048ACC0
 * Callers:
 *     sub_14048AC7C @ 0x14048AC7C (sub_14048AC7C.c)
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

__int64 __fastcall sub_14048ACC0(__int64 *a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 *v2; // rbx
  int v4; // esi
  __int64 v5; // r14
  int v6; // r11d
  int v7; // ecx
  unsigned __int8 v8; // al
  int v9; // ecx
  int v10; // r11d
  int v11; // ecx
  int v12; // r11d
  int v13; // ecx
  __int64 result; // rax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_1406FB9BE;
  v2 = (unsigned __int8 *)&unk_1406FB99E;
  v19 = *a1;
  v4 = 30;
  v5 = 16LL;
  v18 = qword_1406FB2E8;
  v6 = BYTE3(v19) | ((BYTE2(v19) | ((BYTE1(v19) | ((unsigned __int8)v19 << 8)) << 8)) << 8);
  v17 = v6;
  v7 = HIBYTE(v19) | ((BYTE6(v19) | ((BYTE5(v19) | (BYTE4(v19) << 8)) << 8)) << 8);
  LODWORD(v19) = v7;
  do
  {
    v8 = v1[1];
    if ( v8 < 0x1Fu )
    {
      v16 = funcs_140466E74[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v6);
      v6 = v17;
      v7 = v16 ^ v19;
      LODWORD(v19) = v16 ^ v19;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_140466E74[*v1](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v18, v7);
      v7 = v19;
      v6 = v15 ^ v17;
      v17 ^= v15;
    }
    v4 -= 2;
    v1 -= 2;
    v2 -= 8;
    --v5;
  }
  while ( v5 );
  v9 = ~v7;
  BYTE3(v19) = v6;
  v10 = __ROR4__(v6, 8);
  HIBYTE(v19) = v9;
  v11 = __ROR4__(v9, 8);
  BYTE2(v19) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE6(v19) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE1(v19) = v12;
  BYTE5(v19) = v13;
  BYTE4(v19) = __ROR4__(v13, 8);
  LOBYTE(v19) = __ROR4__(v12, 8);
  result = v19;
  *a1 = v19;
  return result;
}
