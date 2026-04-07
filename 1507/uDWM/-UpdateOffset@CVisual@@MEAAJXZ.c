/*
 * XREFs of ?UpdateOffset@CVisual@@MEAAJXZ @ 0x18001E6F0
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::UpdateOffset(CVisual *this)
{
  __int64 v1; // r8
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+34h] [rbp-34h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v1 = *((_QWORD *)this + 2);
  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 26));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 27));
  v7 = 39;
  v8 = 0;
  v11 = 0;
  v12 = 0;
  v9 = *(_OWORD *)&_mm_cvtepi32_pd(v2);
  v10 = *(_OWORD *)&_mm_cvtepi32_pd(v3);
  v8 = *(_DWORD *)(v1 + 24);
  v4 = MilResource_SendCommand(&v7, 0x20u, *(struct MIL_CHANNEL__ **)(v1 + 16));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x86u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x433u);
  }
  return v5;
}
