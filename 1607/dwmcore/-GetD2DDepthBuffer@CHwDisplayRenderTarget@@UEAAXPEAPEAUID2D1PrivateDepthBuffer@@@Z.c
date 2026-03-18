/*
 * XREFs of ?GetD2DDepthBuffer@CHwDisplayRenderTarget@@UEAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x18008EDD0
 * Callers:
 *     ?GetD2DDepthBuffer@CHwDisplayRenderTarget@@WLA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800C1050 (-GetD2DDepthBuffer@CHwDisplayRenderTarget@@WLA@EAAXPEAPEAUID2D1PrivateDepthBuffer@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::GetD2DDepthBuffer(
        CHwDisplayRenderTarget *this,
        struct ID2D1PrivateDepthBuffer **a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 21);
  *a2 = *(struct ID2D1PrivateDepthBuffer **)(v2 + 224);
  v3 = *(_QWORD *)(v2 + 224);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}
