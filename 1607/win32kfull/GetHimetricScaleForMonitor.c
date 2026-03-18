/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01DBEC0
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0213560 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01DAF8C (-ReduceFraction@@YAXPEAK0@Z.c)
 */

char __fastcall GetHimetricScaleForMonitor(__int64 a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __m128i v24; // xmm6
  __m128i v25; // xmm7
  int v26; // r9d
  unsigned int i; // ecx
  unsigned int v29; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+24h] [rbp-3Ch] BYREF
  int v31; // [rsp+28h] [rbp-38h] BYREF
  int v32; // [rsp+2Ch] [rbp-34h]
  int v33; // [rsp+30h] [rbp-30h]
  int v34; // [rsp+34h] [rbp-2Ch]

  LOBYTE(v7) = W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2, (__int64)a3, a4) & 0xF;
  if ( (_BYTE)v7 == 2 )
  {
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 408)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v12,
                                                       v14,
                                                       v15)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
          ? (v23 = 0)
          : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v20,
                                                         v21,
                                                         v22)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v16 = (__m128i *)(a1 + 60),
            !v23) )
      {
        v16 = (__m128i *)(a1 + 28);
      }
    }
    else
    {
      v16 = (__m128i *)(a1 + 44);
    }
    v24 = *v16;
    v25 = *(__m128i *)(a1 + 28);
    ExpandedMonitorSpace(&v31);
    v26 = v33 - v31;
    v31 = 0;
    v33 = v26;
    v34 -= v32;
    v32 = 0;
    v29 = *(_DWORD *)(gpsi + 2192LL) * (_mm_cvtsi128_si32(_mm_srli_si128(v24, 8)) - _mm_cvtsi128_si32(v24));
    v30 = v26 * (_mm_cvtsi128_si32(_mm_srli_si128(v25, 8)) - _mm_cvtsi128_si32(v25));
    ReduceFraction(&v29, &v30);
    v7 = v29;
    for ( i = v30; v7 > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
      v7 >>= 1;
    if ( !i || !v7 )
    {
      i = 1;
      v7 = 1;
    }
    *a2 = v7;
    *a3 = i;
  }
  return v7;
}
