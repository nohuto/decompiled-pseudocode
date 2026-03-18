/*
 * XREFs of ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x1801437F4
 * Callers:
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801431AC (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18001545C (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateSysMemSurface@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIW4DXGI_FORMAT@@PEAXPEAPEAVCD3DSurface@@@Z @ 0x180134238 (-CreateSysMemSurface@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIW4DXGI_FORMAT@@PEAXPEAPEAVCD3DSu.c)
 *     ?IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ @ 0x180143304 (-IsSysMemSurfaceValid@CHwVidMemTextureManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CHwVidMemTextureManager::ReCreateAndLockSysMemSurface(
        CHwVidMemTextureManager *this,
        struct LOCKED_RECT *a2)
{
  CMILPoolResource *v4; // rcx
  int SysMemSurface; // eax
  unsigned int v6; // edi
  LONG v7; // eax
  CD3DSurface *v8; // rcx
  int v9; // eax
  void *v11; // [rsp+28h] [rbp-30h]
  struct tagRECT v12; // [rsp+40h] [rbp-18h] BYREF

  if ( CHwVidMemTextureManager::IsSysMemSurfaceValid(this) )
    goto LABEL_6;
  v4 = (CMILPoolResource *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CMILPoolResource::Release(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  SysMemSurface = CD3DDeviceLevel1::CreateSysMemSurface(
                    *(CD3DDeviceLevel1 ***)this,
                    (CHwVidMemTextureManager *)((char *)this + 24),
                    *((_DWORD *)this + 10),
                    *((_DWORD *)this + 11),
                    (enum DXGI_FORMAT)*((_DWORD *)this + 14),
                    v11,
                    (struct CD3DSurface **)this + 1);
  v6 = SysMemSurface;
  if ( SysMemSurface >= 0 )
  {
LABEL_6:
    v7 = *((_DWORD *)this + 10);
    v8 = (CD3DSurface *)*((_QWORD *)this + 1);
    v12.left = 0;
    v12.top = 0;
    v12.right = v7;
    v12.bottom = *((_DWORD *)this + 11);
    v9 = CD3DSurface::LockRect(v8, a2, &v12, 4u);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE3u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SysMemSurface, 0xD3u);
  }
  return v6;
}
