/*
 * XREFs of rimProcessHidInput @ 0x1C00D84F0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimProcessInput @ 0x1C000FF78 (rimProcessInput.c)
 */

__int64 __fastcall rimProcessHidInput(__int64 a1, __m128i *a2)
{
  rimProcessInput(a1, (__int64)a2, *(const void **)(a2[29].m128i_i64[0] + 24), a2 + 16, 0);
  return ApiSetProcessHidRawInput(a2);
}
