/*
 * XREFs of sub_14051E490 @ 0x14051E490
 * Callers:
 *     sub_14051E44C @ 0x14051E44C (sub_14051E44C.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sub_14051E63C @ 0x14051E63C (sub_14051E63C.c)
 *     sub_14051E6B0 @ 0x14051E6B0 (sub_14051E6B0.c)
 *     sub_14051E750 @ 0x14051E750 (sub_14051E750.c)
 *     sub_14051E804 @ 0x14051E804 (sub_14051E804.c)
 *     sub_14051E828 @ 0x14051E828 (sub_14051E828.c)
 *     sub_14051E8D4 @ 0x14051E8D4 (sub_14051E8D4.c)
 *     sub_14051E964 @ 0x14051E964 (sub_14051E964.c)
 *     sub_14051E988 @ 0x14051E988 (sub_14051E988.c)
 *     sub_14051E9EC @ 0x14051E9EC (sub_14051E9EC.c)
 *     sub_14051EA54 @ 0x14051EA54 (sub_14051EA54.c)
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     sub_14051EB88 @ 0x14051EB88 (sub_14051EB88.c)
 *     sub_14051EC20 @ 0x14051EC20 (sub_14051EC20.c)
 *     sub_14051EC88 @ 0x14051EC88 (sub_14051EC88.c)
 *     sub_14051ECEC @ 0x14051ECEC (sub_14051ECEC.c)
 *     sub_14051ED10 @ 0x14051ED10 (sub_14051ED10.c)
 *     sub_14051EDAC @ 0x14051EDAC (sub_14051EDAC.c)
 *     sub_14051EE48 @ 0x14051EE48 (sub_14051EE48.c)
 *     sub_14051EEE4 @ 0x14051EEE4 (sub_14051EEE4.c)
 *     sub_14051EF4C @ 0x14051EF4C (sub_14051EF4C.c)
 *     sub_14051EF68 @ 0x14051EF68 (sub_14051EF68.c)
 *     sub_14051F004 @ 0x14051F004 (sub_14051F004.c)
 *     sub_14051F0B8 @ 0x14051F0B8 (sub_14051F0B8.c)
 *     sub_14051F154 @ 0x14051F154 (sub_14051F154.c)
 *     sub_14051F1B8 @ 0x14051F1B8 (sub_14051F1B8.c)
 *     sub_14051F254 @ 0x14051F254 (sub_14051F254.c)
 *     sub_14051F304 @ 0x14051F304 (sub_14051F304.c)
 *     sub_14051F3B8 @ 0x14051F3B8 (sub_14051F3B8.c)
 *     sub_14051F42C @ 0x14051F42C (sub_14051F42C.c)
 *     sub_14051F4C4 @ 0x14051F4C4 (sub_14051F4C4.c)
 */

__int64 __fastcall sub_14051E490(__int64 *a1)
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

  v1 = (unsigned __int8 *)&unk_14077E9EE;
  v2 = (unsigned __int8 *)&unk_14077E9CE;
  v19 = *a1;
  v4 = 30;
  v5 = 16LL;
  v18 = qword_14077E2D0;
  v6 = BYTE3(v19) | ((BYTE2(v19) | ((BYTE1(v19) | ((unsigned __int8)v19 << 8)) << 8)) << 8);
  v17 = v6;
  v7 = HIBYTE(v19) | ((BYTE6(v19) | ((BYTE5(v19) | (BYTE4(v19) << 8)) << 8)) << 8);
  LODWORD(v19) = v7;
  do
  {
    v8 = v1[1];
    if ( v8 < 0x1Fu )
    {
      v16 = funcs_14051232E[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v6);
      v6 = v17;
      v7 = v16 ^ v19;
      LODWORD(v19) = v16 ^ v19;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_14051232E[*v1](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v18, v7);
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
