/*
 * XREFs of ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800574FC
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800558C0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 * Callees:
 *     ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1800195E4 (-CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180082E60 (-Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180083198 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Create(
        const struct CResourceTag *a1,
        unsigned int a2,
        unsigned int a3,
        CD3DDeviceLevel1 *a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        bool a7,
        CHwTextureRenderTarget **a8)
{
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int v19; // [rsp+20h] [rbp-38h]

  v12 = *(_DWORD *)a6;
  *a8 = 0LL;
  v13 = CD3DDeviceLevel1::CheckRenderTargetFormat(a4, v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    v19 = 99;
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            248LL);
    if ( v15 )
      v17 = CHwTextureRenderTarget::CHwTextureRenderTarget(v15, a4, v16, a5);
    else
      v17 = 0LL;
    *a8 = (CHwTextureRenderTarget *)v17;
    if ( !v17 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Bu);
      goto LABEL_12;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v13 = CHwTextureRenderTarget::Init(*a8, a1, a2, a3, a6, a7);
    v14 = v13;
    if ( v13 >= 0 )
      return v14;
    v19 = 113;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v19);
LABEL_12:
  if ( *a8 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)*a8 + 16LL))(*a8);
    *a8 = 0LL;
  }
  return v14;
}
