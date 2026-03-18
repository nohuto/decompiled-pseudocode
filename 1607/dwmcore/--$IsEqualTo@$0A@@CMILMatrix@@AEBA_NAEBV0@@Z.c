/*
 * XREFs of ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000C434 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800313F0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180078BD8 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180098B90 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1800A5248 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1800BBDD0 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18012E0F8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18018AB50 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsEqualTo<0>(float *a1, float *a2)
{
  return *a1 == *a2
      && a1[1] == a2[1]
      && a1[2] == a2[2]
      && a1[3] == a2[3]
      && a1[4] == a2[4]
      && a1[5] == a2[5]
      && a1[6] == a2[6]
      && a1[7] == a2[7]
      && a1[8] == a2[8]
      && a1[9] == a2[9]
      && a1[10] == a2[10]
      && a1[11] == a2[11]
      && a1[12] == a2[12]
      && a1[13] == a2[13]
      && a1[14] == a2[14]
      && a1[15] == a2[15];
}
