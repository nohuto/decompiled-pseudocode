/*
 * XREFs of scl_CopyCurrentCharPoints @ 0x1C00F6D28
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

void *__fastcall scl_CopyCurrentCharPoints(__int64 a1)
{
  memmove(
    *(void **)a1,
    *(const void **)(a1 + 16),
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1));
  return memmove(
           *(void **)(a1 + 8),
           *(const void **)(a1 + 24),
           4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1));
}
