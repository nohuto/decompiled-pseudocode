/*
 * XREFs of ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18014B058
 * Callers:
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800FEAA0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18002CCF8 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18014B25C (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CreateFromTexture(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct ID3D11Texture2D *a4,
        CHwTextureRenderTarget **a5)
{
  __int64 v7; // rdi
  int v8; // edi
  int v9; // eax
  CHwTextureRenderTarget *v10; // rax

  *a5 = 0LL;
  if ( (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         248LL) )
  {
    v7 = CHwTextureRenderTarget::CHwTextureRenderTarget();
  }
  else
  {
    v7 = 0LL;
  }
  *a5 = (CHwTextureRenderTarget *)v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB7u);
LABEL_10:
    if ( *a5 )
    {
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)*a5 + 16LL))(*a5);
      *a5 = 0LL;
    }
    return (unsigned int)v8;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v9 = CHwTextureRenderTarget::Init(*a5, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4);
  v8 = v9;
  if ( v9 >= 0 )
  {
    v10 = *a5;
    *(_OWORD *)a3 = *(_OWORD *)((char *)*a5 + 200);
    *(_QWORD *)(a3 + 16) = *((_QWORD *)v10 + 27);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBAu);
  }
  if ( v8 < 0 )
    goto LABEL_10;
  return (unsigned int)v8;
}
