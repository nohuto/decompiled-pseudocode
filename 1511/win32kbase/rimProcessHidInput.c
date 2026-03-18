/*
 * XREFs of rimProcessHidInput @ 0x1C00C8EA0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimProcessInput @ 0x1C0086E0C (rimProcessInput.c)
 */

__int64 __fastcall rimProcessHidInput(__int64 a1, __int64 a2)
{
  rimProcessInput(a1, a2, *(const void **)(*(_QWORD *)(a2 + 400) + 24LL), (__m128i *)(a2 + 248), 0);
  return ApiSetProcessHidRawInput(a2);
}
