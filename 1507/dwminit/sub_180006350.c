/*
 * XREFs of sub_180006350 @ 0x180006350
 * Callers:
 *     sub_1800066C0 @ 0x1800066C0 (sub_1800066C0.c)
 *     sub_180006760 @ 0x180006760 (sub_180006760.c)
 *     sub_180006800 @ 0x180006800 (sub_180006800.c)
 *     sub_180006900 @ 0x180006900 (sub_180006900.c)
 *     sub_180006A10 @ 0x180006A10 (sub_180006A10.c)
 *     sub_180006B10 @ 0x180006B10 (sub_180006B10.c)
 *     sub_180006BB0 @ 0x180006BB0 (sub_180006BB0.c)
 *     sub_180006D00 @ 0x180006D00 (sub_180006D00.c)
 *     sub_180006DA0 @ 0x180006DA0 (sub_180006DA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180006350(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, 0LL, DelayLoadFailureHook, a2, 0);
}
