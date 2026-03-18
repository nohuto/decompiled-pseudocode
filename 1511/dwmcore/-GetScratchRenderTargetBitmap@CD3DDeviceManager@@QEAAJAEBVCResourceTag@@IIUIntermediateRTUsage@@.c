/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011340
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N6PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011040 (-GetScratchRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSiz.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18010A258 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x1800718E4 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetScratchRenderTargetBitmap(
        CD3DDeviceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        struct _GUID *a9,
        struct _LUID a10,
        int a11,
        char a12,
        char a13,
        _QWORD *a14)
{
  _QWORD *v15; // r15
  __int64 v17; // r12
  int v18; // r9d
  int v21; // eax
  unsigned int v22; // ebx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v24; // rdi
  int ScratchRenderTargetBitmap; // eax
  char v27; // [rsp+30h] [rbp-30h]
  DWORD LowPart; // [rsp+38h] [rbp-28h]
  struct CD3DDeviceLevel1 *v29; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+58h] BYREF

  v31 = a4;
  v30 = a3;
  v15 = a14;
  v17 = a7;
  v18 = a5;
  v29 = 0LL;
  *a14 = 0LL;
  LowPart = a10.LowPart;
  v21 = CD3DDeviceManager::ValidateRenderTargetBitmapParams((_DWORD)this, (unsigned int)&v30, (unsigned int)&v31, v18);
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v21, 0x812u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a9, a10, &v29);
    v24 = v29;
    v22 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, D3DDevice, 0x814u);
    }
    else
    {
      LOBYTE(LowPart) = a13;
      v27 = a12;
      ScratchRenderTargetBitmap = CD3DDeviceLevel1::GetScratchRenderTargetBitmap(
                                    v29,
                                    a2,
                                    a3,
                                    a4,
                                    a11,
                                    v17,
                                    v27,
                                    LowPart,
                                    v15);
      v22 = ScratchRenderTargetBitmap;
      if ( ScratchRenderTargetBitmap < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, ScratchRenderTargetBitmap, 0x81Du);
    }
    if ( v24 )
      CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v24 + 384));
  }
  return v22;
}
