/*
 * XREFs of sub_14045C114 @ 0x14045C114
 * Callers:
 *     sub_14045913C @ 0x14045913C (sub_14045913C.c)
 *     sub_140677AC0 @ 0x140677AC0 (sub_140677AC0.c)
 * Callees:
 *     sub_14045C154 @ 0x14045C154 (sub_14045C154.c)
 */

__int64 __fastcall sub_14045C114(__int64 a1, __int64 a2)
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
  sub_14045C154(a1, a2, a1);
  sub_14045C154(v2 + 40, v3, v4);
  sub_14045C154(v5 + 56, v6, v5);
  return sub_14045C154(v7 + 72, v8, v7);
}
