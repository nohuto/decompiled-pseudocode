/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70
 * Callers:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013E6C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180033320 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18011E730 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180151D8C (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180161544 (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x18019161C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013444 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180014238 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800806B8 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        struct PixelFormatInfo *a7,
        char a8,
        struct _GUID *a9,
        struct _LUID a10,
        unsigned int a11,
        char a12,
        char a13,
        char a14,
        void **a15)
{
  void **v16; // r15
  struct PixelFormatInfo *v18; // r12
  char v19; // r9
  __int64 v21; // rax
  struct CD3DDeviceLevel1 *v22; // rdi
  int v23; // eax
  unsigned int v24; // ebx
  int D3DDevice; // eax
  int v26; // eax
  int RenderTargetBitmap; // eax
  __int64 v29; // [rsp+20h] [rbp-30h]
  int v30; // [rsp+30h] [rbp-20h]
  unsigned int v31; // [rsp+40h] [rbp-10h]
  struct CD3DDeviceLevel1 *v32; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+58h] BYREF

  v34 = a4;
  v33 = a3;
  v16 = a15;
  v18 = a7;
  v19 = a5;
  v31 = a11;
  v21 = (__int64)a10;
  v22 = 0LL;
  *a15 = 0LL;
  v32 = 0LL;
  a15 = (void **)(a1 - 8);
  v23 = CD3DDeviceManager::ValidateRenderTargetBitmapParams(a1 - 8, &v33, &v34, v19, v29, (__int64)v18, a8, v21, v31);
  v24 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v23, 0x706u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)a15, a9, a10, &v32);
    v24 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, D3DDevice, 0x708u);
      v22 = v32;
    }
    else
    {
      v22 = v32;
      if ( a13 )
      {
        RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                               (struct CD3DDeviceLevel1 *)((char *)v32 + 472),
                               a2,
                               a3,
                               a4,
                               a11,
                               v18,
                               a12,
                               a14,
                               0,
                               v16);
        v24 = RenderTargetBitmap;
        if ( RenderTargetBitmap < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, RenderTargetBitmap, 0x713u);
      }
      else
      {
        LOBYTE(v30) = a12;
        v26 = CD3DDeviceLevel1::CreateRenderTargetBitmap(v32, a2, a3, a4, a11, v18, v30, v16);
        v24 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v26, 0x71Du);
      }
    }
  }
  if ( v22 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v22 + 408));
  return v24;
}
