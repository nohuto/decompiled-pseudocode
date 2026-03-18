/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01E55B0
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C021A790 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01E46A8 (-ReduceFraction@@YAXPEAK0@Z.c)
 */

__int64 __fastcall GetHimetricScaleForMonitor(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __m128i *v9; // rax
  int v10; // ecx
  __m128i v11; // xmm6
  __m128i v12; // xmm7
  int v13; // r9d
  unsigned int i; // ecx
  unsigned int v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-3Ch] BYREF
  int v17; // [rsp+28h] [rbp-38h] BYREF
  int v18; // [rsp+2Ch] [rbp-34h]
  int v19; // [rsp+30h] [rbp-30h]
  int v20; // [rsp+34h] [rbp-2Ch]

  result = PsGetCurrentProcessWin32Process(a1);
  if ( (*(_DWORD *)(result + 776) & 0x4000) != 0 )
  {
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v8 = 0LL)
        : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
          !(_DWORD)v8) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v10 = 0)
          : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v9 = (__m128i *)(a1 + 60),
            !v10) )
      {
        v9 = (__m128i *)(a1 + 28);
      }
    }
    else
    {
      v9 = (__m128i *)(a1 + 44);
    }
    v11 = *v9;
    v12 = *(__m128i *)(a1 + 28);
    ExpandedMonitorSpace(&v17);
    v13 = v19 - v17;
    v17 = 0;
    v19 = v13;
    v20 -= v18;
    v18 = 0;
    v16 = *(_DWORD *)(gpsi + 2192LL) * (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) - _mm_cvtsi128_si32(v11));
    v15 = v13 * (_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - _mm_cvtsi128_si32(v12));
    ReduceFraction(&v16, &v15);
    result = v16;
    for ( i = v15; (unsigned int)result > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
      result = (unsigned int)result >> 1;
    if ( !i || !(_DWORD)result )
    {
      i = 1;
      result = 1LL;
    }
    *a2 = result;
    *a3 = i;
  }
  return result;
}
