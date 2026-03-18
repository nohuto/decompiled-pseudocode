/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18013289C
 * Callers:
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x180132090 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x18019161C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18001EC44 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180132B34 (-InternalAddRef@-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCScrollPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollPositionAnimation@@@Z @ 0x180149BDC (--4-$ComPtr@VCScrollPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollPositionAnimation@.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(
        CRenderTargetBitmap *this,
        __int64 (__fastcall ***a2)(struct IRenderTargetBitmap *, GUID *, __int64 *))
{
  __int64 (__fastcall **v2)(struct IRenderTargetBitmap *, GUID *, __int64 *); // rax
  int v5; // eax
  int v6; // edi
  char *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  struct IRenderTargetBitmap *v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF

  v2 = *a2;
  v13 = 0LL;
  v5 = (*v2)((struct IRenderTargetBitmap *)a2, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x36u);
  }
  else
  {
    if ( this )
      v7 = (char *)this + 24;
    else
      v7 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 24LL))(v13, v7);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x37u);
    }
    else
    {
      v12 = (struct IRenderTargetBitmap *)a2;
      Microsoft::WRL::ComPtr<ID3D11PixelShader>::InternalAddRef(&v12);
      v9 = *((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = a2;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      Microsoft::WRL::ComPtr<CScrollPositionAnimation>::operator=((char *)this + 136, a2);
      if ( !*((_BYTE *)this + 208) )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v12);
        v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetBitmap **))this + 17))(
                *((_QWORD *)this + 17),
                &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                &v12);
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x40u);
        else
          (*(void (__fastcall **)(char *, struct IRenderTargetBitmap *))(*((_QWORD *)this + 2) + 24LL))(
            (char *)this + 16,
            v12);
        Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v12);
      }
    }
  }
  if ( v6 < 0 )
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v6;
}
