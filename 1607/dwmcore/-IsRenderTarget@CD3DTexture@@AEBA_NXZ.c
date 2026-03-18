/*
 * XREFs of ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x1800810F8
 * Callers:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081174 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?EnsureRenderTargetView@CD3DTexture@@AEAAJXZ @ 0x180173114 (-EnsureRenderTargetView@CD3DTexture@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x180081248 (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD3DTexture::IsRenderTarget(CD3DTexture *this)
{
  bool v1; // bl
  int DXGIResource; // eax
  int v3; // eax
  int v5; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIResource *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = 0;
  if ( (*((_BYTE *)this + 168) & 0x20) != 0 )
  {
    DXGIResource = CD3DTexture::GetDXGIResource(this, &v6);
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x275u);
    }
    else
    {
      v3 = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v6->lpVtbl->GetUsage)(v6, &v5);
      if ( v3 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x277u);
      else
        v1 = (v5 & 0x100) == 0;
    }
    if ( v6 )
      ((void (__fastcall *)(struct IDXGIResource *))v6->lpVtbl->Release)(v6);
  }
  return v1;
}
