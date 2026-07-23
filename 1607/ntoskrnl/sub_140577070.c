/*
 * XREFs of sub_140577070 @ 0x140577070
 * Callers:
 *     sub_14057702C @ 0x14057702C (sub_14057702C.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     sub_140498500 @ 0x140498500 (sub_140498500.c)
 *     sub_140498570 @ 0x140498570 (sub_140498570.c)
 *     sub_1404985E0 @ 0x1404985E0 (sub_1404985E0.c)
 *     sub_140498680 @ 0x140498680 (sub_140498680.c)
 *     sub_140498720 @ 0x140498720 (sub_140498720.c)
 *     sub_140498790 @ 0x140498790 (sub_140498790.c)
 *     sub_140498800 @ 0x140498800 (sub_140498800.c)
 *     sub_1404988B4 @ 0x1404988B4 (sub_1404988B4.c)
 *     sub_1404988D8 @ 0x1404988D8 (sub_1404988D8.c)
 *     sub_140498900 @ 0x140498900 (sub_140498900.c)
 *     sub_1404989B4 @ 0x1404989B4 (sub_1404989B4.c)
 *     sub_140498A28 @ 0x140498A28 (sub_140498A28.c)
 *     sub_140498A94 @ 0x140498A94 (sub_140498A94.c)
 *     sub_140498AB8 @ 0x140498AB8 (sub_140498AB8.c)
 *     sub_140498B1C @ 0x140498B1C (sub_140498B1C.c)
 *     sub_140498B38 @ 0x140498B38 (sub_140498B38.c)
 *     sub_140498BE4 @ 0x140498BE4 (sub_140498BE4.c)
 *     sub_140498C7C @ 0x140498C7C (sub_140498C7C.c)
 *     sub_140498D18 @ 0x140498D18 (sub_140498D18.c)
 *     sub_140498DB0 @ 0x140498DB0 (sub_140498DB0.c)
 *     sub_140498E4C @ 0x140498E4C (sub_140498E4C.c)
 *     sub_140498EB4 @ 0x140498EB4 (sub_140498EB4.c)
 *     sub_140498F4C @ 0x140498F4C (sub_140498F4C.c)
 *     sub_140498FE8 @ 0x140498FE8 (sub_140498FE8.c)
 *     sub_14049909C @ 0x14049909C (sub_14049909C.c)
 *     sub_1406C1494 @ 0x1406C1494 (sub_1406C1494.c)
 *     sub_1406C14F8 @ 0x1406C14F8 (sub_1406C14F8.c)
 *     sub_1406C1588 @ 0x1406C1588 (sub_1406C1588.c)
 *     sub_1406C1624 @ 0x1406C1624 (sub_1406C1624.c)
 *     sub_1406C16C0 @ 0x1406C16C0 (sub_1406C16C0.c)
 */

__int64 __fastcall sub_140577070(__int64 *a1)
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
      v14 = funcs_1404984A6[v8](v5, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
      v6 = v16;
      v4 = v14 ^ v18;
      LODWORD(v18) = v14 ^ v18;
    }
    if ( *v1 < 0x1Fu )
    {
      v15 = funcs_1404984A6[(unsigned __int8)*v1]((char)(v5 + 1), v2[2], v2[3], v2[4], v2[5], (__int64)&v17, v4);
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
