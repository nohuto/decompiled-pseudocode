/*
 * XREFs of ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180014238
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013FD4 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180035208 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateRenderTargetBitmapParams(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        unsigned int a9)
{
  int PixelFormatColorSpace; // eax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( a2 && *a2 > 0x1000000u || a3 && *a3 > 0x1000000u )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x63Eu);
  }
  else
  {
    PixelFormatColorSpace = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, a8, a9);
    v10 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v12 = 1604;
      goto LABEL_14;
    }
    if ( a7 )
    {
      if ( (a4 & 1) != 0 && *(_DWORD *)a6 == 24 )
      {
        *(_DWORD *)a6 = 10;
        PixelFormatColorSpace = GetPixelFormatColorSpace(DXGI_FORMAT_R16G16B16A16_FLOAT, (enum ColorSpace *)(a6 + 8));
        v10 = PixelFormatColorSpace;
        if ( PixelFormatColorSpace < 0 )
        {
          v12 = 1661;
LABEL_14:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v12);
        }
      }
    }
  }
  return v10;
}
