/*
 * XREFs of ?SetAlphaMode@CHwTextureRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18017BE70
 * Callers:
 *     ?SetAlphaMode@CHwTextureRenderTarget@@WLA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C1980 (-SetAlphaMode@CHwTextureRenderTarget@@WLA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwTextureRenderTarget::SetAlphaMode(CHwTextureRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 55) != a2 )
  {
    v3[0] = *((_DWORD *)this + 54);
    v3[2] = *((_DWORD *)this + 56);
    v4 = *((_QWORD *)this + 29);
    v2 = *(_QWORD *)this;
    v3[1] = a2;
    (*(void (__fastcall **)(CHwTextureRenderTarget *, _DWORD *))(v2 + 200))(this, v3);
  }
}
