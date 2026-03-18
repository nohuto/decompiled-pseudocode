/*
 * XREFs of ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIVDisplayId@@_N@Z @ 0x1801536C8
 * Callers:
 *     ?Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVIBitmapSource@@@Z @ 0x180153570 (-Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPAC.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800558C0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ @ 0x18015295C (-ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ.c)
 */

__int64 __fastcall CDecodedBitmap::EnsureRenderTargetBitmap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  struct CD3DDeviceLevel1 *v5; // r13
  unsigned int v6; // esi
  __int64 v7; // r14
  int RenderTargetBitmap; // eax
  struct _LUID v13; // [rsp+48h] [rbp-39h]
  int v14[2]; // [rsp+70h] [rbp-11h] BYREF
  int v15; // [rsp+78h] [rbp-9h]
  __int64 v16; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v17[8]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v18; // [rsp+90h] [rbp+Fh]

  v5 = (struct CD3DDeviceLevel1 *)(a1 + 40);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 && *(_DWORD *)(a1 + 48) == a2 && *(_DWORD *)(a1 + 52) == a3 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 200LL))(*(_QWORD *)(a1 + 40), a4);
  }
  else
  {
    v16 = 0x300000057LL;
    GetPixelFormatColorSpace(87, (enum ColorSpace *)v17);
    v18 = 0LL;
    CDecodedBitmap::ReleaseRenderTargetBitmap((CDecodedBitmap *)a1);
    *(_QWORD *)v14 = "DWM Rendertarget (VPBlt)";
    v13 = *(struct _LUID *)(a1 + 32);
    v15 = 24;
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_180195D88,
                           (__int64)v14,
                           a2,
                           a3,
                           1LL,
                           0,
                           (__int64)&v16,
                           1,
                           (struct _GUID *)(a1 + 16),
                           v13,
                           a4,
                           a5,
                           v5);
    v6 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
    {
      *(_DWORD *)(a1 + 48) = a2;
      *(_DWORD *)(a1 + 52) = a3;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x7Bu);
    }
  }
  return v6;
}
