/*
 * XREFs of ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18013AEC0
 * Callers:
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180132B30 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180083198 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18013B0CC (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CreateFromTexture(
        __int64 a1,
        int a2,
        __int64 a3,
        struct ID3D11Texture2D *a4,
        CHwTextureRenderTarget **a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // edi
  int v12; // eax
  CHwTextureRenderTarget *v13; // rax

  *a5 = 0LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         248LL);
  if ( v8 )
    v10 = CHwTextureRenderTarget::CHwTextureRenderTarget(v8, a1, v9, a2);
  else
    v10 = 0LL;
  *a5 = (CHwTextureRenderTarget *)v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB7u);
LABEL_10:
    if ( *a5 )
    {
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)*a5 + 16LL))(*a5);
      *a5 = 0LL;
    }
    return (unsigned int)v11;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v12 = CHwTextureRenderTarget::Init(*a5, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v13 = *a5;
    *(_OWORD *)a3 = *(_OWORD *)((char *)*a5 + 200);
    *(_QWORD *)(a3 + 16) = *((_QWORD *)v13 + 27);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xBAu);
  }
  if ( v11 < 0 )
    goto LABEL_10;
  return (unsigned int)v11;
}
