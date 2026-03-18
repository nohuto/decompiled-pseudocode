/*
 * XREFs of ??0CD3DTexture@@IEAA@XZ @ 0x180084E44
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800144F8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18013CFDC (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@XZ @ 0x180015E04 (--0CD3DResource@@IEAA@XZ.c)
 */

CD3DTexture *__fastcall CD3DTexture::CD3DTexture(CD3DTexture *this)
{
  __int64 v1; // rcx

  CD3DResource::CD3DResource(this);
  *(_QWORD *)(v1 + 24) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)v1 = &CD3DTexture::`vftable'{for `CMILPoolResource'};
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 180) = 0LL;
  *(_DWORD *)(v1 + 188) = 0;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_QWORD *)(v1 + 232) = 0LL;
  *(_QWORD *)(v1 + 240) = 0LL;
  return (CD3DTexture *)v1;
}
