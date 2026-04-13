/*
 * XREFs of sub_18000C954 @ 0x18000C954
 * Callers:
 *     sub_180027047 @ 0x180027047 (sub_180027047.c)
 * Callees:
 *     sub_18001370C @ 0x18001370C (sub_18001370C.c)
 */

__int64 __fastcall sub_18000C954(_QWORD *a1)
{
  *a1 = off_18002D520;
  sub_18001370C();
  return sub_18000D394(a1);
}
