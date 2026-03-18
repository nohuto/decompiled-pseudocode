/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180132A1C
 * Callers:
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x1800809D4 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180132B34 (-InternalAddRef@-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IRenderTargetDisplay *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r14
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct IRenderTargetDisplay *v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 120LL))(a2);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5) )
  {
    v6 = -2003304307;
    v10 = 94;
LABEL_5:
    v4 = v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v10);
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
    return v4;
  }
  if ( !CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(*(CD3DDeviceLevel1 **)(v5[2] + 128LL)) )
  {
    v6 = -2003292287;
    v10 = 99;
    goto LABEL_5;
  }
  v11 = a2;
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::InternalAddRef(&v11);
  v7 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = a2;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( *((struct IRenderTargetDisplay **)this + 18) != a2 )
  {
    (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v4;
}
