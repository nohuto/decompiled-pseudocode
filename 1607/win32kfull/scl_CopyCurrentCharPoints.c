/*
 * XREFs of scl_CopyCurrentCharPoints @ 0x1C0115120
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 */

void *__fastcall scl_CopyCurrentCharPoints(__int64 a1)
{
  memmove(
    *(void **)a1,
    *(const void **)(a1 + 16),
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1));
  return memmove(
           *(void **)(a1 + 8),
           *(const void **)(a1 + 24),
           4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1));
}
