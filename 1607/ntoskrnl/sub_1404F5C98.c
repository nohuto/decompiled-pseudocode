/*
 * XREFs of sub_1404F5C98 @ 0x1404F5C98
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1404F63A4 (ExpHwidGetDeviceProperties.c)
 *     sub_1406B9E7C @ 0x1406B9E7C (sub_1406B9E7C.c)
 * Callees:
 *     sub_1404F5CD8 @ 0x1404F5CD8 (sub_1404F5CD8.c)
 */

__int64 __fastcall sub_1404F5C98(__int64 a1, __int64 a2)
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
  sub_1404F5CD8(a1, a2, a1);
  sub_1404F5CD8(v2 + 40, v3, v4);
  sub_1404F5CD8(v5 + 56, v6, v5);
  return sub_1404F5CD8(v7 + 72, v8, v7);
}
