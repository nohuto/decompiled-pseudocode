/*
 * XREFs of sub_1404978C4 @ 0x1404978C4
 * Callers:
 *     sub_140497880 @ 0x140497880 (sub_140497880.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     sub_140497A70 @ 0x140497A70 (sub_140497A70.c)
 *     sub_140497AE0 @ 0x140497AE0 (sub_140497AE0.c)
 *     sub_140497B50 @ 0x140497B50 (sub_140497B50.c)
 *     sub_140497BF0 @ 0x140497BF0 (sub_140497BF0.c)
 *     sub_140497C90 @ 0x140497C90 (sub_140497C90.c)
 *     sub_140497D00 @ 0x140497D00 (sub_140497D00.c)
 *     sub_140497D70 @ 0x140497D70 (sub_140497D70.c)
 *     sub_140497E24 @ 0x140497E24 (sub_140497E24.c)
 *     sub_140497E48 @ 0x140497E48 (sub_140497E48.c)
 *     sub_140497E70 @ 0x140497E70 (sub_140497E70.c)
 *     sub_140497F24 @ 0x140497F24 (sub_140497F24.c)
 *     sub_140497F98 @ 0x140497F98 (sub_140497F98.c)
 *     sub_140498004 @ 0x140498004 (sub_140498004.c)
 *     sub_140498028 @ 0x140498028 (sub_140498028.c)
 *     sub_14049808C @ 0x14049808C (sub_14049808C.c)
 *     sub_1404980A8 @ 0x1404980A8 (sub_1404980A8.c)
 *     sub_140498154 @ 0x140498154 (sub_140498154.c)
 *     sub_1404981EC @ 0x1404981EC (sub_1404981EC.c)
 *     sub_140498288 @ 0x140498288 (sub_140498288.c)
 *     sub_140498320 @ 0x140498320 (sub_140498320.c)
 *     sub_1404983BC @ 0x1404983BC (sub_1404983BC.c)
 *     sub_140498424 @ 0x140498424 (sub_140498424.c)
 *     sub_1404984BC @ 0x1404984BC (sub_1404984BC.c)
 *     sub_140498558 @ 0x140498558 (sub_140498558.c)
 *     sub_14049860C @ 0x14049860C (sub_14049860C.c)
 *     sub_1406C135C @ 0x1406C135C (sub_1406C135C.c)
 *     sub_1406C13C0 @ 0x1406C13C0 (sub_1406C13C0.c)
 *     sub_1406C1450 @ 0x1406C1450 (sub_1406C1450.c)
 *     sub_1406C14EC @ 0x1406C14EC (sub_1406C14EC.c)
 *     sub_1406C1588 @ 0x1406C1588 (sub_1406C1588.c)
 */

__int64 __fastcall sub_1404978C4(__int64 *a1)
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

  v1 = (unsigned __int8 *)&unk_140747ABE;
  v2 = (unsigned __int8 *)&unk_140747A9E;
  v19 = *a1;
  v4 = 30;
  v5 = 16LL;
  v18 = qword_1407472C0;
  v6 = BYTE3(v19) | ((BYTE2(v19) | ((BYTE1(v19) | ((unsigned __int8)v19 << 8)) << 8)) << 8);
  v17 = v6;
  v7 = HIBYTE(v19) | ((BYTE6(v19) | ((BYTE5(v19) | (BYTE4(v19) << 8)) << 8)) << 8);
  LODWORD(v19) = v7;
  do
  {
    v8 = v1[1];
    if ( v8 < 0x1Fu )
    {
      v16 = funcs_140497A16[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v18, v6);
      v6 = v17;
      v7 = v16 ^ v19;
      LODWORD(v19) = v16 ^ v19;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_140497A16[*v1](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v18, v7);
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
