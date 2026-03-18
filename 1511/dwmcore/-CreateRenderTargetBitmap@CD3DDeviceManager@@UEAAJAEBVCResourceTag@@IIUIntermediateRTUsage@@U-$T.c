/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x180071430
 * Callers:
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005AD88 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180107B80 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180130280 (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801384AC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z @ 0x180160594 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x1800718E4 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B1164 (-Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPix.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        struct _GUID *a9,
        struct _LUID a10,
        int a11,
        char a12,
        struct CD3DDeviceLevel1 *a13)
{
  CD3DDeviceManager *v13; // rbx
  struct CD3DDeviceLevel1 *v14; // r15
  __int64 v15; // r13
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // edi
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v22; // r14
  DWORD CurrentThreadId; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 (__fastcall ***v26)(_QWORD, GUID *, struct CD3DDeviceLevel1 *); // rsi
  int v27; // eax
  char v29; // [rsp+30h] [rbp-38h]
  int v30; // [rsp+40h] [rbp-28h]
  __int64 (__fastcall ***v31)(_QWORD, GUID *, struct CD3DDeviceLevel1 *); // [rsp+50h] [rbp-18h] BYREF
  struct CD3DDeviceLevel1 *v32; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+50h]
  unsigned int v34; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v35; // [rsp+C8h] [rbp+60h] BYREF

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v13 = (CD3DDeviceManager *)(a1 - 8);
  v14 = a13;
  v15 = a7;
  v30 = a11;
  v18 = a5;
  v32 = 0LL;
  v31 = 0LL;
  *(_QWORD *)a13 = 0LL;
  v19 = CD3DDeviceManager::ValidateRenderTargetBitmapParams((int)a1 - 8, (unsigned int)&v34, (unsigned int)&v35, v18);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v19, 0x77Cu);
    return v20;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(v13, a9, a10, &v32);
  v20 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v22 = v32;
    a13 = v32;
    ++*((_DWORD *)v32 + 126);
    CurrentThreadId = GetCurrentThreadId();
    v24 = v33;
    *((_DWORD *)v22 + 127) = CurrentThreadId;
    v29 = a12;
    v25 = CHwTextureRenderTarget::Create(v24, a3, a4, v22, a11, v15, v29, &v31, v30);
    v20 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v25, 0x78Du);
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a13);
    }
    else
    {
      v26 = v31;
      v27 = (**v31)(v31, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v14);
      v20 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v27, 0x790u);
        CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a13);
        goto LABEL_6;
      }
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a13);
      if ( !g_pMediaControl )
        goto LABEL_6;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)g_pMediaControl + 2) + 88LL));
      v22 = v32;
    }
    v26 = v31;
LABEL_6:
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct CD3DDeviceLevel1 *)))(*v26)[2])(v26);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, D3DDevice, 0x77Eu);
  v22 = v32;
LABEL_8:
  if ( v22 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v22 + 384));
  return v20;
}
