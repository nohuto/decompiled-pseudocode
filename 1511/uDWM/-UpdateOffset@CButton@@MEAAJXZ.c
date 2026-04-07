/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001F110
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BD18 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18002C348 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  __int64 v1; // r8
  __m128i v2; // xmm0
  __m128i v4; // xmm1
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct tagPOINT v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h] BYREF
  int v12; // [rsp+3Ch] [rbp-2Ch]
  __int64 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+54h] [rbp-14h]

  v1 = *((_QWORD *)this + 2);
  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 26));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 27));
  v12 = 0;
  v15 = 0;
  v11 = 42;
  v16 = 0;
  v13 = *(_OWORD *)&_mm_cvtepi32_pd(v2);
  v14 = *(_OWORD *)&_mm_cvtepi32_pd(v4);
  v12 = *(_DWORD *)(v1 + 24);
  v5 = MilResource_SendCommand(&v11, 0x20u, *(struct MIL_CHANNEL__ **)(v1 + 16));
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x86u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x418u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x114u);
  }
  else
  {
    v7 = *((_QWORD *)this + 39);
    if ( *(_DWORD *)(v7 + 24) != *((_DWORD *)this + 28) || *(_DWORD *)(v7 + 28) != *((_DWORD *)this + 29) )
    {
      *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 14);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v7, 1u, 0x2000u);
    }
    v8 = *((_QWORD *)this + 39);
    if ( *(CButton **)(v8 + 80) == this )
    {
      v10 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v8, &v10);
    }
    else if ( *((_DWORD *)this + 26) != *(_DWORD *)(v8 + 16) || *((_DWORD *)this + 27) != *(_DWORD *)(v8 + 20) )
    {
      *(_QWORD *)(v8 + 16) = *((_QWORD *)this + 13);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v8, 1u, 0x2000u);
    }
  }
  return v6;
}
