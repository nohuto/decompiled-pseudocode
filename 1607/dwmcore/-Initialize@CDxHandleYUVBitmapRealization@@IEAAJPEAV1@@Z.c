/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801911C4
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801907F0 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180190908 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009F020 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A66D8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180190A44 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        CDxHandleYUVBitmapRealization *this,
        struct CDxHandleYUVBitmapRealization *a2)
{
  CMILPoolResource *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // r14
  struct ID3D11Texture2D *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  CMILPoolResource *v14; // [rsp+58h] [rbp+10h] BYREF
  struct CD3DDeviceLevel1 *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    v5 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(this);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x49u);
    return v6;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (const struct _GUID *)this + 2,
                *(struct _LUID *)((char *)this + 264),
                &v15);
  v8 = v15;
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x53u);
LABEL_14:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_16;
  }
  v9 = 0LL;
  v10 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(a2);
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1E6u);
  else
    v9 = *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 53) + 128LL);
  v11 = CD3DVidMemOnlyTexture::CreateFromTexture(v9, *((_DWORD *)this + 68), 0, 1, v8, &v14);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x5Au);
    v2 = v14;
    goto LABEL_14;
  }
  v2 = v14;
  v12 = CD3DResource::AddResourceNotifier(
          (CMILPoolResource *)((char *)v14 + 24),
          (CDxHandleYUVBitmapRealization *)((char *)this + 24));
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x5Cu);
    goto LABEL_14;
  }
  *((_QWORD *)this + 53) = v2;
LABEL_16:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 408));
  return v6;
}
