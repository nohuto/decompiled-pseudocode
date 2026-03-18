/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013FD4
 * Callers:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180120938 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z @ 0x180123628 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z.c)
 * Callees:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013444 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180014238 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetScratchRenderTargetBitmap(
        CD3DDeviceManager *this,
        __int64 a2,
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
        bool a13,
        void **a14)
{
  void **v14; // r12
  struct PixelFormatInfo *v16; // r13
  int v18; // r9d
  struct CD3DDeviceLevel1 *v19; // rdi
  int v21; // eax
  unsigned int v22; // ebx
  int D3DDevice; // eax
  int RenderTargetBitmap; // eax
  struct CD3DDeviceLevel1 *v26; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+58h] BYREF

  v29 = a4;
  v28 = a3;
  v14 = a14;
  v16 = a7;
  v18 = a5;
  v19 = 0LL;
  *a14 = 0LL;
  v26 = 0LL;
  v21 = CD3DDeviceManager::ValidateRenderTargetBitmapParams((_DWORD)this, (unsigned int)&v28, (unsigned int)&v29, v18);
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v21, 0x78Cu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a9, a10, &v26);
    v22 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, D3DDevice, 0x78Eu);
      v19 = v26;
    }
    else
    {
      v19 = v26;
      RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                             (struct CD3DDeviceLevel1 *)((char *)v26 + 472),
                             a2,
                             a3,
                             a4,
                             a11,
                             v16,
                             a12,
                             a13,
                             1,
                             v14);
      v22 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, RenderTargetBitmap, 0x797u);
    }
  }
  if ( v19 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v19 + 408));
  return v22;
}
