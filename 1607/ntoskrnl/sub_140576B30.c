/*
 * XREFs of sub_140576B30 @ 0x140576B30
 * Callers:
 *     sub_140576AEC @ 0x140576AEC (sub_140576AEC.c)
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

__int64 __fastcall sub_140576B30(__int64 *a1)
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

  v1 = &unk_140747AA1;
  v2 = (unsigned __int8 *)&unk_140747A22;
  v18 = *a1;
  v17 = qword_1407472C0;
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
      v14 = funcs_140497A16[v8](v5, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
      v6 = v16;
      v4 = v14 ^ v18;
      LODWORD(v18) = v14 ^ v18;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_140497A16[(unsigned __int8)*v1]((char)(v5 + 1), v2[2], v2[3], v2[4], v2[5], (__int64)&v17, v4);
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
