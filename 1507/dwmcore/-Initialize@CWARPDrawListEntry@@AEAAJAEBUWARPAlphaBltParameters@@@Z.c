/*
 * XREFs of ?Initialize@CWARPDrawListEntry@@AEAAJAEBUWARPAlphaBltParameters@@@Z @ 0x1800FF204
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x1800FF108 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1800FF1D8 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 *     ?InterpolationModeToWarpFilterMode2@@YA?AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800FF408 (-InterpolationModeToWarpFilterMode2@@YA-AW4Enum@WarpFilterMode2@@AEBW4D2D1_INTERPOLATION_MODE@@@.c)
 *     ?SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800FF424 (-SetAntialiasMode@CWARPDrawListEntry@@AEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z @ 0x1800FF448 (-SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z.c)
 *     ?SetOpacity@CWARPDrawListEntry@@AEAAXM@Z @ 0x1800FF4AC (-SetOpacity@CWARPDrawListEntry@@AEAAXM@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Initialize(CWARPDrawListEntry *this, const struct WARPAlphaBltParameters *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  CBitmapOfDeviceBitmaps *v10; // rcx
  char *v11; // rax
  int v12; // eax

  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 3);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 1);
  CWARPDrawListEntry::SetAntialiasMode(this, *((enum D2D1_ANTIALIAS_MODE *)a2 + 8));
  CWARPDrawListEntry::SetBlendMode(v4, *((unsigned int *)a2 + 9));
  if ( !*((_BYTE *)a2 + 40) )
  {
    v6 = *((_DWORD *)a2 + 9);
    if ( v6 == 4 || v6 == 6 || v6 == 17 || v6 == 20 )
    {
      *(_DWORD *)(v5 + 64) &= ~0x800u;
      *(_DWORD *)(v5 + 64) |= 0x700u;
    }
  }
  if ( *((_BYTE *)a2 + 41) )
  {
    v7 = *(__m128 *)((char *)a2 + 44);
    v8 = *(__m128 *)((char *)a2 + 60);
    v9 = *(__m128 *)((char *)a2 + 92);
    *(_BYTE *)(v5 + 72) = 1;
    *(_DWORD *)(v5 + 76) = v7.m128_i32[0];
    *(_DWORD *)(v5 + 80) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
    *(_DWORD *)(v5 + 92) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    *(_DWORD *)(v5 + 88) = v8.m128_i32[0];
    *(_DWORD *)(v5 + 100) = v9.m128_i32[0];
    *(_DWORD *)(v5 + 108) = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
    *(_DWORD *)(v5 + 84) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
    *(_DWORD *)(v5 + 96) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
    *(_DWORD *)(v5 + 104) = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  }
  v10 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)a2 + 14);
  if ( v10 )
  {
    *((_QWORD *)this + 14) = v10;
    CBitmapOfDeviceBitmaps::AddRef(v10);
    *((_DWORD *)this + 78) = *((_DWORD *)a2 + 30);
    *((_DWORD *)this + 79) = *((_DWORD *)a2 + 31);
    *((_DWORD *)this + 80) = *((_DWORD *)a2 + 32);
    *((_DWORD *)this + 81) = *((_DWORD *)a2 + 33);
    *((_DWORD *)this + 82) = *((_DWORD *)a2 + 34);
    *((_DWORD *)this + 83) = *((_DWORD *)a2 + 35);
    if ( *((_BYTE *)a2 + 144) )
    {
      *((_DWORD *)this + 84) = *((_DWORD *)a2 + 37);
      *((_DWORD *)this + 86) = *((_DWORD *)a2 + 39);
      *((_DWORD *)this + 85) = *((_DWORD *)a2 + 38);
      *((_DWORD *)this + 87) = *((_DWORD *)a2 + 40);
    }
    *((_DWORD *)this + 16) &= 0xFFFFFFC7;
    *((_DWORD *)this + 16) |= 4u;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 0;
    *((_QWORD *)this + 16) = (char *)this + 312;
    if ( *((_BYTE *)a2 + 144) )
      v11 = (char *)this + 336;
    else
      v11 = 0LL;
    *((_QWORD *)this + 18) = v11;
    *((_DWORD *)this + 43) = ExtendModeToWarpAddressMode((_DWORD *)a2 + 41);
    *((_DWORD *)this + 44) = ExtendModeToWarpAddressMode((_DWORD *)a2 + 42);
    v12 = InterpolationModeToWarpFilterMode2((char *)a2 + 172);
    *((_DWORD *)this + 39) = 0;
    *((_DWORD *)this + 41) = 0;
    *((_DWORD *)this + 42) = v12;
    *((_DWORD *)this + 40) = 1;
  }
  CWARPDrawListEntry::SetOpacity(this, *((float *)a2 + 44));
  return 0LL;
}
