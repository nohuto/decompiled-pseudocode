/*
 * XREFs of GetMonitorWorkRectForDpi @ 0x140030818
 * Callers:
 *     IsSmallerThanScreen @ 0x14000FB4C (IsSmallerThanScreen.c)
 *     _GetWindowPlacement @ 0x140030188 (_GetWindowPlacement.c)
 *     GetMonitorWorkRect @ 0x1400307D4 (GetMonitorWorkRect.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1400CDC50 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1401767D0 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401FC428 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall GetMonitorWorkRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  INT v7; // r12d
  INT v8; // ebx
  INT v9; // esi
  INT v10; // edi
  INT v11; // eax
  __m128i v12; // xmm6
  INT v13; // r14d
  INT v14; // r15d
  int v15; // ebp
  int v16; // eax
  int v17; // edi
  __m128i a; // [rsp+20h] [rbp-48h]

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 44LL);
  if ( a3 )
  {
    v6 = *(_QWORD *)(a2 + 40);
    v7 = a3;
    v8 = *(unsigned __int16 *)(v6 + 62);
    a = *(__m128i *)(v6 + 28);
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(a, 4));
    v10 = EngMulDiv(a.m128i_i32[0], a3, v8);
    v11 = EngMulDiv(v9, v7, v8);
    v12 = *a1;
    v13 = v11;
    v14 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 60LL);
    v15 = _mm_cvtsi128_si32(*a1);
    v16 = v10 + EngMulDiv(v15 - a.m128i_i32[0], v7, v14);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
    a1->m128i_i32[0] = v16;
    a1->m128i_i32[1] = EngMulDiv(v17 - v9, v7, v14) + v13;
    a1->m128i_i32[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - v15, v7, v14) + a1->m128i_i32[0];
    a1->m128i_i32[3] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) - v17, v7, v14) + a1->m128i_i32[1];
  }
  return a1;
}
