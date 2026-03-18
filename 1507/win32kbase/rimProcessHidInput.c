/*
 * XREFs of rimProcessHidInput @ 0x1C00C7FA0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimProcessInput @ 0x1C006F0BC (rimProcessInput.c)
 */

__int64 __fastcall rimProcessHidInput(__int64 a1, __m128i *a2)
{
  rimProcessInput(a1, (__int64)a2, *(const void **)(a2[25].m128i_i64[0] + 24), a2 + 16, 0);
  return ApiSetProcessHidRawInput(a2);
}
