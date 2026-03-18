/*
 * XREFs of _GetClientRect @ 0x1401E6B9C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1401DA998 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     EtwTraceLayoutChangeStop @ 0x1401F7658 (EtwTraceLayoutChangeStop.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__m128i *__fastcall GetClientRect(__int64 a1, __m128i *a2)
{
  __int64 v3; // rdx
  __m128i *result; // rax
  __int32 v5; // edx
  __int32 v6; // ecx
  __int64 v7; // rbx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D )
  {
    v7 = *(_QWORD *)(GetDispInfo(a1, v3) + 96);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    result = GetMonitorRectForDpi(&v9, v7, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    *a2 = v9;
  }
  else
  {
    *a2 = *(__m128i *)(v3 + 104);
    result = *(__m128i **)(a1 + 40);
    v5 = result[6].m128i_i32[3];
    v6 = result[6].m128i_i32[2];
    a2->m128i_i32[0] -= v6;
    a2->m128i_i32[2] -= v6;
    a2->m128i_i32[3] -= v5;
    a2->m128i_i32[1] -= v5;
  }
  return result;
}
