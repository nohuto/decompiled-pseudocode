/*
 * XREFs of ?TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01E8BDC
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E78EC (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E7A30 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall TransformHimetricDeltaToScreenDelta(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __m128i v18; // xmm6
  INT v19; // eax
  INT v20; // r8d

  if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, *(_QWORD *)&a2, (__int64)a3, a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9) + 408)
      ? (v7 = 0LL)
      : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1),
        !(_DWORD)v7) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 408)
        ? (v17 = 0)
        : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v14,
                                                       v15,
                                                       v16)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v17) )
    {
      v10 = (__m128i *)(*((_QWORD *)a1 + 35) + 60LL);
    }
    else
    {
      v10 = (__m128i *)(*((_QWORD *)a1 + 35) + 28LL);
    }
  }
  else
  {
    v10 = (__m128i *)(*((_QWORD *)a1 + 35) + 44LL);
  }
  v18 = *v10;
  v19 = EngMulDiv(a2.x, _mm_cvtsi128_si32(_mm_srli_si128(*v10, 8)) - _mm_cvtsi128_si32(*v10), *((_DWORD *)a1 + 37));
  v20 = *((_DWORD *)a1 + 38);
  a3->x = v19;
  a3->y = EngMulDiv(a2.y, _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v18, 4)), v20);
}
