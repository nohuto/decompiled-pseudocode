/*
 * XREFs of sub_18000ED0C @ 0x18000ED0C
 * Callers:
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 */

__int64 __fastcall sub_18000ED0C(__int64 a1, int a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-39h]
  __int128 v9; // [rsp+30h] [rbp-29h]
  __int64 (__fastcall **v10)(); // [rsp+40h] [rbp-19h] BYREF
  __int128 v11; // [rsp+48h] [rbp-11h]
  __int128 v12; // [rsp+58h] [rbp-1h]
  __int64 (__fastcall ***v13)(); // [rsp+A0h] [rbp+47h]
  __int64 retaddr; // [rsp+B8h] [rbp+5Fh]

  LODWORD(v9) = a2;
  *(_QWORD *)&v8 = **(_QWORD **)a1;
  v2 = **(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  v4 = **(_QWORD **)(a1 + 24);
  *((_QWORD *)&v8 + 1) = v2;
  *((_QWORD *)&v9 + 1) = *v3;
  v10 = off_18002E268;
  v11 = v8;
  v13 = &v10;
  v12 = v9;
  v5 = sub_18000F804(v4, 3LL, &v10);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_1800025D0(retaddr, 379, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v5);
  sub_1800025D0(retaddr, 265, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v6);
  return v6;
}
