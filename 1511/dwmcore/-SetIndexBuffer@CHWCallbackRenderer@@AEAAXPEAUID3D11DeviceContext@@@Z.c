/*
 * XREFs of ?SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x1800FA0E4
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHWCallbackRenderer::SetIndexBuffer(CHWCallbackRenderer *this, struct ID3D11DeviceContext *a2)
{
  ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, __int64))a2->lpVtbl->IASetIndexBuffer)(
    a2,
    *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
    57LL);
}
