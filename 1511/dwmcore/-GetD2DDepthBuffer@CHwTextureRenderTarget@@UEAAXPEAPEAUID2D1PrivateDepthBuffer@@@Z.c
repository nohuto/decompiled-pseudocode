/*
 * XREFs of ?GetD2DDepthBuffer@CHwTextureRenderTarget@@UEAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x18002C750
 * Callers:
 *     ?GetD2DDepthBuffer@CHwTextureRenderTarget@@WLA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800BE020 (-GetD2DDepthBuffer@CHwTextureRenderTarget@@WLA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwTextureRenderTarget::GetD2DDepthBuffer(
        CHwTextureRenderTarget *this,
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
