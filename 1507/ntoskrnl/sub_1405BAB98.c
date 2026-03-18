/*
 * XREFs of sub_1405BAB98 @ 0x1405BAB98
 * Callers:
 *     sub_1405BAB54 @ 0x1405BAB54 (sub_1405BAB54.c)
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

__int64 __fastcall sub_1405BAB98(__int64 *a1)
{
  _BYTE *v1; // rdi
  unsigned __int8 *v2; // rbx
  int v4; // r11d
  char v5; // si
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

  v1 = &unk_14077E9D1;
  v2 = (unsigned __int8 *)&unk_14077E952;
  v18 = *a1;
  v17 = qword_14077E2D0;
  v4 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | ((unsigned __int8)v18 << 8)) << 8)) << 8);
  LODWORD(v18) = v4;
  v5 = 0;
  v6 = ~(HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8));
  v16 = v6;
  v7 = 16LL;
  do
  {
    v8 = *(v1 - 1);
    if ( v8 < 0x1Fu )
    {
      v14 = funcs_14051232E[v8](v5, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
      v6 = v16;
      v4 = v14 ^ v18;
      LODWORD(v18) = v14 ^ v18;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_14051232E[(unsigned __int8)*v1]((char)(v5 + 1), v2[2], v2[3], v2[4], v2[5], (__int64)&v17, v4);
      v4 = v18;
      v6 = v15 ^ v16;
      v16 ^= v15;
    }
    v5 += 2;
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
