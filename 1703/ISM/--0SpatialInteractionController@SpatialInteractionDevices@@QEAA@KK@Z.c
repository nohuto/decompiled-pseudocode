/*
 * XREFs of ??0SpatialInteractionController@SpatialInteractionDevices@@QEAA@KK@Z @ 0x180099544
 * Callers:
 *     ??$make_shared@VSpatialInteractionController@SpatialInteractionDevices@@AEAKAEAI@std@@YA?AV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@0@AEAKAEAI@Z @ 0x18007B164 (--$make_shared@VSpatialInteractionController@SpatialInteractionDevices@@AEAKAEAI@std@@YA-AV-$sha.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

SpatialInteractionDevices::SpatialInteractionController *__fastcall SpatialInteractionDevices::SpatialInteractionController::SpatialInteractionController(
        SpatialInteractionDevices::SpatialInteractionController *this,
        int a2,
        int a3)
{
  char *v6; // rax
  char *v7; // rbx
  SpatialInteractionDevices::SpatialInteractionController *result; // rax

  *((_QWORD *)this + 1) = -1LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 52) = 0;
  memset((char *)this + 106, 0, 0x3EuLL);
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_BYTE *)this + 260) = 0;
  *((_DWORD *)this + 66) = a2;
  *((_DWORD *)this + 67) = a3;
  *((_WORD *)this + 264) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_BYTE *)this + 552) = 0;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  memset((char *)this + 388, 0, 0x8CuLL);
  memset((char *)this + 272, 0, 0x34uLL);
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 93) = _mm_shuffle_ps((__m128)xmmword_1800B2F20, (__m128)xmmword_1800B2F20, 85).m128_u32[0];
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 94) = _mm_shuffle_ps((__m128)xmmword_1800B2F20, (__m128)xmmword_1800B2F20, 170).m128_u32[0];
  *((_DWORD *)this + 95) = _mm_shuffle_ps((__m128)xmmword_1800B2F20, (__m128)xmmword_1800B2F20, 255).m128_u32[0];
  *((_WORD *)this + 192) = 257;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = _mm_shuffle_ps((__m128)xmmword_1800B2F20, (__m128)xmmword_1800B2F20, 85).m128_u32[0];
  *((_DWORD *)this + 87) = _mm_shuffle_ps((__m128)xmmword_1800B2F20, (__m128)xmmword_1800B2F20, 255).m128_u32[0];
  *((_DWORD *)this + 86) = _mm_shuffle_ps((__m128)xmmword_1800B2F20, (__m128)xmmword_1800B2F20, 170).m128_u32[0];
  *((_WORD *)this + 176) = 257;
  v6 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x40uLL);
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 4) = 0LL;
    *(_QWORD *)(v7 + 12) = 0LL;
    *((_WORD *)v7 + 10) = 0;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  result = this;
  *((_QWORD *)this + 70) = v7;
  return result;
}
