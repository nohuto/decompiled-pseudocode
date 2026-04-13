/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800160BC
 * Callers:
 *     sub_18000DAA8 @ 0x18000DAA8 (sub_18000DAA8.c)
 * Callees:
 *     sub_1800210F0 @ 0x1800210F0 (sub_1800210F0.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  sub_1800210F0("vector<T> too long");
}
