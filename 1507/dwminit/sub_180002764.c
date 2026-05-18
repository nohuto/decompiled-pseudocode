/*
 * XREFs of sub_180002764 @ 0x180002764
 * Callers:
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_1800023BC @ 0x1800023BC (sub_1800023BC.c)
 *     sub_1800024AC @ 0x1800024AC (sub_1800024AC.c)
 *     sub_1800026B4 @ 0x1800026B4 (sub_1800026B4.c)
 *     sub_180003430 @ 0x180003430 (sub_180003430.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_1800043E0 @ 0x1800043E0 (sub_1800043E0.c)
 *     sub_1800058A0 @ 0x1800058A0 (sub_1800058A0.c)
 *     sub_1800059D4 @ 0x1800059D4 (sub_1800059D4.c)
 *     sub_180005A40 @ 0x180005A40 (sub_180005A40.c)
 */

__int64 sub_180002764()
{
  int v0; // eax
  unsigned int v1; // edi
  bool v2; // bl
  __int64 v3; // rcx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned int v7; // edx
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r9
  _DWORD *v11; // rax
  GUID v13; // [rsp+30h] [rbp-10h] BYREF
  DWORD ExitCode; // [rsp+50h] [rbp+10h] BYREF
  struct _FILETIME ExitTime; // [rsp+58h] [rbp+18h] BYREF

  ExitCode = 0;
  ExitTime = 0LL;
  v0 = sub_1800024AC(&ExitCode, &ExitTime);
  v1 = v0;
  if ( v0 < 0 )
  {
    sub_180003A80((unsigned int)v0, 1041LL);
LABEL_6:
    sub_1800043E0();
    LOBYTE(v8) = 1;
    v1 = -2147467259;
    sub_180003430((unsigned int)&off_18000C068, 2, 1, v8, 1);
    v13 = ActivityId;
    v9 = sub_180005A40();
    sub_1800059D4(v9, &v13);
    if ( qword_18000C070 )
    {
      sub_180001310((_DWORD *)qword_18000C070);
      v11 = (_DWORD *)qword_18000C070;
      if ( qword_18000C070 )
      {
        *(_DWORD *)(qword_18000C070 + 8) = 0;
        v11[3] = 0;
        v11[4] = 0;
        v11[5] = 0;
      }
    }
    byte_18000C078 = 0;
    sub_18000149C(3, -2147467259, dword_18000C698, v10);
    return v1;
  }
  v2 = sub_1800026B4(*(_QWORD *)&ExitTime);
  sub_1800023BC(v3, ExitCode);
  LOBYTE(v4) = 1;
  sub_180003430((unsigned int)&off_18000C068, 0, 1, v4, 1);
  v13 = ActivityId;
  v5 = sub_180005A40();
  sub_1800058A0(v5, &v13, ExitCode);
  v7 = (unsigned __int16)ExitCode | 0x80070000;
  if ( (int)ExitCode <= 0 )
    v7 = ExitCode;
  sub_18000149C(0, v7, dword_18000C698, v6);
  if ( v2 )
    goto LABEL_6;
  return v1;
}
