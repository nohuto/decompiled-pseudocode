/*
 * XREFs of ?SetVertexBuffer@CHWCallbackRenderer@@AEAAXPEAUID3D11DeviceContext@@@Z @ 0x18010F00C
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::SetVertexBuffer(CHWCallbackRenderer *this, struct ID3D11DeviceContext *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 13);
  v3 = *(int *)(v2 + 64);
  v4 = 0;
  v5 = dword_1801C65A0[v3];
  v6 = *(_QWORD *)(v2 + 16);
  ((void (__fastcall *)(struct ID3D11DeviceContext *, _QWORD, __int64, __int64 *, int *, int *))a2->lpVtbl->IASetVertexBuffers)(
    a2,
    0LL,
    1LL,
    &v6,
    &v5,
    &v4);
}
