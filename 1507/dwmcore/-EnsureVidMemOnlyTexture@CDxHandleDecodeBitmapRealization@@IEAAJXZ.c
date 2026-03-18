/*
 * XREFs of ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x180152210
 * Callers:
 *     ?GetTextureFormat@CDxHandleDecodeBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18014FDC0 (-GetTextureFormat@CDxHandleDecodeBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801523D0 (-GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4S.c)
 *     ?GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180152550 (-GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 *     ?GetDXGIResource@CDxHandleDecodeBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801526D0 (-GetDXGIResource@CDxHandleDecodeBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 *     ?Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap@@@Z @ 0x180152744 (-Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap.c)
 * Callees:
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800142E4 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180015EB0 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180056088 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CDxHandleDecodeBitmapRealization::EnsureVidMemOnlyTexture(CDxHandleDecodeBitmapRealization *this)
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
  if ( *((_QWORD *)this + 57) )
    return v3;
  if ( *((_DWORD *)this + 81) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x12Du);
LABEL_13:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_15;
  }
  v5 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(
         (__int64)&g_D3DDeviceManager,
         *((_QWORD *)this + 39),
         *((_DWORD *)this + 116));
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x118u);
    return v3;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (const struct _GUID *)this + 2,
                *(struct _LUID *)((char *)this + 312),
                &v12);
  v3 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x11Cu);
    v1 = v12;
    goto LABEL_15;
  }
  v1 = v12;
  v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v13, v7, v12, *((void **)this + 38), 1, 0, &v11);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x124u);
    v2 = v11;
    goto LABEL_13;
  }
  v2 = v11;
  v9 = CD3DResource::AddResourceNotifier(
         (CMILPoolResource *)((char *)v11 + 24),
         (CDxHandleDecodeBitmapRealization *)((char *)this + 24));
  v3 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x126u);
    goto LABEL_13;
  }
  *((_QWORD *)this + 57) = v2;
LABEL_15:
  if ( v1 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v1 + 392));
  return v3;
}
