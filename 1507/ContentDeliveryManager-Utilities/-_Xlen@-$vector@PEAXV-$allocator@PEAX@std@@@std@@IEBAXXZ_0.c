/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C
 * Callers:
 *     sub_180004A0C @ 0x180004A0C (sub_180004A0C.c)
 *     sub_180004B28 @ 0x180004B28 (sub_180004B28.c)
 *     sub_180015D50 @ 0x180015D50 (sub_180015D50.c)
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180016F34 @ 0x180016F34 (sub_180016F34.c)
 *     sub_18001702C @ 0x18001702C (sub_18001702C.c)
 *     sub_1800170FC @ 0x1800170FC (sub_1800170FC.c)
 *     sub_180017C2C @ 0x180017C2C (sub_180017C2C.c)
 * Callees:
 *     sub_1800210F0 @ 0x1800210F0 (sub_1800210F0.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  sub_1800210F0("string too long");
}
