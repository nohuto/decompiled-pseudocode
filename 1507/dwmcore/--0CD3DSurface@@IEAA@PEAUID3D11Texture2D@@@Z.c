/*
 * XREFs of ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x18001535C
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18001467C (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@XZ @ 0x180015E04 (--0CD3DResource@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD3DSurface *__fastcall CD3DSurface::CD3DSurface(CD3DSurface *this, struct ID3D11Texture2D *a2)
{
  __int64 v4; // rcx

  CD3DResource::CD3DResource(this);
  *(_QWORD *)(v4 + 136) = a2;
  *(_QWORD *)v4 = &CD3DSurface::`vftable'{for `CMILPoolResource'};
  *(_QWORD *)(v4 + 24) = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v4 + 128) = &CD3DSurface::`vftable';
  *(_DWORD *)(v4 + 144) = 0;
  *(_QWORD *)(v4 + 192) = 0LL;
  *(_QWORD *)(v4 + 200) = 0LL;
  *(_QWORD *)(v4 + 208) = 0LL;
  *(_QWORD *)(v4 + 216) = 0LL;
  *(_QWORD *)(v4 + 224) = 0LL;
  ((void (__fastcall *)(struct ID3D11Texture2D *))a2->lpVtbl->AddRef)(a2);
  return this;
}
