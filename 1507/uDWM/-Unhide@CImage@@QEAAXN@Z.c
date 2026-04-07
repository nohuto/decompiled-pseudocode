/*
 * XREFs of ?Unhide@CImage@@QEAAXN@Z @ 0x1800711BC
 * Callers:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180087650 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x180088B60 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x18001E790 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

void __fastcall CImage::Unhide(CImage *this, double a2)
{
  CResource *v2; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (CResource *)*((_QWORD *)this + 37);
  if ( v2 )
  {
    v3[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
    *(double *)&v3[1] = a2;
    CResource::Send(v2, v3, 0x10u);
  }
  else
  {
    CVisual::SendSetOpacity(this, a2);
  }
}
