/*
 * XREFs of ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180190A44
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180190D80 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?GetTextureFormat@CDxHandleYUVBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x180190E60 (-GetTextureFormat@CDxHandleYUVBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801911C4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801914C4 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180035208 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009F020 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800A6580 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDeviceLevel1 *v1; // rbp
  CMILPoolResource *v2; // rsi
  unsigned int v3; // ebx
  int v5; // eax
  int D3DDevice; // eax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  CMILPoolResource *v11; // [rsp+40h] [rbp-58h] BYREF
  struct CD3DDeviceLevel1 *v12; // [rsp+48h] [rbp-50h] BYREF
  struct D3D11_TEXTURE2D_DESC v13; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v12 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)this + 53) )
    return v3;
  if ( *((_DWORD *)this + 68) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1C8u);
    goto LABEL_13;
  }
  v5 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(
         (__int64)&g_D3DDeviceManager,
         *((_QWORD *)this + 33),
         *((_DWORD *)this + 108));
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1B3u);
    return v3;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (const struct _GUID *)this + 2,
                *(struct _LUID *)((char *)this + 264),
                &v12);
  v3 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v1 = v12;
    v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v13, v7, (__int64 **)v12, *((void **)this + 32), 1, 0, &v11);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1BFu);
      v2 = v11;
    }
    else
    {
      v2 = v11;
      v9 = CD3DResource::AddResourceNotifier(
             (CMILPoolResource *)((char *)v11 + 24),
             (CDxHandleYUVBitmapRealization *)((char *)this + 24));
      v3 = v9;
      if ( v9 >= 0 )
      {
        *((_QWORD *)this + 53) = v2;
        goto LABEL_15;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1C1u);
    }
LABEL_13:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x1B7u);
  v1 = v12;
LABEL_15:
  if ( v1 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v1 + 408));
  return v3;
}
