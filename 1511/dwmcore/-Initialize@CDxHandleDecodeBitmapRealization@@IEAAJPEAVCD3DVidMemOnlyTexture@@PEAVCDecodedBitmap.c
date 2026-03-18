/*
 * XREFs of ?Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap@@@Z @ 0x18015FC14
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV1@PEAPEAVCBitmapRealization@@@Z @ 0x18015E5C4 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@UEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18015E700 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@UEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180027DB0 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B2DC (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x18015F6E0 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 *     ?Create@CDecodedBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x180160338 (-Create@CDecodedBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleDecodeBitmapRealization::Initialize(
        CDxHandleDecodeBitmapRealization *this,
        struct ID3D11Texture2D **a2,
        struct CDecodedBitmap *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v10; // r14
  int v11; // eax
  CMILPoolResource *v12; // rbp
  int v13; // eax
  CMILPoolResource *v15; // [rsp+58h] [rbp+10h] BYREF
  struct CD3DDeviceLevel1 *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  if ( !a2 )
  {
    v6 = CDxHandleDecodeBitmapRealization::EnsureVidMemOnlyTexture(this);
    v7 = v6;
    if ( v6 >= 0 )
    {
      if ( a3 )
      {
        *((_QWORD *)this + 59) = a3;
        (**(void (__fastcall ***)(struct CDecodedBitmap *))a3)(a3);
      }
      else
      {
        v8 = CDecodedBitmap::Create(
               (const struct _GUID *)this + 2,
               *(struct _LUID *)((char *)this + 312),
               (struct CDecodedBitmap **)this + 59);
        v7 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x21u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1Bu);
    }
    return v7;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (const struct _GUID *)this + 2,
                *(struct _LUID *)((char *)this + 312),
                &v16);
  v10 = v16;
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x31u);
    goto LABEL_19;
  }
  v11 = CD3DVidMemOnlyTexture::CreateFromTexture(a2[16], *((_DWORD *)this + 81), 0, v16, &v15);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x37u);
    v12 = v15;
    goto LABEL_17;
  }
  v12 = v15;
  v13 = CD3DResource::AddResourceNotifier(
          (CMILPoolResource *)((char *)v15 + 24),
          (CDxHandleDecodeBitmapRealization *)((char *)this + 24));
  v7 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x39u);
    goto LABEL_17;
  }
  *((_QWORD *)this + 57) = v12;
  v12 = 0LL;
  *((_QWORD *)this + 59) = a3;
  if ( a3 )
  {
    (**(void (__fastcall ***)(struct CDecodedBitmap *))a3)(a3);
LABEL_17:
    if ( v12 )
      CMILPoolResource::Release(v12);
  }
LABEL_19:
  if ( v10 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 384));
  return v7;
}
