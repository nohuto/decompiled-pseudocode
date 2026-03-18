/*
 * XREFs of ?EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x18017FDEC
 * Callers:
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18007B2D0 (-GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18017FFF0 (-GetHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800806B8 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::EnsureHDRIntermediateTargetBitmap(CHwFullScreenRenderTarget *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rsi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  int RenderTargetBitmap; // eax
  __int64 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  const char *v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  _DWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 360);
  if ( !*((_QWORD *)this + 45) )
  {
    v4 = *(_QWORD *)this;
    v13[0] = 10;
    v5 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(v4 + 32))(this);
    v14 = 0LL;
    v13[1] = v5;
    v11 = "HDR intermediate target bitmap";
    v6 = *(_QWORD *)this;
    v13[2] = 2;
    v12 = 30;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(v6 + 168))(this);
    LODWORD(v9) = *((_DWORD *)this + 29);
    RenderTargetBitmap = CD3DDeviceLevel1::CreateRenderTargetBitmap(
                           *((_QWORD *)this + 23),
                           (__int64)&v11,
                           *((unsigned int *)this + 56),
                           *((unsigned int *)this + 57),
                           v9,
                           (__int64)v13,
                           v10,
                           v2);
    v1 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x349u);
  }
  return v1;
}
