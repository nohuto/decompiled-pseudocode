/*
 * XREFs of memset @ 0x14000C48C
 * Callers:
 *     sub_140001C10 @ 0x140001C10 (sub_140001C10.c)
 *     sub_140001CB8 @ 0x140001CB8 (sub_140001CB8.c)
 *     sub_140001D7C @ 0x140001D7C (sub_140001D7C.c)
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 *     sub_1400038D0 @ 0x1400038D0 (sub_1400038D0.c)
 *     sub_14000455C @ 0x14000455C (sub_14000455C.c)
 *     sub_1400050C0 @ 0x1400050C0 (sub_1400050C0.c)
 *     sub_1400064F8 @ 0x1400064F8 (sub_1400064F8.c)
 *     sub_1400099C4 @ 0x1400099C4 (sub_1400099C4.c)
 *     sub_140009D20 @ 0x140009D20 (sub_140009D20.c)
 *     sub_1400114A8 @ 0x1400114A8 (sub_1400114A8.c)
 *     sub_140011678 @ 0x140011678 (sub_140011678.c)
 *     sub_140011DD0 @ 0x140011DD0 (sub_140011DD0.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 *     sub_1400124C0 @ 0x1400124C0 (sub_1400124C0.c)
 *     sub_14001277C @ 0x14001277C (sub_14001277C.c)
 *     sub_1400130EC @ 0x1400130EC (sub_1400130EC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
