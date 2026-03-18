/*
 * XREFs of ??0CD3DTexture@@IEAA@XZ @ 0x18002DE14
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B2DC (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18014CF7C (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@XZ @ 0x180027CC8 (--0CD3DResource@@IEAA@XZ.c)
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
