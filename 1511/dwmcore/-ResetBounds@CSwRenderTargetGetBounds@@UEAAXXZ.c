/*
 * XREFs of ?ResetBounds@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800BDC40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CSwRenderTargetGetBounds::ResetBounds(CSwRenderTargetGetBounds *this)
{
  *(_OWORD *)((char *)this + 36) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
}
