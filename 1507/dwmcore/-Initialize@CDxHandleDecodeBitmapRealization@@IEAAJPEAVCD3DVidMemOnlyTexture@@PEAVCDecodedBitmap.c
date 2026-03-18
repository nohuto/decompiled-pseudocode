/*
 * XREFs of ?Initialize@CDxHandleDecodeBitmapRealization@@IEAAJPEAVCD3DVidMemOnlyTexture@@PEAVCDecodedBitmap@@@Z @ 0x180152744
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV1@PEAPEAVCBitmapRealization@@@Z @ 0x18014FAF4 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@UEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18014FC30 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@UEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800144F8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x180152210 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 *     ?Create@CDecodedBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x180153498 (-Create@CDecodedBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z.c)
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
  struct CD3DDeviceLevel1 *v10; // rbp
  int v11; // eax
  struct CD3DDeviceLevel1 *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( a2 )
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(
                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                  (const struct _GUID *)this + 2,
                  *(struct _LUID *)((char *)this + 312),
                  &v13);
    v10 = v13;
    v7 = D3DDevice;
    if ( D3DDevice >= 0 )
    {
      v11 = CD3DVidMemOnlyTexture::CreateFromTexture(
              a2[16],
              *((_DWORD *)this + 81),
              0,
              v13,
              (struct CD3DVidMemOnlyTexture **)this + 57);
      v7 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)this + 59) = a3;
        if ( a3 )
          (**(void (__fastcall ***)(struct CDecodedBitmap *))a3)(a3);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x36u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x30u);
    }
    if ( v10 )
      CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 392));
  }
  else
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x20u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1Au);
    }
  }
  return v7;
}
