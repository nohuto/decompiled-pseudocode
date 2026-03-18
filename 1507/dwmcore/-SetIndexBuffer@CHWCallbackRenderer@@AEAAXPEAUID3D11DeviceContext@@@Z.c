/*
 * XREFs of ?SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x1800DD5C8
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHWCallbackRenderer::SetIndexBuffer(CHWCallbackRenderer *this, struct ID3D11DeviceContext *a2)
{
  ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, __int64))a2->lpVtbl->IASetIndexBuffer)(
    a2,
    *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
    57LL);
}
