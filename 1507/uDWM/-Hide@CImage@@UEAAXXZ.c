/*
 * XREFs of ?Hide@CImage@@UEAAXXZ @ 0x180071150
 * Callers:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180087650 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x180088B60 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x18001E790 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

void __fastcall CImage::Hide(CImage *this)
{
  CResource *v1; // rax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v1 = (CResource *)*((_QWORD *)this + 37);
  if ( v1 )
  {
    v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
    CResource::Send(v1, &v2, 0x10u);
  }
  else
  {
    CVisual::SendSetOpacity(this, 0.0);
  }
}
