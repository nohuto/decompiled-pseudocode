/*
 * XREFs of memcpy @ 0x14000C480
 * Callers:
 *     sub_140002310 @ 0x140002310 (sub_140002310.c)
 *     sub_140004EC0 @ 0x140004EC0 (sub_140004EC0.c)
 *     sub_1400066B0 @ 0x1400066B0 (sub_1400066B0.c)
 *     sub_140006B70 @ 0x140006B70 (sub_140006B70.c)
 *     sub_1400089B0 @ 0x1400089B0 (sub_1400089B0.c)
 *     sub_14000F578 @ 0x14000F578 (sub_14000F578.c)
 *     sub_140011B90 @ 0x140011B90 (sub_140011B90.c)
 *     sub_1400124C0 @ 0x1400124C0 (sub_1400124C0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t MaxCount)
{
  return __imp_memcpy(a1, Src, MaxCount);
}
