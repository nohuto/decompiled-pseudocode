/*
 * XREFs of ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180148594
 * Callers:
 *     ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x1801480F0 (-CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@.c)
 *     ?CreateD2DPrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801481C0 (-CreateD2DPrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 *     ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x180148270 (-CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPE.c)
 *     ?CreateMeshFromRects@CSwRenderTargetGetBounds@@UEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x180148390 (-CreateMeshFromRects@CSwRenderTargetGetBounds@@UEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z.c)
 *     ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801484E0 (-GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180148640 (-IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATR.c)
 *     ?SetD2DPrimitiveColor@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorPrimitiveProperties@@AEBU_D3DCOLORVALUE@@@Z @ 0x180148720 (-SetD2DPrimitiveColor@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorPrimitiveProperti.c)
 * Callees:
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024A80 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180144A60 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
        CSwRenderTargetGetBounds *this,
        struct ID2DContext **a2)
{
  int FirstAvailableD3DDevice; // eax
  CD3DDeviceLevel1 *v4; // rdi
  unsigned int v5; // ebx
  int Interface; // eax
  CD3DDeviceLevel1 *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                              (CD3DDeviceManager *)&g_D3DDeviceManager,
                              (const struct _GUID *)(*((_QWORD *)this + 5) + 252LL),
                              &v8);
  v4 = v8;
  v5 = FirstAvailableD3DDevice;
  if ( FirstAvailableD3DDevice >= 0 )
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v8, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
    v5 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Interface, 0x19Du);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x19Au);
  }
  if ( v4 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v4 + 384));
  return v5;
}
