/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800806B8
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180173B08 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x18017FDEC (-EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B42D4 (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax

  *a8 = 0LL;
  v8 = CHwTextureRenderTarget::Create(a1, a2, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( IsOOM(v8) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x576u);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, GUID *, _QWORD *))*MEMORY[0])(
            0LL,
            &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
            a8);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( IsOOM(v10) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x579u);
    }
  }
  return v9;
}
