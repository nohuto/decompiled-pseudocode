/*
 * XREFs of ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x180079BC4
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800B27C8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18009F06C (--0CD3DResource@@IEAA@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DSurface *__fastcall CD3DSurface::CD3DSurface(CD3DSurface *this, struct ID3D11Texture2D *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9

  CD3DResource::CD3DResource(this, 0);
  *(_QWORD *)(v3 + 136) = v4;
  *(_QWORD *)v3 = &CD3DSurface::`vftable'{for `CMILPoolResource'};
  *(_QWORD *)(v3 + 24) = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v3 + 128) = &CD3DSurface::`vftable';
  *(_DWORD *)(v3 + 144) = 0;
  *(_QWORD *)(v3 + 192) = 0LL;
  *(_QWORD *)(v3 + 200) = 0LL;
  *(_QWORD *)(v3 + 208) = 0LL;
  *(_QWORD *)(v3 + 216) = 0LL;
  *(_QWORD *)(v3 + 224) = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return this;
}
