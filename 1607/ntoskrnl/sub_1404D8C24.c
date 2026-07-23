/*
 * XREFs of sub_1404D8C24 @ 0x1404D8C24
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1404D9330 (ExpHwidGetDeviceProperties.c)
 *     sub_1406B9FB4 @ 0x1406B9FB4 (sub_1406B9FB4.c)
 * Callees:
 *     sub_1404D8C64 @ 0x1404D8C64 (sub_1404D8C64.c)
 */

__int64 __fastcall sub_1404D8C24(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_1404D8C64(a1, a2, a1);
  sub_1404D8C64(v2 + 40, v3, v4);
  sub_1404D8C64(v5 + 56, v6, v5);
  return sub_1404D8C64(v7 + 72, v8, v7);
}
