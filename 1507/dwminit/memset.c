/*
 * XREFs of memset @ 0x180007606
 * Callers:
 *     sub_180001564 @ 0x180001564 (sub_180001564.c)
 *     sub_180001984 @ 0x180001984 (sub_180001984.c)
 *     sub_180001DB8 @ 0x180001DB8 (sub_180001DB8.c)
 *     sub_180001E78 @ 0x180001E78 (sub_180001E78.c)
 *     sub_1800023BC @ 0x1800023BC (sub_1800023BC.c)
 *     sub_180002608 @ 0x180002608 (sub_180002608.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 *     sub_180003CF0 @ 0x180003CF0 (sub_180003CF0.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_180004FC0 @ 0x180004FC0 (sub_180004FC0.c)
 *     sub_180005DB4 @ 0x180005DB4 (sub_180005DB4.c)
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
