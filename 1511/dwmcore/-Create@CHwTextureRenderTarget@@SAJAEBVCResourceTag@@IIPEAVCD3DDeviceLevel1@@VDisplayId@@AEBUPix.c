/*
 * XREFs of ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B1164
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x180071430 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180022838 (-CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18002C9C0 (-Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18002CCF8 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Create(
        const struct CResourceTag *a1,
        unsigned int a2,
        unsigned int a3,
        CD3DDeviceLevel1 *a4,
        __int64 a5,
        struct PixelFormatInfo *a6,
        bool a7,
        CHwTextureRenderTarget **a8)
{
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdi
  unsigned int v16; // [rsp+20h] [rbp-38h]

  v11 = *(_DWORD *)a6;
  *a8 = 0LL;
  v12 = CD3DDeviceLevel1::CheckRenderTargetFormat(a4, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    v16 = 99;
  }
  else
  {
    if ( (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           248LL) )
    {
      v14 = CHwTextureRenderTarget::CHwTextureRenderTarget();
    }
    else
    {
      v14 = 0LL;
    }
    *a8 = (CHwTextureRenderTarget *)v14;
    if ( !v14 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Bu);
      goto LABEL_12;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v12 = CHwTextureRenderTarget::Init(*a8, a1, a2, a3, a6, a7);
    v13 = v12;
    if ( v12 >= 0 )
      return v13;
    v16 = 113;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v16);
LABEL_12:
  if ( *a8 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)*a8 + 16LL))(*a8);
    *a8 = 0LL;
  }
  return v13;
}
