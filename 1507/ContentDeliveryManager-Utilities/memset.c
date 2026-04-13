/*
 * XREFs of memset @ 0x18002654C
 * Callers:
 *     sub_1800012D0 @ 0x1800012D0 (sub_1800012D0.c)
 *     sub_1800017D0 @ 0x1800017D0 (sub_1800017D0.c)
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 *     sub_180016F34 @ 0x180016F34 (sub_180016F34.c)
 *     sub_18001702C @ 0x18001702C (sub_18001702C.c)
 *     sub_180020200 @ 0x180020200 (sub_180020200.c)
 *     sub_180021180 @ 0x180021180 (sub_180021180.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
