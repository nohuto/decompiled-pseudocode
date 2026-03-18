/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000575C
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N6PEAPEAVIRenderTargetBitmap@@@Z @ 0x180001FC0 (-GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSiz.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0518 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180003348 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180055D64 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetScratchRenderTargetBitmap(
        CD3DDeviceManager *this,
        const struct CResourceTag *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        struct PixelFormatInfo *a7,
        __int64 a8,
        struct _GUID *a9,
        struct _LUID a10,
        unsigned int a11,
        bool a12,
        char a13,
        void **a14)
{
  void **v15; // r15
  struct PixelFormatInfo *v17; // r12
  int v18; // r9d
  int v21; // eax
  unsigned int v22; // ebx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v24; // rdi
  int ScratchRenderTargetBitmap; // eax
  struct CD3DDeviceLevel1 *v27; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+58h] BYREF

  v29 = a4;
  v28 = a3;
  v15 = a14;
  v17 = a7;
  v18 = a5;
  v27 = 0LL;
  *a14 = 0LL;
  v21 = CD3DDeviceManager::ValidateRenderTargetBitmapParams((_DWORD)this, (unsigned int)&v28, (unsigned int)&v29, v18);
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v21, 0x806u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a9, a10, &v27);
    v24 = v27;
    v22 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, D3DDevice, 0x808u);
    }
    else
    {
      ScratchRenderTargetBitmap = CD3DDeviceLevel1::GetScratchRenderTargetBitmap(
                                    (__int64)v27,
                                    a2,
                                    a3,
                                    a4,
                                    a11,
                                    v17,
                                    a12,
                                    a13,
                                    v15);
      v22 = ScratchRenderTargetBitmap;
      if ( ScratchRenderTargetBitmap < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, ScratchRenderTargetBitmap, 0x811u);
    }
    if ( v24 )
      CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v24 + 392));
  }
  return v22;
}
