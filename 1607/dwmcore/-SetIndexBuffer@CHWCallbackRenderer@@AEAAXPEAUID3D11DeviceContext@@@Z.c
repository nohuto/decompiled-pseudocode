/*
 * XREFs of ?SetIndexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x18010F074
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::SetIndexBuffer(CHWCallbackRenderer *this, struct ID3D11DeviceContext *a2)
{
  ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, __int64))a2->lpVtbl->IASetIndexBuffer)(
    a2,
    *(_QWORD *)(*((_QWORD *)this + 14) + 16LL),
    57LL);
}
