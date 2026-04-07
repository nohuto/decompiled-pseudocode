/*
 * XREFs of ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18007DAB0
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800366E0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180036490 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

void __fastcall CAccent::_UpdateTransitionGradient(CAccent *this)
{
  CVisual *v1; // rdx
  signed int v2; // r8d
  int v3; // eax
  __m128i v4; // xmm1
  int v5; // r8d
  int v6; // [rsp+20h] [rbp-38h]
  struct tagRECT v7; // [rsp+30h] [rbp-28h] BYREF

  v1 = (CVisual *)*((_QWORD *)this + 39);
  if ( v1 )
  {
    v2 = *((_DWORD *)this + 145) - *((_DWORD *)this + 143);
    if ( v2 < 0 )
      v2 = 0;
    v3 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
    if ( v3 < 0 )
      v3 = 0;
    v7.left = 0;
    v7.top = 0;
    v4 = _mm_cvtsi32_si128(v2);
    v5 = *((_DWORD *)this + 72);
    *(float *)&v7.right = (float)v3 + 0.0;
    v6 = *((_DWORD *)this + 86);
    *(float *)&v7.bottom = _mm_cvtepi32_ps(v4).m128_f32[0] + 0.0;
    CAccent::_UpdateSolidFill(this, v1, v5, &v7, v6);
  }
}
