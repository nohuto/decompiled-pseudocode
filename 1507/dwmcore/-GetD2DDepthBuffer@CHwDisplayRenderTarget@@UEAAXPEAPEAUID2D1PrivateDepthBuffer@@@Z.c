/*
 * XREFs of ?GetD2DDepthBuffer@CHwDisplayRenderTarget@@UEAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800449F0
 * Callers:
 *     ?GetD2DDepthBuffer@CHwDisplayRenderTarget@@WLA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x18009AC80 (-GetD2DDepthBuffer@CHwDisplayRenderTarget@@WLA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwDisplayRenderTarget::GetD2DDepthBuffer(
        CHwDisplayRenderTarget *this,
        struct ID2D1PrivateDepthBuffer **a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi

  v2 = *((_QWORD *)this + 21);
  *a2 = *(struct ID2D1PrivateDepthBuffer **)(v2 + 224);
  v3 = *(_QWORD *)(v2 + 224);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*(_QWORD *)(v2 + 224));
}
