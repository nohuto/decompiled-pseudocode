/*
 * XREFs of sub_18000CF44 @ 0x18000CF44
 * Callers:
 *     unknown_libname_21 @ 0x180027185 (unknown_libname_21.c)
 * Callees:
 *     sub_18001370C @ 0x18001370C (sub_18001370C.c)
 */

__int64 __fastcall sub_18000CF44(_QWORD *a1)
{
  *a1 = off_18002E4D8;
  sub_18001370C();
  return sub_18000D394(a1);
}
