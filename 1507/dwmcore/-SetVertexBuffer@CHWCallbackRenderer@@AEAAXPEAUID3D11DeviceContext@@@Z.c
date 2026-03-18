/*
 * XREFs of ?SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x1800DD558
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHWCallbackRenderer::SetVertexBuffer(CHWCallbackRenderer *this, struct ID3D11DeviceContext *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct ID3D11DeviceContextVtbl *lpVtbl; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 10);
  v5 = 0;
  v6 = 32;
  v3 = *(_QWORD *)(v2 + 16);
  lpVtbl = a2->lpVtbl;
  v7 = v3;
  ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, __int64, __int64 *, int *, int *))lpVtbl->IASetVertexBuffers)(
    a2,
    0LL,
    1LL,
    &v7,
    &v6,
    &v5);
}
